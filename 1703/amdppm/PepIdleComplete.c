/*
 * XREFs of PepIdleComplete @ 0x1C0006070
 * Callers:
 *     PepIdleCompleteV2 @ 0x1C0006030 (PepIdleCompleteV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepIdleComplete(__int64 *BugCheckParameter4, int a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 result; // rax
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v6 = *BugCheckParameter4;
  v8[3] = 0;
  v8[0] = a2;
  v8[1] = a3;
  v9 = a5;
  v8[2] = a4;
  result = PoFxProcessorNotification(v6, 6LL, v8);
  if ( (int)result < 0 )
    KeBugCheckEx(0x143u, 1uLL, 6uLL, 0LL, (ULONG_PTR)BugCheckParameter4);
  return result;
}
