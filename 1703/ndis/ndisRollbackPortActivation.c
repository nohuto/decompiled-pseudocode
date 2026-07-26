/*
 * XREFs of ndisRollbackPortActivation @ 0x1C00404DC
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003FA74 (ndisPnPPortActivation.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

void __fastcall ndisRollbackPortActivation(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char v6; // dl
  _QWORD *i; // r8

  v6 = byte_1C009261E;
  if ( (unsigned __int8)byte_1C009261E >= 4u )
  {
    WPP_SF_qq(0x26u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, a1, a2);
    v6 = byte_1C009261E;
  }
  for ( i = a2; i; i = (_QWORD *)*i )
  {
    if ( i == a3 )
      break;
    *(_DWORD *)(i[1] + 16LL) = *(_DWORD *)(i[1] + 20LL);
    --*(_DWORD *)(a1 + 2760);
  }
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qq(0x27u, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, a1, a2);
}
