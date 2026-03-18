/*
 * XREFs of ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x1800205D0
 * Callers:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18001F788 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::QueuePostPresentResponse(
        CLegacySurfaceManager *this,
        struct CResponseItem *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ebx
  int v6; // eax
  struct CResponseItem *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 42);
  v3 = v2 + 1;
  v4 = v2 + 1 < v2 ? 0x80070216 : 0;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( v3 > *((_DWORD *)this + 41) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 144, 8LL, 1LL, &v7);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v2) = v7;
    *((_DWORD *)this + 42) = v3;
  }
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x191u);
  else
    (**(void (__fastcall ***)(struct CResponseItem *))v7)(v7);
  return (unsigned int)v4;
}
