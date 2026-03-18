/*
 * XREFs of DoExplorerHangDetection @ 0x1C0006F5C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01CE5C0 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?IsValidForHangTest@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C0006FEC (-IsValidForHangTest@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     IsThreadHung @ 0x1C00B6074 (IsThreadHung.c)
 *     ?ReportHungExplorerToWer@@YAJPEAUtagDESKTOP@@PEBUtagTHREADINFO@@@Z @ 0x1C020A170 (-ReportHungExplorerToWer@@YAJPEAUtagDESKTOP@@PEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall DoExplorerHangDetection(struct tagDESKTOP *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *((_QWORD *)a1 + 36);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 184LL);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 16);
  result = IsValidForHangTest(*((const struct tagTHREADINFO **)a1 + 36));
  if ( (_DWORD)result )
  {
    result = IsValidForHangTest((const struct tagTHREADINFO *)v3);
    if ( (_DWORD)result )
    {
      result = IsThreadHung(v5, gdwHungAppTimeout);
      if ( !(_DWORD)result )
      {
        result = IsThreadHung(v2, gdwHungAppTimeout);
        if ( !(_DWORD)result )
          return result;
        v3 = v2;
      }
      if ( v3 )
        return ReportHungExplorerToWer(a1, (const struct tagTHREADINFO *)v3);
    }
  }
  return result;
}
