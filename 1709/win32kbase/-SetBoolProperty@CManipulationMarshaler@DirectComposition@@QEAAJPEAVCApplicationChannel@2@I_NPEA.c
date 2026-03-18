/*
 * XREFs of ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x1C01421A0
 * Callers:
 *     ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0142450 (-SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBoolProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  char v12; // cl
  char v13; // cl
  char v14; // al
  char v15; // cl
  char v16; // al
  char v17; // cl
  char v18; // cl
  char v19; // cl
  char v20; // r8

  v5 = 0;
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v19 = (*((_BYTE *)this + 92) & 0x10) != 0;
      if ( v19 != a4 )
      {
        v19 = a4;
        *a5 = 1;
        *((_DWORD *)this + 4) |= 0x40u;
      }
      v13 = 16 * v19;
      v14 = *((_BYTE *)this + 92) & 0xEF;
      goto LABEL_11;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return (unsigned int)-1073741811;
          v12 = (*((_BYTE *)this + 92) & 4) != 0;
          if ( v12 != a4 )
          {
            v12 = a4;
            *a5 = 1;
            *((_DWORD *)this + 4) |= 0x40u;
          }
          v13 = 4 * v12;
          v14 = *((_BYTE *)this + 92) & 0xFB;
LABEL_11:
          *((_BYTE *)this + 92) = v14 | v13;
          return v5;
        }
        v15 = (*((_BYTE *)this + 92) & 2) != 0;
        if ( v15 != a4 )
        {
          v15 = a4;
          *a5 = 1;
          *((_DWORD *)this + 4) |= 0x40u;
        }
        v16 = *((_BYTE *)this + 92) & 0xFD;
        v17 = 2 * v15;
      }
      else
      {
        v17 = *((_BYTE *)this + 92) & 1;
        if ( v17 != a4 )
        {
          v17 = a4;
          *a5 = 1;
          *((_DWORD *)this + 4) |= 0x40u;
        }
        v16 = *((_BYTE *)this + 92) & 0xFE;
      }
      *((_BYTE *)this + 92) = v17 | v16;
      return v5;
    }
    v18 = (*((_BYTE *)this + 92) & 0x20) != 0;
    if ( v18 != a4 )
    {
      v18 = a4;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
    }
    v13 = 32 * v18;
    v14 = *((_BYTE *)this + 92) & 0xDF;
    goto LABEL_11;
  }
  v20 = (*((_BYTE *)this + 92) & 8) != 0;
  if ( v20 != a4 )
  {
    v20 = a4;
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x40u;
  }
  *((_BYTE *)this + 92) = *((_BYTE *)this + 92) & 0xF7 | (8 * v20);
  return v5;
}
