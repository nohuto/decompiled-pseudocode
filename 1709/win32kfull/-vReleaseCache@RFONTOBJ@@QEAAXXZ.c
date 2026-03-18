/*
 * XREFs of ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0035490
 * Callers:
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C0034B80 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00B26C0 (GreGetGlyphOutlineInternal.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C028366C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vReleaseCache(RFONTOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)this + 632LL);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *(_QWORD *)(*(_QWORD *)this + 640LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 528LL));
}
