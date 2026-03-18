/*
 * XREFs of ?ProcessSetVector2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY@@@Z @ 0x1800A57F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBagBase::ProcessSetVector2Property(
        CPropertyBagBase *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY *a3)
{
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(CPropertyBagBase *, __int64, __int64, __int64, struct CResourceTable **); // rax
  signed int v9; // eax
  unsigned int v10; // ebx
  struct CResourceTable *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = (__m128)*((unsigned int *)a3 + 5);
  v4 = (__m128)*((unsigned int *)a3 + 4);
  v6 = *((unsigned int *)a3 + 2);
  v7 = *((unsigned int *)a3 + 3);
  v8 = *(__int64 (__fastcall **)(CPropertyBagBase *, __int64, __int64, __int64, struct CResourceTable **))(*(_QWORD *)this + 160LL);
  v12 = (struct CResourceTable *)_mm_unpacklo_ps(v4, v3).m128_u64[0];
  v9 = v8(this, v7, v6, 35LL, &v12);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x84u);
  return v10;
}
