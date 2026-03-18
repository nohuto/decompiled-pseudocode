/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0018AD0
 * Callers:
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00104E0 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CSpatialVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C015B3D0 (-SetIntegerProperty@CSpatialVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_.c)
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C000A410 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0016058 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edi
  char v8; // cl
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // cl
  bool v14; // dl
  bool v15; // dl
  int v16; // ecx
  char v17; // al
  char v18; // cl
  char v19; // al
  char v20; // dl
  char v21; // al
  char v22; // r8
  char v23; // cl
  char v24; // al
  char v25; // cl
  char v26; // cl
  __int64 v27; // r9

  v5 = 0;
  *a5 = 0;
  if ( a3 > 0x1B )
  {
    switch ( a3 )
    {
      case '%':
        v12 = *((_BYTE *)this + 272);
        v13 = v12 & 0x10;
        if ( (_DWORD)a4 )
        {
          if ( v13 )
            return v5;
          v21 = v12 | 0x10;
        }
        else
        {
          if ( !v13 )
            return v5;
          v21 = v12 & 0xEF;
        }
        break;
      case '&':
        v8 = *((_BYTE *)this + 272);
        if ( (v8 & 0x40) != 0 )
        {
          if ( a4 )
            return v5;
          if ( (*((_DWORD *)this + 4) & 0x10) != 0 )
          {
            (*(void (__fastcall **)(_QWORD, struct DirectComposition::CApplicationChannel *, DirectComposition::CVisualMarshaler *))(**((_QWORD **)this + 22) + 240LL))(
              *((_QWORD *)this + 22),
              a2,
              this);
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
              a2,
              *((struct DirectComposition::CResourceMarshaler **)this + 22));
            *((_DWORD *)this + 4) &= ~0x10u;
            v8 = *((_BYTE *)this + 272);
          }
          v26 = v8 & 0xBF;
        }
        else
        {
          if ( !a4 )
            return v5;
          v27 = *((_QWORD *)this + 22);
          if ( v27 )
          {
            (*(void (__fastcall **)(_QWORD, struct DirectComposition::CApplicationChannel *, DirectComposition::CVisualMarshaler *))(*(_QWORD *)v27 + 232LL))(
              *((_QWORD *)this + 22),
              a2,
              this);
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
              a2,
              *((struct DirectComposition::CResourceMarshaler **)this + 22));
            v8 = *((_BYTE *)this + 272);
          }
          v26 = v8 | 0x40;
        }
        *((_BYTE *)this + 272) = v26;
        return v5;
      case ')':
        v24 = *((_BYTE *)this + 272);
        v25 = v24 & 0x20;
        if ( (_DWORD)a4 )
        {
          if ( v25 )
            return v5;
          v21 = v24 | 0x20;
        }
        else
        {
          if ( !v25 )
            return v5;
          v21 = v24 & 0xDF;
        }
        break;
      case '*':
        if ( (unsigned int)a4 <= 2 )
        {
          if ( *((_DWORD *)this + 60) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 4) |= 0x2000000u;
          *((_DWORD *)this + 60) = a4;
          goto LABEL_31;
        }
        return (unsigned int)-1073741811;
      default:
        switch ( a3 )
        {
          case '+':
            v23 = *((_BYTE *)this + 272);
            if ( (v23 & 1) == ((_DWORD)a4 != 0) )
              return v5;
            *((_DWORD *)this + 4) |= 0x4000000u;
            *((_BYTE *)this + 272) = ((_DWORD)a4 != 0) | v23 & 0xFE;
            break;
          case ',':
            if ( *((_DWORD *)this + 61) == (_DWORD)a4 )
              return v5;
            *((_DWORD *)this + 4) |= 0x8000000u;
            *((_DWORD *)this + 61) = a4;
            break;
          case '-':
            v22 = *((_BYTE *)this + 273);
            if ( ((_DWORD)a4 != 0) == (v22 & 1) )
              return v5;
            *((_DWORD *)this + 4) |= 0x10000u;
            *((_BYTE *)this + 273) = v22 & 0xFE | ((_DWORD)a4 != 0);
            break;
          default:
            return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                                   this,
                                   a2,
                                   a3,
                                   a4,
                                   a5);
        }
