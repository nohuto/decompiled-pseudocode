/*
 * XREFs of ?OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z @ 0x18000A440
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnEndpointRemoved(CWindowsPolicyManager *this, const unsigned __int16 *a2)
{
  CApplicationManager *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  _QWORD *i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]
  LPCRITICAL_SECTION v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v2 = g_ApplicationManager;
  v10 = 0;
  v9 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v9);
  v3 = (_QWORD *)*((_QWORD *)v2 + 9);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    v8 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    for ( i = *(_QWORD **)(v4 + 72); i; i = (_QWORD *)*i )
      ;
    if ( v8 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v8 = 0;
    }
  }
  if ( v10 )
    LeaveCriticalSection(v9);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return 0LL;
}
