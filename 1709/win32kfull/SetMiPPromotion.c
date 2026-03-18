/*
 * XREFs of SetMiPPromotion @ 0x1C01C0CFC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C01E2FF0 (NtUserAutoPromoteMouseInPointer.c)
 *     xxxDefPointerProc @ 0x1C020F46C (xxxDefPointerProc.c)
 * Callees:
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01C048C (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

unsigned __int64 __fastcall SetMiPPromotion(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  _DWORD *v5; // rcx

  result = *(_QWORD *)(a1 + 1224);
  if ( result )
  {
    if ( (*(_DWORD *)result & 4) == 0 )
      SetMiPWakeBit((struct tagTHREADINFO *)a1);
    if ( ((a2 - 578) & 0xFFFFFFFB) != 0 )
    {
      result = (unsigned int)(a2 - 577);
      if ( (unsigned int)result <= 3 || (result = (unsigned int)(a2 - 581), (unsigned int)result <= 0x12) )
      {
        v5 = *(_DWORD **)(a1 + 1224);
        if ( (v5[9] & 0x1F0) != 0 )
          *v5 &= ~2u;
        else
          *v5 |= 2u;
      }
    }
    else
    {
      **(_DWORD **)(a1 + 1224) |= 4u;
      **(_DWORD **)(a1 + 1224) &= ~0x10u;
      result = *(_QWORD *)(a1 + 1224);
      *(_DWORD *)result &= ~2u;
    }
  }
  return result;
}
