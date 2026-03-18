/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01C04B8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C009ECF0 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00C47D0 (DisassociateShellFrameAppThreads.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     zzzAttachThreadInput @ 0x1C00C92D0 (zzzAttachThreadInput.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01B5290 (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v1; // rdi
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  struct _LARGE_STRING *v16; // rdi
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  int v19; // edx
  __int64 v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-58h]
  __int128 v22; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v23[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 51);
  if ( *(_DWORD *)(v1 + 40) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v5 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 464) & 1) == 0 )
      {
        v6 = *(_QWORD *)(ShellFrameThreadFromAssociation + 648);
        if ( !v6 || (*(_DWORD *)(v6 + 196) & 0x100000) == 0 )
        {
          v7 = *(_DWORD *)(v4 + 1184);
          *(_DWORD *)(v4 + 1184) = v7 & 0xFFE7FFFF | 0x100000;
          DisassociateShellFrameAppThreads((struct tagTHREADINFO *)v4);
          v11 = v1 + 24;
          while ( *(_QWORD *)v11 && IsMiPMouseMessage(*(_DWORD *)(*(_QWORD *)v11 + 24LL)) )
          {
            if ( v8 == *(_QWORD *)(v1 + 72) )
              *(_QWORD *)(v1 + 72) = 0LL;
            if ( v8 == *(_QWORD *)(v1 + 80) )
              *(_QWORD *)(v1 + 80) = 0LL;
            DelQEntry((_QWORD *)(v1 + 24), v8);
          }
          if ( *(struct tagTHREADINFO **)(v1 + 64) == a1 )
            *(_QWORD *)(v1 + 64) = 0LL;
          v12 = *(_QWORD *)(v1 + 112);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
          v23[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v23;
          v23[1] = v12;
          if ( v12 )
            _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          LockW32Thread(v5, v24, v14, v15);
          v16 = (struct _LARGE_STRING *)(int)zzzAttachThreadInput((__int64)a1, v5, 32769LL);
          v17 = *((_QWORD *)a1 + 51);
          v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v17 + 472) = v18;
          *((_QWORD *)&v21 + 1) = ThreadUnlock1(v17, v18);
          *(_QWORD *)&v21 = *((_QWORD *)a1 + 51) + 112LL;
          v22 = v21;
          HMAssignmentLock(&v22);
          v20 = *(_QWORD *)(v5 + 1352);
          if ( v20 )
            PostMessage(v20, 840LL, 2uLL, v16);
          PopAndFreeW32ThreadLock((__int64)v24, v19);
          *((_DWORD *)a1 + 296) ^= (v7 ^ *((_DWORD *)a1 + 296)) & 0x100000;
        }
      }
    }
  }
}
