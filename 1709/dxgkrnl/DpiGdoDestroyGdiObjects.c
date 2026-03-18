/*
 * XREFs of DpiGdoDestroyGdiObjects @ 0x1C01E9584
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0118E70 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C01DC6D4 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C010F65C (DpiAppendNumberToString.c)
 */

__int64 __fastcall DpiGdoDestroyGdiObjects(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  KeWaitForSingleObject((PVOID)(v1 + 3416), Executive, 0, 0, 0LL);
  v2 = (_QWORD *)(v1 + 3400);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    LODWORD(v4) = 0;
    if ( (_QWORD *)*v2 == v2 )
      break;
    *(_QWORD *)&UnicodeString.Length = 0LL;
    UnicodeString.Buffer = 0LL;
    *(_QWORD *)&SymbolicLinkName.Length = 0LL;
    SymbolicLinkName.Buffer = 0LL;
    v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v3 + 2, v3, File, 1u, 0x20u);
    v4 = v5;
    if ( v5 < 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
      v11[3] = 275LL;
      v11[4] = 21LL;
      v11[5] = v4;
      WdLogEvent5_WdCriticalError(v11);
      break;
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)v3 + 10, 0);
    v9 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v10 = (_QWORD *)v3[1], (_QWORD *)*v10 != v3) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    --*(_DWORD *)(v1 + 3472);
    KeReleaseMutex((PRKMUTEX)(v1 + 3416), 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v3 + 2, v3, 0x20u);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
    KeWaitForSingleObject((PVOID)(v1 + 3416), Executive, 0, 0, 0LL);
    if ( (int)DpiAppendNumberToString(L"\\Device\\Video", *((_DWORD *)v3 + 38), &UnicodeString) >= 0 )
    {
      RtlDeleteRegistryValue(4u, L"VIDEO", UnicodeString.Buffer);
      RtlFreeUnicodeString(&UnicodeString);
    }
    if ( (int)DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *((_DWORD *)v3 + 38) + 1, &SymbolicLinkName) >= 0 )
    {
      IoDeleteSymbolicLink(&SymbolicLinkName);
      RtlFreeUnicodeString(&SymbolicLinkName);
    }
    DMgrReleaseGdiViewId(*((unsigned int *)v3 + 38), 0LL);
    RtlFreeUnicodeString((PUNICODE_STRING)v3 + 10);
    IoDeleteDevice((PDEVICE_OBJECT)v3[3]);
  }
  KeReleaseMutex((PRKMUTEX)(v1 + 3416), 0);
  return (unsigned int)v4;
}
