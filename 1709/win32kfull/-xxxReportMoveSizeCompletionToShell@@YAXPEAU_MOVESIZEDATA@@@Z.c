/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01DB908
 * Callers:
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     IsShellParticipatesInSizing @ 0x1C00938B0 (IsShellParticipatesInSizing.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall xxxReportMoveSizeCompletionToShell(struct _MOVESIZEDATA *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdx
  BOOL v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 ThreadWin32Thread; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v20[5]; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v21[5]; // [rsp+60h] [rbp+17h] BYREF

  v4 = (__int64 *)*((_QWORD *)a1 + 2);
  if ( (unsigned int)IsShellParticipatesInSizing((__int64)v4, a2, a3, a4) )
  {
    *((_DWORD *)a1 + 70) &= ~4u;
    v6 = *((_DWORD *)a1 + 49);
    if ( v6 >= 0 )
      v7 = 2;
    else
      v7 = (v6 & 0x100000) == 0;
    memset(v20, 0, sizeof(v20));
    v8 = *v4;
    v20[3] = 0LL;
    v20[0] = v8;
    v20[2] = v7;
    LODWORD(v20[1]) = 8;
    xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v20);
  }
  else if ( (*((_DWORD *)a1 + 70) & 8) == 0 )
  {
    v9 = *(_QWORD *)(v4[3] + 328);
    if ( v9 )
    {
      v11 = !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 264));
      if ( (_DWORD)v13 != (_DWORD)v12 || v11 )
      {
        v14 = 2;
        if ( (*((_DWORD *)a1 + 49) & 0x100000) != 0 )
        {
          if ( (_DWORD)v13 == (_DWORD)v12 )
            v14 = ~(_DWORD)v10 & 2;
          else
            v14 = v10 & 1;
        }
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12, v13);
        v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v19;
        v19[1] = v9;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        memset(v21, 0, sizeof(v21));
        v16 = (_QWORD *)*((_QWORD *)a1 + 2);
        v21[3] = 0LL;
        LODWORD(v21[1]) = 2;
        v21[0] = *v16;
        v21[2] = v14;
        if ( (unsigned int)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v21)
          && !v14 )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v9 + 16), 0);
        }
        ThreadUnlock1(v18, v17);
      }
    }
  }
}
