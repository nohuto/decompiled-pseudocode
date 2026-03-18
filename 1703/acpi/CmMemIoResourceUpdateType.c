/*
 * XREFs of CmMemIoResourceUpdateType @ 0x1C0058B8C
 * Callers:
 *     TranslateBridgeResources @ 0x1C00A4CD0 (TranslateBridgeResources.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CmMemIoResourceUpdateType(struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1, UCHAR a2, ULONGLONG a3)
{
  ULONGLONG v6; // rax

  v6 = RtlCmDecodeMemIoResource(a1, 0LL);
  return RtlCmEncodeMemIoResource(a1, a2, v6, a3);
}
