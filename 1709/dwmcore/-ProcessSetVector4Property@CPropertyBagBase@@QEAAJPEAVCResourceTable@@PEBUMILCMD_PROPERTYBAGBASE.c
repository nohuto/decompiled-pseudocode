/*
 * XREFs of ?ProcessSetVector4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY@@@Z @ 0x18017545C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetVector4Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY *a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rax
  __int64 v6; // r8
  __int64 (__fastcall *v7)(CPropertyBagBase *, __int64, __int64, __int64, __int128 *); // rax
  __int64 v8; // rdx
  signed int v9; // eax
  unsigned int v10; // ebx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_OWORD *)a3 + 1);
  v4 = *(_QWORD *)this;
  v6 = *((unsigned int *)a3 + 2);
  v12 = v3;
  v7 = *(__int64 (__fastcall **)(CPropertyBagBase *, __int64, __int64, __int64, __int128 *))(v4 + 160);
  v8 = *((unsigned int *)a3 + 3);
  v12 = v3;
  v9 = v7(this, v8, v6, 69LL, &v12);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xB4u);
  return v10;
}
