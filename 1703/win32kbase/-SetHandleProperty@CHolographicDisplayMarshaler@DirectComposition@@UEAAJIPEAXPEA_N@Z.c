/*
 * XREFs of ?SetHandleProperty@CHolographicDisplayMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C014BFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicDisplayMarshaler::SetHandleProperty(
        DirectComposition::CHolographicDisplayMarshaler *this,
        __int64 a2,
        void *a3,
        bool *a4)
{
  unsigned int v4; // edi
  __int64 CurrentProcess; // rax

  v4 = 0;
  if ( (_DWORD)a2 == 6 )
  {
    CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
    *((_DWORD *)this + 4) |= 0x100u;
    *((_QWORD *)this + 6) = CurrentProcess;
    *((_QWORD *)this + 7) = a3;
    *a4 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
