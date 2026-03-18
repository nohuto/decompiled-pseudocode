/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C00BAE60
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0100CE4 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PROXYPORT::Close(void ***this, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  void *v5; // rdi
  __int64 CurrentProcess; // rax
  void *v7; // rcx
  void *v8; // rcx

  v4 = (*this)[7];
  if ( v4 )
    MmUnsecureVirtualMemory(v4);
  v5 = (*this)[2];
  if ( v5 )
  {
    CurrentProcess = PsGetCurrentProcess(v4, a2);
    MmUnmapViewOfSection(CurrentProcess, v5);
  }
  v7 = (*this)[1];
  if ( v7 )
    ZwClose(v7);
  v8 = **this;
  if ( v8 )
    ObfDereferenceObject(v8);
  Win32FreePool(*this, a2, a3);
}
