/*
 * XREFs of ?CopyPixels@CSectionBitmapRealization@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180213040
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::CopyPixels(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, void *a5)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax

  v5 = *(_QWORD *)(a1 + 40);
  v6 = -2003292412;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xFBu);
  }
  else
  {
    memset_0(a5, 0, a4);
  }
  return v6;
}
