/*
 * XREFs of PiSwInterfaceCreate @ 0x14045F13C
 * Callers:
 *     PiSwCompleteCreate @ 0x14045F814 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x140460F78 (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PnpCopyDevPropertyArray @ 0x1404604F4 (PnpCopyDevPropertyArray.c)
 *     PnpAllocatePWSTR @ 0x1404875B0 (PnpAllocatePWSTR.c)
 *     PiSwInterfaceFree @ 0x1406A3224 (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwInterfaceCreate(NTSTRSAFE_PCWSTR pszSrc, int a2, int a3, _QWORD *a4)
{
  PVOID PoolWithTag; // rax
  int PWSTR; // ebx
  int v10; // r8d

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x57706E50u);
  *a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    PWSTR = PnpAllocatePWSTR(pszSrc);
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, *(_DWORD *)a4 + 32, *a4 + 24LL);
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
    PiSwInterfaceFree();
    *a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}
