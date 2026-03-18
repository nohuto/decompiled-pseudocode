/*
 * XREFs of xxxImmLoadLayout @ 0x1C01156BC
 * Callers:
 *     EditionResetIMELayout @ 0x1C0115650 (EditionResetIMELayout.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ClientImmLoadLayout @ 0x1C011574C (ClientImmLoadLayout.c)
 */

__int64 __fastcall xxxImmLoadLayout(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*gpsi & 4) != 0 || (WORD1(a1) & 0xF000) == 0xE000 )
  {
    v2 = Win32AllocPool(352LL, 1835627349LL);
    v3 = v2;
    if ( v2 )
    {
      PushW32ThreadLock(v2, v6, (__int64)Win32FreePool);
      if ( (unsigned int)ClientImmLoadLayout(a1, v3) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v6[0];
        return v3;
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v6);
    }
  }
  return 0LL;
}
