/*
 * XREFs of ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C001FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C001F500 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 *     ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C00201FC (-UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimatio.c)
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
  if ( a3 > 0x12 )
  {
    if ( a3 != 19 )
    {
      switch ( a3 )
      {
        case 0x14u:
          if ( a4 > 2 )
            return (unsigned int)-1073741811;
          if ( *((_DWORD *)this + 53) == (_DWORD)a4 )
            return updated;
          *((_DWORD *)this + 53) = a4;
          break;
        case 0x19u:
          if ( *((_QWORD *)this + 18) == a4 )
            return updated;
          *((_QWORD *)this + 18) = a4;
          break;
        case 0x1Au:
          if ( *((_QWORD *)this + 19) == a4 )
            return updated;
          *((_QWORD *)this + 19) = a4;
          break;
        case 0x1Bu:
          if ( a4 <= 1 )
          {
            if ( *((_DWORD *)this + 51) == (_DWORD)a4 )
              return updated;
            *((_DWORD *)this + 51) = a4;
            break;
          }
          return (unsigned int)-1073741811;
        default:
          return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
      }
LABEL_11:
      *((_DWORD *)this + 4) &= ~0x400u;
LABEL_12:
      *a5 = 1;
      return updated;
    }
    if ( *((_DWORD *)this + 48) == (_DWORD)a4 )
      return updated;
    *((_DWORD *)this + 48) = a4;
    if ( !*((_DWORD *)this + 50) )
    {
LABEL_26:
      *((_DWORD *)this + 4) &= ~0x800u;
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
    case 0x12u:
      if ( a4 > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 50) == (_DWORD)a4 )
        return updated;
      v8 = (unsigned int)a4;
      goto LABEL_25;
    case 9u:
      if ( *((_DWORD *)this + 32) == a4 )
        return updated;
      *((_DWORD *)this + 32) = a4;
      goto LABEL_11;
    case 0xBu:
      if ( *((_QWORD *)this + 14) == a4 )
        return updated;
      *((_QWORD *)this + 14) = a4;
      goto LABEL_11;
    case 0xCu:
      if ( *((_QWORD *)this + 15) == a4 )
        return updated;
      *((_QWORD *)this + 15) = a4;
      goto LABEL_11;
    case 0x10u:
      if ( a4 <= 4 )
      {
        if ( *((_DWORD *)this + 49) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 49) = a4;
        goto LABEL_11;
      }
      return (unsigned int)-1073741811;
    case 0x11u:
      if ( a4 <= 2 )
      {
        if ( *((_DWORD *)this + 52) == (_DWORD)a4 )
          return updated;
        *((_DWORD *)this + 52) = a4;
        goto LABEL_11;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
