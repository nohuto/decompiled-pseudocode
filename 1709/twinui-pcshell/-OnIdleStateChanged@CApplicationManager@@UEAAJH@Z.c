/*
 * XREFs of ?OnIdleStateChanged@CApplicationManager@@UEAAJH@Z @ 0x18000FBA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnIdleStateChanged(CApplicationManager *this, unsigned int a2)
{
  unsigned int v4; // r14d
  unsigned int v5; // edi
  unsigned __int64 v6; // rbp
  unsigned __int64 i; // rsi
  __int64 v8; // r12
  char v9; // al
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 2 - (a2 != 0);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 != *((_DWORD *)this + 142) )
  {
    v6 = *((_QWORD *)this + 47);
    for ( i = 0LL; i < v6; ++i )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 46) + 8 * i);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 280LL))(v8);
      if ( (v9 & 1) != 0 || (v9 & 8) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 104LL))(v8, v5);
    }
    *((_DWORD *)this + 142) = v5;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = 0LL;
  v13 = 0LL;
  if ( *((_QWORD *)this + 60) )
  {
    v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 60))(
            *((_QWORD *)this + 60),
            &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2,
            &v13);
    v10 = v13;
    if ( v11 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 24LL))(v13, a2);
      v10 = v13;
    }
  }
  if ( v10 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v4;
}
