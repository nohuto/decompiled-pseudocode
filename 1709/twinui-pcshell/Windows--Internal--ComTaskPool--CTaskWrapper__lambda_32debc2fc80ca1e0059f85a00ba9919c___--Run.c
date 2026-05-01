/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___::Run @ 0x180034750
 * Callers:
 *     <none>
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180025DC4 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_32debc2fc80ca1e0059f85a00ba9919c___::Run(
        __int64 a1)
{
  unsigned __int64 i; // rbx
  unsigned int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  for ( i = 0LL; i < *(_QWORD *)(a1 + 32); ++i )
  {
    v5 = 0LL;
    v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 4 * i);
    v5 = 0LL;
    if ( (int)GlobalInterfaceTable::s_Retrieve() >= 0
      && ((int (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD, GUID *, __int64 *))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->GetInterfaceFromGlobal)(
           GlobalInterfaceTable::s_pGlobalInterfaceTable,
           v3,
           &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
           &v5) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)v5 + 24LL))(
        v5,
        *(_QWORD *)(a1 + 16),
        *(_BYTE *)(a1 + 24) != 0);
    }
    v4 = v5;
    if ( v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
}
