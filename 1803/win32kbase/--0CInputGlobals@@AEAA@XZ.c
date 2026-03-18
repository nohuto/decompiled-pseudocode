/*
 * XREFs of ??0CInputGlobals@@AEAA@XZ @ 0x1C0121354
 * Callers:
 *     InitializeInputComponents @ 0x1C012E614 (InitializeInputComponents.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

CInputGlobals *__fastcall CInputGlobals::CInputGlobals(CInputGlobals *this)
{
  *((_QWORD *)this + 2) = 0LL;
  memset((char *)this + 24, 0, 0x38uLL);
  *((_DWORD *)this + 20) = 0;
  *((_WORD *)this + 42) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 98) = 0;
  *((_DWORD *)this + 25) = 30;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)IsGetWakeSourceInputTypeMaskSupported() >= 0 )
    *((_DWORD *)this + 25) = GetWakeSourceInputTypeMask();
  if ( (int)IsGetUndimSourceInputTypeMaskSupported() >= 0 )
    *((_DWORD *)this + 26) = GetUndimSourceInputTypeMask();
  return this;
}
