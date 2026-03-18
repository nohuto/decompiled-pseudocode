/*
 * XREFs of SupportedVideoSignal @ 0x1C01E888C
 * Callers:
 *     ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01E8A30 (-_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C0002234 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 */

char __fastcall SupportedVideoSignal(_DWORD *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // r8d

  v4 = a3;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a2[9] != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( v4 == 2 )
  {
    if ( a1[3] != a2[10]
      || a1[4] != a2[11]
      || (unsigned int)a1[5] * (unsigned __int64)a2[2] < a2[1] * (unsigned __int64)(unsigned int)a1[6]
      || operator><_D3DDDI_RATIONAL>(a1 + 5, a2 + 3)
      || (unsigned int)a1[7] * (unsigned __int64)a2[6] < a2[5] * (unsigned __int64)(unsigned int)a1[8]
      || operator><_D3DDDI_RATIONAL>(a1 + 7, a2 + 7) )
    {
      return 0;
    }
  }
  else
  {
    v10 = a1[3];
    v11 = a2[10];
    if ( v10 > v11 || v10 == v11 && a1[4] > a2[11] )
      return 0;
    v12 = *(_QWORD *)(a1 + 5);
    v13 = 107;
    if ( a1[4] <= 0x258u )
      v13 = 105;
    if ( (int)(a1[5] / a1[6] - a2[1] / a2[2]) < 0 || (int)(a1[5] / a1[6] - a2[3] / a2[4]) > 0 && a1[5] / a1[6] - 61 > 0 )
      return 0;
    v14 = (int)v12 * a1[4] * v13 / 0x64u / HIDWORD(v12);
    if ( (int)(v14 - a2[5] / a2[6]) < 0 && a1[5] / a1[6] - 60 < 0 )
      return 0;
    if ( (int)(v14 - a2[7] / a2[8]) > 0 && a1[5] / a1[6] - 61 > 0 )
      return 0;
  }
  return 1;
}
