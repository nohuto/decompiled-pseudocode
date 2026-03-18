/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140775FA8
 * Callers:
 *     ViCreateProcessCallback @ 0x140035810 (ViCreateProcessCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140564360 (PsGetAllocatedFullProcessImageName.c)
 *     ViFaultsGetBaseImageName @ 0x1407763F0 (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x1407764E8 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  volatile signed __int32 *p_Lock; // rbx
  PVOID v3; // rdi
  KIRQL v4; // si
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 && PsLookupProcessByProcessId(a1, &Process) >= 0 )
  {
    p_Lock = &Process->Header.Lock;
    if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
    {
      v3 = P;
      ViFaultsGetBaseImageName(P, &SourceString);
      RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
      v4 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
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
