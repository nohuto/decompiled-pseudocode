/*
 * XREFs of ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C002B410
 * Callers:
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0027EB0 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C002D830 (-SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0146B00 (-SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0147490 (-SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0149BF0 (-SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  char v10; // al
  char v11; // r8
  char v12; // al
  char v13; // r8
  int v15; // r8d

  v5 = 0;
  *a5 = 0;
  if ( !a3 )
  {
    if ( (int)a4 < 17
      || (int)a4 > 18
      && (_DWORD)a4 != 52
      && (_DWORD)a4 != 35
      && (_DWORD)a4 != 42
      && ((int)a4 <= 68 || (_DWORD)a4 != 104 && (_DWORD)a4 != 265 && (int)a4 > 71) )
    {
      return (unsigned int)-1073741811;
    }
    if ( *((_DWORD *)this + 12) == (_DWORD)a4 )
      return v5;
    *((_DWORD *)this + 12) = a4;
LABEL_23:
    *((_DWORD *)this + 4) &= ~0x40u;
    goto LABEL_12;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( (*((_BYTE *)this + 104) & 1) == (a4 != 0) )
      return v5;
    v12 = a4 != 0;
    v13 = *((_BYTE *)this + 104) & 0xFE;
LABEL_11:
    *((_DWORD *)this + 4) &= ~0x40u;
    *((_BYTE *)this + 104) = v13 | v12;
    goto LABEL_12;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( *((_DWORD *)this + 16) == a4 )
      return v5;
    *((_DWORD *)this + 16) = a4;
    goto LABEL_23;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((_DWORD *)this + 20) == a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 20) = a4;
    goto LABEL_12;
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    v15 = v9 - 1;
    if ( !v15 )
    {
      if ( ((*((unsigned __int8 *)this + 104) >> 2) & 1) == (a4 != 0) )
        return v5;
      v10 = a4 != 0 ? 4 : 0;
      v11 = *((_BYTE *)this + 104) & 0xFB;
      goto LABEL_8;
    }
    if ( v15 == 3 )
    {
      if ( ((*((unsigned __int8 *)this + 104) >> 3) & 1) == (a4 != 0) )
        return v5;
      v12 = a4 != 0 ? 8 : 0;
      v13 = *((_BYTE *)this + 104) & 0xF7;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  if ( ((*((unsigned __int8 *)this + 104) >> 1) & 1) != (a4 != 0) )
  {
    v10 = a4 != 0 ? 2 : 0;
    v11 = *((_BYTE *)this + 104) & 0xFD;
LABEL_8:
    *((_DWORD *)this + 4) &= ~0x100u;
    *((_BYTE *)this + 104) = v11 | v10;
LABEL_12:
    *a5 = 1;
  }
  return v5;
}
