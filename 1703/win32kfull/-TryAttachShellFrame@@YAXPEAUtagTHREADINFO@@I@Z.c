/*
 * XREFs of ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01BC668
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0049448 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00D3F40 (DisassociateShellFrameAppThreads.c)
 *     FindShellFrameThreadFromAssociation @ 0x1C01B2208 (FindShellFrameThreadFromAssociation.c)
 */

void __fastcall TryAttachShellFrame(struct tagTHREADINFO *a1)
{
  __int64 v1; // rbx
  __int64 ShellFrameThreadFromAssociation; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct _LARGE_STRING *v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-58h]
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+58h] [rbp-20h] BYREF

  v1 = *((_QWORD *)a1 + 48);
  if ( *(_DWORD *)(v1 + 16) < 0x14u )
  {
    ShellFrameThreadFromAssociation = FindShellFrameThreadFromAssociation(a1);
    v5 = ShellFrameThreadFromAssociation;
    if ( ShellFrameThreadFromAssociation )
    {
      if ( (*(_DWORD *)(ShellFrameThreadFromAssociation + 440) & 1) == 0 )
      {
        v6 = *(_QWORD *)(ShellFrameThreadFromAssociation + 592);
        if ( !v6 || (*(_DWORD *)(v6 + 180) & 0x100000) == 0 )
        {
          v7 = *(_DWORD *)(v4 + 1096);
          *(_DWORD *)(v4 + 1096) = v7 & 0xFFE7FFFF | 0x100000;
          DisassociateShellFrameAppThreads((struct tagTHREADINFO *)v4);
          while ( *(_QWORD *)v1 && IsMiPMouseMessage(*(_DWORD *)(*(_QWORD *)v1 + 24LL)) )
          {
            if ( v8 == *(_QWORD *)(v1 + 40) )
              *(_QWORD *)(v1 + 40) = 0LL;
            if ( v8 == *(_QWORD *)(v1 + 48) )
              *(_QWORD *)(v1 + 48) = 0LL;
            DelQEntry(v1, v8, 1);
          }
          if ( *(struct tagTHREADINFO **)(v1 + 32) == a1 )
            *(_QWORD *)(v1 + 32) = 0LL;
          v9 = *(_QWORD *)(v1 + 80);
          v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v16;
          v16[1] = v9;
          if ( v9 )
            ++*(_DWORD *)(v9 + 8);
          LockW32Thread(v5, v17);
          v10 = (struct _LARGE_STRING *)(int)zzzAttachThreadInput((__int64)a1, v5, 32769);
          v11 = *((_QWORD *)a1 + 48);
          v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v11 + 432) = v12;
          *((_QWORD *)&v14 + 1) = ThreadUnlock1(v11, v12);
          *(_QWORD *)&v14 = *((_QWORD *)a1 + 48) + 80LL;
          v15 = v14;
          HMAssignmentLock(&v15);
          v13 = *(_QWORD *)(v5 + 1264);
          if ( v13 )
            PostMessage(v13, 840LL, 2LL, v10);
          PopAndFreeW32ThreadLock((__int64)v17);
          *((_DWORD *)a1 + 274) ^= (v7 ^ *((_DWORD *)a1 + 274)) & 0x100000;
        }
      }
    }
  }
}
