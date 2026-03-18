/*
 * XREFs of NtGdiFillPath @ 0x1C01220F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0123100 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0123130 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bInactive@DC@@QEAAHXZ @ 0x1C01248E4 (-bInactive@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiFillPath(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // rdx
  DC *v4; // rcx
  ULONG v6; // ecx
  DC *v7[2]; // [rsp+30h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v1 = 0;
  if ( !v7[0] || (*((_DWORD *)v7[0] + 9) & 0x10000) != 0 )
  {
    v6 = 87;
    goto LABEL_13;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v6 = 1003;
LABEL_13:
    EngSetLastError(v6);
    goto LABEL_9;
  }
  v3 = *(_QWORD *)(v2 + 80);
  if ( (*(_DWORD *)(v3 + 8) & 0x1000) != 0 )
    GreDCSelectBrush(v2, *(_QWORD *)(v3 + 16));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, (struct XDCOBJ *)v7);
  if ( v9 )
  {
    EPATHOBJ::vCloseAllFigures((EPATHOBJ *)&ppo);
    v1 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v7, 0LL, 0LL, 2u);
  }
  else
  {
    EngSetLastError(8u);
  }
  v4 = v7[0];
  *((_DWORD *)v7[0] + 44) &= ~1u;
  DC::hpath(v4, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_9:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return v1;
}
