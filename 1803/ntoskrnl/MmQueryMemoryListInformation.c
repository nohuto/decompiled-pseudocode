/*
 * XREFs of MmQueryMemoryListInformation @ 0x140106490
 * Callers:
 *     PfpMemoryListQuery @ 0x14014CEB4 (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x1402AFB10 (EtwpLogMemInfo.c)
 *     PfSnCheckActionsNeeded @ 0x14048E8FC (PfSnCheckActionsNeeded.c)
 *     PfpVolumePrefetchMetadata @ 0x140491BC8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140491FC0 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x1404BB614 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404BB98C (PfpUpdateRepurposedByPrefetch.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 *     PfpPrefetchPrivatePages @ 0x1405E85E4 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG_PTR **BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  _OWORD *v5; // r9
  int v6; // edx
  char v7; // r14
  ULONG_PTR *v8; // r8
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // r10
  ULONG_PTR v12; // r15
  ULONG_PTR v13; // r12
  ULONG_PTR v14; // r11
  ULONG_PTR v15; // r13
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // rax
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  ULONG_PTR v27; // rax
  ULONG_PTR v29; // [rsp+40h] [rbp-138h]
  ULONG_PTR v30; // [rsp+48h] [rbp-130h]
  ULONG_PTR v31; // [rsp+50h] [rbp-128h]
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

  v5 = a2;
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
      v8 = *(ULONG_PTR **)(qword_1403CBD88
                         + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
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
    goto LABEL_57;
  if ( v6 != 1 )
    goto LABEL_7;
  if ( (ULONG_PTR **)v8[21] != BugCheckParameter2 )
LABEL_57:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v8, 0LL);
  if ( !PsReferencePartitionSafe((__int64)BugCheckParameter2) )
    return 3221226656LL;
  v7 = 1;
LABEL_7:
  v9 = v8[858];
  v29 = v8[272];
  *(_QWORD *)&v34 = v29;
  v10 = v8[280];
  *((_QWORD *)&v34 + 1) = v10;
  v11 = v8[928];
  *(_QWORD *)&v35 = v11;
  v12 = v8[936];
  *((_QWORD *)&v35 + 1) = v12;
  v13 = v8[504];
  *(_QWORD *)&v36 = v13;
  v14 = v8[942];
  v30 = v8[296];
  *((_QWORD *)&v36 + 1) = v30;
  *((_QWORD *)&v40 + 1) = *((unsigned int *)v8 + 1054);
  v15 = v8[301];
  *(_QWORD *)&v37 = v15;
  *(_QWORD *)&v41 = *((unsigned int *)v8 + 1055);
  v31 = v8[306];
  *((_QWORD *)&v37 + 1) = v31;
  *((_QWORD *)&v41 + 1) = *((unsigned int *)v8 + 1056);
  *(_QWORD *)&v32 = v8[311];
  *(_QWORD *)&v42 = *((unsigned int *)v8 + 1057);
  *((_QWORD *)&v32 + 1) = v8[316];
  v38 = v32;
  *((_QWORD *)&v42 + 1) = *((unsigned int *)v8 + 1058);
  *(_QWORD *)&v33 = v8[321];
  *(_QWORD *)&v43 = *((unsigned int *)v8 + 1059);
  *((_QWORD *)&v33 + 1) = v8[326];
  v39 = v33;
  *((_QWORD *)&v43 + 1) = *((unsigned int *)v8 + 1060);
  *(_QWORD *)&v40 = v8[331];
  *(_QWORD *)&v44 = *((unsigned int *)v8 + 1061);
  if ( v29 > v9 )
  {
    *(_QWORD *)&v34 = v8[858];
    v16 = 0LL;
  }
  else
  {
    v16 = v9 - v29;
  }
  if ( v10 > v16 )
  {
    *((_QWORD *)&v34 + 1) = v16;
    v17 = 0LL;
  }
  else
  {
    v17 = v16 - v10;
  }
  if ( v11 > v17 )
  {
    v11 = v17;
    *(_QWORD *)&v35 = v17;
    v18 = 0LL;
  }
  else
  {
    v18 = v17 - v11;
  }
  if ( v12 > v18 )
  {
    *((_QWORD *)&v35 + 1) = v18;
    v19 = 0LL;
  }
  else
  {
    v19 = v18 - v12;
  }
  if ( v13 > v19 )
  {
    *(_QWORD *)&v36 = v19;
    v20 = 0LL;
  }
  else
  {
    v20 = v19 - v13;
  }
  if ( v14 >= v11 )
    v14 = v11;
  *((_QWORD *)&v44 + 1) = v14;
  if ( v30 > v20 )
  {
    *((_QWORD *)&v36 + 1) = v20;
    v21 = 0LL;
  }
  else
  {
    v21 = v20 - v30;
  }
  if ( v15 > v21 )
  {
    *(_QWORD *)&v37 = v21;
    v22 = 0LL;
  }
  else
  {
    v22 = v21 - v15;
  }
  if ( v31 > v22 )
  {
    *((_QWORD *)&v37 + 1) = v22;
    v23 = 0LL;
  }
  else
  {
    v23 = v22 - v31;
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
  if ( v8[331] > v27 )
    *(_QWORD *)&v40 = v27;
  *v5 = v34;
  v5[1] = v35;
  v5[2] = v36;
  v5[3] = v37;
  v5[4] = v38;
  v5[5] = v39;
  v5[6] = v40;
  v5[7] = v41;
  v5[8] = v42;
  v5[9] = v43;
  v5[10] = v44;
  *a5 = 176;
  if ( v7 )
    PsDereferencePartition(v8[21]);
  return 0LL;
}
