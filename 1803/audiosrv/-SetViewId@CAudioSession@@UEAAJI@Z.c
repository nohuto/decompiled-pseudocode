/*
 * XREFs of ?SetViewId@CAudioSession@@UEAAJI@Z @ 0x180004F20
 * Callers:
 *     AudioSessionSetViewId @ 0x180003570 (AudioSessionSetViewId.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetViewId@CAudioStream@@QEAAXI@Z @ 0x1800964E0 (-SetViewId@CAudioStream@@QEAAXI@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 */

__int64 __fastcall CAudioSession::SetViewId(CAudioSession *this, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v6; // rax
  CAudioStream **v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  *((_DWORD *)this + 70) = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v6 = 0LL;
    do
    {
      v7 = (CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                              (char *)this + 96,
                              v6);
      CAudioStream::SetViewId(*v7, a2);
      v6 = ++v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 13) );
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
