/*
 * XREFs of GrePolylineTo @ 0x1C01221D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0123538 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C0123874 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebx
  struct _POINTFIX Current; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v14; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  _BYTE v17[32]; // [rsp+B8h] [rbp-48h] BYREF
  int v18; // [rsp+D8h] [rbp-28h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v5 = v13[0];
  if ( !v13[0] || (*(_DWORD *)(v13[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
    goto LABEL_13;
  }
  v6 = *(_QWORD *)(v13[0] + 80LL);
  v7 = *(_DWORD *)(v6 + 8);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_QWORD *)(v6 + 16));
    v5 = v13[0];
  }
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)(v5 + 80) + 24LL));
  if ( !a3 )
  {
    v8 = 1;
    goto LABEL_13;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v13, 516);
  v8 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v13, 1);
  if ( !v16 )
  {
    EngSetLastError(8u);
LABEL_14:
    v8 = 0;
    goto LABEL_11;
  }
  if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v14, a2, a3) )
    goto LABEL_14;
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
  v10 = v13[0];
  v11 = a3 - 1;
  *(_DWORD *)(*(_QWORD *)(v13[0] + 80LL) + 8LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)(v10 + 80) + 76LL) = a2[v11].x;
  *(_DWORD *)(*(_QWORD *)(v10 + 80) + 80LL) = a2[v11].y;
  *(_DWORD *)(*(_QWORD *)(v10 + 80) + 84LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)(v10 + 80) + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (*(_DWORD *)(v13[0] + 176LL) & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v13, (LINEATTRS *)(v13[0] + 184LL), &v14, 1u) )
  {
    goto LABEL_14;
  }
LABEL_11:
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v18 )
  {
    PopThreadGuardedObject(v17);
    v18 = 0;
  }
LABEL_13:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  return v8;
}
