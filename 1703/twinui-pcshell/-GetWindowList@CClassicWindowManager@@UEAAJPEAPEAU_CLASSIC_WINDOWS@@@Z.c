/*
 * XREFs of ?GetWindowList@CClassicWindowManager@@UEAAJPEAPEAU_CLASSIC_WINDOWS@@@Z @ 0x1800368D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowManager::GetWindowList(CClassicWindowManager *this, struct _CLASSIC_WINDOWS **a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // edi
  unsigned __int64 v10; // rsi
  _QWORD *v11; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // r15

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *((_QWORD *)this + 14);
  v5 = (__int64)CoTaskMemAlloc(16 * (v4 + 1));
  v7 = v5;
  v8 = -v5;
  v9 = v5 == 0 ? 0x8007000E : 0;
  if ( v5 )
  {
    v10 = 0LL;
    v11 = (_QWORD *)(v5 + 16);
    v12 = 0LL;
    if ( !v4 )
      goto LABEL_8;
    do
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v12);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 136LL))(v13, v6, v8) )
      {
        *v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 64LL))(v13, v11 + 1);
        ++v10;
        v11 += 2;
      }
      ++v12;
    }
    while ( v12 < v4 );
    v11 = (_QWORD *)(v7 + 16);
    if ( v10 > 0xFFFFFFFF )
    {
      *(_DWORD *)v7 = -1;
      v9 = -2147024362;
    }
    else
    {
LABEL_8:
      *(_DWORD *)v7 = v10;
      v9 = 0;
      *(_QWORD *)(v7 + 8) = v11;
      *a2 = (struct _CLASSIC_WINDOWS *)v7;
      v7 = 0LL;
    }
    CoTaskMemFree((LPVOID)v7);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v9;
}
