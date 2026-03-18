/*
 * XREFs of GreMarkUndeletableDC @ 0x1C0028EA0
 * Callers:
 *     CreateCacheDC @ 0x1C0028CC0 (CreateCacheDC.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 */

__int64 __fastcall GreMarkUndeletableDC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v4 = 0;
  LOBYTE(a2) = 1;
  v5 = 0;
  result = HmgShareLock(a1, a2);
  v3 = result;
  if ( result )
  {
    *(_DWORD *)(result + 36) |= 8u;
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v3);
    return HmgDecrementShareReferenceCount(v3);
  }
  return result;
}
