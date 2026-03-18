/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C00390C4
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00F31CC (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PROXYPORT::Close(void ***this)
{
  void *v2; // rcx
  void *v3; // rdi
  __int64 CurrentProcess; // rax
  void *v5; // rcx
  void *v6; // rcx

  v2 = (*this)[7];
  if ( v2 )
    MmUnsecureVirtualMemory(v2);
  v3 = (*this)[2];
  if ( v3 )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    MmUnmapViewOfSection(CurrentProcess, v3);
  }
  v5 = (*this)[1];
  if ( v5 )
    ZwClose(v5);
  v6 = **this;
  if ( v6 )
    ObfDereferenceObject(v6);
  Win32FreePool(*this);
}
