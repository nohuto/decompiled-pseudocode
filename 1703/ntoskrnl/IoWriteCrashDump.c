/*
 * XREFs of IoWriteCrashDump @ 0x1401F1224
 * Callers:
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140137A34 (KdCheckForDebugBreak.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IoFillTriageDumpBuffer @ 0x1401F0410 (IoFillTriageDumpBuffer.c)
 *     IoSaveBugCheckProgress @ 0x1401F0EA4 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1401F0EE8 (IoSetBugCheckProgressAndFlag.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1401F1138 (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1401F1E24 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1401F1F70 (IopDumpCallRemovePagesCallbacks.c)
 *     IopUpdateMinidumpContext @ 0x1401F2830 (IopUpdateMinidumpContext.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F2BDC (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401F2F14 (IopWriteTriageDumpToFirmware.c)
 *     MmGetDumpRange @ 0x140213238 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x1402136C4 (MmSnapTriageDumpInformation.c)
 *     RtlNumberOfSetBitsEx @ 0x14023D690 (RtlNumberOfSetBitsEx.c)
 *     VfDisableHalVerifier @ 0x1402504C8 (VfDisableHalVerifier.c)
 */

char __fastcall IoWriteCrashDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  char v9; // bl
  unsigned int v10; // edi
  unsigned int v13; // r14d
  __int64 v15; // rcx
  unsigned int v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  char v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r8
  _OWORD *v22; // rax
  __int64 v23; // r9
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  int v31; // eax
  int v32; // edi
  __int64 v33; // rax
  int v34; // [rsp+38h] [rbp-C8h]
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+80h] [rbp-80h]
  int v37; // [rsp+84h] [rbp-7Ch]
  unsigned int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  _QWORD v44[6]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v45[4]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0;
  v10 = 0;
  v41 = a7;
  v39 = 0;
  v13 = a1;
  v36 = 0;
  v40 = a4;
  v42 = a3;
  v43 = a2;
  v38 = a1;
  v37 = 3583;
  KdCheckForDebugBreak();
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(v13, a2, a3, v40, a5, (__int64)a6, v41);
  v45[3] = a5;
  v45[0] = a2;
  v45[1] = a3;
  v45[2] = v40;
  MmSnapTriageDumpInformation(a6, v45);
  v15 = CrashdmpDumpBlock;
  if ( !CrashdmpDumpBlock )
    return v9;
  if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
  {
    v16 = 0;
    v17 = (_DWORD *)(CrashdmpDumpBlock + 1372);
    while ( *v17 != v13 )
    {
      ++v16;
      ++v17;
      if ( v16 >= 8 )
        goto LABEL_11;
    }
    *(_DWORD *)(CrashdmpDumpBlock + 1336) = 5;
    v15 = CrashdmpDumpBlock;
  }
