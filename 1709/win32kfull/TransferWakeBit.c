/*
 * XREFs of TransferWakeBit @ 0x1C00CF9D8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00A0E54 (UpdateRawMouseMode.c)
 *     CalcWakeMask @ 0x1C00A7D90 (CalcWakeMask.c)
 */

__int64 __fastcall TransferWakeBit(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int16 v4; // di
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx

  result = CalcWakeMask(a2, a2, 0);
  v4 = result & 0x1C07;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) & result & 0x1C07) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 408);
      v6 = *(_QWORD *)(v7 + 96);
      *(_QWORD *)(v7 + 96) = a1;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 408);
      v6 = *(_QWORD *)(v5 + 88);
      *(_QWORD *)(v5 + 88) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 408));
    }
    *(_WORD *)(*(_QWORD *)(v6 + 424) + 6LL) &= ~v4;
    *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) |= v4;
    result = *(_QWORD *)(a1 + 424);
    *(_WORD *)(result + 4) |= v4;
  }
  return result;
}
