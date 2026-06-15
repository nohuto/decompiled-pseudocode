/*
 * XREFs of ?SetViewId@CAudioSession@@UEAAJI@Z @ 0x180018480
 * Callers:
 *     AudioSessionSetViewId @ 0x180031920 (AudioSessionSetViewId.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetViewId@CAudioStream@@QEAAXI@Z @ 0x18005A5FC (-SetViewId@CAudioStream@@QEAAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioSession::SetViewId(CAudioSession *this, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  *((_DWORD *)this + 70) = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = 0;
  if ( *((_QWORD *)this + 13) )
  {
    v6 = 0LL;
    do
    {
      CAudioStream::SetViewId(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v6), a2);
      v6 = ++v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 13) );
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
