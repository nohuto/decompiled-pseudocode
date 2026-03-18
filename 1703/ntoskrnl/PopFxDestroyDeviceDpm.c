/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x14022A988
 * Callers:
 *     PoFxUnregisterDevice @ 0x1406C75E0 (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x1406C8A30 (PopFxUnregisterDevice.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     PopFxDestroyDeviceCommon @ 0x14022A954 (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  IRP *v6; // rcx
  __int64 i; // rsi
  __int64 v8; // rbp
  void *v9; // rcx

  v4 = *(void **)(a2 + 104);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  v5 = *(void **)(a2 + 96);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x746C6644u);
  v6 = *(IRP **)(a2 + 16);
  if ( v6 )
    IoFreeIrp(v6);
  if ( *(_QWORD *)(a2 + 632) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 628); i = (unsigned int)(i + 1) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 632) + 8 * i);
      v9 = *(void **)(v8 + 248);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x4D584650u);
        *(_QWORD *)(v8 + 248) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a2 + 632), 0x4D584650u);
    *(_QWORD *)(a2 + 632) = 0LL;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  if ( (*(_DWORD *)(a1 + 296) & 0x4000) != 0 )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 248), (PVOID)0x70466F50, 0x20u);
    *(_DWORD *)(a1 + 296) &= ~0x4000u;
  }
  else
  {
    PopFxDestroyDeviceCommon((PVOID *)a2);
  }
}
