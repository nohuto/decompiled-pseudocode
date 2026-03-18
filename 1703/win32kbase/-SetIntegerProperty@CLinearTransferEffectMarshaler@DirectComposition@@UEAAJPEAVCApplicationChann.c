/*
 * XREFs of ?SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C014DFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  char v5; // r10
  char v6; // al

  v5 = a4 != 0;
  switch ( a3 )
  {
    case 2:
      *a5 = v5 != (*((_BYTE *)this + 120) & 1);
      v6 = *((_BYTE *)this + 120) & 0xFE;
      goto LABEL_11;
    case 5:
      *a5 = v5 != ((*((_BYTE *)this + 120) & 2) != 0);
      v6 = *((_BYTE *)this + 120) & 0xFD;
      v5 *= 2;
      goto LABEL_11;
    case 8:
      *a5 = v5 != ((*((_BYTE *)this + 120) & 8) != 0);
      v6 = *((_BYTE *)this + 120) & 0xF7;
      v5 *= 8;
      goto LABEL_11;
    case 11:
      *a5 = v5 != ((*((_BYTE *)this + 120) & 4) != 0);
      v6 = *((_BYTE *)this + 120) & 0xFB;
      v5 *= 4;
      goto LABEL_11;
    case 12:
      *a5 = v5 != ((*((_BYTE *)this + 120) & 0x10) != 0);
      v6 = *((_BYTE *)this + 120) & 0xEF;
      v5 *= 16;
LABEL_11:
      *((_BYTE *)this + 120) = v5 | v6;
      return 0LL;
  }
  return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
