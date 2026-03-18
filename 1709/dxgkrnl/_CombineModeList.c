/*
 * XREFs of _CombineModeList @ 0x1C01A33A8
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6098 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _IsDisplayModeMatch @ 0x1C01A3728 (_IsDisplayModeMatch.c)
 *     _UpgradeDispModeFlags @ 0x1C01A3778 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned __int64 a1, const void **a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int *v5; // rax
  unsigned int v6; // r9d
  unsigned int v7; // r14d
  unsigned int *v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ebp
  unsigned int v17; // r14d
  __int64 v18; // rbx
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // edi
  __int64 v23; // r12
  unsigned int *v24; // rbx
  unsigned int v25; // r15d
  __int64 v26; // rbp
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  SIZE_T v31; // rax
  PVOID v32; // rbx
  __int64 v33; // rax
  unsigned int v35; // r9d
  _DWORD *v36; // r8
  __int64 v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-48h]
  unsigned int v41; // [rsp+24h] [rbp-44h]
  unsigned int v42; // [rsp+28h] [rbp-40h]

  v41 = -1;
  v5 = a4;
  v6 = -1;
  v7 = a3;
  v40 = -1;
  v9 = (unsigned int *)a1;
  if ( a3 )
  {
    v10 = *(unsigned int *)a1;
    v42 = *(_DWORD *)a1;
    if ( a5 )
    {
      v11 = 0;
      v12 = 0;
      if ( v7 )
      {
        a1 = (unsigned __int64)v5;
        v13 = v7;
        do
        {
          v14 = *(_DWORD *)a1;
          a1 += 44LL;
          if ( v14 > v11 )
            v11 = v14;
          if ( *(_DWORD *)(a1 - 40) > v12 )
            v12 = *(_DWORD *)(a1 - 40);
          --v13;
        }
        while ( v13 );
      }
      v15 = 0;
      v16 = 0;
      if ( (_DWORD)v10 )
      {
        v17 = -1;
        do
        {
          v18 = (__int64)*a2 + 44 * v15;
          if ( v17 == -1 || (v19 = *(_DWORD *)v18, *(_DWORD *)v18 > v17) )
          {
            v19 = *(_DWORD *)v18;
            v17 = *(_DWORD *)v18;
          }
          if ( v6 == -1 || (a1 = *(unsigned int *)(v18 + 4), (unsigned int)a1 > v6) )
          {
            a1 = *(unsigned int *)(v18 + 4);
            v40 = *(_DWORD *)(v18 + 4);
          }
          if ( (*(_DWORD *)(v18 + 40) & 0x40) != 0 || v19 <= v11 && (unsigned int)a1 <= v12 )
          {
            if ( v15 != v16 )
            {
              if ( v15 <= v16 )
              {
                v20 = WdLogNewEntry5_WdAssertion(a1);
                *(_QWORD *)(v20 + 24) = 2328LL;
                WdLogEvent5_WdAssertion(v20);
              }
              a1 = (unsigned __int64)*a2;
              v21 = 44LL * v16;
              *(_OWORD *)(v21 + a1) = *(_OWORD *)v18;
              *(_OWORD *)(v21 + a1 + 16) = *(_OWORD *)(v18 + 16);
              *(_QWORD *)(v21 + a1 + 32) = *(_QWORD *)(v18 + 32);
              *(_DWORD *)(v21 + a1 + 40) = *(_DWORD *)(v18 + 40);
            }
            ++v16;
          }
          v6 = v40;
          ++v15;
        }
        while ( v15 < *v9 );
        v41 = v17;
        v7 = a3;
      }
      v5 = a4;
      *v9 = v16;
    }
    v22 = *v9;
    if ( v7 )
    {
      v23 = v7;
      v24 = v5;
      do
      {
        LOBYTE(v10) = 0;
        if ( (v24[10] & 0x40) == 0 && (*v24 > v41 || v24[1] > v6) )
          goto LABEL_42;
        v25 = 0;
        if ( !*v9 )
          goto LABEL_43;
        do
        {
          v26 = (__int64)*a2 + 44 * v25;
          if ( (unsigned __int8)IsDisplayModeMatch(v24, v26, v10) )
          {
            if ( v24[4] != *(_DWORD *)(v26 + 16) || v24[5] != *(_DWORD *)(v26 + 20) )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1);
              v28[3] = *v24;
              v28[4] = v24[1];
              v28[5] = (int)v24[2];
              v28[6] = v24[3];
              WdLogEvent5_WdDmmEvent(v28);
              v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
              v30[3] = v24[4];
              v30[4] = v24[5];
              v30[5] = *(unsigned int *)(v26 + 16);
              v30[6] = *(unsigned int *)(v26 + 20);
              WdLogEvent5_WdDmmEvent(v30);
            }
            UpgradeDispModeFlags(v26, v24, v10, v27);
            LOBYTE(v10) = 1;
          }
          ++v25;
        }
        while ( v25 < *v9 );
        if ( (_BYTE)v10 )
        {
LABEL_42:
          v24[10] = (unsigned __int8)v24[10];
        }
        else
        {
LABEL_43:
          a1 = (unsigned __int8)v24[10];
          LODWORD(a1) = a1 | 0x100;
          v24[10] = a1;
          ++v22;
        }
        v6 = v40;
        v24 += 11;
        --v23;
      }
      while ( v23 );
      v7 = a3;
    }
    if ( v22 > v42 )
    {
      v31 = 44LL * v22;
      if ( !is_mul_ok(v22, 0x2CuLL) )
        v31 = -1LL;
      v32 = operator new(v31, 0x4B677844u, PagedPool);
      if ( !v32 )
      {
        v33 = WdLogNewEntry5_WdLowResource(a1);
        *(_QWORD *)(v33 + 24) = v22;
        WdLogEvent5_WdLowResource(v33);
        return 3221225495LL;
      }
      if ( *a2 )
      {
        memmove(v32, *a2, 44LL * *v9);
        a1 = (unsigned __int64)*a2;
        if ( *a2 )
          ExFreePoolWithTag((PVOID)a1, 0);
      }
      *a2 = v32;
    }
    v35 = *v9;
    if ( *v9 < v22 )
    {
      if ( v7 )
      {
        v36 = a4 + 10;
        v37 = v7;
        do
        {
          if ( *v36 >= 0x100u )
          {
            *v36 = (unsigned __int8)*v36;
            a1 = (unsigned __int64)*a2;
            v38 = 44LL * v35++;
            *(_OWORD *)(v38 + a1) = *(_OWORD *)(v36 - 10);
            *(_OWORD *)(v38 + a1 + 16) = *(_OWORD *)(v36 - 6);
            *(_QWORD *)(v38 + a1 + 32) = *((_QWORD *)v36 - 1);
            *(_DWORD *)(v38 + a1 + 40) = *v36;
          }
          v36 += 11;
          --v37;
        }
        while ( v37 );
      }
      if ( v22 != v35 )
      {
        v39 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v39 + 24) = 2467LL;
        WdLogEvent5_WdAssertion(v39);
      }
    }
    *v9 = v22;
  }
  return 0LL;
}
