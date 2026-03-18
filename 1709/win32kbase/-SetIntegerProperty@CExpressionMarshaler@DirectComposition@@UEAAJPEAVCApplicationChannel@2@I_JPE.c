/*
 * XREFs of ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C002D830
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C002B410 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 12:
      if ( *((_QWORD *)this + 16) == a4 )
        return v5;
      *((_QWORD *)this + 16) = a4;
      goto LABEL_11;
    case 13:
      if ( *((_QWORD *)this + 17) == a4 )
        return v5;
      *((_QWORD *)this + 17) = a4;
      goto LABEL_11;
    case 14:
      if ( *((_DWORD *)this + 36) == a4 )
        return v5;
      *((_DWORD *)this + 36) = a4;
      goto LABEL_11;
    case 16:
      if ( *((_QWORD *)this + 20) == a4 )
        return v5;
      *((_QWORD *)this + 20) = a4;
      goto LABEL_11;
    case 17:
      if ( *((_QWORD *)this + 21) == a4 )
        return v5;
      *((_QWORD *)this + 21) = a4;
      goto LABEL_11;
    case 18:
      if ( *((_DWORD *)this + 44) == a4 )
        return v5;
      *((_DWORD *)this + 44) = a4;
      goto LABEL_11;
    case 19:
      if ( *((_DWORD *)this + 45) == a4 )
        return v5;
      *((_DWORD *)this + 45) = a4;
LABEL_11:
      *((_DWORD *)this + 4) &= ~0x800u;
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
