/*
 * XREFs of NtGdiCloseFigure @ 0x1C0122390
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0123100 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0123130 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiCloseFigure(HDC a1)
{
  unsigned int v1; // ebx
  ULONG v3; // ecx
  _QWORD v4[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v5[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v6; // [rsp+38h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = 0;
  if ( !v4[0] )
  {
    v3 = 87;
LABEL_11:
    EngSetLastError(v3);
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v4[0] + 176LL) & 1) == 0 )
  {
    v3 = 1003;
    goto LABEL_11;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, (struct XDCOBJ *)v4);
  if ( v6 && EPATHOBJ::bCloseFigure((EPATHOBJ *)v5) )
    v1 = 1;
  else
    EngSetLastError(8u);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
LABEL_7:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v4);
  return v1;
}
