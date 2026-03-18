/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1C01111F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rdx
  unsigned int v4; // ebx

  if ( (a1 & 0x800000) != 0 )
    return 1LL;
  v2 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore();
  if ( v2 == 1 )
  {
    LOBYTE(v3) = 1;
    v4 = HmgMarkUnXferable(a1, v3);
  }
  else
  {
    v4 = 0;
  }
  GreReleaseHmgrSemaphore();
  return v4;
}
