/*
 * XREFs of ?GetWindowList@CClassicWindowManager@@UEAAJPEAPEAU_CLASSIC_WINDOWS@@@Z @ 0x180038010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowManager::GetWindowList(CClassicWindowManager *this, struct _CLASSIC_WINDOWS **a2)
{
  unsigned __int64 v4; // rbp
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  unsigned __int64 v7; // rsi
  _QWORD *v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // r15

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *((_QWORD *)this + 14);
  v5 = CoTaskMemAlloc(16 * (v4 + 1));
  v6 = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v7 = 0LL;
    v8 = v5 + 2;
    v9 = 0LL;
    if ( !v4 )
      goto LABEL_8;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v9);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 136LL))(v10) )
      {
        *v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 64LL))(v10, v8 + 1);
        ++v7;
        v8 += 2;
      }
      ++v9;
    }
    while ( v9 < v4 );
    v8 = v5 + 2;
    if ( v7 > 0xFFFFFFFF )
    {
      *(_DWORD *)v5 = -1;
      v6 = -2147024362;
    }
    else
    {
LABEL_8:
      *(_DWORD *)v5 = v7;
      v6 = 0;
      v5[1] = v8;
      *a2 = (struct _CLASSIC_WINDOWS *)v5;
      v5 = 0LL;
    }
    CoTaskMemFree(v5);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v6;
}
