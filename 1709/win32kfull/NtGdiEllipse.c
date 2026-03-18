/*
 * XREFs of NtGdiEllipse @ 0x1C027B930
 * Callers:
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01C4DB8 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C000B808 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C028B9AC (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 */

__int64 __fastcall NtGdiEllipse(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  POINTL *v8; // rcx
  POINTL v9; // rdx
  LINEATTRS *v10; // rsi
  int v11; // ebx
  unsigned int v12; // edi
  unsigned int v13; // ecx
  POINTL v14; // rbx
  POINTL *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v19[20]; // [rsp+60h] [rbp-A0h] BYREF
  PATHOBJ v20[11]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v21[32]; // [rsp+108h] [rbp+8h] BYREF
  int v22; // [rsp+128h] [rbp+28h]

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !v16[0] || (v16[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v12 = 0;
    goto LABEL_23;
  }
  v17.bottom = a5;
  v17.left = a2;
  v17.top = a3;
  v17.right = a4;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v16, 516);
  v8 = v16[0];
  v9 = v16[0][10];
  v10 = (LINEATTRS *)&v16[0][23];
  v11 = *(_DWORD *)(*(_QWORD *)&v9 + 8LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v16[0], *(_QWORD *)(*(_QWORD *)&v9 + 16LL));
    v8 = v16[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[10] + 24LL));
  v12 = 1;
  EBOX::EBOX((EBOX *)v19, (struct DCOBJ *)v16, &v17, v10, 1);
  if ( !v19[0] )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v20, (DC **)v16, 1);
    if ( v20[1] )
    {
      if ( (unsigned int)bEllipse((struct EPATHOBJ *)v20, (struct EBOX *)v19) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&v18[0].ulReserved + 32LL) & 1) != 0 && v20[0].cCurves == 5 )
          v20[0].fl |= 2u;
        if ( (v16[0][22].x & 1) == 0 )
        {
          if ( v19[1] )
          {
            v14 = v16[0][18];
            v16[0][18] = v16[0][19];
            v16[0][41].y |= 1u;
            v13 = EPATHOBJ::bStrokeAndOrFill(v20, v16, 0LL, 0LL, 2u);
            v16[0][18] = v14;
            v16[0][41].y |= 1u;
          }
          else
          {
            v13 = EPATHOBJ::bStrokeAndOrFill(v20, v16, v10, v18, 3u);
          }
          v12 = v13;
        }
        goto LABEL_20;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v12 = 0;
LABEL_20:
    EPATHOBJ::vUnlock((EPATHOBJ *)v20);
    if ( v22 )
    {
      PopThreadGuardedObject(v21);
      v22 = 0;
    }
  }
LABEL_23:
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v12;
}
