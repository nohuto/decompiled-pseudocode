/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x14056D680
 * Callers:
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x14056D64C (PiSwDestroyDeviceObject.c)
 * Callees:
 *     PiSwRemovePdoAssociation @ 0x14056D6C0 (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceDereference @ 0x140576020 (PiSwDeviceDereference.c)
 */

__int64 __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 64);
  v2 = *v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    result = PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
  return result;
}
