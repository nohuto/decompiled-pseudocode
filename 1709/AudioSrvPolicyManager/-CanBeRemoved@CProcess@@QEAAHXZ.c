/*
 * XREFs of ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x18000F654
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012D98 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18001D65C (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
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
  if ( *((_DWORD *)this + 116) != 2
    || *((_QWORD *)this + 11)
    || (v2 = *((_DWORD *)this + 125), v3 = 1, (v2 & 1) != 0)
    || (v2 & 0x1000) != 0
    || *((_DWORD *)this + 126)
    || *((_DWORD *)this + 127)
    || (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 55), *((_DWORD *)this + 54), 0LL)
    || *((_DWORD *)this + 131)
    || *((_DWORD *)this + 136)
    || *((_DWORD *)this + 133) )
  {
    v3 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
