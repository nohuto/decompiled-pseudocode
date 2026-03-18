/*
 * XREFs of GrePolyBezierTo @ 0x1C012BD60
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

__int64 __fastcall GrePolyBezierTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  POINTL v6; // rdx
  int v7; // ebx
  unsigned int v8; // ebx
  struct _POINTFIX Current; // rax
  POINTL *v10; // r9
  __int64 v11; // r8
  ULONG v13; // ecx
  POINTL *v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v15; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ v16[11]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[32]; // [rsp+B8h] [rbp-48h] BYREF
  int v18; // [rsp+D8h] [rbp-28h]

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v5 = v14[0];
  if ( !v14[0] || (v14[0][4].y & 0x10000) != 0 )
  {
    v13 = 6;
    goto LABEL_23;
  }
  if ( a3 < 3 || a3 != 3 * (a3 / 3) )
  {
    v13 = 87;
LABEL_23:
    EngSetLastError(v13);
    v8 = 0;
    goto LABEL_14;
  }
  v6 = v14[0][10];
  v7 = *(_DWORD *)(*(_QWORD *)&v6 + 8LL);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(*(_QWORD *)&v6 + 16LL));
    v5 = v14[0];
  }
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[10] + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v15, (struct XDCOBJ *)v14, 516);
  v8 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v16, (DC **)v14, 1);
  if ( !*(_QWORD *)&v16[1] )
  {
    EngSetLastError(8u);
LABEL_17:
    v8 = 0;
    goto LABEL_12;
  }
  if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)v16, (struct EXFORMOBJ *)&v15, a2, a3) )
    goto LABEL_17;
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v16);
  v10 = v14[0];
  v11 = a3 - 1;
  *(_DWORD *)(*(_QWORD *)&v14[0][10] + 8LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)&v10[10] + 76LL) = a2[v11].x;
  *(_DWORD *)(*(_QWORD *)&v10[10] + 80LL) = a2[v11].y;
  *(_DWORD *)(*(_QWORD *)&v10[10] + 84LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)&v10[10] + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (v14[0][22].x & 1) == 0
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(v16, v14, (LINEATTRS *)&v14[0][23], &v15, 1u) )
  {
    goto LABEL_17;
  }
LABEL_12:
  EPATHOBJ::vUnlock((EPATHOBJ *)v16);
  if ( v18 )
  {
    PopThreadGuardedObject(v17);
    v18 = 0;
  }
LABEL_14:
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v8;
}
