/*
 * XREFs of DpiGetDbgInfoAdapters @ 0x1C003D130
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0036094 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01918D0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

__int64 __fastcall DpiGetDbgInfoAdapters(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r11d
  _QWORD *v4; // r10
  __int64 *v5; // r9
  int DriverVersion; // eax
  __int64 v7; // r8
  unsigned int v8; // ecx
  int v9; // r11d

  v1 = qword_1C006F9F8;
  v2 = 0;
  v4 = (_QWORD *)qword_1C006F9F8;
  if ( (_QWORD *)*v4 != v4 )
  {
    do
    {
      if ( v2 >= 7 )
        break;
      v5 = (__int64 *)v4[7];
      if ( (__int64 *)*v5 != v5 )
      {
        do
        {
          if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 && *((_DWORD *)v5 + 59) == 2 )
          {
            if ( v2 >= 7 )
              break;
            DriverVersion = DXGADAPTER::GetDriverVersion((DXGADAPTER *)v5[463]);
            *(_DWORD *)(a1 + 8 * v7) = DriverVersion;
            *(_DWORD *)(a1 + 8 * v7 + 4) = *((_DWORD *)v5 + 277);
            *(_DWORD *)(a1 + 8 * v7 + 8) = *((_DWORD *)v5 + 278);
            v8 = (*(_DWORD *)(v5[463] + 176) == 1) | *(_DWORD *)(a1 + 8 * v7 + 12) & 0xFFFFFFFE;
            *(_DWORD *)(a1 + 8 * v7 + 12) = v8;
            *(_DWORD *)(a1 + 8 * v7 + 12) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(2 * *((_BYTE *)v5 + 1136))) & 2;
            v2 = v9 + 1;
          }
          v5 = (__int64 *)*v5;
        }
        while ( *v5 != v4[7] );
        v1 = qword_1C006F9F8;
      }
      v4 = (_QWORD *)*v4;
    }
    while ( *v4 != v1 );
  }
  return 0LL;
}
