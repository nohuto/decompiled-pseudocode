/*
 * XREFs of ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C00FD23C
 * Callers:
 *     NtGdiMakeObjectXferable @ 0x1C00FD1C0 (NtGdiMakeObjectXferable.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall XFERDCOBJ::bPrepareDCForXfer(HDC a1, int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  v4 = 0;
  if ( v6[0] && a2 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    *(_DWORD *)(v3 + 2544) = a2;
    v4 = 1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v6);
  return v4;
}
