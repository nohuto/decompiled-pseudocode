/*
 * XREFs of ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x18001509C
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001AF08 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x1800269DC (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CanBeRemoved(CProcess *this)
{
  int v2; // eax
  unsigned int v3; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 118) != 2
    || *((_QWORD *)this + 11)
    || (v2 = *((_DWORD *)this + 127), v3 = 1, (v2 & 1) != 0)
    || (v2 & 0x1000) != 0
    || *((_DWORD *)this + 128)
    || *((_DWORD *)this + 129)
    || (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 55), *((_DWORD *)this + 54), 0LL)
    || *((_DWORD *)this + 133)
    || *((_DWORD *)this + 138)
    || *((_DWORD *)this + 139)
    || *((_DWORD *)this + 135) )
  {
    v3 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
