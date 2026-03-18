/*
 * XREFs of GrePolyPolylineInternal @ 0x1C012120C
 * Callers:
 *     GrePolyPolyline @ 0x1C0121150 (GrePolyPolyline.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0123538 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPolylineInternal(HDC a1, struct _POINTL *a2, int *a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // edi
  int *v14; // r13
  __int64 v15; // rsi
  ULONG v17; // ecx
  _QWORD v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v19; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h]
  _BYTE v22[32]; // [rsp+A8h] [rbp-58h] BYREF
  int v23; // [rsp+C8h] [rbp-38h]

  v6 = a4;
  v7 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( !v18[0] || (*(_DWORD *)(v18[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_20:
    v7 = v9;
    goto LABEL_21;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v18, 516);
  v10 = v18[0];
  v11 = *(_QWORD *)(v18[0] + 80LL);
  v12 = *(_DWORD *)(v11 + 8);
  if ( (v12 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v18[0], *(_QWORD *)(v11 + 16));
    v10 = v18[0];
  }
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)(v10 + 80) + 24LL));
  v9 = 1;
  if ( !(_DWORD)v6 )
    goto LABEL_20;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v18, 1);
  if ( v21 )
  {
    v14 = &a3[v6];
    do
    {
      v15 = *a3;
      a5 -= v15;
      if ( a5 < 0 || (int)v15 < 2 )
      {
        v17 = 87;
        goto LABEL_24;
      }
      if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v19, a2)
        || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v19, a2 + 1, v15 - 1) )
      {
        goto LABEL_25;
      }
      ++a3;
      a2 += v15;
    }
    while ( a3 < v14 );
    if ( (*(_DWORD *)(v18[0] + 176LL) & 1) == 0
      && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v18, (LINEATTRS *)(v18[0] + 184LL), &v19, 1u) )
    {
      v9 = 0;
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
    if ( v23 )
      PopThreadGuardedObject(v22);
    goto LABEL_20;
  }
  v17 = 8;
LABEL_24:
  EngSetLastError(v17);
LABEL_25:
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v23 )
    PopThreadGuardedObject(v22);
LABEL_21:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v18);
  return v7;
}