LABEL_11:
  if ( !a8 )
  {
    *(_QWORD *)(v15 + 8) = 0LL;
    v10 = 1;
    v37 = 3319;
  }
  ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_14036E560)(1LL, 0LL, v10);
  VfDisableHalVerifier();
  LOBYTE(v18) = 1;
  v19 = ((__int64 (__fastcall *)(__int64))qword_14036E590)(v18);
  IoSaveBugCheckProgress(0x20u);
  v20 = 9LL;
  v21 = v42;
  v22 = a6;
  v23 = v40;
  *(_DWORD *)(CrashdmpDumpBlock + 24) = v13;
  *(_QWORD *)(CrashdmpDumpBlock + 32) = a2;
  *(_QWORD *)(CrashdmpDumpBlock + 40) = v21;
  *(_QWORD *)(CrashdmpDumpBlock + 48) = v23;
  *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
  v24 = (_OWORD *)(CrashdmpDumpBlock + 64);
  do
  {
    *v24 = *v22;
    v24[1] = v22[1];
    v24[2] = v22[2];
    v24[3] = v22[3];
    v24[4] = v22[4];
    v24[5] = v22[5];
    v24[6] = v22[6];
    v24 += 8;
    v25 = v22[7];
    v22 += 8;
    *(v24 - 1) = v25;
    --v20;
  }
  while ( v20 );
  *v24 = *v22;
  v24[1] = v22[1];
  v24[2] = v22[2];
  v24[3] = v22[3];
  v24[4] = v22[4];
  *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
  *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
  *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
  *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
  *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
  if ( a8 )
    v26 = *(_QWORD *)(*(_QWORD *)(v41 + 184) + 40LL);
  else
    v26 = __readcr3();
  *(_QWORD *)(CrashdmpDumpBlock + 1344) = v26 & 0xFFFFFFFFFFFFF000uLL;
  v27 = CrashdmpDumpBlock;
  if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && v19 == 1 && a8 )
  {
LABEL_30:
    v30 = *(_QWORD *)(v27 + 8);
    if ( v30 )
    {
      memset(v44, 0, sizeof(v44));
      *(_QWORD *)&v35 = *(_QWORD *)(v30 + 48);
      *((_QWORD *)&v35 + 1) = v30 + 56;
      v44[2] = &v35;
      v44[0] = IoSetDumpRange;
      v44[1] = IoFreeDumpRange;
      v44[3] = v30;
      v44[4] = 0LL;
      v31 = *(_DWORD *)(v27 + 1336);
      if ( v31 == 6 )
      {
        v36 = a9 != 0;
      }
      else if ( v31 == 5 && (*(_DWORD *)(v27 + 1368) & 2) != 0 )
      {
        v36 = 2;
      }
      IopDumpCallAddPagesCallbacks(v38);
      IoSaveBugCheckProgress(0x21u);
      MmGetDumpRange((ULONG_PTR)v44);
      v13 = v38;
      IopDumpCallRemovePagesCallbacks(v38);
      IoSaveBugCheckProgress(0x22u);
      *(_QWORD *)(v30 + 40) = RtlNumberOfSetBitsEx(&v35);
      v27 = CrashdmpDumpBlock;
    }
    v32 = ((__int64 (__fastcall *)(__int64, __int64))qword_14036E568)(v27, a8);
    if ( v32 == -1073741267 )
    {
      v33 = CrashdmpDumpBlock;
      if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) )
        goto LABEL_42;
      *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x400u;
      IoUpdateBugCheckProgressEnvVariable();
      *(_QWORD *)((char *)&v35 + 4) = 0LL;
      IopUpdateMinidumpContext(v13, v43, v42, v40, a5, (__int64)a6);
      MmSnapTriageDumpInformation(a6, v45);
      *(_QWORD *)&v35 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
      *((_QWORD *)&v35 + 1) = &IopTriageDumpDataBlocks;
      v32 = IoFillTriageDumpBuffer(
              0x3E000u,
              *(__int64 **)(CrashdmpDumpBlock + 1328),
              1,
              3583,
              0LL,
              (__int64)a6,
              v41,
              v34,
              65,
              1u,
              (__int64)&v35,
              (__int64)&v35,
              &v39);
      if ( v32 >= 0 )
      {
        v32 = ((__int64 (__fastcall *)(__int64, __int64))qword_14036E568)(CrashdmpDumpBlock, a8);
        IoSaveBugCheckProgress(0x23u);
      }
    }
    v33 = CrashdmpDumpBlock;
LABEL_42:
    if ( (DumpPolicyAttemptOffline & 1) != 0 && v32 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v19 )
    {
      IoSaveBugCheckProgress(0x24u);
      if ( ((int (__fastcall *)(_QWORD))off_14033B5E8[0])(0LL) >= 0 )
      {
        if ( CrashdmpDumpBlock )
        {
          *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x1000u;
          IoUpdateBugCheckProgressEnvVariable();
        }
        while ( 1 )
        {
          KeStallExecutionProcessor(0xF4240u);
          ++AttemptOfflineStallCount;
        }
      }
    }
    else if ( v32 >= 0 )
    {
      if ( v19 != 1 )
      {
        if ( *(_QWORD *)(v33 + 1360) )
        {
          IoSetBugCheckProgressAndFlag();
          v32 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
          if ( CrashdmpDumpBlock )
          {
            *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x10000000u;
            IoUpdateBugCheckProgressEnvVariable();
          }
        }
      }
      return v32 >= 0;
    }
    return v9;
  }
  IopUpdateMinidumpContext(v13, a2, v21, v23, a5, (__int64)a6);
  MmSnapTriageDumpInformation(a6, v45);
  v28 = CrashdmpDumpBlock;
  *(_QWORD *)&v35 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
  *((_QWORD *)&v35 + 1) = &IopTriageDumpDataBlocks;
  if ( v19 != 1 )
  {
    v29 = *(_QWORD *)(CrashdmpDumpBlock + 1360);
    if ( v29 )
    {
      *(_QWORD *)(CrashdmpDumpBlock + 1328) = v29 + 12316;
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
LABEL_27:
      v28 = CrashdmpDumpBlock;
      goto LABEL_28;
    }
  }
  if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && !a8 )
  {
    *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
    goto LABEL_27;
  }
LABEL_28:
  if ( (int)IoFillTriageDumpBuffer(
              0x3E000u,
              *(__int64 **)(v28 + 1328),
              1,
              v37,
              0LL,
              (__int64)a6,
              v41,
              v34,
              65,
              1u,
              (__int64)&v35,
              (__int64)&v35,
              &v39) >= 0 )
  {
    v27 = CrashdmpDumpBlock;
    goto LABEL_30;
  }
  return v9;
}
