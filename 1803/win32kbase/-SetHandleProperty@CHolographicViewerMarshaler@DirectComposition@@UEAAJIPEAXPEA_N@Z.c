/*
 * XREFs of ?SetHandleProperty@CHolographicViewerMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C015AA00
 * Callers:
 *     <none>
 * Callees:
 *     CallerHasScreenDuplicationCapability @ 0x1C015A778 (CallerHasScreenDuplicationCapability.c)
 */

__int64 __fastcall DirectComposition::CHolographicViewerMarshaler::SetHandleProperty(
        DirectComposition::CHolographicViewerMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a2 == 3 )
  {
    if ( (*((_DWORD *)this + 11) & 4) != 0 || !a3 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      *((_QWORD *)this + 10) = a3;
      *((_QWORD *)this + 13) = PsGetCurrentProcess(this);
      if ( CallerHasScreenDuplicationCapability() )
        *((_DWORD *)this + 25) |= 1u;
      *((_DWORD *)this + 11) |= 4u;
      *a4 = 1;
    }
  }
  return v4;
}
