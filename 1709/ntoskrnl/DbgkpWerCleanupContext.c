/*
 * XREFs of DbgkpWerCleanupContext @ 0x1406AE1B8
 * Callers:
 *     DbgkWerCaptureLiveKernelDump @ 0x1406ADCB0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1406AE390 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401FBFD8 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401FC080 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopLiveDumpReleaseResources @ 0x1406BB07C (IopLiveDumpReleaseResources.c)
 */

void __fastcall DbgkpWerCleanupContext(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  void *v10; // rcx
  _QWORD *v11; // rsi
  void *v12; // rcx
  void *v13; // rcx
  int v14; // eax
  int v15; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerCleanupContext: Context 0x%p\n", (const void *)a1);
  if ( a1 )
  {
    v2 = *(void **)(a1 + 136);
    if ( v2 )
    {
      IopLiveDumpTraceInterfaceStart();
      IopLiveDumpTraceInterfaceEnd(v3, 2LL, 0);
      IopLiveDumpReleaseResources(v2);
      ExFreePoolWithTag(v2, 0x706D644Cu);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v4 = *(void **)(a1 + 120);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x57676244u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 )
    {
      v6 = *(void **)(v5 + 16);
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = 0LL;
      }
      v7 = *(void **)(*(_QWORD *)(a1 + 128) + 8LL);
      if ( v7 )
      {
        ZwClose(v7);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) = 0LL;
      }
      v8 = *(_QWORD *)(a1 + 128);
      v9 = *(_QWORD **)(v8 + 40);
      *(_QWORD *)(v8 + 40) = 0LL;
      if ( v9 )
      {
        do
        {
          v10 = (void *)v9[2];
          v11 = (_QWORD *)v9[4];
          if ( v10 )
            ExFreePoolWithTag(v10, 0x57676244u);
          ExFreePoolWithTag(v9, 0x57676244u);
          v9 = v11;
        }
        while ( v11 );
      }
      v12 = *(void **)(a1 + 128);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x57676244u);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
    v13 = *(void **)(a1 + 144);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0x57676244u);
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 104) )
    {
      if ( (*(_DWORD *)(a1 + 112) & 1) == 0 )
      {
        v14 = WerLiveKernelCancelReport();
        if ( v14 < 0 )
          DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCancelReport failed, 0x%X\n", v14);
      }
      v15 = WerLiveKernelCloseHandle(*(_QWORD *)(a1 + 104));
      if ( v15 < 0 )
        DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCloseHandle failed, 0x%X\n", v15);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
}
