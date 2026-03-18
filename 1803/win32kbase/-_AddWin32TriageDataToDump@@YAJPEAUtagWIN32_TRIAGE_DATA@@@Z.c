/*
 * XREFs of ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C00BF2E8
 * Callers:
 *     W32pLkmdDataCollectionCallback @ 0x1C00BF630 (W32pLkmdDataCollectionCallback.c)
 * Callees:
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1C00BF17C (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C00BF260 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall _AddWin32TriageDataToDump(struct tagWIN32_TRIAGE_DATA *a1)
{
  void *v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *i; // rdi
  unsigned int v9; // eax
  _QWORD *j; // rdi
  unsigned int v11; // eax
  void **v12; // rdi
  unsigned int v13; // eax
  _QWORD *k; // rdi

  v1 = *(void **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 320LL);
  if ( v3 )
  {
    do
    {
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v3);
      v3 = *(_QWORD *)(v3 + 656);
    }
    while ( v3 );
    v1 = *(void **)a1;
  }
  _AddMemoryBlockToLiveTriageDump(a1, v1);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 320LL);
  if ( v5 )
  {
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v5 + 448));
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 320LL) + 456LL));
    v4 = *(_QWORD *)a1;
  }
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v4 + 360));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 336LL));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 664LL));
  for ( i = *(_QWORD **)(*(_QWORD *)a1 + 344LL); i; i = (_QWORD *)*i )
  {
    v9 = *((_DWORD *)a1 + 4);
    if ( v9 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v9 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, i);
  }
  for ( j = *(_QWORD **)(*(_QWORD *)a1 + 352LL); j; j = (_QWORD *)*j )
  {
    v11 = *((_DWORD *)a1 + 4);
    if ( v11 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v11 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, j);
  }
  if ( *((_DWORD *)a1 + 4) >= 0x3E8u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  v12 = (void **)gsmsList;
  if ( gsmsList != &gsmsList )
  {
    v13 = *((_DWORD *)a1 + 2);
    do
    {
      if ( v13 >= 0x3E8 )
        break;
      _AddMemoryBlockToLiveTriageDump(a1, v12);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v12[4]);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v12[5]);
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v12[8]);
      _AddMemoryBlockToLiveTriageDump(a1, v12[14]);
      ++*((_DWORD *)a1 + 2);
      v12 = (void **)*v12;
      v13 = *((_DWORD *)a1 + 2);
    }
    while ( v12 != &gsmsList );
  }
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gsmsList & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gptiRit & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gptiForeground & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpai & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gbRemoteSession & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpresUser & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpvwplHungRedraw & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpsi & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gSharedInfo & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpWin32kDriverObject & 0xFFFFFFFFFFFFF000uLL));
  _AddThreadInfoToLiveTriageDump(a1, gptiRit);
  _AddThreadInfoToLiveTriageDump(a1, gptiForeground);
  _AddMemoryBlockToLiveTriageDump(a1, gpresUser);
  _AddMemoryBlockToLiveTriageDump(a1, gpvwplHungRedraw);
  _AddMemoryBlockToLiveTriageDump(a1, gpsi);
  _AddMemoryBlockToLiveTriageDump(a1, gpWin32kDriverObject);
  for ( k = gpai; k; k = (_QWORD *)*k )
    _AddMemoryBlockToLiveTriageDump(a1, k);
  return 0LL;
}
