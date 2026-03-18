/*
 * XREFs of PiSwInterfaceCreate @ 0x140646B8C
 * Callers:
 *     PiSwCompleteCreate @ 0x1405C59F0 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x14064675C (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1405045F0 (PnpAllocatePWSTR.c)
 *     PnpCopyDevPropertyArray @ 0x1405C6EA4 (PnpCopyDevPropertyArray.c)
 *     PiSwInterfaceFree @ 0x140735460 (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwInterfaceCreate(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, unsigned int a3, PVOID *a4)
{
  PVOID PoolWithTag; // rax
  int PWSTR; // ebx
  __int64 v10; // r8

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x57706E50u);
  *a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    PWSTR = PnpAllocatePWSTR(pszSrc, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)*a4 + 2);
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, (_DWORD *)*a4 + 8, (void **)*a4 + 3);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
  else
  {
    PWSTR = -1073741670;
  }
  if ( *a4 )
  {
    PiSwInterfaceFree(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}
