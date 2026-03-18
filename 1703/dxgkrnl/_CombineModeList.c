/*
 * XREFs of _CombineModeList @ 0x1C018EB64
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _IsDisplayModeMatch @ 0x1C018EEE0 (_IsDisplayModeMatch.c)
 *     _UpgradeDispModeFlags @ 0x1C018EF30 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  unsigned int *v5; // rax
  __int64 v6; // r9
  unsigned int v7; // r14d
  __int64 *v8; // r13
  unsigned int *v9; // rsi
  _DWORD *v10; // r8
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  unsigned int v13; // edi
  unsigned int v14; // ebp
  unsigned int v15; // r14d
  unsigned int *v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // r12
  unsigned int *v20; // rbx
  unsigned int v21; // r15d
  __int64 v22; // rbp
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  SIZE_T v30; // rax
  PVOID v31; // rbx
  __int64 v32; // rax
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rax
  unsigned int v37; // [rsp+20h] [rbp-48h]
  unsigned int v38; // [rsp+24h] [rbp-44h]
  unsigned int v39; // [rsp+28h] [rbp-40h]

  v38 = -1;
  v5 = a4;
  v6 = 0xFFFFFFFFLL;
  v7 = a3;
  v37 = -1;
  v8 = (__int64 *)a2;
  v9 = (unsigned int *)a1;
  if ( a3 )
  {
    v10 = (_DWORD *)*(unsigned int *)a1;
    v39 = *(_DWORD *)a1;
    if ( a5 )
    {
      v11 = 0;
      v12 = 0;
      if ( v7 )
      {
        a1 = (unsigned __int64)v5;
        a2 = v7;
        do
        {
          if ( *(_DWORD *)a1 > v11 )
            v11 = *(_DWORD *)a1;
          if ( *(_DWORD *)(a1 + 4) > v12 )
            v12 = *(_DWORD *)(a1 + 4);
          a1 += 44LL;
          --a2;
        }
        while ( a2 );
      }
      v13 = 0;
      v14 = 0;
      if ( (_DWORD)v10 )
      {
        v15 = -1;
        do
        {
          v16 = (unsigned int *)(*v8 + 44LL * v13);
          if ( v15 == -1 || (a2 = *v16, (unsigned int)a2 > v15) )
          {
            a2 = *v16;
            v15 = *v16;
          }
          if ( (_DWORD)v6 == -1 || (a1 = v16[1], (unsigned int)a1 > (unsigned int)v6) )
          {
            a1 = v16[1];
            v37 = v16[1];
          }
          if ( (v16[10] & 0x40) != 0 || (unsigned int)a2 <= v11 && (unsigned int)a1 <= v12 )
          {
            if ( v13 != v14 )
            {
              if ( v13 <= v14 )
              {
                v17 = WdLogNewEntry5_WdAssertion(a1, a2, v10, v6);
                *(_QWORD *)(v17 + 24) = 2347LL;
                WdLogEvent5_WdAssertion(v17);
              }
              a1 = *v8;
              a2 = 44LL * v14;
              *(_OWORD *)(a2 + a1) = *(_OWORD *)v16;
              *(_OWORD *)(a2 + a1 + 16) = *((_OWORD *)v16 + 1);
              *(_QWORD *)(a2 + a1 + 32) = *((_QWORD *)v16 + 4);
              *(_DWORD *)(a2 + a1 + 40) = v16[10];
            }
            ++v14;
          }
          v6 = v37;
          ++v13;
        }
        while ( v13 < *v9 );
        v38 = v15;
        v7 = a3;
      }
      v5 = a4;
      *v9 = v14;
    }
    v18 = *v9;
    if ( v7 )
    {
      v19 = v7;
      v20 = v5;
      do
      {
        LOBYTE(v10) = 0;
        if ( (v20[10] & 0x40) == 0 && (*v20 > v38 || v20[1] > (unsigned int)v6) )
          goto LABEL_42;
        v21 = 0;
        if ( !*v9 )
          goto LABEL_43;
        do
        {
          v22 = *v8 + 44LL * v21;
          if ( (unsigned __int8)IsDisplayModeMatch(v20, v22, v10) )
          {
            if ( v20[4] != *(_DWORD *)(v22 + 16) || v20[5] != *(_DWORD *)(v22 + 20) )
            {
              v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1, a2, v10, v23);
              v24[3] = *v20;
              v24[4] = v20[1];
              v24[5] = (int)v20[2];
              v24[6] = v20[3];
              WdLogEvent5_WdDmmEvent(v24);
              v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26, v25, v27, v28);
              v29[3] = v20[4];
              v29[4] = v20[5];
              v29[5] = *(unsigned int *)(v22 + 16);
              v29[6] = *(unsigned int *)(v22 + 20);
              WdLogEvent5_WdDmmEvent(v29);
            }
            UpgradeDispModeFlags(v22, v20, v10, v23);
            LOBYTE(v10) = 1;
          }
          ++v21;
        }
        while ( v21 < *v9 );
        if ( (_BYTE)v10 )
        {
LABEL_42:
          v20[10] = (unsigned __int8)v20[10];
        }
        else
        {
LABEL_43:
          a1 = (unsigned __int8)v20[10];
          LODWORD(a1) = a1 | 0x100;
          v20[10] = a1;
          ++v18;
        }
        LODWORD(v6) = v37;
        v20 += 11;
        --v19;
      }
      while ( v19 );
      v7 = a3;
    }
    if ( v18 > v39 )
    {
      v30 = 44LL * v18;
      if ( !is_mul_ok(v18, 0x2CuLL) )
        v30 = -1LL;
      v31 = operator new(v30, 0x4B677844u, PagedPool);
      if ( !v31 )
      {
        v32 = WdLogNewEntry5_WdLowResource(a1);
        *(_QWORD *)(v32 + 24) = v18;
        WdLogEvent5_WdLowResource(v32);
        return 3221225495LL;
      }
      a2 = *v8;
      if ( *v8 )
      {
        memmove(v31, (const void *)a2, 44LL * *v9);
        a1 = *v8;
        if ( *v8 )
          ExFreePoolWithTag((PVOID)a1, 0);
      }
      *v8 = (__int64)v31;
    }
    v34 = *v9;
    if ( (unsigned int)v34 < v18 )
    {
      if ( v7 )
      {
        v10 = a4 + 10;
        v35 = v7;
        do
        {
          if ( *v10 >= 0x100u )
          {
            *v10 = (unsigned __int8)*v10;
            a1 = *v8;
            a2 = 44LL * (unsigned int)v34;
            v34 = (unsigned int)(v34 + 1);
            *(_OWORD *)(a2 + a1) = *(_OWORD *)(v10 - 10);
            *(_OWORD *)(a2 + a1 + 16) = *(_OWORD *)(v10 - 6);
            *(_QWORD *)(a2 + a1 + 32) = *((_QWORD *)v10 - 1);
            *(_DWORD *)(a2 + a1 + 40) = *v10;
          }
          v10 += 11;
          --v35;
        }
        while ( v35 );
      }
      if ( v18 != (_DWORD)v34 )
      {
        v36 = WdLogNewEntry5_WdAssertion(a1, a2, v10, v34);
        *(_QWORD *)(v36 + 24) = 2486LL;
        WdLogEvent5_WdAssertion(v36);
      }
    }
    *v9 = v18;
  }
  return 0LL;
}
