/*
 * XREFs of xxxSendEraseBkgnd @ 0x1C007F4F4
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendEraseBkgnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DCEx; // rdi
  unsigned int v6; // ebp

  if ( !a3 || (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
    return 0LL;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, 327808LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) != *(_QWORD *)(gptiCurrent + 400LL) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 0LL);
  v6 = xxxSendMessage(a1, 20LL, DCEx, 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) != *(_QWORD *)(gptiCurrent + 400LL) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 0LL);
  if ( !v6 )
  {
    SetOrClrWF(1LL, a1, 260LL, 1LL);
    if ( (*(_BYTE *)(a1 + 61) & 1) == 0 )
      SetOrClrWF(1LL, a1, 258LL, 1LL);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v6;
}
