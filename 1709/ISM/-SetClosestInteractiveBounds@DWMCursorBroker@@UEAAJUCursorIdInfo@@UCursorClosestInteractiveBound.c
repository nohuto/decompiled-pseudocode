/*
 * XREFs of ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x180025660
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18002614C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 */

__int64 __fastcall DWMCursorBroker::SetClosestInteractiveBounds(__int64 a1, __int64 a2, __int128 *a3)
{
  int ValueForKey; // eax
  __int64 v5; // rcx
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v7) = *(_DWORD *)a2;
  *((_QWORD *)&v7 + 1) = *(_QWORD *)(a2 + 8);
  ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(a1 + 32, &v7, &v8);
  if ( ValueForKey >= 0 )
  {
    v7 = *a3;
    *(_OWORD *)(v8 + 104) = v7;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 276, ValueForKey);
  }
  return 0LL;
}
