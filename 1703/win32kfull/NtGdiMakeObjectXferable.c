/*
 * XREFs of NtGdiMakeObjectXferable @ 0x1C00FD1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C00FD23C (-bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z.c)
 */

__int64 __fastcall NtGdiMakeObjectXferable(HDC a1, __int64 a2)
{
  unsigned int v2; // ebp
  char v4; // bl
  unsigned int v5; // esi
  __int64 v6; // rdx

  v2 = a2;
  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v4 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2);
  v5 = 0;
  if ( v4 == 1 )
  {
    if ( (unsigned int)XFERDCOBJ::bPrepareDCForXfer(a1, v2) )
    {
      LOBYTE(v6) = BYTE2(a1) & 0x1F;
      v5 = HmgMarkXferable(a1, v6);
    }
  }
  GreReleaseHmgrSemaphore();
  return v5;
}
