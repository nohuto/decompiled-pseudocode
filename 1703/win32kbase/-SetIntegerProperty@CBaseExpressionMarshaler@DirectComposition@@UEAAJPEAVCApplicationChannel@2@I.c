/*
 * XREFs of ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C001F500
 * Callers:
 *     ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0018150 (-SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C001FE80 (-SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0147330 (-SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0148D70 (-SetIntegerProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
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
  char v12; // r8

  v5 = 0;
  *a5 = 0;
  if ( !a3 )
  {
    if ( (int)a4 < 17
      || (int)a4 > 18
      && (_DWORD)a4 != 35
      && (_DWORD)a4 != 52
      && ((int)a4 <= 68 || (_DWORD)a4 != 104 && (_DWORD)a4 != 265 && (int)a4 > 71) )
    {
      return (unsigned int)-1073741811;
    }
    if ( *((_DWORD *)this + 12) == (_DWORD)a4 )
      return v5;
    *((_DWORD *)this + 12) = a4;
LABEL_21:
    *((_DWORD *)this + 4) &= ~0x40u;
    goto LABEL_11;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    v12 = *((_BYTE *)this + 84);
    if ( (v12 & 1) != (a4 != 0) )
    {
      *((_DWORD *)this + 4) &= ~0x40u;
      *((_BYTE *)this + 84) = (a4 != 0) | v12 & 0xFE;
      goto LABEL_11;
    }
    return v5;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( *((_DWORD *)this + 16) == a4 )
      return v5;
    *((_DWORD *)this + 16) = a4;
    goto LABEL_21;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( *((_DWORD *)this + 20) == a4 )
      return v5;
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 20) = a4;
    goto LABEL_11;
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      if ( ((*((unsigned __int8 *)this + 84) >> 2) & 1) == (a4 != 0) )
        return v5;
      v10 = a4 != 0 ? 4 : 0;
      v11 = *((_BYTE *)this + 84) & 0xFB;
      goto LABEL_8;
    }
    return (unsigned int)-1073741811;
  }
  if ( ((*((unsigned __int8 *)this + 84) >> 1) & 1) != (a4 != 0) )
  {
    v10 = a4 != 0 ? 2 : 0;
    v11 = *((_BYTE *)this + 84) & 0xFD;
LABEL_8:
    *((_DWORD *)this + 4) &= ~0x100u;
    *((_BYTE *)this + 84) = v10 | v11;
LABEL_11:
    *a5 = 1;
  }
  return v5;
}
