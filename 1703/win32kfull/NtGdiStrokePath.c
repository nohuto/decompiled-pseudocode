/*
 * XREFs of NtGdiStrokePath @ 0x1C028CA20
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0123100 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0123130 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C01248E4 (-bInactive@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiStrokePath(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  ULONG v3; // ecx
  __int64 v4; // rdx
  DC *v5; // rcx
  DC *v7[2]; // [rsp+30h] [rbp-49h] BYREF
  struct _XFORMOBJ v8; // [rsp+40h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-29h] BYREF
  __int64 v10; // [rsp+58h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v1 = 0;
  if ( !v7[0] || (*((_DWORD *)v7[0] + 9) & 0x10000) != 0 )
  {
    v3 = 87;
    goto LABEL_12;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v3 = 1003;
LABEL_12:
    EngSetLastError(v3);
    goto LABEL_13;
  }
  v4 = *(_QWORD *)(v2 + 80);
  if ( (*(_DWORD *)(v4 + 8) & 0x2000) != 0 )
    GreDCSelectPen(v2, *(_QWORD *)(v4 + 24));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v7);
  if ( v10 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v8, (struct XDCOBJ *)v7, 516);
    v1 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v7, (LINEATTRS *)((char *)v7[0] + 184), &v8, 1u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v5 = v7[0];
  *((_DWORD *)v7[0] + 44) &= ~1u;
  DC::hpath(v5, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_13:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v1;
}
