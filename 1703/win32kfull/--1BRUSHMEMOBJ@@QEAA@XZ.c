/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0136FF4
 * Callers:
 *     GreCreateDIBBrush @ 0x1C0136E1C (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02958D0 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(BRUSHMEMOBJ *this)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( !*((_DWORD *)this + 4) )
      bDeleteBrush(**(_QWORD **)this, 0LL);
    *(_QWORD *)this = 0LL;
  }
}
