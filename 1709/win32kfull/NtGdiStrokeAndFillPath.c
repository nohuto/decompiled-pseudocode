/*
 * XREFs of NtGdiStrokeAndFillPath @ 0x1C02893F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C012C170 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C012C1A0 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C012CC8C (-bInactive@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiStrokeAndFillPath(HDC a1)
{
  DC *v1; // r8
  ULONG v2; // ecx
  __int64 v3; // rdx
  int v4; // ebx
  DC *v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  DC *v8; // rcx
  DC *v10[2]; // [rsp+30h] [rbp-49h] BYREF
  struct _XFORMOBJ v11; // [rsp+40h] [rbp-39h] BYREF
  PATHOBJ v12[16]; // [rsp+50h] [rbp-29h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( !v10[0] || (*((_DWORD *)v10[0] + 9) & 0x10000) != 0 )
  {
    v2 = 87;
    goto LABEL_14;
  }
  if ( !(unsigned int)DC::bInactive(v10[0]) )
  {
    v2 = 1003;
LABEL_14:
    EngSetLastError(v2);
    v6 = 0;
    goto LABEL_15;
  }
  v3 = *((_QWORD *)v1 + 10);
  v4 = *(_DWORD *)(v3 + 8);
  if ( (v4 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v1, *(_QWORD *)(v3 + 16));
    v1 = v10[0];
  }
  if ( (v4 & 0x2000) != 0 )
    GreDCSelectPen(v1, *(_QWORD *)(*((_QWORD *)v1 + 10) + 24LL));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v12, v10);
  if ( v12[1] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v11, (struct XDCOBJ *)v10, 516);
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)v12);
    v7 = EPATHOBJ::bStrokeAndOrFill(v12, (POINTL **)v10, (LINEATTRS *)((char *)v10[0] + 184), &v11, 3u);
    v8 = v10[0];
    v6 = v7;
    *((_DWORD *)v10[0] + 44) &= ~1u;
    DC::hpath(v8, 0LL);
  }
  else
  {
    EngSetLastError(8u);
    v5 = v10[0];
    *((_DWORD *)v10[0] + 44) &= ~1u;
    DC::hpath(v5, 0LL);
    v6 = 0;
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v12);
LABEL_15:
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v6;
}
