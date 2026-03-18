/*
 * XREFs of MmQueryMemoryListInformation @ 0x1400DD920
 * Callers:
 *     PfpMemoryListQuery @ 0x1400365BC (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x1402541D0 (EtwpLogMemInfo.c)
 *     PfpVolumePrefetchMetadata @ 0x140463A54 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140463E10 (PfpPrefetchDirectoryStream.c)
 *     PfpPfnPrioRequest @ 0x1405206B0 (PfpPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     PfpPrefetchFilesTrickle @ 0x14053CED0 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14053D234 (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140564F88 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x1405789F4 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR **BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  int v5; // r8d
  ULONG_PTR *v6; // r9
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // r13
  ULONG_PTR v9; // rsi
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // r14
  ULONG_PTR v12; // r12
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // r15
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  ULONG_PTR v26; // rax
  ULONG_PTR v28; // [rsp+30h] [rbp-128h]
  ULONG_PTR v29; // [rsp+38h] [rbp-120h]
  __int128 v30; // [rsp+40h] [rbp-118h]
  __int128 v31; // [rsp+50h] [rbp-108h]
  __int128 v32; // [rsp+70h] [rbp-E8h]
  __int128 v33; // [rsp+80h] [rbp-D8h]
  __int128 v34; // [rsp+90h] [rbp-C8h]
  __int128 v35; // [rsp+A0h] [rbp-B8h]
  __int128 v36; // [rsp+B0h] [rbp-A8h]
  __int128 v37; // [rsp+C0h] [rbp-98h]
  __int128 v38; // [rsp+D0h] [rbp-88h]
  __int128 v39; // [rsp+E0h] [rbp-78h]
  __int128 v40; // [rsp+F0h] [rbp-68h]
  __int128 v41; // [rsp+100h] [rbp-58h]
  __int128 v42; // [rsp+110h] [rbp-48h]

  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  else
  {
    v5 = 0;
    if ( BugCheckParameter2 )
    {
      if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
      {
        v6 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
      }
      else
      {
        v6 = *BugCheckParameter2;
        v5 = 1;
      }
    }
    else
    {
      v6 = &MiSystemPartition;
    }
    if ( *((_DWORD *)v6 + 2) != 305535296
      || !v6[2]
      || (*((_DWORD *)v6 + 1) & 1) != 0
      || v5 == 1 && (ULONG_PTR **)v6[25] != BugCheckParameter2 )
    {
      KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v6, 0LL);
    }
    v7 = v6[698];
    v8 = v6[248];
    *(_QWORD *)&v32 = v8;
    v9 = v6[256];
    *((_QWORD *)&v32 + 1) = v9;
    v10 = v6[768];
    *(_QWORD *)&v33 = v10;
    v11 = v6[776];
    *((_QWORD *)&v33 + 1) = v11;
    v12 = v6[480];
    *(_QWORD *)&v34 = v12;
    v13 = v6[782];
    v28 = v6[272];
    *((_QWORD *)&v34 + 1) = v28;
    *((_QWORD *)&v38 + 1) = *((unsigned int *)v6 + 1006);
    v14 = v6[277];
    *(_QWORD *)&v35 = v14;
    *(_QWORD *)&v39 = *((unsigned int *)v6 + 1007);
    v29 = v6[282];
    *((_QWORD *)&v35 + 1) = v29;
    *((_QWORD *)&v39 + 1) = *((unsigned int *)v6 + 1008);
    *(_QWORD *)&v30 = v6[287];
    *(_QWORD *)&v40 = *((unsigned int *)v6 + 1009);
    *((_QWORD *)&v30 + 1) = v6[292];
    v36 = v30;
    *((_QWORD *)&v40 + 1) = *((unsigned int *)v6 + 1010);
    *(_QWORD *)&v31 = v6[297];
    *(_QWORD *)&v41 = *((unsigned int *)v6 + 1011);
    *((_QWORD *)&v31 + 1) = v6[302];
    v37 = v31;
    *((_QWORD *)&v41 + 1) = *((unsigned int *)v6 + 1012);
    *(_QWORD *)&v38 = v6[307];
    *(_QWORD *)&v42 = *((unsigned int *)v6 + 1013);
    if ( v8 > v7 )
    {
      *(_QWORD *)&v32 = v6[698];
      v15 = 0LL;
    }
    else
    {
      v15 = v7 - v8;
    }
    if ( v9 > v15 )
    {
      *((_QWORD *)&v32 + 1) = v15;
      v16 = 0LL;
    }
    else
    {
      v16 = v15 - v9;
    }
    if ( v10 > v16 )
    {
      v10 = v16;
      *(_QWORD *)&v33 = v16;
      v17 = 0LL;
    }
    else
    {
      v17 = v16 - v10;
    }
    if ( v11 > v17 )
    {
      *((_QWORD *)&v33 + 1) = v17;
      v18 = 0LL;
    }
    else
    {
      v18 = v17 - v11;
    }
    if ( v12 > v18 )
    {
      *(_QWORD *)&v34 = v18;
      v19 = 0LL;
    }
    else
    {
      v19 = v18 - v12;
    }
    if ( v13 >= v10 )
      v13 = v10;
    *((_QWORD *)&v42 + 1) = v13;
    if ( v28 > v19 )
    {
      *((_QWORD *)&v34 + 1) = v19;
      v20 = 0LL;
    }
    else
    {
      v20 = v19 - v28;
    }
    if ( v14 > v20 )
    {
      *(_QWORD *)&v35 = v20;
      v21 = 0LL;
    }
    else
    {
      v21 = v20 - v14;
    }
    if ( v29 > v21 )
    {
      *((_QWORD *)&v35 + 1) = v21;
      v22 = 0LL;
    }
    else
    {
      v22 = v21 - v29;
    }
    if ( (unsigned __int64)v30 > v22 )
    {
      *(_QWORD *)&v36 = v22;
      v23 = 0LL;
    }
    else
    {
      v23 = v22 - v30;
    }
    if ( *((_QWORD *)&v30 + 1) > v23 )
    {
      *((_QWORD *)&v36 + 1) = v23;
      v24 = 0LL;
    }
    else
    {
      v24 = v23 - *((_QWORD *)&v30 + 1);
    }
    if ( (unsigned __int64)v31 > v24 )
    {
      *(_QWORD *)&v37 = v24;
      v25 = 0LL;
    }
    else
    {
      v25 = v24 - v31;
    }
    if ( *((_QWORD *)&v31 + 1) > v25 )
    {
      *((_QWORD *)&v37 + 1) = v25;
      v26 = 0LL;
    }
    else
    {
      v26 = v25 - *((_QWORD *)&v31 + 1);
    }
    if ( v6[307] > v26 )
      *(_QWORD *)&v38 = v26;
    *a2 = v32;
    a2[1] = v33;
    a2[2] = v34;
    a2[3] = v35;
    a2[4] = v36;
    a2[5] = v37;
    a2[6] = v38;
    a2[7] = v39;
    a2[8] = v40;
    a2[9] = v41;
    a2[10] = v42;
    *a5 = 176;
    return 0LL;
  }
}
