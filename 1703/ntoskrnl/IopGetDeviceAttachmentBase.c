/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x1400720DC
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x14007207C (IopGetDevicePDO.c)
 *     IopVerifyDriverObjectOnStack @ 0x1401F0118 (IopVerifyDriverObjectOnStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetDeviceAttachmentBase(__int64 a1)
{
  __int64 v1; // rdx
  __int64 i; // rcx

  v1 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL); i; i = *(_QWORD *)(*(_QWORD *)(i + 312) + 48LL) )
    v1 = i;
  return v1;
}
