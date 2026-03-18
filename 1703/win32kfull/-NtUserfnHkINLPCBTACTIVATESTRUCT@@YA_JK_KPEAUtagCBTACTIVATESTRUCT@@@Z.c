/*
 * XREFs of ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C01D6044
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0052DE0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00D93C4 (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTACTIVATESTRUCT(unsigned int a1, __int64 a2, struct tagCBTACTIVATESTRUCT *a3)
{
  __int128 v4; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct tagCBTACTIVATESTRUCT *)W32UserProbeAddress;
  v4 = *(_OWORD *)a3;
  return xxxCallNextHookEx(a1, a2, (__int64)&v4);
}
