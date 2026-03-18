/*
 * XREFs of ?SetHandleProperty@CHolographicDisplayMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C014D0B0
 * Callers:
 *     <none>
 * Callees:
 *     CallerHasScreenDuplicationCapability @ 0x1C014CB08 (CallerHasScreenDuplicationCapability.c)
 */

__int64 __fastcall DirectComposition::CHolographicDisplayMarshaler::SetHandleProperty(
        DirectComposition::CHolographicDisplayMarshaler *this,
        __int64 a2,
        void *a3,
        bool *a4)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( (_DWORD)a2 == 6 )
  {
    *((_QWORD *)this + 6) = PsGetCurrentProcess(this, a2);
    *((_QWORD *)this + 7) = a3;
    if ( CallerHasScreenDuplicationCapability() )
      *((_DWORD *)this + 11) |= 1u;
    *((_DWORD *)this + 4) |= 0x100u;
    *a4 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
