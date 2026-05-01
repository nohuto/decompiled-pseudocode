/*
 * XREFs of ?OpenPropertyStore@CImmersiveApp@@UEAAJW4IMMAPPPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18004CE50
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenPropertyStoreInternal@CImmersiveApp@@UEAAJW4IMMAPPPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18004CDE0 (-OpenPropertyStoreInternal@CImmersiveApp@@UEAAJW4IMMAPPPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::OpenPropertyStore(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rcx
  HRESULT (__fastcall *v9)(__int64, __int64, __int64, _QWORD *); // rax
  HRESULT v10; // eax
  unsigned int v11; // ebx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = a1 + 24;
  v9 = *(HRESULT (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)(a1 + 24) + 360LL);
  if ( v9 == CImmersiveApp::OpenPropertyStoreInternal )
    v10 = CImmersiveApp::OpenPropertyStoreInternal(v8, a2, a3, a4);
  else
    v10 = v9(v8, a2, a3, a4);
  v11 = v10;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return v11;
}
