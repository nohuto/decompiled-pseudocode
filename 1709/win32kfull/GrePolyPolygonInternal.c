/*
 * XREFs of GrePolyPolygonInternal @ 0x1C0132894
 * Callers:
 *     GrePolyPolygon @ 0x1C01327D0 (GrePolyPolygon.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPolygonInternal(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // edi
  POINTL *v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v14; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ v15[11]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[32]; // [rsp+A8h] [rbp-58h] BYREF
  int v17; // [rsp+C8h] [rbp-38h]

  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v9 = v13[0];
  if ( !v13[0] || (v13[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
LABEL_15:
    v9 = v13[0];
    goto LABEL_16;
  }
  v10 = v13[0][10];
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 8LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_QWORD *)(*(_QWORD *)&v10 + 16LL));
    v9 = v13[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[10] + 24LL));
    v9 = v13[0];
  }
  if ( a4 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v13, 516);
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v15, (DC **)v13, 1);
    if ( v15[1] )
    {
      v8 = bPolyPolygon(v15, &v14, a2, a3, a4, a5);
      if ( !v8 )
        goto LABEL_13;
      v15[0].fl |= 0x4000u;
      if ( (v13[0][22].x & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(v15, v13, (LINEATTRS *)&v13[0][23], &v14, 3u) )
      {
        v8 = 1;
        goto LABEL_13;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0;
LABEL_13:
    EPATHOBJ::vUnlock((EPATHOBJ *)v15);
    if ( v17 )
      PopThreadGuardedObject(v16);
    goto LABEL_15;
  }
LABEL_16:
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v8;
}