LABEL_31:
        *a5 = 1;
        return v5;
    }
    goto LABEL_29;
  }
  if ( a3 == 27 )
  {
    v10 = *((_BYTE *)this + 272);
    v11 = v10 & 8;
    if ( (_DWORD)a4 )
    {
      if ( v11 )
        return v5;
      v21 = v10 | 8;
    }
    else
    {
      if ( !v11 )
        return v5;
      v21 = v10 & 0xF7;
    }
LABEL_29:
    *((_DWORD *)this + 4) |= 0x10000u;
LABEL_30:
    *((_BYTE *)this + 272) = v21;
    goto LABEL_31;
  }
  if ( a3 <= 0x11 )
  {
    switch ( a3 )
    {
      case 0x11u:
        if ( *((_DWORD *)this + 67) == a4 )
          return v5;
        *((_DWORD *)this + 67) = a4;
        break;
      case 7u:
        if ( (unsigned __int64)(a4 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 55) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 55) = a4;
          goto LABEL_21;
        }
        goto LABEL_24;
      case 8u:
        if ( (unsigned __int64)(a4 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 54) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 54) = a4;
LABEL_21:
          v14 = 1;
          goto LABEL_22;
        }
        goto LABEL_24;
      case 9u:
        if ( a4 < -1 || a4 > 2 )
          return (unsigned int)-1073741811;
        v15 = 1;
        if ( (_DWORD)a4 == -1 )
        {
          v16 = 5;
        }
        else if ( (_DWORD)a4 )
        {
          if ( (_DWORD)a4 == 1 )
            v16 = 2;
          else
            v16 = 4;
        }
        else
        {
          v16 = 0;
        }
        if ( *((_DWORD *)this + 56) != v16 )
        {
          *((_DWORD *)this + 56) = v16;
          goto LABEL_47;
        }
        goto LABEL_73;
      case 0xEu:
        if ( (unsigned __int64)(a4 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 57) != (_DWORD)a4 )
        {
          *((_DWORD *)this + 57) = a4;
          goto LABEL_21;
        }
        goto LABEL_24;
      case 0x10u:
        if ( (unsigned __int64)a4 > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 66) == a4 )
          return v5;
        *((_DWORD *)this + 66) = a4;
        break;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    *((_DWORD *)this + 4) |= 0x20000u;
    goto LABEL_31;
  }
  switch ( a3 )
  {
    case 0x12u:
      v17 = *((_BYTE *)this + 272);
      v18 = v17 & 2;
      if ( (_DWORD)a4 )
      {
        if ( v18 )
          return v5;
        v21 = v17 | 2;
      }
      else
      {
        if ( !v18 )
          return v5;
        v21 = v17 & 0xFD;
      }
      goto LABEL_89;
    case 0x13u:
      v19 = *((_BYTE *)this + 272);
      v20 = v19 & 4;
      if ( (_DWORD)a4 )
      {
        if ( v20 )
          return v5;
        v21 = v19 | 4;
      }
      else
      {
        if ( !v20 )
          return v5;
        v21 = v19 & 0xFB;
      }
LABEL_89:
      *((_DWORD *)this + 4) |= 0x40000u;
      goto LABEL_30;
    case 0x14u:
      if ( (unsigned __int64)(a4 + 1) > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 58) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 58) = a4;
        goto LABEL_21;
      }
LABEL_24:
      v14 = 0;
LABEL_22:
      *a5 = v14;
      if ( v14 )
        *((_DWORD *)this + 4) |= 0x8000u;
      return v5;
  }
  if ( a3 != 21 )
  {
    if ( a3 != 22 )
      return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    if ( (unsigned __int64)(a4 + 1) > 2 && a4 != 3 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)this + 59) != (_DWORD)a4 )
    {
      *((_DWORD *)this + 59) = a4;
      goto LABEL_21;
    }
    goto LABEL_24;
  }
  if ( (unsigned __int64)(a4 + 1) > 4 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 59) != (_DWORD)a4 )
  {
    *((_DWORD *)this + 59) = a4;
    v15 = 1;
    goto LABEL_47;
  }
LABEL_73:
  v15 = 0;
LABEL_47:
  *a5 = v15;
  if ( v15 )
    *((_DWORD *)this + 4) |= 0x8000u;
  return v5;
}
