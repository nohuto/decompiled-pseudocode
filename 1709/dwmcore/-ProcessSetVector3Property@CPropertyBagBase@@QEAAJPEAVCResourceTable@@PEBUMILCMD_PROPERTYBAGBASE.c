/*
 * XREFs of ?ProcessSetVector3Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR3PROPERTY@@@Z @ 0x1800A584C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetVector3Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETVECTOR3PROPERTY *a3)
{
  int v3; // xmm1_4
  __int64 v5; // rax
  int v6; // xmm0_4
  __int64 v7; // r8
  __int64 (__fastcall *v8)(CPropertyBagBase *, __int64, __int64, __int64, _DWORD *); // rax
  __int64 v9; // rdx
  signed int v10; // eax
  unsigned int v11; // ebx
  _DWORD v13[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_DWORD *)a3 + 5);
  v5 = *(_QWORD *)this;
  v13[0] = *((_DWORD *)a3 + 4);
  v6 = *((_DWORD *)a3 + 6);
  v7 = *((unsigned int *)a3 + 2);
  v8 = *(__int64 (__fastcall **)(CPropertyBagBase *, __int64, __int64, __int64, _DWORD *))(v5 + 160);
  v9 = *((unsigned int *)a3 + 3);
  v13[1] = v3;
  v13[2] = v6;
  v10 = v8(this, v9, v7, 52LL, v13);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x9Cu);
  return v11;
}
