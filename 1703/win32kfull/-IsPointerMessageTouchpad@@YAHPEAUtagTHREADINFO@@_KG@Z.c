/*
 * XREFs of ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007878
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01C6A38 (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0007AAC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     IsMouseInPointerActive @ 0x1C00CCE6C (IsMouseInPointerActive.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

int __fastcall IsPointerMessageTouchpad(struct tagTHREADINFO *a1, unsigned __int64 a2, unsigned __int16 a3)
{
  int v3; // edi
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  struct tagPOINTERINPUTFRAME *FrameById; // rax
  int v9; // ebx

  v3 = 0;
  if ( (gdwMitConfig & 4) != 0 )
    return CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, a1, a2, a3);
  if ( (*((_DWORD *)a1 + 274) & 0x2000) == 0 )
  {
    if ( !a2 )
    {
      ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)((char *)a1 + 968), a3);
      if ( !ThreadPointerData || *((_DWORD *)ThreadPointerData + 5) != 5 )
        return v3;
      return 1;
    }
    if ( a2 == -1LL )
      return 1;
    if ( (unsigned int)IsMouseInPointerActive(a1, 0LL) && a3 )
      return v3;
    FrameById = FindFrameById(*(_DWORD *)(a2 + 28));
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 9);
      v9 = *(_DWORD *)(216LL * *(unsigned int *)(a2 + 32) + *((_QWORD *)FrameById + 11) + 56);
      UnreferenceFrameInt(FrameById);
      LOBYTE(v3) = v9 == 5;
      return v3;
    }
  }
  return 0;
}
