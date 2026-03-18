/*
 * XREFs of UsbhExRemove @ 0x1C004F090
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

void __fastcall UsbhExRemove(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // eax
  __int64 **v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = FdoExt(a1);
  Log(a1, 128, 1702381138, 0LL, 0LL);
  v3 = v2[640];
  if ( (v3 & 0x2000) != 0 )
  {
    v2[640] = v3 & 0xFFFFDFFF;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2 + 609, &LockHandle);
    v4 = (__int64 **)(v2 + 1214);
    while ( *v4 != (__int64 *)v4 )
    {
      v5 = *v4;
      v6 = **v4;
      if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
        __fastfail(3u);
      *v4 = (__int64 *)v6;
      *(_QWORD *)(v6 + 8) = v4;
      if ( v5 != (__int64 *)48 )
        ExFreePoolWithTag(v5 - 6, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
