/*
 * XREFs of TransferWakeBit @ 0x1C00CD08C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C004A46C (UpdateRawMouseMode.c)
 *     CalcWakeMask @ 0x1C00522A0 (CalcWakeMask.c)
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
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) & result & 0x1C07) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 384);
      v6 = *(_QWORD *)(v7 + 64);
      *(_QWORD *)(v7 + 64) = a1;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 384);
      v6 = *(_QWORD *)(v5 + 56);
      *(_QWORD *)(v5 + 56) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 384));
    }
    *(_WORD *)(*(_QWORD *)(v6 + 400) + 6LL) &= ~v4;
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) |= v4;
    result = *(_QWORD *)(a1 + 400);
    *(_WORD *)(result + 4) |= v4;
  }
  return result;
}
