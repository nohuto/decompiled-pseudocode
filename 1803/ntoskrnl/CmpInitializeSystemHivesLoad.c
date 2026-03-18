/*
 * XREFs of CmpInitializeSystemHivesLoad @ 0x1406498CC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14057F47C (CmpQueryHiveRedirectionFileList.c)
 */

NTSTATUS CmpInitializeSystemHivesLoad()
{
  unsigned int v0; // edi
  _QWORD *v1; // rbx
  __int64 v2; // r14
  PVOID PoolWithTag; // rax
  PVOID v4; // rsi
  UNICODE_STRING *v5; // r14
  _DWORD *v6; // rdi
  unsigned int i; // ebx
  bool v8; // cl
  int v9; // eax
  NTSTATUS result; // eax
  _DWORD *v11; // rax
  __int64 v12; // rcx
  UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v15; // [rsp+70h] [rbp-98h] BYREF
  __int64 v16; // [rsp+80h] [rbp-88h]
  int v17; // [rsp+88h] [rbp-80h]
  __int128 v18; // [rsp+90h] [rbp-78h]
  char v19; // [rsp+A8h] [rbp-60h] BYREF

  CmpNoWrite = 0;
  KeInitializeEvent(&CmpLoadWorkerEvent, SynchronizationEvent, 0);
  KeInitializeEvent(&CmpLoadWorkerDebugEvent, SynchronizationEvent, 0);
  v0 = 0;
  v1 = &unk_140396930;
  do
  {
    v2 = 19LL * v0;
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 8], NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 11], SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 14], NotificationEvent, 0);
    *(_DWORD *)&Destination.Length = 0x800000;
    Destination.Buffer = (wchar_t *)&v19;
    RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\");
    RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v1 - 17));
    if ( (*((_DWORD *)v1 - 27) & 1) == 0 )
      RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v1 - 18));
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x32364D43u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, v0, 0LL);
    *v1 = PoolWithTag;
    *((_DWORD *)v1 - 2) = 0x800000;
    v5 = (UNICODE_STRING *)&CmpMachineHiveList[v2 + 17];
    if ( !CmpQueryHiveRedirectionFileList(&Destination, v5) || *((_WORD *)v1 - 4) == 2 )
    {
      *((_DWORD *)v1 - 2) = 0x800000;
      *v1 = v4;
      RtlAppendUnicodeToString(v5, L"\\SystemRoot\\System32\\Config\\");
      RtlAppendUnicodeToString(v5, (PCWSTR)*(v1 - 18));
    }
    v1 += 19;
    ++v0;
  }
  while ( v0 < 7 );
  if ( CmpShareSystemHives )
  {
    v11 = &unk_1403968C0;
    v12 = 7LL;
    do
    {
      if ( *((_QWORD *)v11 - 4) )
        *v11 |= 0x8000u;
      v11 += 38;
      --v12;
    }
    while ( v12 );
  }
  CmpSpecialBootCondition = 1;
  v6 = &unk_1403968B0;
  for ( i = 0; i < 7; ++i )
  {
    v8 = (v6[4] & 1) != 0 || CmpInitRmLogOnLoad || CmpForceSynchronousMachineHiveLoad || ((i - 2) & 0xFFFFFFFA) == 0;
    if ( !*(_QWORD *)v6 )
      *(_QWORD *)v6 = *((_QWORD *)v6 - 2);
    if ( v8 )
      KeSetEvent((struct _KEVENT *)((char *)&stru_1403968E0 + 152 * i), 0, 0);
    LODWORD(v15) = 48;
    *((_QWORD *)&v15 + 1) = 0LL;
    v17 = 512;
    v16 = 0LL;
    v18 = 0LL;
    v9 = PsCreateSystemThreadEx(
           (__int64)&Handle,
           0x1FFFFF,
           &v15,
           CmpRegistryProcess,
           0LL,
           (__int64)CmpLoadHiveThread,
           i,
           0LL,
           0LL);
    if ( v9 < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, i, v9);
    result = ZwClose(Handle);
    v6 += 38;
  }
  return result;
}
