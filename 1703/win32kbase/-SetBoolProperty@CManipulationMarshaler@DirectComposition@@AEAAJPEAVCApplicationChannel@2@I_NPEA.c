/*
 * XREFs of ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x1C01431FC
 * Callers:
 *     ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0143380 (-SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
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
  bool *v12; // r8
  char v13; // cl
  char v14; // al
  char v15; // cl
  char v16; // cl
  char v17; // cl
  char v18; // cl
  char v19; // al
  char v20; // cl
  char v21; // al

  v5 = 0;
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
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
            v12 = a5;
            v13 = (*((_BYTE *)this + 84) & 4) != 0;
            if ( v13 != a4 )
            {
              v13 = a4;
              *a5 = 1;
            }
            v14 = *((_BYTE *)this + 84) & 0xFB;
            v15 = 4 * v13;
          }
          else
          {
            v12 = a5;
            v16 = (*((_BYTE *)this + 84) & 2) != 0;
            if ( v16 != a4 )
            {
              v16 = a4;
              *a5 = 1;
            }
            v14 = *((_BYTE *)this + 84) & 0xFD;
            v15 = 2 * v16;
          }
        }
        else
        {
          v12 = a5;
          v15 = *((_BYTE *)this + 84) & 1;
          if ( v15 != a4 )
          {
            v15 = a4;
            *a5 = 1;
          }
          v14 = *((_BYTE *)this + 84) & 0xFE;
        }
        goto LABEL_27;
      }
      v12 = a5;
      v17 = (*((_BYTE *)this + 84) & 0x20) != 0;
      if ( v17 != a4 )
      {
        v17 = a4;
        *a5 = 1;
      }
      v18 = 32 * v17;
      v19 = *((_BYTE *)this + 84) & 0xDF;
    }
    else
    {
      v12 = a5;
      v20 = (*((_BYTE *)this + 84) & 0x10) != 0;
      if ( v20 != a4 )
      {
        v20 = a4;
        *a5 = 1;
      }
      v18 = 16 * v20;
      v19 = *((_BYTE *)this + 84) & 0xEF;
    }
    *((_BYTE *)this + 84) = v19 | v18;
    goto LABEL_28;
  }
  v12 = a5;
  v21 = (*((_BYTE *)this + 84) & 8) != 0;
  if ( v21 != a4 )
  {
    v21 = a4;
    *a5 = 1;
  }
  v14 = 8 * v21;
  v15 = *((_BYTE *)this + 84) & 0xF7;
LABEL_27:
  *((_BYTE *)this + 84) = v15 | v14;
LABEL_28:
  if ( *v12 )
    *((_DWORD *)this + 4) |= 0x20u;
  return v5;
}
