/*
 * XREFs of ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002FADC
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@PEBUD2D_RECT_F@@PEA_N@Z @ 0x1C0056DD0 (-SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@PE.c)
 *     ?SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C007E7BC (-SetMatrixHelper@CMatrixTransformMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEB.c)
 *     ?SetMatrixHelper@CAffineTransform2DEffectMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEBUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x1C014F950 (-SetMatrixHelper@CAffineTransform2DEffectMarshaler@DirectComposition@@QEAAXPEAVCApplicationChann.c)
 *     ?SetBufferProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C014FB60 (-SetBufferProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C002F9BC (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007C2CC (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::UnbindAllAnimations(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rsi
  DirectComposition::CAnimationBinding *i; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx

  if ( *((int *)this + 6) > 2 )
  {
    for ( i = (DirectComposition::CAnimationBinding *)*((_QWORD *)a2 + 4);
          i;
          i = (DirectComposition::CAnimationBinding *)*((_QWORD *)a2 + 4) )
    {
      DirectComposition::CAnimationBinding::DetachAndDelete(i, this);
    }
  }
  else
  {
    v4 = *((_QWORD *)a2 + 4);
    if ( v4 )
    {
      do
      {
        v5 = *(_DWORD *)(v4 + 8);
        v6 = *(_QWORD *)(v4 + 32);
        if ( (v5 & 2) != 0 )
        {
          v8 = (_QWORD *)((char *)this + 440);
          while ( 1 )
          {
            v9 = (_QWORD *)*v8;
            if ( !*v8 )
              break;
            if ( (struct DirectComposition::CResourceMarshaler *)v9[2] == a2 )
            {
              *v8 = *v9;
              *v9 = 0LL;
            }
            else
            {
              v8 = (_QWORD *)*v8;
            }
          }
          DirectComposition::CAnimationBinding::DetachAndDelete((DirectComposition::CAnimationBinding *)v4, this);
        }
        else if ( (v5 & 1) != 0 )
        {
          DirectComposition::CApplicationChannel::NewRemovingBinding(
            this,
            (struct DirectComposition::CAnimationBinding *)v4);
        }
        v4 = v6;
      }
      while ( v6 );
    }
  }
}
