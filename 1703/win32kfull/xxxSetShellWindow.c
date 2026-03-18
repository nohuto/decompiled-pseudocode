/*
 * XREFs of xxxSetShellWindow @ 0x1C00154D0
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C0015280 (NtUserSetShellWindowEx.c)
 * Callees:
 *     CleanupIAMAccess @ 0x1C00153D0 (CleanupIAMAccess.c)
 *     DwmAsyncShellWindowChange @ 0x1C0016728 (DwmAsyncShellWindowChange.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     _RegisterHotKey @ 0x1C00BD09C (_RegisterHotKey.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01B1AA0 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 */

__int64 __fastcall xxxSetShellWindow(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi
  struct tagWND **v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rbx
  int v11; // eax
  void *v12; // rax
  __int64 v14; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF

  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 416LL);
  v5 = (struct tagWND **)(v4 + 20);
  if ( v4[20] )
  {
    v14 = 5LL;
LABEL_21:
    UserSetLastError(v14);
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 || *(_QWORD *)(a1 + 120) || (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v14 = 87LL;
    goto LABEL_21;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey((struct tagWND *)a1, BugCheckParameter2);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
  if ( v6 && (!v4[21] || (*(_DWORD *)(v6 + 768) & 0x30) == 0x20) )
    v4[21] = v6;
  v7 = *v4;
  v8 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&v16 = v4 + 20;
  *((_QWORD *)&v16 + 1) = a1;
  v9 = v16;
  *(_QWORD *)(v7 + 24) = v8;
  v16 = v9;
  HMAssignmentLock(&v16);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 408LL));
  v10 = *(_QWORD *)(gptiCurrent + 408LL);
  v11 = SystemPrng(&v17, 8LL);
  if ( v11 )
  {
    *(_QWORD *)(v10 + 280) = v17;
  }
  else
  {
    if ( (int)xxxCallGenerateIAMKey((struct tagIAM_KKEY *)(v10 + 272)) >= 0 )
      goto LABEL_11;
    v11 = 0;
  }
  if ( v11 )
LABEL_11:
    *(_DWORD *)(v10 + 272) = 1;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v12 = (void *)ReferenceDwmApiPort();
    DwmAsyncShellWindowChange(v12);
  }
  *((_QWORD *)&v16 + 1) = a2;
  *(_QWORD *)&v16 = v4 + 22;
  HMAssignmentLock(&v16);
  SetOrClrWF(1LL, *v5, 1056LL, 1LL);
  xxxSetWindowPos(*v5, 0, 0, 19);
  return 1LL;
}
