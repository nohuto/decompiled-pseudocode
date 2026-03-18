/*
 * XREFs of ?AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z @ 0x18021EF94
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18021F04C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBspNode::AddPolygon(CBspNode *this, struct CPolygon *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ebx
  int v5; // eax
  struct CPolygon *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 14);
  v3 = v2 + 1;
  v4 = v2 + 1 < v2 ? 0x80070216 : 0;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( v3 > *((_DWORD *)this + 13) )
  {
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8u, 1, &v7);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v2) = v7;
    *((_DWORD *)this + 14) = v3;
  }
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x69u);
  else
    (**(void (__fastcall ***)(struct CPolygon *))v7)(v7);
  return (unsigned int)v4;
}
