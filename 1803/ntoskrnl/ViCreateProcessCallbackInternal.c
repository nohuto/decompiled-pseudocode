/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140824FFC
 * Callers:
 *     ViCreateProcessCallback @ 0x1400CD040 (ViCreateProcessCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14050E958 (PsGetAllocatedFullProcessImageName.c)
 *     RtlUpcaseUnicodeString @ 0x140539150 (RtlUpcaseUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     ViFaultsGetBaseImageName @ 0x140825444 (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x140825544 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  volatile signed __int32 *p_Lock; // rbx
  PVOID v3; // rdi
  KIRQL v4; // si
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 && PsLookupProcessByProcessId(a1, &Process) >= 0 )
  {
    p_Lock = &Process->Header.Lock;
    if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
    {
      v3 = P;
      ViFaultsGetBaseImageName(P, &DestinationString);
      RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      v4 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsAppTarget(&DestinationString) )
      {
        _InterlockedOr(p_Lock + 192, 0x10000u);
        p_Lock = &Process->Header.Lock;
        v3 = P;
      }
      KxReleaseSpinLock(&ViFaultInjectionLock);
      __writecr8(v4);
      ExFreePoolWithTag(v3, 0);
    }
    ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x746C6644u);
  }
}
