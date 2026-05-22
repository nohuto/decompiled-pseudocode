/*
 * XREFs of ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x18008A060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18008A9AC (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 */

__int64 __fastcall DWMCursorBroker::SetClosestInteractiveBounds(__int64 a1, __int64 a2)
{
  __int128 *v2; // r11
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v4) = *(_DWORD *)a2;
  *((_QWORD *)&v4 + 1) = *(_QWORD *)(a2 + 8);
  if ( (int)FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(a1 + 32, &v4, &v5) >= 0 )
  {
    v4 = *v2;
    *(_OWORD *)(v5 + 96) = v4;
  }
  return 0LL;
}
