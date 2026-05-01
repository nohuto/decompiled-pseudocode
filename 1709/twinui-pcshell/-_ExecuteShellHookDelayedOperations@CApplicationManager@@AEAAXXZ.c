/*
 * XREFs of ?_ExecuteShellHookDelayedOperations@CApplicationManager@@AEAAXXZ @ 0x180016828
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_ExecuteShellHookDelayedOperations(CApplicationManager *this)
{
  _DWORD *v2; // rdi
  unsigned __int64 v3; // r15
  unsigned __int64 i; // rbp
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  __int64 *v8; // r9
  __int64 v9; // r12
  unsigned __int64 v10; // r8

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = 0LL;
  v3 = *((_QWORD *)this + 107);
  if ( v3 )
  {
    v2 = (_DWORD *)*((_QWORD *)this + 106);
    *((_QWORD *)this + 106) = 0LL;
    *((_QWORD *)this + 108) = 0LL;
    *((_QWORD *)this + 107) = 0LL;
    *((_QWORD *)this + 109) = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = 0LL; i < v3; ++i )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v5 = *((_QWORD *)this + 101);
    v6 = 0LL;
    v7 = 0LL;
    if ( *(_QWORD *)(v5 + 32) )
    {
      v8 = *(__int64 **)(v5 + 24);
      while ( 1 )
      {
        v9 = *v8;
        if ( *(_DWORD *)(*v8 + 8) == v2[i] )
          break;
        ++v7;
        ++v8;
        if ( v7 >= *(_QWORD *)(v5 + 32) )
          goto LABEL_16;
      }
      v10 = *(_QWORD *)(v5 + 32);
      if ( v7 < v10 )
      {
        if ( v7 != v10 - 1 )
          memmove(v8, v8 + 1, 8 * (v10 - v7) - 8);
        --*(_QWORD *)(v5 + 32);
      }
      if ( *(_DWORD *)(v9 + 12) != 5 )
        --*(_DWORD *)(v5 + 56);
      v6 = v9;
    }
LABEL_16:
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
    }
  }
  if ( v2 )
    CoTaskMemFree(v2);
}
