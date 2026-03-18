/*
 * XREFs of _BeginDeferWindowPos @ 0x1C00F1720
 * Callers:
 *     NtUserSetWindowBand @ 0x1C00F1550 (NtUserSetWindowBand.c)
 * Callees:
 *     AllocateCvr @ 0x1C00F1790 (AllocateCvr.c)
 */

__int64 __fastcall BeginDeferWindowPos(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx

  LOBYTE(a3) = 4;
  v4 = HMAllocObject(gptiCurrent, 0LL, a3, 48LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = 8LL;
    if ( a1 )
      v6 = a1;
    if ( (unsigned int)AllocateCvr(v4, v6) )
    {
      *(_DWORD *)(v5 + 24) |= 2u;
      return v5;
    }
    HMFreeObject(v5);
  }
  return 0LL;
}
