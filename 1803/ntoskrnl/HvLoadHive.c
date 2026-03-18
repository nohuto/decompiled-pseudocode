/*
 * XREFs of HvLoadHive @ 0x140496B18
 * Callers:
 *     HvHiveStartFileBacked @ 0x140496704 (HvHiveStartFileBacked.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     HvpGetHiveHeader @ 0x14049696C (HvpGetHiveHeader.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x140496E1C (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpViewMapStart @ 0x140496E94 (HvpViewMapStart.c)
 *     HvpInitMap @ 0x140497498 (HvpInitMap.c)
 *     CmpFileFlush @ 0x140498590 (CmpFileFlush.c)
 *     CmpInitializeActualFileSizes @ 0x140498B08 (CmpInitializeActualFileSizes.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404E31E4 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImageFromViewMap @ 0x1404E35C4 (HvpMapHiveImageFromViewMap.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140514BFC (HvpAdjustHiveFreeDisplay.c)
 *     HvpMapHiveImageFromFile @ 0x1406F8648 (HvpMapHiveImageFromFile.c)
 *     HvpPerformLogFileRecovery @ 0x1406F86F4 (HvpPerformLogFileRecovery.c)
 *     HvAnalyzeLogFiles @ 0x1407056A4 (HvAnalyzeLogFiles.c)
 */

__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rsi
  __int64 v3; // r13
  int v4; // r12d
  int v5; // eax
  int HiveHeader; // eax
  __int64 v7; // rdx
  int v8; // r15d
  char *v9; // r14
  __int64 v10; // r8
  int inited; // eax
  int v12; // ebx
  __int64 v13; // r9
  int v14; // ebx
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  char v19; // r12
  int v20; // eax
  int v21; // eax
  int v23; // r9d
  int v24; // ebx
  _DWORD *v25; // rax
  int v26; // ecx
  int v27; // r9d
  int v28; // r10d
  int v29; // eax
  int cData; // [rsp+28h] [rbp-E0h]
  int cDataa; // [rsp+28h] [rbp-E0h]
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  char *v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v35[7]; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData[3]; // [rsp+98h] [rbp-70h] BYREF
  char **v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  _BYTE v39[48]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v33 = 0LL;
  HIDWORD(v32) = 0;
  v3 = 0LL;
  v4 = 0;
  memset(pData, 0, sizeof(pData));
  memset(v35, 0, 0x30uLL);
  memset(v39, 0, sizeof(v39));
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
  {
    v5 = CmpFileFlush(BugCheckParameter2, 0LL);
    if ( v5 < 0 )
      SetFailureLocation(v1, 0, 6, v5, 8);
  }
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v33, &v34);
  v7 = 2LL;
  v8 = HiveHeader;
  switch ( HiveHeader )
  {
    case 2:
      v23 = -1073741670;
      cData = 0;
LABEL_40:
      v12 = v23;
LABEL_43:
      SetFailureLocation(v1, 0, 6, v23, cData);
      v9 = v33;
      goto LABEL_30;
    case 7:
      v12 = -1073741491;
      cData = 8;
LABEL_42:
      v23 = v12;
      goto LABEL_43;
    case 0:
      v12 = -1073741476;
      cData = 16;
      goto LABEL_42;
  }
  if ( (unsigned int)(HiveHeader - 4) <= 1 && !*(_DWORD *)(BugCheckParameter2 + 164) )
  {
    v23 = -1073741492;
    cData = 32;
    goto LABEL_40;
  }
  v9 = v33;
  v10 = 4LL;
  if ( HiveHeader == 5 )
  {
    v4 = *((_DWORD *)v33 + 2);
  }
  else if ( HiveHeader != 4 )
  {
    goto LABEL_10;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 164) == 1 )
  {
    v35[0] = BugCheckParameter2;
    *(_QWORD *)&pData[0].Size = HvpRecoverDataReadRoutine;
    v24 = 1;
    HIDWORD(v35[2]) = 1;
    pData[1].Ptr = (ULONGLONG)v35;
    LODWORD(pData[0].Ptr) = 1;
  }
  else
  {
    v24 = 2;
    v25 = (_DWORD *)&v35[2] + 1;
    v26 = 4;
    do
    {
      *(_QWORD *)(v25 - 5) = BugCheckParameter2;
      *v25 = v26++;
      v25 += 6;
      --v7;
    }
    while ( v7 );
    LODWORD(pData[0].Ptr) = 4;
    *(_QWORD *)&pData[0].Size = HvpRecoverDataReadRoutine;
    pData[2].Ptr = (ULONGLONG)HvpRecoverDataReadRoutine;
    *(_QWORD *)&pData[2].Size = &v35[3];
    pData[1].Ptr = (ULONGLONG)v35;
    pData[1].Size = 5;
  }
  if ( v8 == 4 )
  {
    LOBYTE(v7) = 1;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v7, 875777347LL);
    if ( !v3 )
    {
      v27 = -1073741670;
      cDataa = 48;
      v12 = -1073741670;
      goto LABEL_83;
    }
    LOBYTE(v10) = 1;
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  inited = HvAnalyzeLogFiles((unsigned int)&v34, v4, v10, v24, (__int64)pData, (__int64)&v32 + 4, (__int64)v39, v3);
  v12 = inited;
  if ( inited < 0 )
  {
    cDataa = 56;
    goto LABEL_82;
  }
  v4 = HIDWORD(v32);
  if ( v8 == 4 )
  {
    *(_WORD *)(BugCheckParameter2 + 200) |= 0x40u;
    v9 = (char *)v3;
    v3 = 0LL;
  }
