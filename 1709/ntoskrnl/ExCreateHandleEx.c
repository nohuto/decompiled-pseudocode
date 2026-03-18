/*
 * XREFs of ExCreateHandleEx @ 0x140507F60
 * Callers:
 *     RtlpInsertStringAtom @ 0x140489C88 (RtlpInsertStringAtom.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     ObCompleteObjectDuplication @ 0x140506594 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 *     NtCreateJobObject @ 0x14050B45C (NtCreateJobObject.c)
 *     AlpcpAllocateMessageFunction @ 0x14057E560 (AlpcpAllocateMessageFunction.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406DD040 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExpFreeHandleTableEntry @ 0x1404FBF0C (ExpFreeHandleTableEntry.c)
 *     ExpAllocateHandleTableEntry @ 0x140508060 (ExpAllocateHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x140756A98 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x140756D18 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  __int64 v12; // r9
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  HIDWORD(v13) = 0;
  if ( (a4 & 8) != 0 )
    LODWORD(v13) = a3 & 0x1FFFFFF | 0x2000000;
  else
    LODWORD(v13) = a3 & 0x1FFFFFF;
  CurrentThread = KeGetCurrentThread();
  v7 = (((_DWORD)a2 << 16) ^ (a4 << 17)) & 0xE0000 ^ (unsigned __int64)(a2 << 16) | 1;
  --CurrentThread->KernelApcDisable;
  v14 = 0LL;
  v8 = ExpAllocateHandleTableEntry(a1, &v14);
  v9 = v14;
  v10 = (_QWORD *)v8;
  if ( v8 )
  {
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v14, a5) )
    {
      ExpFreeHandleTableEntry(a1, v9, (__int64)v10, v12);
      v9 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v9, 1LL);
      v10[1] = v13;
      *v10 = v7;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v9;
}
