/*
 * XREFs of GreDCSelectPen @ 0x1C007F750
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectPen @ 0x1C00ED9A0 (GreSelectPen.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0052810 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00548A0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     GreSetSolidBrushLight @ 0x1C007F950 (GreSetSolidBrushLight.c)
 */

struct HOBJ__ *__fastcall GreDCSelectPen(struct HOBJ__ ***this, struct HOBJ__ *a2)
{
  struct HOBJ__ *v4; // rsi
  int v5; // r12d
  struct HOBJ__ **v6; // rdi
  struct HOBJ__ *v7; // r14
  __int64 v9; // rax
  struct HOBJ__ **v10; // rcx
  char *v11; // [rsp+38h] [rbp-60h] BYREF
  int v12; // [rsp+40h] [rbp-58h]
  int v13; // [rsp+44h] [rbp-54h]
  struct HOBJ__ ***v14; // [rsp+48h] [rbp-50h] BYREF
  int v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+54h] [rbp-44h]

  v4 = 0LL;
  v15 = 0;
  v16 = 0;
  v14 = this;
  if ( this )
  {
    v5 = 0;
    v6 = this[19];
    v4 = this[10][3];
    if ( a2 != *v6 )
    {
      v9 = HmgShareLockCheck(a2, 16);
      v6 = (struct HOBJ__ **)v9;
      if ( v9 && (*(_DWORD *)(v9 + 48) & 0x400) != 0 )
      {
        DEC_SHARE_REF_CNT_LAZY0(this[19]);
        *((_DWORD *)this[10] + 2) |= 2u;
        this[19] = v6;
        v5 = 1;
      }
      else
      {
        if ( v9 )
        {
          HmgDecrementShareReferenceCountEx((struct OBJECT *)v9, 0LL);
          v6 = 0LL;
        }
        v4 = 0LL;
      }
    }
    if ( v6 )
    {
      if ( v4 )
      {
        v7 = v6[7];
        if ( v7 != (struct HOBJ__ *)(v6 + 10) && (*(_DWORD *)v7 & 4) != 0 )
        {
          GreSetSolidBrushLight((struct OBJECT *)v6);
          *((_DWORD *)this[10] + 2) |= 2u;
          *(_DWORD *)v7 &= ~4u;
          v5 = 1;
        }
        if ( v5 )
        {
          v10 = this[10];
          v12 = *((_DWORD *)v10 + 17);
          v13 = (_DWORD)v10[39] & 1;
          if ( ((_DWORD)v10[44] & 0x1E000) != 0 )
            EXFORMOBJ::vInit((EXFORMOBJ *)&v11, (DC **)&v14, 516, 0);
          else
            v11 = (char *)(this + 42);
          DC::vRealizeLineAttrs((DC *)this, (struct EXFORMOBJ *)&v11);
        }
      }
      this[10][3] = a2;
      *((_DWORD *)this[10] + 2) &= ~0x2000u;
    }
  }
  return v4;
}
