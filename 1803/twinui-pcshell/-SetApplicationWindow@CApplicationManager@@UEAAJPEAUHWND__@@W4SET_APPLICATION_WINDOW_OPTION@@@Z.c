/*
 * XREFs of ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x18010B500
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800810EC (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180081130 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x18010B5A0 (-SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetApplicationWindow(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  CApplicationFrameService *v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a1;
  CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
    (CAutoApplicationCreationResourceGuarantee *)v7,
    (struct IIAMServiceProvider *)((a1 + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 152) >> 64)));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(v5) = CApplicationManager::SetApplicationWindowSafe(v5 + 96, a2, a3);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee(v7);
  return (unsigned int)v5;
}
