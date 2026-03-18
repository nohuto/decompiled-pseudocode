/*
 * XREFs of ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00A03AC
 * Callers:
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00A0370 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E8F9C (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0188E3C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C01B6370 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00A05EC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::Flush(BLTQUEUE *this)
{
  __int64 v2; // rbp
  __int64 v3; // rbx

  if ( *((_QWORD *)this + 55) )
  {
    v2 = *((unsigned int *)this + 188);
    if ( KeReadStateEvent((PRKEVENT)((char *)this + 376)) )
      *((_DWORD *)this + 210) |= 1u;
    *((LARGE_INTEGER *)this + 5 * v2 + 95) = KeQueryPerformanceCounter(0LL);
    *((_BYTE *)this + 405) = 1;
    BLTQUEUE::IssueCommand(this);
    *((LARGE_INTEGER *)this + 5 * v2 + 98) = KeQueryPerformanceCounter(0LL);
    v3 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 5 * v2 + 99) = v3 * KeQueryTimeIncrement();
    *((_DWORD *)this + 188) = ((_BYTE)v2 - 1) & 1;
  }
}
