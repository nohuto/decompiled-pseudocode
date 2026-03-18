/*
 * XREFs of _CombineModeList @ 0x1C0193C64
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01916F8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     _IsDisplayModeMatch @ 0x1C0194020 (_IsDisplayModeMatch.c)
 *     _UpgradeDispModeFlags @ 0x1C01941C4 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned int *a1, const void **a2, __int64 a3, unsigned int *a4, char a5)
{
  unsigned int v6; // r15d
  __int64 v7; // rcx
  unsigned int *v8; // rax
  unsigned int v9; // r9d
  const void **v10; // r12
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  unsigned int *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  char *v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // r9d
  __int64 v24; // rax
  char *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned int *v28; // rdi
  char v29; // r8
  unsigned int v30; // ebp
  unsigned int *v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  unsigned int v37; // ecx
  SIZE_T v38; // rax
  PVOID v39; // rdi
  __int64 v40; // rax
  unsigned int v42; // r9d
  _DWORD *v43; // r8
  __int64 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // [rsp+20h] [rbp-58h]
  unsigned int v48; // [rsp+24h] [rbp-54h]
  unsigned int v49; // [rsp+28h] [rbp-50h]
  __int64 v50; // [rsp+30h] [rbp-48h]
  unsigned int v52; // [rsp+90h] [rbp+18h]

  v52 = a3;
  v6 = a3;
  v7 = 0xFFFFFFFFLL;
  v8 = a4;
  v9 = -1;
  v48 = -1;
  v47 = -1;
  v10 = a2;
  if ( (_DWORD)a3 )
  {
    v11 = *a1;
    v49 = *a1;
    if ( a5 )
    {
      v12 = 0;
      v13 = 0;
      v14 = v8;
      a3 = (unsigned int)a3;
      do
      {
        v15 = v12;
        v16 = v13;
        v12 = *v14;
        v13 = v14[1];
        v14 += 11;
        if ( v12 <= v15 )
          v12 = v15;
        if ( v13 <= v16 )
          v13 = v16;
        --a3;
      }
      while ( a3 );
      v17 = -1;
      v18 = 0;
      v11 = 0;
      if ( *a1 )
      {
        while ( 1 )
        {
          v19 = (char *)*a2;
          v20 = 44LL * v18;
          if ( v17 == -1 || (v21 = *(_DWORD *)&v19[v20], v21 > v17) )
          {
            v21 = *(_DWORD *)&v19[v20];
            v48 = v21;
          }
          if ( v9 == -1 )
          {
            v23 = *(_DWORD *)&v19[v20 + 4];
          }
          else
          {
            v22 = *(unsigned int *)&v19[v20 + 4];
            if ( (unsigned int)v22 <= v9 )
              goto LABEL_18;
            v23 = *(_DWORD *)&v19[v20 + 4];
          }
          v47 = v23;
          v22 = v23;
LABEL_18:
          if ( (*(_DWORD *)&v19[v20 + 40] & 0x40) != 0 || v21 <= v12 && (unsigned int)v22 <= v13 )
          {
            if ( v18 != v11 )
            {
              if ( v18 <= v11 )
              {
                v24 = WdLogNewEntry5_WdAssertion(v22);
                *(_QWORD *)(v24 + 24) = 2307LL;
                WdLogEvent5_WdAssertion(v24);
              }
              v25 = (char *)*a2;
              v26 = 44LL * v11;
              *(_OWORD *)&v25[v26] = *(_OWORD *)&v19[v20];
              *(_OWORD *)&v25[v26 + 16] = *(_OWORD *)&v19[v20 + 16];
              *(_QWORD *)&v25[v26 + 32] = *(_QWORD *)&v19[v20 + 32];
              *(_DWORD *)&v25[v26 + 40] = *(_DWORD *)&v19[v20 + 40];
            }
            ++v11;
          }
          v9 = v47;
          ++v18;
          v17 = v48;
          if ( v18 >= *a1 )
          {
            v6 = v52;
            break;
          }
        }
      }
      v10 = a2;
      v7 = v48;
      v8 = a4;
      *a1 = v11;
    }
    if ( v6 )
    {
      v27 = v6;
      v28 = v8 + 4;
      v50 = v6;
      do
      {
        v29 = 0;
        if ( (v28[6] & 0x40) != 0 || *(v28 - 4) <= (unsigned int)v7 && *(v28 - 3) <= v9 )
        {
          v30 = 0;
          if ( *a1 )
          {
            do
            {
              v31 = v28 - 4;
              v32 = (__int64)*v10 + 44 * v30;
              if ( (unsigned __int8)IsDisplayModeMatch(v28 - 4, v32) )
              {
                if ( *v28 != *(_DWORD *)(v32 + 16) || v28[1] != *(_DWORD *)(v32 + 20) )
                {
                  v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33);
                  v34[3] = *v31;
                  v34[4] = v31[1];
                  v34[5] = (int)*(v28 - 2);
                  v34[6] = *(v28 - 1);
                  WdLogEvent5_WdDmmEvent(v34);
                  v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35);
                  v36[3] = *v28;
                  v36[4] = v28[1];
                  v36[5] = *(unsigned int *)(v32 + 16);
                  v36[6] = *(unsigned int *)(v32 + 20);
                  WdLogEvent5_WdDmmEvent(v36);
                }
                UpgradeDispModeFlags(v32, v28 - 4);
                v29 = 1;
              }
              ++v30;
            }
            while ( v30 < *a1 );
            v27 = v50;
          }
        }
        else
        {
          v29 = 1;
        }
        v9 = v47;
        v37 = (unsigned __int8)v28[6];
        if ( !v29 )
        {
          ++v11;
          v37 |= 0x100u;
        }
        v28[6] = v37;
        v28 += 11;
        v7 = v48;
        v50 = --v27;
      }
      while ( v27 );
    }
    if ( v11 > v49 )
    {
      v38 = 44LL * v11;
      if ( !is_mul_ok(v11, 0x2CuLL) )
        v38 = -1LL;
      v39 = operator new[](v38, 0x4B677844u, PagedPool);
      if ( !v39 )
      {
        v40 = WdLogNewEntry5_WdLowResource(v7);
        *(_QWORD *)(v40 + 24) = v11;
        WdLogEvent5_WdLowResource(v40);
        return 3221225495LL;
      }
      if ( *v10 )
      {
        memmove(v39, *v10, 44LL * *a1);
        operator delete[]((void *)*v10);
      }
      *v10 = v39;
    }
    v42 = *a1;
    if ( *a1 < v11 )
    {
      if ( v6 )
      {
        v43 = a4 + 10;
        v44 = v6;
        do
        {
          if ( *v43 >= 0x100u )
          {
            *v43 = (unsigned __int8)*v43;
            v7 = (__int64)*v10;
            v45 = 44LL * v42++;
            *(_OWORD *)(v45 + v7) = *(_OWORD *)(v43 - 10);
            *(_OWORD *)(v45 + v7 + 16) = *(_OWORD *)(v43 - 6);
            *(_QWORD *)(v45 + v7 + 32) = *((_QWORD *)v43 - 1);
            *(_DWORD *)(v45 + v7 + 40) = *v43;
          }
          v43 += 11;
          --v44;
        }
        while ( v44 );
      }
      if ( v11 != v42 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v46 + 24) = 2446LL;
        WdLogEvent5_WdAssertion(v46);
      }
    }
    *a1 = v11;
  }
  return 0LL;
}
