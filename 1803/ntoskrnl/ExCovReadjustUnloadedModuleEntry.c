/*
 * XREFs of ExCovReadjustUnloadedModuleEntry @ 0x140605DE0
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x1405F8E14 (MiConstructLoaderEntry.c)
 * Callees:
 *     ExfAcquirePushLockExclusive @ 0x140008AD0 (ExfAcquirePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1407C63F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovDeleteUnloadedModuleEntry @ 0x1407C6674 (ExpCovDeleteUnloadedModuleEntry.c)
 *     ExpCovReadFriendlyName @ 0x1407C7168 (ExpCovReadFriendlyName.c)
 */

void __fastcall ExCovReadjustUnloadedModuleEntry(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  bool v9; // si
  __int64 v10; // rbx
  _DWORD *v11; // rdi
  _DWORD *v12; // r14
  SIZE_T v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
  {
    CurrentThread = KeGetCurrentThread();
    String2.Buffer = 0LL;
    *(_DWORD *)&String2.Length = 0;
    --CurrentThread->KernelApcDisable;
    ExfAcquirePushLockExclusive((__int64)&ExpCovPushLock);
    v8 = ExpCovUnloadedModuleList;
    v9 = 0;
    if ( (__int64 *)ExpCovUnloadedModuleList != &ExpCovUnloadedModuleList )
    {
      while ( 1 )
      {
        v10 = v8;
        if ( (int)ExpCovReadFriendlyName(*(_QWORD *)(a1 + 128), a1 + 72, &String2) >= 0
          && !RtlCompareUnicodeString((PCUNICODE_STRING)(v8 + 32), &String2, 1u) )
        {
          break;
        }
        if ( String2.Buffer )
          RtlFreeAnsiString(&String2);
        v8 = *(_QWORD *)v8;
        if ( (__int64 *)v8 == &ExpCovUnloadedModuleList )
          goto LABEL_8;
      }
      if ( String2.Buffer )
        RtlFreeAnsiString(&String2);
LABEL_8:
      if ( v10 && (__int64 *)v8 != &ExpCovUnloadedModuleList )
      {
        v11 = *(_DWORD **)(v10 + 56);
        v12 = *(_DWORD **)(a1 + 128);
        if ( v12[1] == v11[1] && v12[6] == v11[6] && v12[7] == v11[7] )
        {
          v13 = RtlCompareMemory(v12 + 2, v11 + 2, 0x10uLL);
          v14 = v10 + 16;
          if ( v13 == 16 )
          {
            DbgPrintEx(0x7Eu, 2u, "COV: Entry for same versioned %wZ found\n", v14, *(_QWORD *)&String2.Length);
            v15 = *(_QWORD *)(a1 + 128) + (unsigned int)v12[8];
            v7 = *(_QWORD *)(v10 + 56) + (unsigned int)v11[8];
            if ( a2 )
            {
              memmove(
                (void *)(*(_QWORD *)(a1 + 128) + (unsigned int)v12[8]),
                (const void *)(*(_QWORD *)(v10 + 56) + (unsigned int)v11[8]),
                (unsigned int)v12[7]);
              ExpCovDeleteUnloadedModuleEntry(v10);
            }
            else
            {
              v5 = 0LL;
              if ( (v11[7] & 0xFFFFFFFC) != 0 )
              {
                do
                {
                  _InterlockedOr(
                    (volatile signed __int32 *)(v7 + 4LL * (unsigned int)v5),
                    *(_DWORD *)(v15 + 4LL * (unsigned int)v5));
                  v5 = (unsigned int)(v5 + 1);
                }
                while ( (unsigned int)v5 < v11[7] >> 2 );
              }
            }
            goto LABEL_27;
          }
        }
        else
        {
          v14 = v10 + 16;
        }
        DbgPrintEx(0x7Eu, 2u, "COV: Entry for different versioned %wZ found\n", v14, *(_QWORD *)&String2.Length);
        ExpCovDeleteUnloadedModuleEntry(v10);
        if ( !a2 )
          v9 = 1;
        goto LABEL_27;
      }
    }
    v9 = a2 == 0;
LABEL_27:
    ExfReleasePushLock(&ExpCovPushLock, v5, v6, v7);
    KeLeaveCriticalRegion();
    if ( v9 )
      ExpCovCreateUnloadedModuleEntry(a1);
  }
}
