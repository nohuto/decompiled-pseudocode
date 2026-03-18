/*
 * XREFs of ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C000BBD0
 * Callers:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000BB4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0045B3C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetSizeFromGammaRampType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      return 0LL;
    case 2:
      return 1536LL;
    case 3:
      return 12324LL;
  }
  if ( (_DWORD)a1 != 4 )
  {
    v3 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v3 + 24) = v1;
    WdLogEvent5_WdError(v3);
    return 0LL;
  }
  return 49204LL;
}
