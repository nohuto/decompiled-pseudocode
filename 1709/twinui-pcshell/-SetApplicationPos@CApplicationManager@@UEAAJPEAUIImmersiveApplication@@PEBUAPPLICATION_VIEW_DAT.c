/*
 * XREFs of ?SetApplicationPos@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAX@Z @ 0x180009480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::SetApplicationPos(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v9; // ebx

  v9 = a4 == 0 ? 0x80070057 : 0;
  if ( a4 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)(a1 + 96) + 24LL))(
           a1 + 96,
           a2,
           a3,
           a4,
           a5);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  return v9;
}
