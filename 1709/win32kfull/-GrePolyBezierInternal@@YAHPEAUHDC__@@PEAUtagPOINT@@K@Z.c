/*
 * XREFs of ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C027AB84
 * Callers:
 *     GrePolyBezier @ 0x1C027B3D0 (GrePolyBezier.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyBezierInternal(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // esi
  ULONG v9; // ecx
  POINTL *v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v12; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ v13[11]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[32]; // [rsp+A8h] [rbp-58h] BYREF
  int v15; // [rsp+C8h] [rbp-38h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v5 = v11[0];
  if ( !v11[0] || (v11[0][4].y & 0x10000) != 0 )
  {
    v9 = 6;
    goto LABEL_20;
  }
  if ( a3 < 4 || (v6 = 1, a3 % 3 != 1) )
  {
    v9 = 87;
LABEL_20:
    EngSetLastError(v9);
    v6 = 0;
    goto LABEL_21;
  }
  v7 = v11[0][10];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 8LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v11[0], *(_QWORD *)(*(_QWORD *)&v7 + 16LL));
    v5 = v11[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[10] + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v12, (struct XDCOBJ *)v11, 516);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v13, (DC **)v11, 1);
  if ( !*(_QWORD *)&v13[1] )
  {
    EngSetLastError(8u);
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v13, (struct EXFORMOBJ *)&v12, a2)
    || !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)v13, (struct EXFORMOBJ *)&v12, a2 + 1, a3 - 1)
    || (v11[0][22].x & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(v13, v11, (LINEATTRS *)&v11[0][23], &v12, 1u) )
  {
    goto LABEL_15;
  }
LABEL_16:
  EPATHOBJ::vUnlock((EPATHOBJ *)v13);
  if ( v15 )
  {
    PopThreadGuardedObject(v14);
    v15 = 0;
  }
LABEL_21:
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v6;
}
