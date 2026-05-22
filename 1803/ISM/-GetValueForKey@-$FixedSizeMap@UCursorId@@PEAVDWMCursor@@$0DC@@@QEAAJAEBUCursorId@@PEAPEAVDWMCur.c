/*
 * XREFs of ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18008A9AC
 * Callers:
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180089DA0 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x18008A010 (-SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z.c)
 *     ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x18008A060 (-SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBound.c)
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18008A2A0 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 *     ?GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x18008A740 (-GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z.c)
 *     ?GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z @ 0x18008A7E0 (-GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(_DWORD *a1, int *a2, _QWORD *a3)
{
  unsigned int v4; // r9d
  int v5; // ecx
  __int64 v6; // rax
  _DWORD *i; // rdx

  v4 = 0;
  v5 = *a2;
  if ( *a2 == a1[300] || !a3 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v6 = 0LL;
    for ( i = a1; *i != v5; i += 6 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= 0x32 )
        return (unsigned int)-2147467259;
    }
    *a3 = *(_QWORD *)&a1[6 * v6 + 4];
  }
  return v4;
}
