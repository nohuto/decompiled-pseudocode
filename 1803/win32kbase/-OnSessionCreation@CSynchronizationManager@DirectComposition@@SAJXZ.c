/*
 * XREFs of ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C014583C
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C0142D50 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 DirectComposition::CSynchronizationManager::OnSessionCreation(void)
{
  struct _RTL_GENERIC_TABLE *v0; // rax
  struct _RTL_GENERIC_TABLE *v1; // rdi
  NTSTATUS v2; // ebx
  struct _ERESOURCE *v3; // rax
  struct _ERESOURCE *v4; // rsi

  v0 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolZInit(0x48uLL, 0x65734344u);
  v1 = v0;
  if ( v0 )
    RtlInitializeGenericTable(
      v0,
      (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::AllocateTableEntry,
      (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
  else
    v1 = 0LL;
  v2 = v1 == 0LL ? 0xC0000017 : 0;
  if ( v1 )
  {
    v3 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v4 = v3;
    if ( v3 )
      memset(v3, 0, sizeof(struct _ERESOURCE));
    else
      v4 = 0LL;
    if ( !v4 )
      v2 = -1073741801;
    if ( v2 < 0 )
      goto LABEL_15;
    v2 = ExInitializeResourceLite(v4);
    if ( v2 >= 0 )
    {
LABEL_14:
      DirectComposition::CSynchronizationManager::s_syncIdCounter = 0LL;
      DirectComposition::CSynchronizationManager::s_pSyncTable = v1;
      DirectComposition::CSynchronizationManager::s_pSyncTableLock = v4;
      return (unsigned int)v2;
    }
    Win32FreePool((__int64)v4);
  }
  v4 = 0LL;
  if ( v2 >= 0 )
    goto LABEL_14;
LABEL_15:
  if ( v1 )
    Win32FreePool((__int64)v1);
  return (unsigned int)v2;
}
