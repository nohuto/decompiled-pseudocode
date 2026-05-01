/*
 * XREFs of ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18005A96C
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001E320 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x18001F7C0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 */

void __fastcall ExecutionModel::ResourceSet::CheckUpdatePendStats(ExecutionModel::ResourceSet *this, int a2, int a3)
{
  int v5; // eax
  int v6; // eax

  if ( a2 )
  {
    v5 = *((_DWORD *)this + 363);
    if ( (v5 & 0x100) == 0 )
    {
      *((_DWORD *)this + 363) = v5 | 0x100;
      *((_DWORD *)this + 473) = CempQueryUnbiasedInterruptTimeMs64();
    }
  }
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 363);
    if ( (v6 & 0x200) == 0 )
    {
      *((_DWORD *)this + 363) = v6 | 0x200;
      *((_DWORD *)this + 474) = CempQueryUnbiasedInterruptTimeMs64();
    }
  }
}
