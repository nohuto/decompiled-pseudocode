/*
 * XREFs of ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01CECD0 (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01A45D4 (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01A4718 (-CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ @ 0x1C01A4A24 (-CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4CF4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A53D8 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A579C (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C01A5EA0 (-SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C01A5EFC (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     IsTouchpadDevice @ 0x1C01B410C (IsTouchpadDevice.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB660 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

const struct tagPOINTERINPUTFRAME *__fastcall PointerFrameList::CommitAndReferenceFrame(
        PointerFrameList *this,
        void *a2,
        void *a3)
{
  __int64 v3; // rsi
  const struct tagPOINTERINPUTFRAME *result; // rax
  __int64 v6; // r9
  const struct tagPOINTERINPUTFRAME *v7; // rdi
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  struct tagPOINTERINFONODE *i; // r14
  __int64 v15; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rbp
  const struct tagPOINTERINFONODE *v20; // rcx
  unsigned __int64 v21; // rdx
  struct tagPOINTERQFRAME *v22; // rax
  unsigned int v23; // ebx
  struct tagPOINTERINPUTFRAME *FrameById; // rax
  _QWORD v25[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v26[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0LL;
  if ( a2 )
  {
    result = CommitRimCompleteFrame(a2);
  }
  else if ( (unsigned int)IsTouchpadDevice(this, 0LL, a3) )
  {
    result = CommitTPInputFrame();
  }
  else
  {
    result = CommitHoldingFrame(this);
  }
  v7 = result;
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)result + 9);
    v8 = *(struct _LIST_ENTRY **)result;
    if ( *(struct _LIST_ENTRY **)v7 == &gFrameListHead )
      goto LABEL_13;
    do
    {
      v9 = (__int64)v8;
      if ( v8[3].Blink == (struct _LIST_ENTRY *)*((_QWORD *)v7 + 7) )
        break;
      v8 = v8->Flink;
    }
    while ( v8 != &gFrameListHead );
    if ( v8 == &gFrameListHead || *(_DWORD *)(v9 + 44) == *(_DWORD *)(v9 + 40) )
LABEL_13:
      v9 = 0LL;
    else
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 36));
    *((_DWORD *)v7 + 18) |= 1u;
    PushW32ThreadLock((__int64)v7, v26, (__int64)DereferencePointerInputFrameAndMessageData, v6);
    if ( v9 )
      PushW32ThreadLock(v9, v25, (__int64)DereferencePointerInputFrame, v12);
    v13 = 0;
    for ( i = (struct tagPOINTERINFONODE *)*((_QWORD *)v7 + 11);
          v13 < *((_DWORD *)v7 + 10);
          i = (struct tagPOINTERINFONODE *)((char *)i + 216) )
    {
      if ( !PopulatePointerInfoNode(v7, i) )
      {
        v15 = *((_QWORD *)v7 + 11) + 216LL * v13;
        *(_DWORD *)v15 |= 0x2000u;
        *(_QWORD *)(v15 + 16) = 0LL;
        ++*((_DWORD *)v7 + 11);
      }
      ++v13;
    }
    if ( v9 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
      *(_QWORD *)(ThreadWin32Thread + 16) = v25[0];
    }
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
    v18 = 0;
    *(_QWORD *)(v17 + 16) = v26[0];
    *((_DWORD *)v7 + 18) &= ~1u;
    v19 = *((_QWORD *)v7 + 11);
    if ( *((_DWORD *)v7 + 10) )
    {
      do
      {
        if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v19) )
        {
          if ( (unsigned int)IsManipulationThreadNode(v20) )
            v21 = -1LL;
          else
            v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gpKernelHandleTable
                                                    + 24LL * (unsigned __int16)*(_DWORD *)(v19 + 80))
                                        + 16LL)
                            + 408LL);
          v22 = SetupQFrame(v7, v21, v9 != 0);
          *(_DWORD *)(v19 + 8) = *(_DWORD *)v22;
          ++*((_DWORD *)v22 + 4);
          ProcessQFrameNode(v22, (const struct tagPOINTERINPUTFRAME *)v9, (struct tagPOINTERINFONODE *)v19);
        }
        ++v18;
        v19 += 216LL;
      }
      while ( v18 < *((_DWORD *)v7 + 10) );
    }
    TryCoalesceQFrame(v7, (const struct tagPOINTERINPUTFRAME *)v9, 0LL);
    EtwTraceEndPointerFrameCommit(*((unsigned int *)v7 + 8), *((unsigned int *)v7 + 10));
    EtwTraceEndPointerFrameCreation(*((unsigned int *)v7 + 8), *((unsigned int *)v7 + 10), 0LL);
    if ( v9 )
      UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v9);
    v23 = *((_DWORD *)v7 + 8);
    UnreferenceFrameInt(v7);
    FrameById = FindFrameById(v23);
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 9);
      return FrameById;
    }
    return (const struct tagPOINTERINPUTFRAME *)v3;
  }
  return result;
}