LABEL_10:
  *(_QWORD *)(BugCheckParameter2 + 64) = v9;
  v9 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 212) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                        - 4096
                                        + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
  inited = CmpInitializeActualFileSizes(BugCheckParameter2, (char *)&v32 + 4, v10);
  v12 = inited;
  if ( inited < 0 )
  {
    cDataa = 128;
    goto LABEL_82;
  }
  v13 = *(_QWORD *)(BugCheckParameter2 + 64);
  v14 = HIDWORD(v32);
  if ( HIDWORD(v32) < *(_DWORD *)(v13 + 40) + 4096 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
  {
    if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x200000000000uLL) )
    {
      LODWORD(v33) = v14;
      HIDWORD(v32) = v28 + 4096;
      *(_QWORD *)&pData[2].Size = 4LL;
      pData[2].Ptr = (ULONGLONG)&v32 + 4;
      v37 = &v33;
      v38 = 4LL;
      TlgWrite(&stru_140397090, &unk_14030880A, 0LL, 0LL, 4u, pData);
      v13 = *(_QWORD *)(BugCheckParameter2 + 64);
    }
    *(_DWORD *)(v13 + 4088) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v14 - 4096) & 0xFFFFF000;
    v13 = *(_QWORD *)(BugCheckParameter2 + 64);
  }
  if ( (unsigned int)(*(_DWORD *)(v13 + 40) - 1) > 0x7FFFDFFF )
  {
    v27 = -1073741492;
    cDataa = 112;
    v12 = -1073741492;
    goto LABEL_83;
  }
  inited = HvpInitMap(BugCheckParameter2);
  v12 = inited;
  if ( inited < 0 )
  {
    cDataa = 132;
    goto LABEL_82;
  }
  v15 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v15 & 0x20000) == 0 )
  {
    inited = HvpMapHiveImageFromFile(BugCheckParameter2);
    v12 = inited;
    if ( inited >= 0 )
      goto LABEL_19;
    cDataa = 144;
LABEL_82:
    v27 = inited;
    goto LABEL_83;
  }
  v16 = (v15 >> 22) & 2 | 1;
  if ( (v15 & 0x8001) == 0 )
    v16 = (v15 >> 22) & 2;
  v17 = HvpViewMapStart(
          (int)BugCheckParameter2 + 216,
          *(_QWORD *)(BugCheckParameter2 + 1536),
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
          (unsigned int)&CmpRegistryProcess,
          v16);
  v12 = v17;
  if ( v17 < 0 )
  {
    SetFailureLocation(v1, 0, 6, v17, 136);
    goto LABEL_30;
  }
  inited = HvpMapHiveImageFromViewMap(
             BugCheckParameter2,
             0LL,
             *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  v12 = inited;
  if ( inited < 0 )
  {
    cDataa = 140;
    goto LABEL_82;
  }
LABEL_19:
  CmpTraceHiveMountBaseFileMounted(
    *(_QWORD *)(BugCheckParameter2 + 1536),
    *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  if ( v4 )
  {
    v29 = HvpPerformLogFileRecovery(BugCheckParameter2);
    if ( v29 < 0 )
      SetFailureLocation(v1, 0, 6, v29, 160);
    v18 = *(_QWORD *)(BugCheckParameter2 + 64);
    v19 = 1;
  }
  else
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 64);
    v19 = 0;
    v20 = *(_DWORD *)(v18 + 4);
    *(_DWORD *)(BugCheckParameter2 + 168) = v20;
    *(_DWORD *)(BugCheckParameter2 + 180) = v20;
    *(_DWORD *)(BugCheckParameter2 + 172) = v20;
    *(_BYTE *)(BugCheckParameter2 + 190) = 1;
  }
  inited = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(unsigned int *)(v18 + 40), 0LL);
  v12 = inited;
  if ( inited < 0 )
  {
    cDataa = 176;
    goto LABEL_82;
  }
  v12 = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
  if ( v12 != 1073741833 )
  {
    if ( v12 >= 0 )
      goto LABEL_24;
    cDataa = 192;
    v27 = v12;
LABEL_83:
    SetFailureLocation(v1, 0, 6, v27, cDataa);
    goto LABEL_30;
  }
  v19 = 1;
LABEL_24:
  if ( v8 == 4 || v19 )
    v12 = 1073741833;
  else
    v12 = 0;
  v21 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v21 & 0x20000) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 160) = v21 | 0x10000;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 8LL) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
LABEL_30:
  if ( v35[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)v35[1]);
  if ( v35[4] )
    CmSiFreeMemory((PPRIVILEGE_SET)v35[4]);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v3, *(unsigned int *)(BugCheckParameter2 + 132));
  if ( v9 )
    (*(void (__fastcall **)(char *, _QWORD))(BugCheckParameter2 + 32))(v9, *(unsigned int *)(BugCheckParameter2 + 132));
  return (unsigned int)v12;
}
