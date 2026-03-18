/*
 * XREFs of ObSetHandleAttributes @ 0x14043EA90
 * Callers:
 *     <none>
 * Callees:
 *     ExSetHandleAttributes @ 0x140022AF8 (ExSetHandleAttributes.c)
 *     ObpIsKernelHandle @ 0x14008BBC0 (ObpIsKernelHandle.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObSetHandleAttributes(unsigned __int64 a1, _BYTE *a2, char a3)
{
  unsigned __int64 v4; // rbx
  char v5; // r14
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rsi
  struct _KTHREAD *v9; // rbp
  __int64 *v10; // rax
  volatile signed __int64 *v11; // r10
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // ebx
  signed __int32 v16[8]; // [rsp+0h] [rbp-78h] BYREF
  $5BC46E0569261879018906DEC3127961 v17; // [rsp+20h] [rbp-58h] BYREF

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
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v17);
      v5 = 1;
    }
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v10 = (__int64 *)ExMapHandleToPointer(v8, v4);
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
  KiLeaveCriticalRegionUnsafe((__int64)v9);
  if ( v5 )
    KiUnstackDetachProcess(&v17, 0LL);
  return v14;
}
