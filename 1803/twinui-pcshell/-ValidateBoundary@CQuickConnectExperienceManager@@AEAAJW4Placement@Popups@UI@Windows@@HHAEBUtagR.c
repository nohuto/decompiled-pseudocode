/*
 * XREFs of ?ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagRECT@@AEA_N@Z @ 0x18017FA0C
 * Callers:
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x18017B9FC (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CQuickConnectExperienceManager::ValidateBoundary(
        float *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        char *a6)
{
  int v6; // edx
  int v7; // edx
  float v8; // xmm1_4
  __m128i v9; // xmm0
  bool v10; // cf
  char v11; // al

  *a6 = 0;
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v10 = (float)*(int *)(a5 + 8) < (float)((float)(a1[86] + a1[84]) + (float)a3);
LABEL_6:
        if ( !v10 )
          *a6 = 1;
        return 0LL;
      }
      v8 = a1[85] - (float)a4;
      v9 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
    }
    else
    {
      v8 = a1[84] - (float)a3;
      v9 = _mm_cvtsi32_si128(*(_DWORD *)a5);
    }
    v10 = v8 < _mm_cvtepi32_ps(v9).m128_f32[0];
    goto LABEL_6;
  }
  v11 = *a6;
  if ( (float)*(int *)(a5 + 12) >= (float)((float)(a1[87] + a1[85]) + (float)a4) )
    v11 = 1;
  *a6 = v11;
  return 0LL;
}
