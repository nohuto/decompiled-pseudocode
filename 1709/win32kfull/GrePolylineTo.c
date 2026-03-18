/*
 * XREFs of GrePolylineTo @ 0x1C012BB00
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C012C3C4 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  POINTL v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebx
  struct _POINTFIX Current; // rax
  POINTL *v10; // r9
  __int64 v11; // r8
  POINTL *v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v14; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ v15[11]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[32]; // [rsp+B8h] [rbp-48h] BYREF
  int v17; // [rsp+D8h] [rbp-28h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v5 = v13[0];
  if ( !v13[0] || (v13[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
LABEL_13:
    v5 = v13[0];
    goto LABEL_14;
  }
  v6 = v13[0][10];
  v7 = *(_DWORD *)(*(_QWORD *)&v6 + 8LL);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v13[0], *(_QWORD *)(*(_QWORD *)&v6 + 16LL));
    v5 = v13[0];
  }
  if ( (v7 & 0x2000) != 0 )
  {
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[10] + 24LL));
    v5 = v13[0];
  }
  if ( a3 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v13, 516);
    v8 = 1;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v15, (DC **)v13, 1);
    if ( v15[1] )
    {
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)v15, (struct EXFORMOBJ *)&v14, a2, a3) )
      {
        Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v15);
        v10 = v13[0];
        v11 = a3 - 1;
        *(_DWORD *)(*(_QWORD *)&v13[0][10] + 8LL) &= 0xFFFFFCFF;
        *(_DWORD *)(*(_QWORD *)&v10[10] + 76LL) = a2[v11].x;
        *(_DWORD *)(*(_QWORD *)&v10[10] + 80LL) = a2[v11].y;
        *(_DWORD *)(*(_QWORD *)&v10[10] + 84LL) = *(_DWORD *)Current.x;
        *(_DWORD *)(*(_QWORD *)&v10[10] + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
        if ( (v13[0][22].x & 1) != 0
          || (unsigned int)EPATHOBJ::bStrokeAndOrFill(v15, v13, (LINEATTRS *)&v13[0][23], &v14, 1u) )
        {
LABEL_11:
          EPATHOBJ::vUnlock((EPATHOBJ *)v15);
          if ( v17 )
          {
            PopThreadGuardedObject(v16);
            v17 = 0;
          }
          goto LABEL_13;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0;
    goto LABEL_11;
  }
  v8 = 1;
LABEL_14:
  if ( v5 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v8;
}
