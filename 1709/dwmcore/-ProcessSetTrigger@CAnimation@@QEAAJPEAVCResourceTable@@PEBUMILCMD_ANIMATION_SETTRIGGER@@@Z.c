/*
 * XREFs of ?ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z @ 0x180156218
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessSetTrigger(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETTRIGGER *a3)
{
  __int64 Resource; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  signed int v9; // ebx
  signed int v10; // eax
  __int64 v11; // rax
  CAnimation *v13; // [rsp+40h] [rbp+8h] BYREF

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 4u);
  *((_QWORD *)this + 18) = Resource;
  v5 = Resource;
  if ( Resource )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
  v6 = *(unsigned int *)(v5 + 80);
  v13 = this;
  v7 = (unsigned int)this;
  v8 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v7 = v6 + 1;
  v9 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v8 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xB5u);
  }
  else if ( v7 > *(_DWORD *)(v5 + 76) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(v5 + 56, 8u, 1, &v13);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8 * v6) = v13;
    *(_DWORD *)(v5 + 80) = v7;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xDFu);
  }
  else
  {
    v11 = *(_QWORD *)(v5 + 88);
    if ( v11 )
    {
      *((_QWORD *)this + 17) = v11;
      *((_QWORD *)this + 26) = v11;
    }
  }
  return (unsigned int)v9;
}
