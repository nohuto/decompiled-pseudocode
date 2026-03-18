/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C002C040
 * Callers:
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0028C80 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C002AF50 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002F768 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edi
  char v9; // al
  char v10; // al
  char v11; // al
  int v12; // ecx
  bool v13; // zf
  bool v14; // al
  bool v15; // zf
  char v16; // al
  int v17; // ecx
  int v18; // edx
  char v19; // al
  char v20; // dl
  char v21; // cl
  char v22; // al
  __int64 v23; // rcx

  v5 = 0;
  *a5 = 0;
  if ( a3 > 0x13 )
  {
    switch ( a3 )
    {
      case 0x18u:
        v11 = *((_BYTE *)this + 236);
        if ( (_DWORD)a4 )
        {
          if ( (v11 & 8) != 0 )
            return v5;
          v10 = v11 | 8;
        }
        else
        {
          if ( (v11 & 8) == 0 )
            return v5;
          v10 = v11 & 0xF7;
        }
        break;
      case 0x22u:
        v9 = *((_BYTE *)this + 236);
        if ( (_DWORD)a4 )
        {
          if ( (v9 & 0x10) != 0 )
            return v5;
          v10 = v9 | 0x10;
        }
        else
        {
          if ( (v9 & 0x10) == 0 )
            return v5;
          v10 = v9 & 0xEF;
        }
        break;
      case 0x23u:
        if ( (*((_BYTE *)this + 236) & 0x40) != 0 )
        {
          if ( !a4 )
          {
            if ( (*((_DWORD *)this + 4) & 0x10) != 0 )
            {
              (*(void (__fastcall **)(_QWORD, struct DirectComposition::CApplicationChannel *, DirectComposition::CVisualMarshaler *))(**((_QWORD **)this + 20) + 232LL))(
                *((_QWORD *)this + 20),
                a2,
                this);
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                a2,
                *((struct DirectComposition::CResourceMarshaler **)this + 20));
              *((_DWORD *)this + 4) &= ~0x10u;
            }
            *((_BYTE *)this + 236) &= ~0x40u;
          }
        }
        else if ( a4 )
        {
          v23 = *((_QWORD *)this + 20);
          if ( v23 )
          {
            (*(void (__fastcall **)(__int64, struct DirectComposition::CApplicationChannel *, DirectComposition::CVisualMarshaler *))(*(_QWORD *)v23 + 224LL))(
              v23,
              a2,
              this);
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
              a2,
              *((struct DirectComposition::CResourceMarshaler **)this + 20));
          }
          *((_BYTE *)this + 236) |= 0x40u;
        }
        return v5;
      case 0x26u:
        v22 = *((_BYTE *)this + 236);
        if ( (_DWORD)a4 )
        {
          if ( (v22 & 0x20) != 0 )
            return v5;
          v10 = v22 | 0x20;
        }
        else
        {
          if ( (v22 & 0x20) == 0 )
            return v5;
          v10 = v22 & 0xDF;
        }
        break;
      default:
        switch ( a3 )
        {
          case '\'':
            v21 = *((_BYTE *)this + 236);
            if ( (v21 & 1) == ((_DWORD)a4 != 0) )
              return v5;
            *((_DWORD *)this + 4) |= 0x2000000u;
            *((_BYTE *)this + 236) = ((_DWORD)a4 != 0) | v21 & 0xFE;
            break;
          case '(':
            if ( *((_DWORD *)this + 54) == (_DWORD)a4 )
              return v5;
            *((_DWORD *)this + 4) |= 0x4000000u;
            *((_DWORD *)this + 54) = a4;
            break;
          case ')':
            v20 = *((_BYTE *)this + 237);
            if ( ((_DWORD)a4 != 0) == (v20 & 1) )
              return v5;
            *((_DWORD *)this + 4) |= 0x10000u;
            *((_BYTE *)this + 237) = v20 & 0xFE | ((_DWORD)a4 != 0);
            break;
          default:
            return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                                   this,
                                   a2,
                                   a3,
                                   a4,
                                   a5);
        }
LABEL_26:
        *a5 = 1;
        return v5;
    }
    *((_DWORD *)this + 4) |= 0x10000u;
    *((_BYTE *)this + 236) = v10;
    goto LABEL_26;
  }
  if ( a3 == 19 )
  {
    if ( (unsigned __int64)(a4 + 1) > 2 )
      return (unsigned int)-1073741811;
    goto LABEL_46;
  }
  if ( a3 == 7 )
  {
    if ( (unsigned __int64)(a4 + 1) <= 2 )
    {
      v12 = *((_DWORD *)this + 49);
      v13 = v12 == (_DWORD)a4;
      if ( v12 != (_DWORD)a4 )
        *((_DWORD *)this + 49) = a4;
      goto LABEL_20;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 8 )
  {
    switch ( a3 )
    {
      case 9u:
        if ( a4 >= -1 )
        {
          v17 = 2;
          if ( a4 <= 2 )
          {
            if ( (_DWORD)a4 == -1 )
            {
              v17 = 5;
            }
            else if ( (_DWORD)a4 )
            {
              if ( (_DWORD)a4 != 1 )
                v17 = 4;
            }
            else
            {
              v17 = 0;
            }
            v18 = *((_DWORD *)this + 50);
            if ( v18 != v17 )
              *((_DWORD *)this + 50) = v17;
            v14 = v18 != v17;
            v15 = v18 == v17;
            goto LABEL_21;
          }
        }
        return (unsigned int)-1073741811;
      case 0xEu:
        if ( (unsigned __int64)(a4 + 1) <= 2 )
        {
          v12 = *((_DWORD *)this + 51);
          v13 = v12 == (_DWORD)a4;
          if ( v12 != (_DWORD)a4 )
            *((_DWORD *)this + 51) = a4;
          goto LABEL_20;
        }
        return (unsigned int)-1073741811;
      case 0x10u:
        v16 = *((_BYTE *)this + 236);
        if ( (_DWORD)a4 )
        {
          if ( (v16 & 4) != 0 )
            return v5;
          v19 = v16 | 4;
        }
        else
        {
          if ( (v16 & 4) == 0 )
            return v5;
          v19 = v16 & 0xFB;
        }
        *((_DWORD *)this + 4) |= 0x40000u;
        *((_BYTE *)this + 236) = v19;
        goto LABEL_26;
      case 0x11u:
        if ( (unsigned __int64)(a4 + 1) <= 2 )
        {
          v12 = *((_DWORD *)this + 52);
          v13 = v12 == (_DWORD)a4;
          if ( v12 != (_DWORD)a4 )
            *((_DWORD *)this + 52) = a4;
          goto LABEL_20;
        }
        return (unsigned int)-1073741811;
    }
    if ( a3 != 18 )
      return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    if ( (unsigned __int64)(a4 + 1) > 3 )
      return (unsigned int)-1073741811;
LABEL_46:
    v12 = *((_DWORD *)this + 53);
    v13 = v12 == (_DWORD)a4;
    if ( v12 != (_DWORD)a4 )
      *((_DWORD *)this + 53) = a4;
    goto LABEL_20;
  }
  if ( (unsigned __int64)(a4 + 1) > 2 )
    return (unsigned int)-1073741811;
  v12 = *((_DWORD *)this + 48);
  v13 = v12 == (_DWORD)a4;
  if ( v12 != (_DWORD)a4 )
    *((_DWORD *)this + 48) = a4;
LABEL_20:
  v14 = !v13;
  v15 = v12 == (_DWORD)a4;
LABEL_21:
  *a5 = v14;
  if ( !v15 )
    *((_DWORD *)this + 4) |= 0x8000u;
  return v5;
}
