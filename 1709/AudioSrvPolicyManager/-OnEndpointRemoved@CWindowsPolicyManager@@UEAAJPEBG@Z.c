/*
 * XREFs of ?OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z @ 0x180006580
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnEndpointRemoved(CWindowsPolicyManager *this, const unsigned __int16 *a2)
{
  CApplicationManager *v3; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _QWORD *i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]
  LPCRITICAL_SECTION v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  (*(void (__fastcall **)(CWindowsPolicyManager *, const unsigned __int16 *))(*(_QWORD *)this + 256LL))(this, a2);
  v3 = g_ApplicationManager;
  v11 = 0;
  v10 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v10);
  v4 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    v9 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 32);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    for ( i = *(_QWORD **)(v5 + 72); i; i = (_QWORD *)*i )
      ;
    if ( v9 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v9 = 0;
    }
  }
  if ( v11 )
    LeaveCriticalSection(v10);
  (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 264LL))(this);
  return 0LL;
}
