/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x140065144
 * Callers:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x140065174 (IopGetDevicePDO.c)
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400C8670 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopVerifyDriverObjectOnStack @ 0x140232D48 (IopVerifyDriverObjectOnStack.c)
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
