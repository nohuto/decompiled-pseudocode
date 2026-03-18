/*
 * XREFs of ?SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z @ 0x1C01ABF70
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01B02FC (-xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SuppressContactForMultiFingerTap(const struct tagTPCONTACTSTATE *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 66);
  return (v1 & 0x80u) != 0 && (v1 & 0x800000) != 0;
}
