/*
 * XREFs of ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0149620
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x1C01493A8 (-SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetIntegerProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d

  v5 = 0;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        if ( (unsigned int)a4 > 2 )
          return (unsigned int)-1073741811;
        v10 = *((_DWORD *)this + 24);
        if ( v10 != (_DWORD)a4 )
        {
          v10 = a4;
          *a5 = 1;
          *((_DWORD *)this + 4) |= 0x40u;
        }
        *((_DWORD *)this + 24) = v10;
        break;
      case 2:
        if ( (unsigned int)a4 > 2 )
          return (unsigned int)-1073741811;
        v9 = *((_DWORD *)this + 25);
        if ( v9 != (_DWORD)a4 )
        {
          v9 = a4;
          *a5 = 1;
          *((_DWORD *)this + 4) |= 0x40u;
        }
        *((_DWORD *)this + 25) = v9;
        break;
      case 3:
        if ( (unsigned int)a4 > 2 )
          return (unsigned int)-1073741811;
        v8 = *((_DWORD *)this + 26);
        if ( v8 != (_DWORD)a4 )
        {
          v8 = a4;
          *a5 = 1;
          *((_DWORD *)this + 4) |= 0x40u;
        }
        *((_DWORD *)this + 26) = v8;
        break;
      case 14:
        v7 = *((_DWORD *)this + 162);
        if ( v7 != (a4 != 0) )
        {
          v7 = a4 != 0;
          *a5 = 1;
          *((_DWORD *)this + 4) |= 0x100u;
        }
        *((_DWORD *)this + 162) = v7;
        break;
      case 17:
        if ( (unsigned int)a4 <= 1 )
        {
          v6 = *((_DWORD *)this + 166);
          if ( v6 != (_DWORD)a4 )
          {
            v6 = a4;
            *a5 = 1;
            *((_DWORD *)this + 4) |= 0x100u;
          }
          *((_DWORD *)this + 166) = v6;
          return v5;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetBoolProperty(
                               this,
                               0LL,
                               a3,
                               (_DWORD)a4 != 0,
                               a5);
    }
  }
  else
  {
    v11 = *((_DWORD *)this + 22);
    if ( v11 != (_DWORD)a4 )
    {
      v11 = a4;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x40u;
    }
    *((_DWORD *)this + 22) = v11;
  }
  return v5;
}
