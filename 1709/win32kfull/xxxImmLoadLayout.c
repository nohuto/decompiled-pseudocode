/*
 * XREFs of xxxImmLoadLayout @ 0x1C011EFBC
 * Callers:
 *     EditionResetIMELayout @ 0x1C011EF50 (EditionResetIMELayout.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ClientImmLoadLayout @ 0x1C011F04C (ClientImmLoadLayout.c)
 */

__int64 __fastcall xxxImmLoadLayout(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*gpsi & 4) != 0 || (WORD1(a1) & 0xF000) == 0xE000 )
  {
    v2 = Win32AllocPool(352LL, 1835627349LL);
    v4 = v2;
    if ( v2 )
    {
      PushW32ThreadLock(v2, v10, (__int64)Win32FreePool, v3);
      if ( (unsigned int)ClientImmLoadLayout(a1, v4) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
        *(_QWORD *)(ThreadWin32Thread + 16) = v10[0];
        return v4;
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v10, v5, v6, v7);
    }
  }
  return 0LL;
}
