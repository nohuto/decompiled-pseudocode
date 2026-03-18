/*
 * XREFs of ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00BC414
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00AE424 (_BmlGetPathModalityForAdapter.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02119D4 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216824 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000628C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPN::IsFunctional(DMMVIDPN *this)
{
  char *v1; // rdi
  char *v2; // rcx
  DMMVIDPNPRESENTPATH *v3; // rbx
  char *v4; // rax

  v1 = (char *)this + 120;
  v2 = (char *)*((_QWORD *)this + 15);
  v3 = 0LL;
  if ( v2 != v1 )
    v3 = (DMMVIDPNPRESENTPATH *)(v2 - 8);
  while ( 1 )
  {
    if ( !v3 )
      return 1;
    if ( !DMMVIDPNPRESENTPATH::IsFunctional(v3) )
      break;
    v4 = (char *)*((_QWORD *)v3 + 1);
    v3 = (DMMVIDPNPRESENTPATH *)(v4 - 8);
    if ( v4 == v1 )
      v3 = 0LL;
  }
  return 0;
}
