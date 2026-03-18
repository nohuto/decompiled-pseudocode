/*
 * XREFs of ObSetHandleAttributes @ 0x140560C10
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ObpIsKernelHandle @ 0x14003EC88 (ObpIsKernelHandle.c)
 *     ExSetHandleAttributes @ 0x1400BA820 (ExSetHandleAttributes.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1404B7800 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  __int64 v4; // rbx
  char v5; // r14
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rsi
  struct _KTHREAD *v9; // rbp
  __int64 *v10; // rax
  volatile signed __int64 *v11; // r10
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // ebx
  signed __int32 v16[8]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v17[48]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a1;
  v5 = 0;
  v6 = !ObpIsKernelHandle(a1, a3);
  CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    v8 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v4 ^= 0xFFFFFFFF80000000uLL;
    v8 = ObpKernelHandleTable;
    if ( CurrentThread->ApcState.Process != PsInitialSystemProcess )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v17);
      v5 = 1;
    }
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v10 = ExMapHandleToPointer(v8, v4);
  v11 = v10;
  if ( v10 )
  {
    v12 = (*v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( !*a2
      || (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v12 + 24) ^ (unsigned __int64)BYTE1(v12)]
                    + 72) & 2) == 0 )
    {
      v13 = (*a2 != 0 ? 2 : 0) | 1;
      if ( !a2[1] )
        v13 = *a2 != 0 ? 2 : 0;
      ExSetHandleAttributes((__int64)v11, v13, 3);
    }
    _InterlockedExchangeAdd64(v11, 1uLL);
    _InterlockedOr(v16, 0);
    if ( *(_QWORD *)(v8 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
    v14 = 0;
  }
  else
  {
    v14 = -1073741790;
  }
  KeLeaveCriticalRegionThread((__int64)v9);
  if ( v5 )
    KiUnstackDetachProcess((__int64)v17, 0LL);
  return v14;
}
