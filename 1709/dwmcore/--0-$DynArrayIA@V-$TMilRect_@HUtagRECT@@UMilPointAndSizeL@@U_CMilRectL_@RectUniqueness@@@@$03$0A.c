/*
 * XREFs of ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x18011C3DC
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>(
        __int64 a1)
{
  CInputSinkStruct::InputQueueInfo *v2; // rcx

  v2 = (CInputSinkStruct::InputQueueInfo *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 16) = 4;
  *(_DWORD *)(a1 + 20) = 4;
  `vector constructor iterator'(
    v2,
    16LL,
    4LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  return a1;
}
