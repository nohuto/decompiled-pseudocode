/*
 * XREFs of ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F4560
 * Callers:
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     IsShellParticipatesInSizing @ 0x1C0021CB0 (IsShellParticipatesInSizing.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00B5F74 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall xxxReportMoveSizeCompletionToShell(struct _MOVESIZEDATA *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  BOOL v10; // eax
  int v11; // edx
  unsigned int v12; // r8d
  int v13; // r9d
  unsigned int v14; // edi
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[5]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v19[5]; // [rsp+48h] [rbp-38h] BYREF

  v4 = *(__int64 **)a1;
  if ( (unsigned int)IsShellParticipatesInSizing(*(_QWORD *)a1, a2, a3, a4) )
  {
    *((_DWORD *)a1 + 66) &= ~4u;
    v6 = *((_DWORD *)a1 + 45);
    if ( v6 < 0x80000000 )
      v7 = 2LL;
    else
      v7 = (~v6 >> 20) & 1;
    memset(v18, 0, sizeof(v18));
    v8 = *v4;
    v18[3] = 0LL;
    v18[0] = v8;
    LODWORD(v18[1]) = 8;
    v18[2] = v7;
    xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v18);
  }
  else
  {
    v9 = *(_QWORD *)(v4[3] + 328);
    if ( (*((_DWORD *)a1 + 66) & 8) == 0 )
    {
      if ( v9 )
      {
        v10 = IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 248));
        if ( v12 != v11 || !v10 )
        {
          v14 = 2;
          if ( (*((_DWORD *)a1 + 45) & 0x100000) != 0 )
          {
            if ( v12 == v11 )
              v14 = ~v13 & 2;
            else
              v14 = v12;
          }
          v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v18;
          ++*(_DWORD *)(v9 + 8);
          v18[1] = v9;
          memset(v19, 0, sizeof(v19));
          v15 = *(__int64 **)a1;
          v19[3] = 0LL;
          LODWORD(v19[1]) = 2;
          v19[0] = *v15;
          v19[2] = v14;
          if ( (unsigned int)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v19)
            && !v14 )
          {
            CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v9 + 16), 0);
          }
          ThreadUnlock1(v17, v16);
        }
      }
    }
  }
}
