/*
 * XREFs of UsbhPdoDeleteSymbolicLink @ 0x1C0055864
 * Callers:
 *     UsbhPdoRemoveCleanup @ 0x1C0056010 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

void __fastcall UsbhPdoDeleteSymbolicLink(__int64 a1)
{
  NTSTATUS v2; // edi
  _DWORD *v3; // rbx
  NTSTATUS v4; // eax
  void *v5; // rcx

  v2 = 0;
  v3 = PdoExt(a1);
  if ( (v3[353] & 8) != 0 )
  {
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 298), 0);
    v5 = (void *)*((_QWORD *)v3 + 150);
    v2 = v4;
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *((_QWORD *)v3 + 150) = 0LL;
    }
    v3[353] &= ~8u;
  }
  Log(*((_QWORD *)v3 + 147), 256, 1937337676, v2, a1);
}
