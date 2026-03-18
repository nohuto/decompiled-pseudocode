/*
 * XREFs of ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x1C0031588
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C00312F0 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall TdrGatherPowerTriage(__int64 a1)
{
  struct DXGGLOBAL *Global; // rax
  char v2; // cl
  char v3; // dl
  _QWORD *v4; // r10
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // rax
  char v8; // al
  char v9; // cl
  char v10; // al
  __int64 v12; // [rsp+30h] [rbp+8h]

  v12 = 0LL;
  Global = DXGGLOBAL::GetGlobal(a1);
  v2 = 0;
  v3 = 0;
  v4 = (_QWORD *)((char *)Global + 448);
  v5 = (_QWORD *)*((_QWORD *)Global + 56);
  while ( 1 )
  {
    v6 = 0LL;
    if ( v5 != v4 )
      v6 = v5;
    if ( !v6 )
      break;
    v7 = v6[24];
    v5 = (_QWORD *)*v5;
    if ( v7 && *(_DWORD *)(*(_QWORD *)(v7 + 64) + 4104LL) )
    {
      if ( (v2 & 1) != 0 || (v8 = 0, v6[309]) )
        v8 = 1;
      v9 = v8 | v2 & 0xFE;
      if ( (v9 & 2) != 0 || (v10 = 0, *((_DWORD *)v6 + 1042)) )
        v10 = 2;
      v2 = v10 | v9 & 0xFD;
      LOBYTE(v12) = v2;
    }
  }
  if ( (v2 & 1) != 0 || (v2 = v12, g_TdrRecoveryInProgress) )
    v3 = 1;
  LOBYTE(v12) = v3 | v2 & 0xFE;
  return v12;
}
