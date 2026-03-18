/*
 * XREFs of ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0061F90
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0061DBC (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v2; // rsi
  struct _RTL_GENERIC_TABLE *v3; // rax
  __int64 v4; // rbx
  NTSTATUS v5; // edi
  struct _ERESOURCE *v6; // rax
  __int64 result; // rax

  v2 = 0LL;
  v3 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolWithQuotaZInit(0x48uLL, 0x74634344u);
  v4 = (__int64)v3;
  if ( v3 )
    RtlInitializeGenericTable(
      v3,
      (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry,
      (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
  else
    v4 = 0LL;
  v5 = v4 == 0 ? 0xC0000017 : 0;
  if ( v4 )
  {
    v6 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v2 = v6;
    if ( v6 )
      memset(v6, 0, sizeof(struct _ERESOURCE));
    else
      v2 = 0LL;
    if ( !v2 )
      v5 = -1073741801;
  }
  if ( v5 < 0 || (v5 = ExInitializeResourceLite(v2), v5 < 0) )
  {
    if ( v4 )
      Win32FreePool(v4);
    v4 = 0LL;
    if ( v2 )
    {
      Win32FreePool((__int64)v2);
      v2 = 0LL;
    }
  }
  result = (unsigned int)v5;
  *(_QWORD *)a1 = v4;
  *((_QWORD *)a1 + 1) = v2;
  return result;
}
