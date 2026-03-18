/*
 * XREFs of ExCreateHandleEx @ 0x1404B7560
 * Callers:
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x14052FF14 (NtCreateJobObject.c)
 *     ObCompleteObjectDuplication @ 0x14055DE6C (ObCompleteObjectDuplication.c)
 *     AlpcpAllocateMessageFunction @ 0x14056D500 (AlpcpAllocateMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x140571CA4 (RtlpInsertStringAtom.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140747D60 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExpAllocateHandleTableEntry @ 0x1404B7650 (ExpAllocateHandleTableEntry.c)
 *     ExpFreeHandleTableEntry @ 0x1405120A0 (ExpFreeHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x1407BD530 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1407BD7BC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // r8d
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a3 & 0x1FFFFFF;
  HIDWORD(v13) = 0;
  if ( (a4 & 8) != 0 )
    v6 |= 0x2000000u;
  v8 = (a2 << 16) ^ ((a4 << 17) ^ ((_DWORD)a2 << 16)) & 0xE0000 | 1;
  --CurrentThread->KernelApcDisable;
  LODWORD(v13) = v6;
  v14 = 0LL;
  v9 = ExpAllocateHandleTableEntry(a1, &v14);
  v10 = v14;
  v11 = (_QWORD *)v9;
  if ( v9 )
  {
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v14) )
    {
      ExpFreeHandleTableEntry(a1, v10, v11);
      v10 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v10, 1LL);
      v11[1] = v13;
      *v11 = v8;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v10;
}
