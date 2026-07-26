/*
 * XREFs of _lambda_6f963cc78749a40f491d93071c0901d2_::operator() @ 0x1C00B4284
 * Callers:
 *     _lambda_6f963cc78749a40f491d93071c0901d2_::_lambda_invoker_cdecl_ @ 0x1C00B43F0 (_lambda_6f963cc78749a40f491d93071c0901d2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 */

void __fastcall lambda_6f963cc78749a40f491d93071c0901d2_::operator()(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  int v4; // r8d
  bool v5; // cf

  v2 = *(_QWORD *)a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 5160, 0LL);
  v4 = a2[8];
  a2[8] = v4 & 0xFFFBFFE3;
  if ( (v4 != 0) != ((v4 & 0xFFFBFFE3) != 0) || !*(_QWORD *)a2 )
  {
    if ( (unsigned __int8)byte_1C0098763 >= 5u )
      WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v4, v4 & 0xFFFBFFE3);
    v5 = (unsigned __int8)byte_1C0098763 < 4u;
    *(_BYTE *)(*(_QWORD *)a2 + 5240LL) = 1;
    if ( !v5 )
      WPP_SF_Zq(0x14u, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids, 0LL, 0LL);
  }
  *(_BYTE *)(v2 + 5240) = 1;
  Ndis::BindEngine::ApplyRules((Ndis::BindEngine *)(v2 + 5136));
  ExReleasePushLockExclusiveEx(v2 + 5160, 0LL);
  KeLeaveCriticalRegion();
}
