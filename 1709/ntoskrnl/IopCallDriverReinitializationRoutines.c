/*
 * XREFs of IopCallDriverReinitializationRoutines @ 0x14046F300
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401518F0 (PnpCompleteSystemStartProcess.c)
 *     IopLoadUnloadDriver @ 0x14046F260 (IopLoadUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     IopInterlockedRemoveHeadList @ 0x140015B40 (IopInterlockedRemoveHeadList.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

char __fastcall IopCallDriverReinitializationRoutines(char a1)
{
  char v1; // si
  char v2; // bl
  _QWORD *v3; // rdi

  v1 = 0;
  v2 = a1;
  if ( !a1 && !IopInitSystemCompletedEnoughForReInitRoutines )
    return 0;
  while ( 1 )
  {
    v3 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
    if ( v3 )
    {
      v1 = 1;
      do
      {
        ++*(_DWORD *)(*(_QWORD *)(v3[2] + 48LL) + 16LL);
        *(_DWORD *)(v3[2] + 16LL) &= ~8u;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v3[3])(
          v3[2],
          v3[4],
          *(unsigned int *)(*(_QWORD *)(v3[2] + 48LL) + 16LL));
        ObfDereferenceObject((PVOID)v3[2]);
        ExFreePoolWithTag(v3, 0);
        v3 = IopInterlockedRemoveHeadList((_QWORD **)&IopDriverReinitializeQueueHead);
      }
      while ( v3 );
    }
    if ( v2 != 1 )
      break;
    IopInitSystemCompletedEnoughForReInitRoutines = 1;
    v2 = 0;
  }
  return v1;
}
