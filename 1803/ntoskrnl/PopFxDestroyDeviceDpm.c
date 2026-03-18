/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x140275108
 * Callers:
 *     PoFxUnregisterDevice @ 0x14075F710 (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x140760910 (PopFxUnregisterDevice.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     PopFxDestroyDeviceCommon @ 0x1402750D4 (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbp
  void *v10; // rcx

  v4 = *(void **)(a2 + 104);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x78466F50u);
  v5 = *(void **)(a2 + 96);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x78466F50u);
  if ( a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x78466F50u);
  v6 = *(IRP **)(a2 + 16);
  if ( v6 )
    IoFreeIrp(v6);
  v7 = *(void **)(a2 + 712);
  if ( v7 )
  {
    v8 = 0LL;
    if ( *(_DWORD *)(a2 + 708) )
    {
      do
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a2 + 712) + 8 * v8);
        v10 = *(void **)(v9 + 328);
        if ( v10 )
        {
          ExFreePoolWithTag(v10, 0x4D584650u);
          *(_QWORD *)(v9 + 328) = 0LL;
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *(_DWORD *)(a2 + 708) );
      v7 = *(void **)(a2 + 712);
    }
    ExFreePoolWithTag(v7, 0x4D584650u);
    *(_QWORD *)(a2 + 712) = 0LL;
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
