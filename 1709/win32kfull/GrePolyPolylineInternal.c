/*
 * XREFs of GrePolyPolylineInternal @ 0x1C01392B4
 * Callers:
 *     GrePolyPolyline @ 0x1C01391F0 (GrePolyPolyline.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPolylineInternal(HDC a1, struct _POINTL *a2, int *a3, unsigned int a4, int a5)
{
  __int64 v6; // rdi
  unsigned int v8; // ebx
  POINTL v9; // rdx
  int v10; // ebx
  int *v12; // r12
  __int64 v13; // rdi
  ULONG v15; // ecx
  POINTL *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v17; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ v18[11]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[32]; // [rsp+A8h] [rbp-58h] BYREF
  int v20; // [rsp+C8h] [rbp-38h]

  v6 = a4;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !v16[0] || (v16[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
  }
  else
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v17, (struct XDCOBJ *)v16, 516);
    v9 = v16[0][10];
    v10 = *(_DWORD *)(*(_QWORD *)&v9 + 8LL);
    if ( (v10 & 0x1000) != 0 )
      GreDCSelectBrush(v16[0], *(_QWORD *)(*(_QWORD *)&v9 + 16LL));
    if ( (v10 & 0x2000) != 0 )
      GreDCSelectPen(v16[0], *(_QWORD *)(*(_QWORD *)&v16[0][10] + 24LL));
    v8 = 1;
    if ( (_DWORD)v6 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v18, (DC **)v16, 1);
      if ( v18[1] )
      {
        v12 = &a3[v6];
        do
        {
          v13 = *a3;
          a5 -= v13;
          if ( a5 < 0 || (int)v13 < 2 )
          {
            v15 = 87;
            goto LABEL_25;
          }
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v18, (struct EXFORMOBJ *)&v17, a2)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v18, (struct EXFORMOBJ *)&v17, a2 + 1, v13 - 1) )
          {
            goto LABEL_26;
          }
          ++a3;
          a2 += v13;
        }
        while ( a3 < v12 );
        if ( (v16[0][22].x & 1) == 0
          && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(v18, v16, (LINEATTRS *)&v16[0][23], &v17, 1u) )
        {
          v8 = 0;
        }
        EPATHOBJ::vUnlock((EPATHOBJ *)v18);
        if ( v20 )
          PopThreadGuardedObject(v19);
      }
      else
      {
        v15 = 8;
LABEL_25:
        EngSetLastError(v15);
LABEL_26:
        EPATHOBJ::vUnlock((EPATHOBJ *)v18);
        if ( v20 )
          PopThreadGuardedObject(v19);
        v8 = 0;
      }
    }
  }
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v8;
}
