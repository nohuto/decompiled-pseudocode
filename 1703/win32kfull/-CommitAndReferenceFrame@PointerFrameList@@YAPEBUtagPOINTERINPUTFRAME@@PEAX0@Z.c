/*
 * XREFs of ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C0198870
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01CA88C (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C0198A7C (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C0198BC0 (-CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ @ 0x1C0198EC4 (-CommitTPInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@XZ.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199818 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199B78 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C019A274 (-SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C019A2D0 (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     IsTouchpadDevice @ 0x1C01B0D1C (IsTouchpadDevice.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6964 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

const struct tagPOINTERINPUTFRAME *__fastcall PointerFrameList::CommitAndReferenceFrame(
        PointerFrameList *this,
        void *a2,
        void *a3)
{
  __int64 v3; // rsi
  const struct tagPOINTERINPUTFRAME *result; // rax
  const struct tagPOINTERINPUTFRAME *v6; // rdi
  struct tagPOINTERINPUTFRAME *PreviousFrameByDeviceInt; // rax
  const struct tagPOINTERINPUTFRAME *v8; // rbx
  unsigned int v9; // ebp
  struct tagPOINTERINFONODE *i; // r14
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // rbp
  const struct tagPOINTERINFONODE *v16; // rcx
  unsigned __int64 v17; // rdx
  struct tagPOINTERQFRAME *v18; // rax
  unsigned int v19; // ebx
  struct tagPOINTERINPUTFRAME *FrameById; // rax
  _QWORD v21[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v22[4]; // [rsp+38h] [rbp-20h] BYREF

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
  v6 = result;
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)result + 9);
    PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(result);
    v8 = PreviousFrameByDeviceInt;
    if ( PreviousFrameByDeviceInt )
      _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 9);
    *((_DWORD *)v6 + 18) |= 1u;
    PushW32ThreadLock((__int64)v6, v22, (__int64)DereferencePointerInputFrameAndMessageData);
    if ( v8 )
      PushW32ThreadLock((__int64)v8, v21, (__int64)DereferencePointerInputFrame);
    v9 = 0;
    for ( i = (struct tagPOINTERINFONODE *)*((_QWORD *)v6 + 11);
          v9 < *((_DWORD *)v6 + 10);
          i = (struct tagPOINTERINFONODE *)((char *)i + 216) )
    {
      if ( !PopulatePointerInfoNode(v6, i) )
      {
        v11 = *((_QWORD *)v6 + 11) + 216LL * v9;
        *(_DWORD *)v11 |= 0x2000u;
        *(_QWORD *)(v11 + 16) = 0LL;
        ++*((_DWORD *)v6 + 11);
      }
      ++v9;
    }
    if ( v8 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v21[0];
    }
    v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v14 = 0;
    *(_QWORD *)(v13 + 16) = v22[0];
    *((_DWORD *)v6 + 18) &= ~1u;
    v15 = *((_QWORD *)v6 + 11);
    if ( *((_DWORD *)v6 + 10) )
    {
      do
      {
        if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v15) )
        {
          if ( (unsigned int)IsManipulationThreadNode(v16) )
            v17 = -1LL;
          else
            v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gpKernelHandleTable
                                                    + 16LL * (unsigned __int16)*(_DWORD *)(v15 + 80))
                                        + 16LL)
                            + 384LL);
          v18 = SetupQFrame(v6, v17, v8 != 0LL);
          *(_DWORD *)(v15 + 8) = *(_DWORD *)v18;
          ++*((_DWORD *)v18 + 4);
          ProcessQFrameNode(v18, v8, (struct tagPOINTERINFONODE *)v15);
        }
        ++v14;
        v15 += 216LL;
      }
      while ( v14 < *((_DWORD *)v6 + 10) );
    }
    TryCoalesceQFrame(v6, v8, 0LL);
    EtwTraceEndPointerFrameCommit(*((unsigned int *)v6 + 8), *((unsigned int *)v6 + 10));
    EtwTraceEndPointerFrameCreation(*((unsigned int *)v6 + 8), *((unsigned int *)v6 + 10), 0LL);
    if ( v8 )
      UnreferenceFrameInt(v8);
    v19 = *((_DWORD *)v6 + 8);
    UnreferenceFrameInt(v6);
    FrameById = FindFrameById(v19);
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 9);
      return FrameById;
    }
    return (const struct tagPOINTERINPUTFRAME *)v3;
  }
  return result;
}
