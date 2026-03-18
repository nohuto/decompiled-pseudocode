/*
 * XREFs of ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0027EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C00281DC (-UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimatio.c)
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C002B410 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int updated; // ecx
  __int64 v8; // rdx

  updated = 0;
  *a5 = 0;
  if ( a3 > 0x14 )
  {
    if ( a3 != 21 )
    {
      switch ( a3 )
      {
        case 0x16u:
          if ( a4 > 2 )
            return (unsigned int)-1073741811;
          if ( *((_DWORD *)this + 57) == (_DWORD)a4 )
            return updated;
          *((_DWORD *)this + 57) = a4;
          break;
        case 0x1Bu:
          if ( *((_QWORD *)this + 20) == a4 )
            return updated;
          *((_QWORD *)this + 20) = a4;
          break;
        case 0x1Cu:
          if ( *((_QWORD *)this + 21) == a4 )
            return updated;
          *((_QWORD *)this + 21) = a4;
          break;
        case 0x1Du:
          if ( a4 <= 1 )
          {
            if ( *((_DWORD *)this + 55) == (_DWORD)a4 )
              return updated;
            *((_DWORD *)this + 55) = a4;
            break;
          }
          return (unsigned int)-1073741811;
        default:
          return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
      }
LABEL_11:
      *((_DWORD *)this + 4) &= ~0x800u;
LABEL_12:
      *a5 = 1;
      return updated;
    }
    if ( *((_DWORD *)this + 52) == (_DWORD)a4 )
      return updated;
    *((_DWORD *)this + 52) = a4;
    if ( !*((_DWORD *)this + 54) )
    {
LABEL_26:
      *((_DWORD *)this + 4) &= ~0x1000u;
      goto LABEL_12;
    }
    v8 = 0LL;
LABEL_25:
    updated = DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(this, v8);
    if ( (updated & 0x80000000) != 0 )
      return updated;
    goto LABEL_26;
  }
  switch ( a3 )
  {
    case 0x14u:
      if ( a4 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 54) == (_DWORD)a4 )
        return updated;
      v8 = (unsigned int)a4;
      goto LABEL_25;
    case 0xBu:
      if ( *((_DWORD *)this + 36) == a4 )
        return updated;
      *((_DWORD *)this + 36) = a4;
      goto LABEL_11;
    case 0xDu:
      if ( *((_QWORD *)this + 16) == a4 )
        return updated;
      *((_QWORD *)this + 16) = a4;
      goto LABEL_11;
    case 0xEu:
      if ( *((_QWORD *)this + 17) == a4 )
        return updated;
      *((_QWORD *)this + 17) = a4;
      goto LABEL_11;
    case 0x12u:
      if ( a4 <= 4 )
      {
        if ( *((_DWORD *)this + 53) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 53) = a4;
        goto LABEL_11;
      }
      return (unsigned int)-1073741811;
    case 0x13u:
      if ( a4 <= 2 )
      {
        if ( *((_DWORD *)this + 56) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 56) = a4;
        goto LABEL_11;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
