/*
 * XREFs of ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000CB98
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x1C01CB734 (-IsPTPRedirected@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D004 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     IsMouseInPointerActive @ 0x1C00CF7DC (IsMouseInPointerActive.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4CF4 (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

int __fastcall IsPointerMessageTouchpad(struct tagTHREADINFO *a1, unsigned __int64 a2, unsigned __int16 a3)
{
  int v3; // edi
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  __int64 v6; // r10
  __int16 v7; // r11
  struct tagPOINTERINPUTFRAME *FrameById; // rax
  __int64 v9; // r10
  int v10; // ebx

  v3 = 0;
  if ( (gdwMitConfig & 4) != 0 )
    return CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, a1, a2, a3);
  if ( (*((_DWORD *)a1 + 296) & 0x2000) == 0 )
  {
    if ( !a2 )
    {
      ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)a1 + 66, a3);
      if ( !ThreadPointerData || *((_DWORD *)ThreadPointerData + 5) != 5 )
        return v3;
      return 1;
    }
    if ( a2 == -1LL )
      return 1;
    if ( (unsigned int)IsMouseInPointerActive(a1, 0LL) && v7 )
      return v3;
    FrameById = FindFrameById(*(_DWORD *)(v6 + 28));
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 9);
      v10 = *(_DWORD *)(216LL * *(unsigned int *)(v9 + 32) + *((_QWORD *)FrameById + 11) + 56);
      UnreferenceFrameInt(FrameById);
      LOBYTE(v3) = v10 == 5;
      return v3;
    }
  }
  return 0;
}
