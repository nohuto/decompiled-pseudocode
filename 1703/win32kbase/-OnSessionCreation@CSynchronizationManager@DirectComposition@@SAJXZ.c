/*
 * XREFs of ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C008F480
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C008F460 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 DirectComposition::CSynchronizationManager::OnSessionCreation(void)
{
  struct _ERESOURCE *v0; // rsi
  struct _RTL_GENERIC_TABLE *v1; // rax
  struct _RTL_GENERIC_TABLE *v2; // rdi
  NTSTATUS v3; // ebx
  struct _ERESOURCE *v4; // rax

  v0 = 0LL;
  v1 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolZInit(0x48uLL, 1702052676LL);
  v2 = v1;
  if ( v1 )
    RtlInitializeGenericTable(
      v1,
      (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::AllocateTableEntry,
      (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
  else
    v2 = 0LL;
  v3 = v2 == 0LL ? 0xC0000017 : 0;
  if ( v2 )
  {
    v4 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v0 = v4;
    if ( v4 )
      memset(v4, 0, sizeof(struct _ERESOURCE));
    else
      v0 = 0LL;
    if ( !v0 )
      v3 = -1073741801;
    if ( v3 < 0 )
      goto LABEL_16;
    v3 = ExInitializeResourceLite(v0);
    if ( v3 >= 0 )
    {
LABEL_10:
      DirectComposition::CSynchronizationManager::s_syncIdCounter = 0LL;
      DirectComposition::CSynchronizationManager::s_pSyncTable = v2;
      DirectComposition::CSynchronizationManager::s_pSyncTableLock = v0;
      return (unsigned int)v3;
    }
    Win32FreePool((__int64)v0);
    v0 = 0LL;
  }
  if ( v3 >= 0 )
    goto LABEL_10;
LABEL_16:
  if ( v2 )
    Win32FreePool((__int64)v2);
  return (unsigned int)v3;
}
