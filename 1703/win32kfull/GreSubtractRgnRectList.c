/*
 * XREFs of GreSubtractRgnRectList @ 0x1C00F02F4
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0066340 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C007F294 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

__int64 __fastcall GreSubtractRgnRectList(HRGN a1, struct _RECTL *a2, struct _RECTL *a3, signed int a4)
{
  unsigned int v7; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, a1, 0);
  v7 = 0;
  if ( v9[0] )
  {
    if ( (unsigned int)RGNOBJAPI::bSubtract((RGNOBJAPI *)v9, a2, a3, a4) )
    {
      v7 = RGNOBJ::iComplexity((RGNOBJ *)v9);
    }
    else if ( v9[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v9);
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
  return v7;
}
