/*
 * XREFs of MmQueryMemoryListInformation @ 0x140103060
 * Callers:
 *     PfpMemoryListQuery @ 0x1401529F8 (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x14027C33C (EtwpLogMemInfo.c)
 *     PfpPfnPrioRequest @ 0x14043D960 (PfpPfnPrioRequest.c)
 *     PfpVolumePrefetchMetadata @ 0x1404401F8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140440598 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x140442F2C (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404432A8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140453444 (PfSnCheckActionsNeeded.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     PfpPrefetchPrivatePages @ 0x1406F2B50 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR **BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  int v6; // edx
  char v7; // r13
  ULONG_PTR *v8; // r8
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // r14
  ULONG_PTR v11; // r11
  ULONG_PTR v12; // r10
  ULONG_PTR v13; // rsi
  ULONG_PTR v14; // r15
  ULONG_PTR v15; // r12
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  ULONG_PTR v27; // rax
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  __int128 v31; // [rsp+48h] [rbp-130h]
  __int128 v32; // [rsp+58h] [rbp-120h]
  __int128 v33; // [rsp+68h] [rbp-110h]
  __int128 v34; // [rsp+90h] [rbp-E8h]
  __int128 v35; // [rsp+A0h] [rbp-D8h]
  __int128 v36; // [rsp+B0h] [rbp-C8h]
  __int128 v37; // [rsp+C0h] [rbp-B8h]
  __int128 v38; // [rsp+D0h] [rbp-A8h]
  __int128 v39; // [rsp+E0h] [rbp-98h]
  __int128 v40; // [rsp+F0h] [rbp-88h]
  __int128 v41; // [rsp+100h] [rbp-78h]
  __int128 v42; // [rsp+110h] [rbp-68h]
  __int128 v43; // [rsp+120h] [rbp-58h]
  __int128 v44; // [rsp+130h] [rbp-48h]

  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  v6 = 0;
  v7 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG_PTR **)-1LL )
    {
      v8 = *(ULONG_PTR **)(qword_140388AF0
                         + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 2));
    }
    else
    {
      v8 = *BugCheckParameter2;
      v6 = 1;
    }
  }
  else
  {
    v8 = &MiSystemPartition;
  }
  if ( *((_DWORD *)v8 + 2) != 305535296 )
    goto LABEL_61;
  if ( v6 != 1 )
  {
LABEL_7:
    v9 = v8[722];
    v10 = v8[264];
    *(_QWORD *)&v34 = v10;
    v11 = v8[272];
    *((_QWORD *)&v34 + 1) = v11;
    v12 = v8[792];
    *(_QWORD *)&v35 = v12;
    v13 = v8[800];
    *((_QWORD *)&v35 + 1) = v13;
    v14 = v8[496];
    *(_QWORD *)&v36 = v14;
    *((_QWORD *)&v44 + 1) = v8[806];
    v15 = v8[288];
    *((_QWORD *)&v36 + 1) = v15;
    *((_QWORD *)&v40 + 1) = *((unsigned int *)v8 + 1038);
    *(_QWORD *)&v31 = v8[293];
    *(_QWORD *)&v41 = *((unsigned int *)v8 + 1039);
    *((_QWORD *)&v31 + 1) = v8[298];
    v37 = v31;
    *((_QWORD *)&v41 + 1) = *((unsigned int *)v8 + 1040);
    *(_QWORD *)&v32 = v8[303];
    *(_QWORD *)&v42 = *((unsigned int *)v8 + 1041);
    *((_QWORD *)&v32 + 1) = v8[308];
    v38 = v32;
    *((_QWORD *)&v42 + 1) = *((unsigned int *)v8 + 1042);
    *(_QWORD *)&v33 = v8[313];
    *(_QWORD *)&v43 = *((unsigned int *)v8 + 1043);
    *((_QWORD *)&v33 + 1) = v8[318];
    v39 = v33;
    *((_QWORD *)&v43 + 1) = *((unsigned int *)v8 + 1044);
    *(_QWORD *)&v40 = v8[323];
    *(_QWORD *)&v44 = *((unsigned int *)v8 + 1045);
    if ( v10 > v9 )
    {
      *(_QWORD *)&v34 = v8[722];
      v16 = 0LL;
    }
    else
    {
      v16 = v9 - v10;
    }
    if ( v11 > v16 )
    {
      *((_QWORD *)&v34 + 1) = v16;
      v17 = 0LL;
    }
    else
    {
      v17 = v16 - v11;
    }
    if ( v12 > v17 )
    {
      v12 = v17;
      *(_QWORD *)&v35 = v17;
      v18 = 0LL;
    }
    else
    {
      v18 = v17 - v12;
    }
    if ( v13 > v18 )
    {
      *((_QWORD *)&v35 + 1) = v18;
      v19 = 0LL;
    }
    else
    {
      v19 = v18 - v13;
    }
    if ( v14 > v19 )
    {
      *(_QWORD *)&v36 = v19;
      v20 = 0LL;
    }
    else
    {
      v20 = v19 - v14;
    }
    if ( v8[806] >= v12 )
      *((_QWORD *)&v44 + 1) = v12;
    if ( v15 > v20 )
    {
      *((_QWORD *)&v36 + 1) = v20;
      v21 = 0LL;
    }
    else
    {
      v21 = v20 - v15;
    }
    if ( (unsigned __int64)v31 > v21 )
    {
      *(_QWORD *)&v37 = v21;
      v22 = 0LL;
    }
    else
    {
      v22 = v21 - v31;
    }
    if ( *((_QWORD *)&v31 + 1) > v22 )
    {
      *((_QWORD *)&v37 + 1) = v22;
      v23 = 0LL;
    }
    else
    {
      v23 = v22 - *((_QWORD *)&v31 + 1);
    }
    if ( (unsigned __int64)v32 > v23 )
    {
      *(_QWORD *)&v38 = v23;
      v24 = 0LL;
    }
    else
    {
      v24 = v23 - v32;
    }
    if ( *((_QWORD *)&v32 + 1) > v24 )
    {
      *((_QWORD *)&v38 + 1) = v24;
      v25 = 0LL;
    }
    else
    {
      v25 = v24 - *((_QWORD *)&v32 + 1);
    }
    if ( (unsigned __int64)v33 > v25 )
    {
      *(_QWORD *)&v39 = v25;
      v26 = 0LL;
    }
    else
    {
      v26 = v25 - v33;
    }
    if ( *((_QWORD *)&v33 + 1) > v26 )
    {
      *((_QWORD *)&v39 + 1) = v26;
      v27 = 0LL;
    }
    else
    {
      v27 = v26 - *((_QWORD *)&v33 + 1);
    }
    if ( v8[323] > v27 )
      *(_QWORD *)&v40 = v27;
    *a2 = v34;
    a2[1] = v35;
    a2[2] = v36;
    a2[3] = v37;
    a2[4] = v38;
    a2[5] = v39;
    a2[6] = v40;
    a2[7] = v41;
    a2[8] = v42;
    a2[9] = v43;
    a2[10] = v44;
    *a5 = 176;
    if ( v7 )
      PsDereferencePartition(v8[21]);
    return 0LL;
  }
  if ( (ULONG_PTR **)v8[21] != BugCheckParameter2 )
LABEL_61:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v8, 0LL);
  _m_prefetchw(BugCheckParameter2 + 3);
  v29 = (signed __int64)BugCheckParameter2[3];
  while ( (unsigned __int64)(v29 + 1) > 1 )
  {
    v30 = v29;
    v29 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2 + 3, v29 + 1, v29);
    if ( v30 == v29 )
    {
      v7 = 1;
      goto LABEL_7;
    }
  }
  if ( v29 )
    __fastfail(0xEu);
  return 3221226656LL;
}
