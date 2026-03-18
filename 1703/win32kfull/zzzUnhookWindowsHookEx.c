/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C00D9098
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C00D9050 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C00E45A4 (zzzSetWindowsHookEx.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01C14E0 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C00CC1D8 (PhkFirstGlobalValid.c)
 *     FreeHook @ 0x1C00D9150 (FreeHook.c)
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01C0F70 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1, __int64 a2, __int64 a3)
{
  struct tagHOOK *v3; // rdx
  __int64 v4; // rbx
  _BYTE *v5; // rdi
  int v6; // r9d
  int v8; // r10d
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  v4 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v5 = byte_1C02E5B20;
  if ( (byte_1C02E5B20[*((_DWORD *)a1 + 12) + 1] & 4) != 0 )
  {
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    ++*((_DWORD *)a1 + 2);
    v13[1] = a1;
    zzzJournalAttach((struct tagTHREADINFO *)v4, 0);
    v3 = (struct tagHOOK *)ThreadUnlock1(v12, v11);
  }
  if ( v3 )
    FreeHook(v3);
  v6 = *(_DWORD *)(v4 + 440);
  if ( (v6 & 0x40000) != 0 )
  {
    v8 = -1;
    do
    {
      if ( (*v5 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v4, v8, a3); i; i = PhkNextValid(i, v10, a3) )
        {
          if ( *(_QWORD *)(i + 16) == v4 )
            return 1LL;
        }
      }
      ++v8;
      ++v5;
    }
    while ( v8 <= 14 );
    *(_DWORD *)(v4 + 440) = v6 & 0xFFFBFFFF;
  }
  return 1LL;
}
