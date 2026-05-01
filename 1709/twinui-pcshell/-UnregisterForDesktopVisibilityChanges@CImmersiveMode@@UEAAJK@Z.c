/*
 * XREFs of ?UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z @ 0x1800323B0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180025DC4 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveMode::UnregisterForDesktopVisibilityChanges(CImmersiveMode *this, int a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned int *v7; // rdi
  _DWORD **v8; // rcx
  unsigned int v9; // ebx

  v4 = -2147023728;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = *((_QWORD *)this + 33);
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    v8 = (_DWORD **)*((_QWORD *)this + 32);
    while ( **v8 != a2 )
    {
      ++v6;
      ++v8;
      if ( v6 >= v5 )
        goto LABEL_10;
    }
    v7 = *(unsigned int **)(*((_QWORD *)this + 32) + 8 * v6);
    v4 = 0;
    if ( v6 < v5 )
    {
      if ( v6 != v5 - 1 )
        memmove(
          (void *)(*((_QWORD *)this + 32) + 8 * v6),
          (const void *)(*((_QWORD *)this + 32) + 8 * v6 + 8),
          8 * (v5 - v6) - 8);
      --*((_QWORD *)this + 33);
    }
  }
LABEL_10:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v7 )
  {
    v9 = *v7;
    if ( *v7 && (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
      ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
        GlobalInterfaceTable::s_pGlobalInterfaceTable,
        v9);
    operator delete(v7);
  }
  return v4;
}
