/*
 * XREFs of PnpNotifyHwProfileChange @ 0x140693DA8
 * Callers:
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140694060 (PnpRequestHwProfileChangeNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x1404A6E8C (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140571900 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyHwProfileChange(GUID *Source1, _DWORD *a2, UNICODE_STRING *a3)
{
  int v4; // esi
  __int64 v7; // rdi
  _WORD *v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  GUID v10; // xmm0
  int v11; // ebx
  _WORD *v12; // rsi
  _WORD *v13; // rbx
  struct _KTHREAD *v14; // rax
  int v16; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+28h] [rbp-28h] BYREF
  GUID v18; // [rsp+2Ch] [rbp-24h]

  v16 = 0;
  v4 = 0;
  ExAcquireFastMutex(&PnpHwProfileNotifyLock);
  v7 = PnpProfileNotifyList;
  while ( (__int64 *)v7 != &PnpProfileNotifyList )
  {
    ++*(_WORD *)(v7 + 56);
    v8 = (_WORD *)v7;
    KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 72), 1u);
    if ( *(_BYTE *)(v7 + 58) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 72));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v4 = v16;
    }
    else
    {
      v10 = *Source1;
      v17 = 1310721;
      v18 = v10;
      v11 = PnpNotifyDriverCallback(v7, (__int64)&v17, &v16);
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 72));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v4 = v16;
      if ( v11 < 0 )
        v4 = 0;
      v16 = v4;
      if ( v4 < 0
        && (Source1 == &GUID_HWPROFILE_QUERY_CHANGE
         || RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) == 16) )
      {
        if ( a2 )
          *a2 = 7;
        if ( a3 )
        {
          a3->Length = 0;
          RtlCopyUnicodeString(a3, (PCUNICODE_STRING)(*(_QWORD *)(v7 + 48) + 56LL));
        }
        HIWORD(v17) = 16;
        v12 = (_WORD *)v7;
        v18 = GUID_HWPROFILE_CHANGE_CANCELLED;
        ExAcquireFastMutex(&PnpHwProfileNotifyLock);
        do
        {
          ++*(_WORD *)(v7 + 56);
          v13 = (_WORD *)v7;
          KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
          v14 = KeGetCurrentThread();
          --v14->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 72), 1u);
          if ( !*(_BYTE *)(v7 + 58) )
            PnpNotifyDriverCallback(v7, (__int64)&v17, 0LL);
          ExReleaseResourceLite(*(PERESOURCE *)(v7 + 72));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ExAcquireFastMutex(&PnpHwProfileNotifyLock);
          v7 = *(_QWORD *)(v7 + 8);
          PnpDereferenceNotify(v13);
          if ( v13 == v12 )
            PnpDereferenceNotify(v13);
        }
        while ( (__int64 *)v7 != &PnpProfileNotifyList );
        v4 = v16;
        break;
      }
    }
    ExAcquireFastMutex(&PnpHwProfileNotifyLock);
    v7 = *(_QWORD *)v7;
    PnpDereferenceNotify(v8);
  }
  KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
  return (unsigned int)v4;
}
