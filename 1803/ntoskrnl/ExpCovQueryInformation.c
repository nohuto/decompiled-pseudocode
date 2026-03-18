/*
 * XREFs of ExpCovQueryInformation @ 0x1407C6ADC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfAcquirePushLockShared @ 0x140008770 (ExfAcquirePushLockShared.c)
 *     ExfAcquirePushLockExclusive @ 0x140008AD0 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x140518E60 (RtlDuplicateUnicodeString.c)
 *     MmEnumerateSystemImages @ 0x14062991C (MmEnumerateSystemImages.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1407C6674 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x1407C6828 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1407C685C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1407C71F0 (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovQueryInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  SIZE_T v3; // rsi
  char *PoolWithTag; // r14
  __int64 v6; // rax
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // r15
  void *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  int v18; // r12d
  __int64 v19; // r12
  unsigned int v20; // ecx
  unsigned int v21; // r12d
  void *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-138h]
  int v24; // [rsp+28h] [rbp-130h] BYREF
  char *v25; // [rsp+30h] [rbp-128h]
  unsigned __int64 v26; // [rsp+38h] [rbp-120h]
  unsigned int v27; // [rsp+40h] [rbp-118h]
  UNICODE_STRING StringIn; // [rsp+48h] [rbp-110h] BYREF
  _DWORD *v29; // [rsp+58h] [rbp-100h]
  void *v30; // [rsp+60h] [rbp-F8h]
  _QWORD *v31; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v32; // [rsp+70h] [rbp-E8h]
  char *v33; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v34; // [rsp+88h] [rbp-D0h]
  bool v35; // [rsp+8Ch] [rbp-CCh]
  UNICODE_STRING StringOut; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-B8h]
  int v38; // [rsp+B0h] [rbp-A8h]
  __int64 v39; // [rsp+B4h] [rbp-A4h]
  _OWORD v40[4]; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v41; // [rsp+100h] [rbp-58h] BYREF

  v29 = a3;
  v3 = a2;
  v27 = a2;
  v32 = a1;
  StringIn.Buffer = 0LL;
  StringIn.Length = 0;
  StringOut.Buffer = 0LL;
  PoolWithTag = 0LL;
  StringOut.Length = 0;
  v39 = 0x4000000000LL;
  v34 = a2;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a3 )
    *a3 = 64;
  if ( a2 < 0x40 )
    return 3221225476LL;
  v26 = a1 + 32;
  v6 = a1;
  if ( a1 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  v40[0] = *(_OWORD *)v6;
  v40[1] = *(_OWORD *)(v6 + 16);
  v40[2] = *(_OWORD *)(v6 + 32);
  v40[3] = *(_OWORD *)(v6 + 48);
  v35 = LODWORD(v40[0]) == 1;
  v7 = ExpCovReadRequestBuffer((char *)v40 + 8, &StringIn, &v41, &v24);
  if ( v7 >= 0 )
  {
    v38 = v24;
    v37 = v41;
    if ( !StringIn.Buffer || (v7 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut), v7 >= 0) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72766F43u);
      v25 = PoolWithTag;
      v33 = PoolWithTag;
      if ( PoolWithTag )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v7 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovQueryInfoCallBack, (__int64)&v33);
        if ( v7 >= 0 )
        {
          ExpCovQueryHypervisorInformation((__int64 *)&v33);
          v23 = v39;
          if ( (unsigned int)v3 >= HIDWORD(v39) && (unsigned int)((v33 - PoolWithTag) >> 5) )
          {
            v9 = PoolWithTag;
            v10 = v39;
            v11 = v26;
            while ( v10 )
            {
              v12 = (void *)(*((unsigned int *)v9 + 6) + v11 + 32);
              *(_DWORD *)v11 = *(_DWORD *)v9;
              *(_DWORD *)(v11 + 4) = *((_DWORD *)v9 + 1);
              *(_DWORD *)(v11 + 24) = *((_DWORD *)v9 + 6);
              memmove((void *)(v11 + 28), v9 + 28, *((unsigned int *)v9 + 6));
              *(_WORD *)(v11 + 8) = *((_WORD *)v9 + 4);
              *(_WORD *)(v11 + 10) = *((_WORD *)v9 + 5);
              *(_QWORD *)(v11 + 16) = v12;
              memmove(v12, *((const void **)v9 + 2), *((unsigned __int16 *)v9 + 4));
              v13 = *(unsigned int *)v9;
              v11 += v13;
              v26 = v11;
              v9 += v13;
              v10 = v39 - 1;
              LODWORD(v39) = v39 - 1;
            }
          }
          else
          {
            if ( (unsigned int)v3 < HIDWORD(v39) )
              v7 = -1073741820;
            v11 = v26;
          }
          if ( LODWORD(v40[0]) == 1 )
            ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
          else
            ExfAcquirePushLockShared((__int64)&ExpCovPushLock);
          v17 = ExpCovUnloadedModuleList;
LABEL_29:
          v18 = v23;
          while ( (__int64 *)v17 != &ExpCovUnloadedModuleList )
          {
            v31 = (_QWORD *)v17;
            v19 = *(_QWORD *)(v17 + 56);
            if ( !v19 || !ExpCovIsUnLoadedModulePresent(v17, v24, &StringIn, &v41) )
              goto LABEL_32;
            v20 = *(_DWORD *)(v17 + 48);
            if ( LODWORD(v40[0]) != 1 )
              v20 -= *(_DWORD *)(v19 + 28);
            if ( v20 >= 0xFFFFFFE0 || (v16 = v17 + 32, v21 = *(unsigned __int16 *)(v17 + 32) + v20 + 32, v21 < 0x20) )
              v21 = -1;
            v14 = v21 + HIDWORD(v23);
            if ( (unsigned int)v14 < HIDWORD(v23) )
            {
              DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n", v17 + 32, v23);
LABEL_32:
              v17 = *(_QWORD *)v17;
              goto LABEL_29;
            }
            HIDWORD(v23) += v21;
            if ( v27 >= (unsigned int)v14 )
            {
              v30 = (void *)(v20 + v11 + 32);
              *(_DWORD *)v11 = v21;
              *(_DWORD *)(v11 + 4) = 0;
              *(_DWORD *)(v11 + 24) = v20;
              memmove((void *)(v11 + 28), *(const void **)(v17 + 56), v20);
              *(_WORD *)(v11 + 8) = *(_WORD *)(v17 + 32);
              *(_WORD *)(v11 + 10) = *(_WORD *)(v17 + 32);
              v22 = v30;
              *(_QWORD *)(v11 + 16) = v30;
              memmove(v22, *(const void **)(v17 + 40), *(unsigned __int16 *)(v17 + 32));
              v11 += v21;
              v26 = v11;
              if ( LODWORD(v40[0]) == 1 )
              {
                v17 = *(_QWORD *)(v17 + 8);
                ExpCovDeleteUnloadedModuleEntry(v31);
              }
            }
            else
            {
              if ( v29 )
                *v29 = v14;
              v7 = -1073741820;
            }
            v18 = v23 + 1;
            LODWORD(v23) = v23 + 1;
            v17 = *(_QWORD *)v17;
          }
          ExfReleasePushLock(&ExpCovPushLock, v14, v15, v16);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v29 )
            *v29 = HIDWORD(v23);
          *(_DWORD *)(v32 + 4) = v18;
        }
        else
        {
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
  if ( StringOut.Buffer )
    RtlFreeAnsiString(&StringOut);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x72766F43u);
  return (unsigned int)v7;
}
