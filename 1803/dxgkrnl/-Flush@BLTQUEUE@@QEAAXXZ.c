/*
 * XREFs of ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00D93A8
 * Callers:
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00D936C (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01569C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C018C190 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C01D6914 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00D95C0 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
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
