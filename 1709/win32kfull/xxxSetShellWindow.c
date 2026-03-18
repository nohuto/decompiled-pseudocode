/*
 * XREFs of xxxSetShellWindow @ 0x1C00D5AE8
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C00D59A0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     DwmAsyncShellWindowChange @ 0x1C0044EC4 (DwmAsyncShellWindowChange.c)
 *     _RegisterHotKey @ 0x1C0052DB4 (_RegisterHotKey.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     CleanupIAMAccess @ 0x1C00D5CB0 (CleanupIAMAccess.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01B4CFC (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
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
  __int64 **v12; // rcx
  __int64 v13; // rbx
  void *v14; // rax
  __int64 v16; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 440LL);
  v5 = (struct tagWND **)(v4 + 20);
  if ( v4[20] )
  {
    v16 = 5LL;
LABEL_21:
    UserSetLastError(v16, a2);
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 || *(_QWORD *)(a1 + 120) || (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v16 = 87LL;
    goto LABEL_21;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey((struct tagWND *)a1, 0LL, 61744, 2, BugCheckParameter2);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL);
  if ( v6 && (!v4[21] || (*(_DWORD *)(v6 + 776) & 0x30) == 0x20) )
    v4[21] = v6;
  v7 = *v4;
  v8 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&v18 = v4 + 20;
  *((_QWORD *)&v18 + 1) = a1;
  v9 = v18;
  *(_QWORD *)(v7 + 24) = v8;
  v18 = v9;
  HMAssignmentLock(&v18);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 432LL));
  v10 = *(_QWORD *)(gptiCurrent + 432LL);
  v11 = SystemPrng(&v19, 8LL);
  if ( v11 )
  {
    *(_QWORD *)(v10 + 280) = v19;
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
    v12 = *(__int64 ***)(*(_QWORD *)(a1 + 24) + 8LL);
    v13 = **v12;
    v14 = (void *)ReferenceDwmApiPort(v12);
    DwmAsyncShellWindowChange(v14, *(_QWORD *)a1, v13);
  }
  *((_QWORD *)&v18 + 1) = a2;
  *(_QWORD *)&v18 = v4 + 22;
  HMAssignmentLock(&v18);
  SetOrClrWF(1, *v5, 0x420u, 1);
  xxxSetWindowPos(*v5, 1LL, 0LL, 0LL, 0, 0, 19);
  return 1LL;
}
