/*
 * XREFs of ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C00517C8
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C004FFD8 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C0050CA4 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0051240 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00513A0 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C0051428 (-IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C0051470 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C00514B8 (-IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C00526BC (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
        CEndpointResourceStateManager **this,
        __int64 a2)
{
  CEndpointResourceStateManager *v2; // rbx
  signed int v3; // esi
  unsigned int v4; // r8d
  CEndpointResourceStateManager *v5; // r13
  int v6; // r8d
  __int64 v7; // rcx
  signed int v8; // eax
  unsigned int v9; // eax
  bool v10; // cf
  char **v11; // r14
  char **v12; // rdi
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // eax
  CEndpointResourceStateManager *v18; // rdi
  _DWORD *v19; // r12
  _DWORD *v20; // r15
  char v21; // al
  CEndpointResourceStateManager *v22; // r8
  __int64 v23; // r14
  int v24; // eax
  _DWORD *v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rax
  char *v28; // r13
  unsigned int v29; // r12d
  char *v30; // r15
  __int64 v31; // rbx
  char *v32; // r13
  __int64 v33; // rcx
  _DWORD *v34; // rdx
  __int64 v35; // rax
  char *v36; // rdi
  _DWORD *v37; // r13
  _DWORD *v38; // r12
  _DWORD *v39; // rsi
  bool v40; // zf
  __int64 v41; // r14
  int v42; // eax
  _DWORD *v43; // rdx
  __int64 v44; // r12
  __int64 v45; // rax
  char *v46; // r15
  unsigned int v47; // r13d
  char *v48; // r12
  __int64 v49; // rbx
  char *v50; // r15
  __int64 v51; // rcx
  __int64 v52; // r14
  int v53; // eax
  _DWORD *v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  char *v58; // r15
  unsigned int v59; // r13d
  char *v60; // r12
  __int64 v61; // rbx
  char *v62; // r15
  __int64 v63; // rcx
  CFlipResource *v64; // rcx
  _DWORD *v65; // rdx
  __int64 v66; // rax
  _DWORD *v68; // [rsp+20h] [rbp-69h]
  _DWORD *v69; // [rsp+20h] [rbp-69h]
  _DWORD *v70; // [rsp+28h] [rbp-61h]
  CEndpointResourceStateManager *v71; // [rsp+30h] [rbp-59h]
  PVOID P; // [rsp+40h] [rbp-49h] BYREF
  int v73; // [rsp+48h] [rbp-41h]
  __int128 v74; // [rsp+50h] [rbp-39h]
  __int128 v75; // [rsp+60h] [rbp-29h]
  _DWORD *v76; // [rsp+70h] [rbp-19h]
  int v77; // [rsp+78h] [rbp-11h]
  unsigned int v78; // [rsp+7Ch] [rbp-Dh]
  int v79; // [rsp+80h] [rbp-9h]
  unsigned int v80; // [rsp+84h] [rbp-5h]
  int v81; // [rsp+88h] [rbp-1h]
  char *v82; // [rsp+90h] [rbp+7h]
  char *v83; // [rsp+98h] [rbp+Fh]
  struct CFlipPresentUpdate *v85; // [rsp+F8h] [rbp+6Fh]
  int v86; // [rsp+108h] [rbp+7Fh]

  v85 = (struct CFlipPresentUpdate *)a2;
  v2 = *this;
  v3 = 0;
  P = 0LL;
  v4 = 0;
  v73 = 0;
  v76 = 0LL;
  v77 = 0;
  v79 = 0;
  v5 = (CEndpointResourceStateManager *)this;
  v80 = 0;
  v81 = 0;
  v74 = 0LL;
  v75 = 0LL;
  v78 = 0;
  do
  {
    if ( v2 == v5 )
      break;
    if ( (*(_BYTE *)((((unsigned __int64)v2 - 8) & -(__int64)(v2 != 0LL)) + 0x20) & 1) != 0 )
    {
      v6 = 0;
      v7 = *(_QWORD *)(*(_QWORD *)((((unsigned __int64)v2 - 8) & -(__int64)(v2 != 0LL)) + 0x18) + 32LL);
      if ( v7 )
        v6 = *(_DWORD *)(v7 + 32);
      v8 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x18u, v6);
      v4 = v78;
      v3 = v8;
    }
    if ( v3 >= 0 && (*(_BYTE *)((((unsigned __int64)v2 - 8) & -(__int64)(v2 != 0LL)) + 0x20) & 2) != 0 )
    {
      v9 = v4 + 16;
      v10 = v4 + 16 < v4;
      v4 = -1;
      if ( !v10 )
        v4 = v9;
      v3 = v10 ? 0xC0000095 : 0;
      v78 = v4;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  while ( v3 >= 0 );
  v11 = (char **)((char *)v5 + 16);
  v12 = (char **)*((_QWORD *)v5 + 2);
  v83 = (char *)v5 + 16;
  if ( v3 >= 0 )
  {
    do
    {
      if ( v12 == v11 )
        break;
      if ( (*(_BYTE *)(((unsigned __int64)(v12 - 1) & -(__int64)(v12 != 0LL)) + 0x20) & 1) != 0 )
      {
        v13 = 0;
        v14 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)(v12 - 1) & -(__int64)(v12 != 0LL)) + 0x18) + 32LL);
        if ( v14 )
          v13 = *(_DWORD *)(v14 + 32);
        v3 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x18u, v13);
      }
      if ( v3 >= 0 )
      {
        if ( (*(_BYTE *)(((unsigned __int64)(v12 - 1) & -(__int64)(v12 != 0LL)) + 0x38) & 1) != 0 )
        {
          v15 = *(_QWORD *)(((unsigned __int64)(v12 - 1) & -(__int64)(v12 != 0LL)) + 0x28);
          v16 = 0;
          if ( v15 )
            v16 = *(_DWORD *)(v15 + 32);
          v3 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize((CResourceStateUpdateSerializer *)&P, a2, v16);
        }
        if ( v3 >= 0 && (*(_BYTE *)(((unsigned __int64)(v12 - 1) & -(__int64)(v12 != 0LL)) + 0x20) & 2) != 0 )
        {
          a2 = v80;
          v17 = -1;
          if ( v80 + 16 >= v80 )
            v17 = v80 + 16;
          v3 = v80 + 16 < v80 ? 0xC0000095 : 0;
          v80 = v17;
        }
      }
      v12 = (char **)*v12;
    }
    while ( v3 >= 0 );
    if ( v3 >= 0 )
    {
      v86 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x75754346u);
      v3 = v86;
      if ( v86 >= 0 )
      {
        v18 = *(CEndpointResourceStateManager **)v5;
        if ( *(CEndpointResourceStateManager **)v5 != v5 )
        {
          v19 = (_DWORD *)*((_QWORD *)&v74 + 1);
          v20 = (_DWORD *)v74;
          do
          {
            v21 = *((_BYTE *)v18 + 24);
            v22 = *(CEndpointResourceStateManager **)v18;
            v71 = *(CEndpointResourceStateManager **)v18;
            if ( (v21 & 1) != 0 )
            {
              v23 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 32LL);
              v24 = 0;
              if ( v23 )
                v24 = *(_DWORD *)(v23 + 32);
              *v20 = 2;
              v25 = v20;
              v26 = (unsigned int)(v24 + 24);
              v27 = *((_QWORD *)v18 + 2);
              v20 = (_DWORD *)((char *)v25 + v26);
              v68 = v20;
              *(_QWORD *)&v74 = v20;
              *((_QWORD *)v25 + 1) = *(_QWORD *)(v27 + 40);
              if ( v23 )
              {
                v28 = (char *)(v25 + 6);
                v25[4] = *(_DWORD *)(v23 + 32);
                if ( *(_DWORD *)(v23 + 12) )
                {
                  v29 = 0;
                  v30 = *(char **)(v23 + 24);
                  do
                  {
                    v31 = 32LL * v29;
                    *(_OWORD *)v28 = *(_OWORD *)(v31 + *(_QWORD *)(v23 + 16));
                    *((_DWORD *)v28 + 4) = *(_DWORD *)(*(_QWORD *)(v23 + 16) + v31 + 16);
                    v32 = v28 + 20;
                    memmove(v32, v30, *(unsigned int *)(*(_QWORD *)(v23 + 16) + v31 + 16));
                    ++v29;
                    v33 = *(unsigned int *)(*(_QWORD *)(v23 + 16) + v31 + 16);
                    v28 = &v32[v33];
                    v30 += v33;
                  }
                  while ( v29 < *(_DWORD *)(v23 + 12) );
                  v20 = v68;
                  v19 = (_DWORD *)*((_QWORD *)&v74 + 1);
                  v22 = v71;
                }
                v5 = (CEndpointResourceStateManager *)this;
              }
              else
              {
                v25[4] = 0;
              }
              *((_BYTE *)v18 + 24) |= 4u;
              v21 = *((_BYTE *)v18 + 24);
            }
            if ( (v21 & 2) != 0 )
            {
              *v19 = 0;
              v34 = v19;
              v35 = *((_QWORD *)v18 + 2);
              v19 += 4;
              *((_QWORD *)&v74 + 1) = v19;
              *((_QWORD *)v34 + 1) = *(_QWORD *)(v35 + 40);
              *((_BYTE *)v18 + 24) |= 8u;
            }
            v18 = v22;
          }
          while ( v22 != v5 );
          v11 = (char **)((char *)v5 + 16);
        }
        v36 = *v11;
        if ( *v11 != (char *)v11 )
        {
          v37 = (_DWORD *)*((_QWORD *)&v75 + 1);
          v38 = (_DWORD *)v75;
          v39 = v76;
          v69 = (_DWORD *)*((_QWORD *)&v75 + 1);
          v70 = (_DWORD *)v75;
          do
          {
            v40 = (v36[24] & 1) == 0;
            v82 = *(char **)v36;
            if ( !v40 )
            {
              v41 = *(_QWORD *)(*((_QWORD *)v36 + 2) + 32LL);
              v42 = 0;
              if ( v41 )
                v42 = *(_DWORD *)(v41 + 32);
              *v38 = 3;
              v43 = v38;
              v44 = (unsigned int)(v42 + 24);
              v45 = *((_QWORD *)v36 + 2);
              v38 = (_DWORD *)((char *)v43 + v44);
              v70 = v38;
              *(_QWORD *)&v75 = v38;
              *((_QWORD *)v43 + 1) = *(_QWORD *)(v45 + 40);
              if ( v41 )
              {
                v46 = (char *)(v43 + 6);
                v43[4] = *(_DWORD *)(v41 + 32);
                v47 = 0;
                if ( *(_DWORD *)(v41 + 12) )
                {
                  v48 = *(char **)(v41 + 24);
                  do
                  {
                    v49 = 32LL * v47;
                    *(_OWORD *)v46 = *(_OWORD *)(v49 + *(_QWORD *)(v41 + 16));
                    *((_DWORD *)v46 + 4) = *(_DWORD *)(v49 + *(_QWORD *)(v41 + 16) + 16);
                    v50 = v46 + 20;
                    memmove(v50, v48, *(unsigned int *)(v49 + *(_QWORD *)(v41 + 16) + 16));
                    ++v47;
                    v51 = *(unsigned int *)(v49 + *(_QWORD *)(v41 + 16) + 16);
                    v46 = &v50[v51];
                    v48 += v51;
                  }
                  while ( v47 < *(_DWORD *)(v41 + 12) );
                  v38 = v70;
                }
                v37 = v69;
              }
              else
              {
                v43[4] = 0;
              }
              v36[24] |= 4u;
            }
            if ( (v36[48] & 1) != 0 )
            {
              v52 = *((_QWORD *)v36 + 4);
              v53 = 0;
              if ( v52 )
                v53 = *(_DWORD *)(v52 + 32);
              *v39 = 4;
              v54 = v39;
              v55 = (unsigned int)(v53 + 32);
              v56 = *((_QWORD *)v36 + 2);
              v39 = (_DWORD *)((char *)v54 + v55);
              v76 = v39;
              *((_QWORD *)v54 + 1) = *(_QWORD *)(v56 + 40);
              v57 = *((_QWORD *)v36 + 5);
              if ( v57 )
                v57 = *(_QWORD *)(v57 + 40);
              *((_QWORD *)v54 + 2) = v57;
              if ( v52 )
              {
                v58 = (char *)(v54 + 8);
                v54[6] = *(_DWORD *)(v52 + 32);
                if ( *(_DWORD *)(v52 + 12) )
                {
                  v59 = 0;
                  v60 = *(char **)(v52 + 24);
                  do
                  {
                    v61 = 32LL * v59;
                    *(_OWORD *)v58 = *(_OWORD *)(v61 + *(_QWORD *)(v52 + 16));
                    *((_DWORD *)v58 + 4) = *(_DWORD *)(v61 + *(_QWORD *)(v52 + 16) + 16);
                    v62 = v58 + 20;
                    memmove(v62, v60, *(unsigned int *)(v61 + *(_QWORD *)(v52 + 16) + 16));
                    ++v59;
                    v63 = *(unsigned int *)(v61 + *(_QWORD *)(v52 + 16) + 16);
                    v58 = &v62[v63];
                    v60 += v63;
                  }
                  while ( v59 < *(_DWORD *)(v52 + 12) );
                  v38 = v70;
                  v37 = v69;
                }
              }
              else
              {
                v54[6] = 0;
              }
              v64 = (CFlipResource *)*((_QWORD *)v36 + 5);
              if ( v64 )
              {
                CFlipResource::Release(v64);
                *((_QWORD *)v36 + 5) = 0LL;
              }
              v36[48] |= 2u;
            }
            if ( (v36[24] & 2) != 0 )
            {
              *v37 = 1;
              v65 = v37;
              v66 = *((_QWORD *)v36 + 2);
              v37 += 4;
              v69 = v37;
              *((_QWORD *)&v75 + 1) = v37;
              *((_QWORD *)v65 + 1) = *(_QWORD *)(v66 + 40);
              v36[24] |= 8u;
            }
            v36 = v82;
          }
          while ( v82 != v83 );
          v3 = v86;
          v5 = (CEndpointResourceStateManager *)this;
        }
        CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, v85);
        CEndpointResourceStateManager::CommitPendingUpdates(v5);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v3;
}
