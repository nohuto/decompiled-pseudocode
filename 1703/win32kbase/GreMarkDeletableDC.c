/*
 * XREFs of GreMarkDeletableDC @ 0x1C0092250
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 */

__int64 __fastcall GreMarkDeletableDC(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  int v4; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v4 = 0;
  result = HmgShareLock(a1, 1);
  v2 = result;
  if ( result )
  {
    *(_DWORD *)(result + 36) &= ~8u;
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v2);
    return HmgDecrementShareReferenceCount(v2);
  }
  return result;
}
