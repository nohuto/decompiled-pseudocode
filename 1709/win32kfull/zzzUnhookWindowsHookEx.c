/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C0056178
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C0056130 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C005634C (zzzSetWindowsHookEx.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01C4D00 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 *     FreeHook @ 0x1C0055C70 (FreeHook.c)
 *     PhkFirstGlobalValid @ 0x1C009EB9C (PhkFirstGlobalValid.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01C470C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1)
{
  struct tagHOOK *v1; // rbx
  __int64 v2; // rdi
  _BYTE *v3; // rsi
  __int64 v4; // r8
  __int64 v6; // r9
  __int64 i; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v3 = byte_1C02E2020;
  if ( (byte_1C02E2020[*((_DWORD *)a1 + 12) + 1] & 4) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v11;
    v11[1] = v1;
    _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
    zzzJournalAttach((struct tagTHREADINFO *)v2, 0);
    v1 = (struct tagHOOK *)ThreadUnlock1(v10, v9);
  }
  if ( v1 )
    FreeHook(v1);
  v4 = *(unsigned int *)(v2 + 464);
  if ( (v4 & 0x40000) != 0 )
  {
    v6 = 0xFFFFFFFFLL;
    do
    {
      if ( (*v3 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v2, (unsigned int)v6, v4, v6); i; i = PhkNextValid(i) )
        {
          if ( *(_QWORD *)(i + 16) == v2 )
            return 1LL;
        }
      }
      v6 = (unsigned int)(v6 + 1);
      ++v3;
    }
    while ( (int)v6 <= 14 );
    *(_DWORD *)(v2 + 464) = v4 & 0xFFFBFFFF;
  }
  return 1LL;
}
