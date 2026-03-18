/*
 * XREFs of GreDCSelectBrush @ 0x1C00514D0
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectBrush @ 0x1C00948A0 (GreSelectBrush.c)
 * Callees:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     GreSetSolidBrushLight @ 0x1C007F950 (GreSetSolidBrushLight.c)
 */

__int64 __fastcall GreDCSelectBrush(__int64 a1, struct HOBJ__ *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  _DWORD *v6; // r15

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 144);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL);
    if ( a2 != *(struct HOBJ__ **)v5 )
    {
      v5 = HmgShareLockCheck(a2, 16);
      if ( v5 )
      {
        DEC_SHARE_REF_CNT_LAZY0(*(struct HOBJ__ ***)(a1 + 144));
        *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL) |= 1u;
        *(_QWORD *)(a1 + 144) = v5;
      }
      else
      {
        v4 = 0LL;
      }
    }
    if ( v5 )
    {
      if ( v4 )
      {
        v6 = *(_DWORD **)(v5 + 56);
        if ( v6 != (_DWORD *)(v5 + 80) && (*v6 & 4) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL) |= 1u;
          GreSetSolidBrushLight((struct OBJECT *)v5);
          *v6 &= ~4u;
        }
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) = a2;
      *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL) &= ~0x1000u;
    }
  }
  return v4;
}
