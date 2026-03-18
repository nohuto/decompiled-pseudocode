/*
 * XREFs of ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0021B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d
  char v7; // dl
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  char v11; // cl
  char v12; // dl
  char v13; // cl
  char v15; // cl
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  unsigned __int8 v19; // cl
  char v20; // cl
  char v21; // dl
  char v22; // cl
  char v23; // cl
  char v24; // cl
  char v25; // cl

  v5 = 0;
  v7 = a4 != 0;
  v8 = a3 - 5;
  if ( !v8 )
  {
    v25 = *((_BYTE *)this + 280);
    if ( ((v25 & 2) != 0) == v7 )
      return v5;
    *((_BYTE *)this + 280) = v25 & 0xFD | (2 * v7);
    *a5 = 1;
    goto LABEL_7;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v15 = *((_BYTE *)this + 280);
    if ( ((v15 & 4) != 0) == v7 )
      return v5;
    v12 = 4 * v7;
    v13 = v15 & 0xFB;
    goto LABEL_6;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v16 = v10 - 2;
    if ( !v16 )
    {
      v24 = *((_BYTE *)this + 280);
      if ( ((v24 & 0x10) != 0) == v7 )
        return v5;
      v12 = 16 * v7;
      v13 = v24 & 0xEF;
      goto LABEL_6;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v19 = *((_BYTE *)this + 280);
          if ( v19 >> 7 != v7 )
          {
            *((_BYTE *)this + 280) = v19 & 0x7F | (v7 << 7);
            *a5 = 1;
            *((_DWORD *)this + 4) |= 0x1000u;
          }
        }
        else
        {
          return (unsigned int)-1073741811;
        }
        return v5;
      }
      v20 = *((_BYTE *)this + 280);
      if ( ((v20 & 0x40) != 0) == v7 )
        return v5;
      v21 = v7 << 6;
      v22 = v20 & 0xBF;
    }
    else
    {
      v23 = *((_BYTE *)this + 280);
      if ( ((v23 & 0x20) != 0) == v7 )
        return v5;
      v21 = 32 * v7;
      v22 = v23 & 0xDF;
    }
    *((_BYTE *)this + 280) = v22 | v21;
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x800u;
    return v5;
  }
  v11 = *((_BYTE *)this + 280);
  if ( ((v11 & 8) != 0) != v7 )
  {
    v12 = 8 * v7;
    v13 = v11 & 0xF7;
LABEL_6:
    *((_BYTE *)this + 280) = v13 | v12;
    *a5 = 1;
LABEL_7:
    *((_DWORD *)this + 4) |= 0x200u;
  }
  return v5;
}
