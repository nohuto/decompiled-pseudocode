/*
 * XREFs of ?OnIdleStateChanged@CApplicationManager@@UEAAJH@Z @ 0x18000F760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::OnIdleStateChanged(CApplicationManager *this, int a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rbp
  unsigned __int64 i; // rbx
  __int64 v6; // r14
  char v7; // al

  v3 = 2 - (a2 != 0);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 != *((_DWORD *)this + 134) )
  {
    v4 = *((_QWORD *)this + 44);
    for ( i = 0LL; i < v4; ++i )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 43) + 8 * i);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 280LL))(v6);
      if ( (v7 & 1) != 0 || (v7 & 8) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, v3);
    }
    *((_DWORD *)this + 134) = v3;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
