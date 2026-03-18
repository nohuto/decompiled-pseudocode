/*
 * XREFs of NtGdiCloseFigure @ 0x1C012BCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C012C170 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C012C1A0 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiCloseFigure(HDC a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  ULONG v4; // ecx
  _QWORD v5[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v7; // [rsp+38h] [rbp-80h]

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  v1 = v5[0];
  if ( !v5[0] )
  {
    v4 = 87;
LABEL_11:
    EngSetLastError(v4);
    v2 = 0;
    goto LABEL_6;
  }
  v2 = 1;
  if ( (*(_DWORD *)(v5[0] + 176LL) & 1) == 0 )
  {
    v4 = 1003;
    goto LABEL_11;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, (struct XDCOBJ *)v5);
  if ( !v7 || !EPATHOBJ::bCloseFigure((EPATHOBJ *)v6) )
  {
    EngSetLastError(8u);
    v2 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v6);
LABEL_6:
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v2;
}
