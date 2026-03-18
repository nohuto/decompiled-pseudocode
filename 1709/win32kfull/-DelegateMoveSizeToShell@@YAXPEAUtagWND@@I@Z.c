/*
 * XREFs of ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01F802C
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall DelegateMoveSizeToShell(struct tagWND *a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r8
  BOOL v6; // edx
  __int64 v7; // rcx
  __int128 *v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int128 v11; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v12; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v13[48]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v14[6]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v15; // [rsp+170h] [rbp+70h]
  __int128 v16; // [rsp+180h] [rbp+80h]
  __int128 v17; // [rsp+190h] [rbp+90h]
  __int128 v18; // [rsp+1A0h] [rbp+A0h]
  __int128 v19; // [rsp+1B0h] [rbp+B0h]
  __int128 v20; // [rsp+1C0h] [rbp+C0h]
  __int128 v21; // [rsp+1D0h] [rbp+D0h]
  __int128 v22; // [rsp+1E0h] [rbp+E0h]
  __int128 v23; // [rsp+1F0h] [rbp+F0h]
  __int128 v24; // [rsp+200h] [rbp+100h]
  __int128 v25; // [rsp+210h] [rbp+110h]
  __int128 v26; // [rsp+220h] [rbp+120h]

  v3 = *((_QWORD *)a1 + 2);
  v4 = a2;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 328LL);
  v6 = a2 && a2 != 10;
  v7 = *(_QWORD *)(v5 + 16);
  if ( *(_QWORD *)(v3 + 408) != *(_QWORD *)(v7 + 408) )
    *(_DWORD *)(v7 + 464) |= 0x20u;
  if ( v6 )
  {
    if ( (gdwMitConfig & 1) != 0 )
    {
      v8 = (__int128 *)INPUTDEST_FROM_PWND(v13, v5);
      v15 = *v8;
      v16 = v8[1];
      v17 = v8[2];
      v18 = v8[3];
      v19 = v8[4];
      v20 = v8[5];
      v21 = v8[6];
      v9 = v8[7];
      v8 += 8;
      v22 = v9;
      v23 = *v8;
      v24 = v8[1];
      v25 = v8[2];
      v26 = v8[3];
      ForceCapture(1LL);
    }
    else
    {
      *(_QWORD *)&v11 = gspwndMouseOwner;
      *((_QWORD *)&v11 + 1) = v5;
      v12 = v11;
      HMAssignmentLock(&v12);
    }
    SetSystemInputSource(&v11);
    PostInputMessage(
      *(_QWORD *)(v3 + 408),
      (__int64)a1,
      0x202u,
      0LL,
      (*(unsigned __int16 *)(v3 + 736) << 16) | *(unsigned __int16 *)(v3 + 732),
      0,
      0LL,
      0LL,
      0,
      &v11,
      0LL,
      0LL);
  }
  memset(v14, 0, 0x28uLL);
  v10 = *(_QWORD *)a1;
  v14[3] = 0LL;
  v14[0] = v10;
  LODWORD(v14[1]) = 4;
  v14[2] = v4;
  xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v14);
}
