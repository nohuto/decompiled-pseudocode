/*
 * XREFs of ?SetIntegerProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C014E790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetIntegerProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx

  v5 = 0;
  switch ( a3 )
  {
    case 10:
      *((_DWORD *)this + 4) &= ~0x200u;
      *((_DWORD *)this + 27) = a4;
      *a5 = 1;
      return v5;
    case 14:
      *((_DWORD *)this + 4) &= ~0x100u;
      *((_DWORD *)this + 30) = a4;
      goto LABEL_16;
    case 16:
      *((_DWORD *)this + 4) &= ~0x400u;
      *((_DWORD *)this + 31) = a4;
      goto LABEL_16;
    case 19:
      if ( *((_DWORD *)this + 45) == a4 )
        return v5;
      *((_DWORD *)this + 4) &= ~0x1000u;
      *((_DWORD *)this + 45) = a4;
LABEL_16:
      *a5 = 1;
      return v5;
    case 29:
      *((_DWORD *)this + 4) &= ~0x20000u;
      *((_DWORD *)this + 38) = a4;
      goto LABEL_16;
    case 31:
      *((_BYTE *)this + 388) &= ~2u;
      *((_DWORD *)this + 4) &= ~0x40000u;
      *((_DWORD *)this + 39) = a4;
      goto LABEL_16;
    case 44:
      *((_DWORD *)this + 4) &= ~0x40u;
      *((_DWORD *)this + 16) = a4;
      goto LABEL_16;
    case 48:
      *((_DWORD *)this + 4) &= ~0x80u;
      *((_DWORD *)this + 20) = a4;
      goto LABEL_16;
  }
  return (unsigned int)-1073741811;
}
