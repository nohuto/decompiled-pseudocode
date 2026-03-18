/*
 * XREFs of ExpCovQueryInformation @ 0x14071F96C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquirePushLockExclusive @ 0x1400FDC50 (ExfAcquirePushLockExclusive.c)
 *     ExfAcquirePushLockShared @ 0x1400FE060 (ExfAcquirePushLockShared.c)
 *     ExfReleasePushLock @ 0x1401125C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmEnumerateSystemImages @ 0x1404B0CF8 (MmEnumerateSystemImages.c)
 *     RtlDuplicateUnicodeString @ 0x1404C17D0 (RtlDuplicateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x14071F504 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovIsUnLoadedModulePresent @ 0x14071F6B8 (ExpCovIsUnLoadedModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x14071F6EC (ExpCovQueryHypervisorInformation.c)
 *     ExpCovReadRequestBuffer @ 0x14072007C (ExpCovReadRequestBuffer.c)
 */

__int64 __fastcall ExpCovQueryInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  SIZE_T v3; // rsi
  char *PoolWithTag; // r14
  __int64 v6; // rax
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ecx
  char *v10; // rsi
  unsigned __int64 v11; // r15
  void *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r12d
  __int64 v16; // r12
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  unsigned int v19; // edx
  void *v20; // rax
  int v21; // [rsp+20h] [rbp-138h]
  unsigned int v22; // [rsp+24h] [rbp-134h]
  int v23; // [rsp+28h] [rbp-130h] BYREF
  char *v24; // [rsp+30h] [rbp-128h]
  unsigned __int64 v25; // [rsp+38h] [rbp-120h]
  unsigned int v26; // [rsp+40h] [rbp-118h]
  UNICODE_STRING StringIn; // [rsp+48h] [rbp-110h] BYREF
  unsigned int *v28; // [rsp+58h] [rbp-100h]
  void *v29; // [rsp+60h] [rbp-F8h]
  _QWORD *v30; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v31; // [rsp+70h] [rbp-E8h]
  char *v32; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v33; // [rsp+88h] [rbp-D0h]
  bool v34; // [rsp+8Ch] [rbp-CCh]
  UNICODE_STRING StringOut; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-B8h]
  int v37; // [rsp+B0h] [rbp-A8h]
  int v38; // [rsp+B4h] [rbp-A4h]
  unsigned int v39; // [rsp+B8h] [rbp-A0h]
  _OWORD v40[4]; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v41; // [rsp+100h] [rbp-58h] BYREF

  v28 = a3;
  v3 = a2;
  v26 = a2;
  v31 = a1;
  StringIn.Buffer = 0LL;
  StringIn.Length = 0;
  StringOut.Buffer = 0LL;
  PoolWithTag = 0LL;
  StringOut.Length = 0;
  v38 = 0;
  v39 = 64;
  v33 = a2;
  if ( !ExCovMaxPagedPoolToUse )
    return 3221225506LL;
  if ( a3 )
    *a3 = 64;
  if ( a2 < 0x40 )
    return 3221225476LL;
  v25 = a1 + 32;
  v6 = a1;
  if ( a1 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  v40[0] = *(_OWORD *)v6;
  v40[1] = *(_OWORD *)(v6 + 16);
  v40[2] = *(_OWORD *)(v6 + 32);
  v40[3] = *(_OWORD *)(v6 + 48);
  v34 = LODWORD(v40[0]) == 1;
  v7 = ExpCovReadRequestBuffer((char *)v40 + 8, &StringIn, &v41, &v23);
  if ( v7 >= 0 )
  {
    v37 = v23;
    v36 = v41;
    if ( !StringIn.Buffer || (v7 = RtlDuplicateUnicodeString(1u, &StringIn, &StringOut), v7 >= 0) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72766F43u);
      v24 = PoolWithTag;
      v32 = PoolWithTag;
      if ( PoolWithTag )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v7 = MmEnumerateSystemImages((__int64 (__fastcall *)(PVOID *, __int64))ExpCovQueryInfoCallBack, (__int64)&v32);
        if ( v7 >= 0 )
        {
          ExpCovQueryHypervisorInformation((__int64 *)&v32);
          v22 = v39;
          v9 = v38;
          v21 = v38;
          if ( (unsigned int)v3 >= v39 && (unsigned int)((v32 - PoolWithTag) >> 5) )
          {
            v10 = PoolWithTag;
            v11 = v25;
            while ( v9 )
            {
              v12 = (void *)(*((unsigned int *)v10 + 6) + v11 + 32);
              *(_DWORD *)v11 = *(_DWORD *)v10;
              *(_DWORD *)(v11 + 4) = *((_DWORD *)v10 + 1);
              *(_DWORD *)(v11 + 24) = *((_DWORD *)v10 + 6);
              memmove((void *)(v11 + 28), v10 + 28, *((unsigned int *)v10 + 6));
              *(_WORD *)(v11 + 8) = *((_WORD *)v10 + 4);
              *(_WORD *)(v11 + 10) = *((_WORD *)v10 + 5);
              *(_QWORD *)(v11 + 16) = v12;
              memmove(v12, *((const void **)v10 + 2), *((unsigned __int16 *)v10 + 4));
              v13 = *(unsigned int *)v10;
              v11 += v13;
              v25 = v11;
              v10 += v13;
              v9 = --v38;
            }
          }
          else
          {
            if ( (unsigned int)v3 < v39 )
              v7 = -1073741820;
            v11 = v25;
          }
          if ( LODWORD(v40[0]) == 1 )
            ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
          else
            ExfAcquirePushLockShared((__int64)&ExpCovPushLock);
          v14 = ExpCovUnloadedModuleList;
LABEL_29:
          v15 = v21;
          while ( (__int64 *)v14 != &ExpCovUnloadedModuleList )
          {
            v30 = (_QWORD *)v14;
            v16 = *(_QWORD *)(v14 + 56);
            if ( !v16 || !ExpCovIsUnLoadedModulePresent(v14, v23, &StringIn, &v41) )
              goto LABEL_32;
            v17 = *(_DWORD *)(v14 + 48);
            if ( LODWORD(v40[0]) != 1 )
              v17 -= *(_DWORD *)(v16 + 28);
            if ( v17 >= 0xFFFFFFE0 || (v18 = *(unsigned __int16 *)(v14 + 32) + v17 + 32, v18 < 0x20) )
              v18 = -1;
            v19 = v18 + v22;
            if ( v18 + v22 < v22 )
            {
              DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n");
LABEL_32:
              v14 = *(_QWORD *)v14;
              goto LABEL_29;
            }
            v22 += v18;
            if ( v26 >= v19 )
            {
              v29 = (void *)(v17 + v11 + 32);
              *(_DWORD *)v11 = v18;
              *(_DWORD *)(v11 + 4) = 0;
              *(_DWORD *)(v11 + 24) = v17;
              memmove((void *)(v11 + 28), *(const void **)(v14 + 56), v17);
              *(_WORD *)(v11 + 8) = *(_WORD *)(v14 + 32);
              *(_WORD *)(v11 + 10) = *(_WORD *)(v14 + 32);
              v20 = v29;
              *(_QWORD *)(v11 + 16) = v29;
              memmove(v20, *(const void **)(v14 + 40), *(unsigned __int16 *)(v14 + 32));
              v11 += v18;
              v25 = v11;
              if ( LODWORD(v40[0]) == 1 )
              {
                v14 = *(_QWORD *)(v14 + 8);
                ExpCovDeleteUnloadedModuleEntry(v30);
              }
            }
            else
            {
              if ( v28 )
                *v28 = v19;
              v7 = -1073741820;
            }
            v15 = ++v21;
            v14 = *(_QWORD *)v14;
          }
          ExfReleasePushLock(&ExpCovPushLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v28 )
            *v28 = v22;
          *(_DWORD *)(v31 + 4) = v15;
        }
        else
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  if ( StringIn.Buffer )
    RtlFreeUnicodeString(&StringIn);
  if ( StringOut.Buffer )
    RtlFreeUnicodeString(&StringOut);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x72766F43u);
  return (unsigned int)v7;
}
