/*
 * XREFs of ?ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z @ 0x18001F6C0
 * Callers:
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x1800092A0 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ResetAllApplicationSpecificEndpoints(CApplicationManager *this, int a2)
{
  CApplicationManager *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  __int64 **v8; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v14; // [rsp+38h] [rbp-20h] BYREF
  char v15; // [rsp+40h] [rbp-18h]

  v3 = g_ApplicationManager;
  v14 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v15 = 0;
  ATL::CCritSecLock::Lock(&v14);
  v4 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( *(_DWORD *)(v5 + 172) == a2 )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 32);
      v13 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v6 = *(__int64 **)(v5 + 600);
      v7 = (__int64 *)*v6;
      while ( v7 != v6 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7[8] + 48LL))(v7[8]);
        if ( !*((_BYTE *)v7 + 25) )
        {
          v8 = (__int64 **)v7[2];
          if ( *((_BYTE *)v8 + 25) )
          {
            for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
              v7 = i;
            v7 = i;
          }
          else
          {
            v7 = (__int64 *)v7[2];
            for ( j = *v8; !*((_BYTE *)j + 25); j = (__int64 *)*j )
              v7 = j;
          }
        }
      }
      if ( v13 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v13 = 0;
      }
    }
  }
  if ( v15 )
    LeaveCriticalSection(v14);
  return 0LL;
}
