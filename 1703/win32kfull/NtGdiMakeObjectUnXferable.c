/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1C0106B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(__int64 a1, __int64 a2)
{
  char v3; // bl
  __int64 v4; // rdx
  unsigned int v5; // ebx

  if ( (a1 & 0x800000) != 0 )
    return 1LL;
  v3 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2);
  if ( v3 == 1 )
  {
    LOBYTE(v4) = 1;
    v5 = HmgMarkUnXferable(a1, v4);
  }
  else
  {
    v5 = 0;
  }
  GreReleaseHmgrSemaphore();
  return v5;
}
