/*
 * XREFs of IoWriteCrashDump @ 0x1401F6B7C
 * Callers:
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoFillTriageDumpBuffer @ 0x1401F5B40 (IoFillTriageDumpBuffer.c)
 *     IoSaveBugCheckProgress @ 0x1401F67F0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1401F6834 (IoSetBugCheckProgressAndFlag.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1401F6A8C (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1401F7784 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1401F78D0 (IopDumpCallRemovePagesCallbacks.c)
 *     IopUpdateMinidumpContext @ 0x1401F819C (IopUpdateMinidumpContext.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F8550 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401F8888 (IopWriteTriageDumpToFirmware.c)
 *     KdCheckForDebugBreak @ 0x1401F8968 (KdCheckForDebugBreak.c)
 *     MmGetDumpRange @ 0x14021AFE8 (MmGetDumpRange.c)
 *     MmSnapTriageDumpInformation @ 0x14021B6A8 (MmSnapTriageDumpInformation.c)
 *     RtlNumberOfSetBitsEx @ 0x140253360 (RtlNumberOfSetBitsEx.c)
 *     VfDisableHalVerifier @ 0x140276D28 (VfDisableHalVerifier.c)
 */

char __fastcall IoWriteCrashDump(
        __int64 a1,
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
  unsigned int v15; // edx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  char v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r8
  _OWORD *v21; // rax
  __int64 v22; // r9
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // eax
  int v30; // edi
  int v31; // [rsp+38h] [rbp-C8h]
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+84h] [rbp-7Ch]
  unsigned int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  _QWORD v41[6]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v42[4]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0;
  v10 = 0;
  v38 = a7;
  v36 = 0;
  v13 = a1;
  v33 = 0;
  v37 = a4;
  v39 = a3;
  v40 = a2;
  v35 = a1;
  v34 = 3583;
  KdCheckForDebugBreak(a1);
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(v13, a2, a3, v37, a5, (__int64)a6, v38);
  v42[3] = a5;
  v42[0] = a2;
  v42[1] = a3;
  v42[2] = v37;
  MmSnapTriageDumpInformation(a6, v42);
  if ( CrashdmpDumpBlock )
  {
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
    {
      v15 = 0;
      v16 = (_DWORD *)(CrashdmpDumpBlock + 1372);
      while ( *v16 != v13 )
      {
        ++v15;
        ++v16;
        if ( v15 >= 8 )
          goto LABEL_11;
      }
      *(_DWORD *)(CrashdmpDumpBlock + 1336) = 5;
    }
LABEL_11:
    if ( !a8 )
    {
      v10 = 1;
      v34 = 3319;
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD))qword_140389FE0)(1LL, 0LL, v10);
    VfDisableHalVerifier();
    LOBYTE(v17) = 1;
    v18 = ((__int64 (__fastcall *)(__int64))qword_14038A010)(v17);
    IoSaveBugCheckProgress(0x20u);
    v19 = 9LL;
    v20 = v39;
    v21 = a6;
    v22 = v37;
    *(_DWORD *)(CrashdmpDumpBlock + 24) = v13;
    *(_QWORD *)(CrashdmpDumpBlock + 32) = a2;
    *(_QWORD *)(CrashdmpDumpBlock + 40) = v20;
    *(_QWORD *)(CrashdmpDumpBlock + 48) = v22;
    *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
    v23 = (_OWORD *)(CrashdmpDumpBlock + 64);
    do
    {
      *v23 = *v21;
      v23[1] = v21[1];
      v23[2] = v21[2];
      v23[3] = v21[3];
      v23[4] = v21[4];
      v23[5] = v21[5];
      v23[6] = v21[6];
      v23 += 8;
      v24 = v21[7];
      v21 += 8;
      *(v23 - 1) = v24;
      --v19;
    }
    while ( v19 );
    v25 = v38;
    *v23 = *v21;
    v23[1] = v21[1];
    v23[2] = v21[2];
    v23[3] = v21[3];
    v23[4] = v21[4];
    *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
    *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsActiveProcessHead;
    *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
    *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
    *(_QWORD *)(CrashdmpDumpBlock + 16) = &KeBugCheckReasonCallbackListHead;
    if ( a8 )
      v26 = *(_QWORD *)(*(_QWORD *)(v25 + 184) + 40LL);
    else
      v26 = __readcr3();
    *(_QWORD *)(CrashdmpDumpBlock + 1344) = v26 & 0xFFFFFFFFFFFFF000uLL;
    if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && v18 == 1 && a8 )
      goto LABEL_28;
    IopUpdateMinidumpContext(v13, a2, v20, v22, a5, (__int64)a6);
    MmSnapTriageDumpInformation(a6, v42);
    *(_QWORD *)&v32 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
    *((_QWORD *)&v32 + 1) = &IopTriageDumpDataBlocks;
    if ( v18 == 1 || (v27 = *(_QWORD *)(CrashdmpDumpBlock + 1360)) == 0 )
    {
      if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) && !a8 )
        *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
    }
    else
    {
      *(_QWORD *)(CrashdmpDumpBlock + 1328) = v27 + 12316;
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    }
    if ( (int)IoFillTriageDumpBuffer(
                0x3E000u,
                *(__int64 **)(CrashdmpDumpBlock + 1328),
                1,
                v34,
                0LL,
                (__int64)a6,
                v25,
                v31,
                65,
                1u,
                (__int64)&v32,
                (__int64)&v32,
                &v36) >= 0 )
    {
LABEL_28:
      v28 = *(_QWORD *)(CrashdmpDumpBlock + 8);
      if ( v28 )
      {
        memset(v41, 0, sizeof(v41));
        *(_QWORD *)&v32 = *(_QWORD *)(v28 + 48);
        *((_QWORD *)&v32 + 1) = v28 + 56;
        v41[2] = &v32;
        v41[0] = IoSetDumpRange;
        v41[1] = IoFreeDumpRange;
        v41[3] = v28;
        v41[4] = 0LL;
        v29 = *(_DWORD *)(CrashdmpDumpBlock + 1336);
        if ( v29 == 6 )
        {
          v33 = a9 != 0;
        }
        else if ( v29 == 5 && (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0 )
        {
          v33 = 2;
        }
        IopDumpCallAddPagesCallbacks(v35);
        IoSaveBugCheckProgress(0x21u);
        MmGetDumpRange((ULONG_PTR)v41);
        v13 = v35;
        IopDumpCallRemovePagesCallbacks(v35);
        IoSaveBugCheckProgress(0x22u);
        *(_QWORD *)(v28 + 40) = RtlNumberOfSetBitsEx(&v32);
      }
      v30 = ((__int64 (__fastcall *)(__int64, __int64))qword_140389FE8)(CrashdmpDumpBlock, a8);
      if ( v30 == -1073741267 )
      {
        if ( *(_QWORD *)(CrashdmpDumpBlock + 1328) )
        {
          *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x400u;
          IoUpdateBugCheckProgressEnvVariable();
          *(_QWORD *)((char *)&v32 + 4) = 0LL;
          IopUpdateMinidumpContext(v13, v40, v39, v37, a5, (__int64)a6);
          MmSnapTriageDumpInformation(a6, v42);
          *(_QWORD *)&v32 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
          *((_QWORD *)&v32 + 1) = &IopTriageDumpDataBlocks;
          v30 = IoFillTriageDumpBuffer(
                  0x3E000u,
                  *(__int64 **)(CrashdmpDumpBlock + 1328),
                  1,
                  3583,
                  0LL,
                  (__int64)a6,
                  v38,
                  v31,
                  65,
                  1u,
                  (__int64)&v32,
                  (__int64)&v32,
                  &v36);
          if ( v30 >= 0 )
          {
            v30 = ((__int64 (__fastcall *)(__int64, __int64))qword_140389FE8)(CrashdmpDumpBlock, a8);
            IoSaveBugCheckProgress(0x23u);
          }
        }
      }
      if ( (DumpPolicyAttemptOffline & 1) != 0 && v30 < 0 || (DumpPolicyAttemptOffline & 2) != 0 && !v18 )
      {
        IoSaveBugCheckProgress(0x24u);
        if ( ((int (__fastcall *)(_QWORD))off_140353618[0])(0LL) >= 0 )
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
      else if ( v30 >= 0 )
      {
        if ( v18 != 1 )
        {
          if ( *(_QWORD *)(CrashdmpDumpBlock + 1360) )
          {
            IoSetBugCheckProgressAndFlag();
            v30 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
            if ( CrashdmpDumpBlock )
            {
              *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x10000000u;
              IoUpdateBugCheckProgressEnvVariable();
            }
          }
        }
        return v30 >= 0;
      }
    }
  }
  return v9;
}
