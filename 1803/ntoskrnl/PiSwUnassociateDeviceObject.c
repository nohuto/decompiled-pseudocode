/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x1405C3E5C
 * Callers:
 *     PiSwProcessRemove @ 0x1405C3D0C (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x1405C3E28 (PiSwDestroyDeviceObject.c)
 * Callees:
 *     PiSwRemovePdoAssociation @ 0x1405C3E9C (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceDereference @ 0x1405C53A0 (PiSwDeviceDereference.c)
 */

__int64 __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  _QWORD *v1; // rdi
  void *v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    result = PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
  return result;
}
