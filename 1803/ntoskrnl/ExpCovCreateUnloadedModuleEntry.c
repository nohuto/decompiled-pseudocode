/*
 * XREFs of ExpCovCreateUnloadedModuleEntry @ 0x1407C63F0
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x140605DE0 (ExCovReadjustUnloadedModuleEntry.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x140008AD0 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x140518E60 (RtlDuplicateUnicodeString.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x1407C66EC (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovReadFriendlyName @ 0x1407C7168 (ExpCovReadFriendlyName.c)
 */

void __fastcall ExpCovCreateUnloadedModuleEntry(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID PoolWithTag; // rax
  __int64 v12; // rsi
  PVOID v13; // rax
  __int64 *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // r9
  UNICODE_STRING StringIn; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF

  v1 = a1 + 72;
  v3 = *(_QWORD *)(a1 + 128);
  StringIn.Buffer = 0LL;
  *(_DWORD *)&StringIn.Length = 0;
  if ( (int)ExpCovReadFriendlyName(v3, v1, &StringIn) < 0 )
  {
    DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
    return;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
  if ( ExpCovCurrentPagedPoolInUse + 64 < (unsigned int)ExpCovCurrentPagedPoolInUse
    || (v5 = StringIn.Length + ExpCovCurrentPagedPoolInUse + 64, v5 < ExpCovCurrentPagedPoolInUse)
    || v5 == -1 )
  {
    v16 = a1 + 88;
  }
  else
  {
    v6 = StringIn.Length + v5;
    if ( v6 >= v5 )
    {
      v7 = *(_DWORD *)(a1 + 124) + v6;
      if ( v7 >= v5 && v7 != -1 )
      {
        if ( v7 <= ExCovMaxPagedPoolToUse )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x72766F43u);
          v12 = (__int64)PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_21;
          memset(PoolWithTag, 0, 0x40uLL);
          if ( RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(v12 + 32)) < 0 )
            goto LABEL_21;
          if ( StringIn.Buffer )
            RtlFreeAnsiString(&StringIn);
          if ( (int)ExpCovReadFriendlyName(*(_QWORD *)(a1 + 128), a1 + 88, &StringIn) >= 0
            && RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(v12 + 16)) >= 0
            && (*(_DWORD *)(v12 + 48) = *(_DWORD *)(a1 + 124),
                v13 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 124), 0x72766F43u),
                (*(_QWORD *)(v12 + 56) = v13) != 0LL) )
          {
            memset(v13, 0, *(unsigned int *)(a1 + 124));
            memmove(*(void **)(v12 + 56), *(const void **)(a1 + 128), *(unsigned int *)(a1 + 124));
            v14 = (__int64 *)qword_14039E4E8;
            if ( *(__int64 **)qword_14039E4E8 != &ExpCovUnloadedModuleList )
              __fastfail(3u);
            *(_QWORD *)v12 = &ExpCovUnloadedModuleList;
            *(_QWORD *)(v12 + 8) = v14;
            *v14 = v12;
            qword_14039E4E8 = v12;
            v15 = *(_OWORD *)(a1 + 88);
            ExpCovCurrentPagedPoolInUse = v7;
            v18 = v15;
            DbgPrintEx(0x7Eu, 2u, "COV: Entry created for %wZ in ExpCovUnloadedModuleList\n", &v18);
          }
          else
          {
LABEL_21:
            DbgPrintEx(0x7Eu, 0, "COV: Allocation failure. Data for %wZ may be lost\n", a1 + 88);
            ExpCovFreeUnloadedModuleEntry((PVOID)v12);
          }
        }
        else
        {
          DbgPrintEx(0x7Eu, 2u, "COV: Max paged pool size (%u) reached, coverage lost for %wZ\n");
        }
        goto LABEL_25;
      }
    }
    v16 = v1;
  }
  DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating paged pool size for %wZ\n", v16);
LABEL_25:
  ExfReleasePushLock(&ExpCovPushLock, v8, v9, v10);
  KeLeaveCriticalRegion();
  if ( StringIn.Buffer )
    RtlFreeAnsiString(&StringIn);
}
