/*
 * XREFs of NtGdiEndPath @ 0x1C0131A10
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiEndPath(HDC a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  ULONG v4; // ecx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = 0;
  if ( !v5[0] )
  {
    v4 = 6;
LABEL_7:
    EngSetLastError(v4);
    goto LABEL_4;
  }
  v2 = *(_DWORD *)(v5[0] + 176LL);
  if ( (v2 & 1) == 0 )
  {
    v4 = 1003;
    goto LABEL_7;
  }
  v1 = 1;
  *(_DWORD *)(v5[0] + 176LL) = v2 & 0xFFFFFFFE;
LABEL_4:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v5);
  return v1;
}
