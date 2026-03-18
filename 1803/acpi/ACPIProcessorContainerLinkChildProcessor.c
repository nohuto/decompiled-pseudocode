/*
 * XREFs of ACPIProcessorContainerLinkChildProcessor @ 0x1C0036D00
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C0036300 (ACPIProcessorStartDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIProcessorContainerLinkChildProcessor(_QWORD *a1)
{
  KIRQL v2; // r8
  __int64 i; // rdx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !AcpiProcessorContainerHierarchyLocked )
  {
    for ( i = a1[93]; i; i = *(_QWORD *)(i + 744) )
    {
      if ( (*(_QWORD *)(i + 952) & 0x8000000000LL) != 0 )
      {
        v4 = i + 216;
        v5 = a1 + 25;
        v6 = *(_QWORD **)(v4 + 8);
        if ( *v6 != v4 )
          __fastfail(3u);
        *v5 = v4;
        a1[26] = v6;
        *v6 = v5;
        *(_QWORD *)(v4 + 8) = v5;
        break;
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v2);
}
