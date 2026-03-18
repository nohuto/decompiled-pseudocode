/*
 * XREFs of xxxSendEraseBkgnd @ 0x1C00EB518
 * Callers:
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00CC88C (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
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
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != *(_QWORD *)(gptiCurrent + 376LL) )
    GreSetDCOwnerEx(DCEx, 0LL, 0LL, 0LL);
  v6 = xxxSendMessage(a1, 20, DCEx, 0);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != *(_QWORD *)(gptiCurrent + 376LL) )
    GreSetDCOwnerEx(DCEx, 2147483650LL, 0LL, 0LL);
  if ( !v6 )
  {
    SetOrClrWF(1, (_DWORD *)a1, 0x104u, 1);
    if ( (*(_BYTE *)(a1 + 61) & 1) == 0 )
      SetOrClrWF(1, (_DWORD *)a1, 0x102u, 1);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1LL);
  return v6;
}
