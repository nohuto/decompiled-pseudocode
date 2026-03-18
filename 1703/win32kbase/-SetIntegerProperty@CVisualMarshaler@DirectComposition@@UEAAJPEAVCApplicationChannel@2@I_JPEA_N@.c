/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0017940
 * Callers:
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C007FA50 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001A1F8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C001E3A0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
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
  bool v12; // cl
  int v13; // edx
  char v14; // al
  bool v15; // cc
  char v16; // dl
  char v17; // al
  __int64 v18; // rcx

  v5 = 0;
  *a5 = 0;
  if ( a3 > 0x12 )
  {
    if ( a3 != 19 )
    {
      switch ( a3 )
      {
        case 0x18u:
          v11 = *((_BYTE *)this + 232);
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
          v9 = *((_BYTE *)this + 232);
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
          if ( (*((_BYTE *)this + 232) & 0x40) != 0 && !a4 )
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
            *((_BYTE *)this + 232) &= ~0x40u;
          }
          else if ( (*((_BYTE *)this + 232) & 0x40) == 0 && a4 )
          {
            v18 = *((_QWORD *)this + 20);
            if ( v18 )
            {
              (*(void (__fastcall **)(__int64, struct DirectComposition::CApplicationChannel *, DirectComposition::CVisualMarshaler *))(*(_QWORD *)v18 + 224LL))(
                v18,
                a2,
                this);
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                a2,
                *((struct DirectComposition::CResourceMarshaler **)this + 20));
            }
            *((_BYTE *)this + 232) |= 0x40u;
          }
          return v5;
        case 0x27u:
          v17 = *((_BYTE *)this + 232);
          if ( (_DWORD)a4 )
          {
            if ( (v17 & 0x20) != 0 )
              return v5;
            v10 = v17 | 0x20;
          }
          else
          {
            if ( (v17 & 0x20) == 0 )
              return v5;
            v10 = v17 & 0xDF;
          }
          break;
        case 0x28u:
          v16 = *((_BYTE *)this + 232);
          if ( (v16 & 1) == ((_DWORD)a4 != 0) )
            return v5;
          *((_DWORD *)this + 4) |= 0x2000000u;
          *((_BYTE *)this + 232) = ((_DWORD)a4 != 0) | v16 & 0xFE;
LABEL_32:
          *a5 = 1;
          return v5;
        default:
          return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                                 this,
                                 a2,
                                 a3,
                                 a4,
                                 a5);
      }
      *((_DWORD *)this + 4) |= 0x10000u;
LABEL_31:
      *((_BYTE *)this + 232) = v10;
      goto LABEL_32;
    }
    v15 = (unsigned __int64)(a4 + 1) <= 2;
LABEL_59:
    if ( v15 )
    {
      if ( *((_DWORD *)this + 53) != (_DWORD)a4 )
      {
        *((_DWORD *)this + 53) = a4;
        goto LABEL_27;
      }
LABEL_21:
      v12 = 0;
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
  switch ( a3 )
  {
    case 0x12u:
      v15 = (unsigned __int64)(a4 + 1) <= 3;
      goto LABEL_59;
    case 7u:
      if ( (unsigned __int64)(a4 + 1) > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 49) == (_DWORD)a4 )
        goto LABEL_21;
      *((_DWORD *)this + 49) = a4;
      goto LABEL_27;
    case 8u:
      if ( (unsigned __int64)(a4 + 1) > 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 48) == (_DWORD)a4 )
        goto LABEL_21;
      *((_DWORD *)this + 48) = a4;
      goto LABEL_27;
  }
  if ( a3 != 9 )
  {
    switch ( a3 )
    {
      case 0xEu:
        if ( (unsigned __int64)(a4 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 51) == (_DWORD)a4 )
          goto LABEL_21;
        *((_DWORD *)this + 51) = a4;
        break;
      case 0x10u:
        v14 = *((_BYTE *)this + 232);
        if ( (_DWORD)a4 )
        {
          if ( (v14 & 4) != 0 )
            return v5;
          v10 = v14 | 4;
        }
        else
        {
          if ( (v14 & 4) == 0 )
            return v5;
          v10 = v14 & 0xFB;
        }
        *((_DWORD *)this + 4) |= 0x40000u;
        goto LABEL_31;
      case 0x11u:
        if ( (unsigned __int64)(a4 + 1) > 2 )
          return (unsigned int)-1073741811;
        if ( *((_DWORD *)this + 52) == (_DWORD)a4 )
          goto LABEL_21;
        *((_DWORD *)this + 52) = a4;
        break;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
LABEL_27:
    v12 = 1;
    goto LABEL_22;
  }
  if ( (unsigned __int64)(a4 + 1) > 3 )
    return (unsigned int)-1073741811;
  v12 = 1;
  if ( (_DWORD)a4 == -1 )
  {
    v13 = 5;
  }
  else if ( (_DWORD)a4 )
  {
    v13 = 2;
    if ( (_DWORD)a4 != 1 )
    {
      if ( (_DWORD)a4 != 2 )
        return (unsigned int)-1073741811;
      v13 = 4;
    }
  }
  else
  {
    v13 = 0;
  }
  if ( *((_DWORD *)this + 50) == v13 )
    goto LABEL_21;
  *((_DWORD *)this + 50) = v13;
LABEL_22:
  *a5 = v12;
  if ( v12 )
    *((_DWORD *)this + 4) |= 0x8000u;
  return v5;
}
