/*
 * XREFs of PspQueryProcessWin32TimersExpired @ 0x1402393F0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     PsInvokeWin32Callout @ 0x1404F9F70 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspQueryProcessWin32TimersExpired(struct _KPROCESS *a1, _DWORD *a2)
{
  __int64 result; // rax
  struct _KPROCESS *v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  MmGetSessionIdEx(a1);
  v5 = a1;
  v6 = 0LL;
  result = PsInvokeWin32Callout(38LL, &v5, 1LL);
  if ( (int)result >= 0 )
    *a2 = v6;
  return result;
}
