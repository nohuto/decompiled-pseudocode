/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x1406CE854
 * Callers:
 *     PiSwDestroyDeviceObject @ 0x1406CDAA0 (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x1406CE2EC (PiSwProcessRemove.c)
 * Callees:
 *     PiSwDeviceDereference @ 0x1405F2D74 (PiSwDeviceDereference.c)
 *     PiSwRemovePdoAssociation @ 0x1406CE704 (PiSwRemovePdoAssociation.c)
 */

void __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  __int64 *v1; // rdi
  void *v2; // rbx

  v1 = *(__int64 **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
}
