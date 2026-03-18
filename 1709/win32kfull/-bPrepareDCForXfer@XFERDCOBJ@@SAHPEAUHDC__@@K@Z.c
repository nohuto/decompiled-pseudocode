/*
 * XREFs of ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C010907C
 * Callers:
 *     NtGdiMakeObjectXferable @ 0x1C0109000 (NtGdiMakeObjectXferable.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall XFERDCOBJ::bPrepareDCForXfer(HDC a1, int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  v4 = 0;
  if ( v6[0] )
  {
    if ( a2 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      *(_DWORD *)(v3 + 2544) = a2;
      v4 = 1;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v4;
}
