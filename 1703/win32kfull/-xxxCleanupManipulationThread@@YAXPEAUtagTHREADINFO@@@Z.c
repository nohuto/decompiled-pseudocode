/*
 * XREFs of ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0008530
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0008850 (xxxCleanupThreadPointerInputInfo.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0199608 (-GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C0199A80 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6964 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupManipulationThread(struct tagTHREADINFO *a1)
{
  struct tagPOINTERINPUTFRAME *v1; // rbx
  struct tagPOINTERINPUTFRAME *v2; // r13
  __int64 v3; // r15
  __int64 v4; // rbp
  __int64 i; // rdi
  __int64 v6; // r14
  __int64 v7; // rsi
  const struct tagPOINTERINFONODE *v8; // rcx
  struct tagPOINTERINFONODE *v9; // rcx
  struct tagWND *PrevMTNodeTarget; // rax
  __int64 v11; // rax
  __int64 j; // rsi
  __int64 v13; // rbp
  unsigned int v14; // edx
  __int64 k; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD v29[3]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v30[3]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v31[4]; // [rsp+60h] [rbp-48h] BYREF

  if ( (gdwMitConfig & 4) != 0 )
  {
    CTouchProcessor::CleanupManipulationThreadData(gpTouchProcessor);
  }
  else
  {
    v1 = qword_1C0334528;
    while ( v1 != (struct tagPOINTERINPUTFRAME *)&gFrameListHead )
    {
      v2 = v1;
      _InterlockedIncrement((volatile signed __int32 *)v1 + 9);
      v3 = Win32AllocPoolZInit(4LL * *((unsigned int *)v1 + 10), 1851878741LL);
      v4 = 0LL;
      for ( i = Win32AllocPoolZInit(4LL * *((unsigned int *)v1 + 10), 1851878741LL);
            (unsigned int)v4 < *((_DWORD *)v1 + 10);
            v4 = (unsigned int)(v4 + 1) )
      {
        v6 = 216LL * (unsigned int)v4;
        v7 = v6 + *((_QWORD *)v1 + 11);
        if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v7)
          && (unsigned int)IsManipulationThreadNode(v8)
          && (*(_DWORD *)(v7 + 4) & 0x200) == 0 )
        {
          if ( v3 && i && (PrevMTNodeTarget = GetPrevMTNodeTarget(v9, v1)) != 0LL )
          {
            *(_QWORD *)(v7 + 80) = *(_QWORD *)PrevMTNodeTarget;
            *(_DWORD *)(i + 4 * v4) = 1;
          }
          else
          {
            if ( (*(_DWORD *)(v7 + 68) & 0x40000) != 0 )
              ProcessLostCaptureList(
                *(_WORD *)(v7 + 60),
                1,
                v1,
                v4,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            v11 = *((_QWORD *)v1 + 11);
            *(_DWORD *)(v6 + v11) |= 0x2000u;
            *(_QWORD *)(v6 + v11 + 16) = 0LL;
            ++*((_DWORD *)v1 + 11);
          }
        }
      }
      if ( v3 )
      {
        if ( i )
        {
          for ( j = 0LL; (unsigned int)j < *((_DWORD *)v1 + 10); j = (unsigned int)(j + 1) )
          {
            if ( *(_DWORD *)(i + 4 * j) )
            {
              v13 = 0LL;
              v14 = j;
              for ( k = *(_QWORD *)(216LL * (unsigned int)j + *((_QWORD *)v1 + 11) + 80); v14 < *((_DWORD *)v1 + 10); ++v14 )
              {
                v16 = *((_QWORD *)v1 + 11) + 216LL * v14;
                if ( *(_DWORD *)(i + 4LL * v14) && *(_QWORD *)(v16 + 80) == k )
                {
                  *(_DWORD *)(v3 + 4 * v13) = *(unsigned __int16 *)(v16 + 60);
                  v13 = (unsigned int)(v13 + 1);
                  *(_DWORD *)(i + 4LL * v14) = 0;
                }
              }
              PushW32ThreadLock(v3, v31, Win32FreePool);
              PushW32ThreadLock(i, v30, Win32FreePool);
              PushW32ThreadLock(v1, v29, DereferencePointerInputFrame);
              xxxSetManipulationInputTarget(*((_DWORD *)v1 + 8), k, v13, v3, 0LL, 0);
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v17, v18, v19);
              *(_QWORD *)(ThreadWin32Thread + 16) = v29[0];
              v24 = W32GetThreadWin32Thread(KeGetCurrentThread(), v21, v22, v23);
              *(_QWORD *)(v24 + 16) = v30[0];
              v28 = W32GetThreadWin32Thread(KeGetCurrentThread(), v25, v26, v27);
              *(_QWORD *)(v28 + 16) = v31[0];
            }
          }
        }
        Win32FreePool(v3);
      }
      if ( i )
        Win32FreePool(i);
      v1 = (struct tagPOINTERINPUTFRAME *)*((_QWORD *)v1 + 1);
      UnreferenceFrameInt(v2);
    }
  }
  gptiManipulationThread = 0LL;
  glpfnManipulationThreadCallback = 0LL;
}
