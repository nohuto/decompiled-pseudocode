/*
 * XREFs of UsbhExRemove @ 0x1C004FD80
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

void __fastcall UsbhExRemove(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  int v3; // eax
  _DWORD *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)FdoExt(a1);
  Log(a1, 128, 1702381138, 0LL, 0LL);
  v3 = *((_DWORD *)v2 + 640);
  if ( (v3 & 0x2000) != 0 )
  {
    *((_DWORD *)v2 + 640) = v3 & 0xFFFFDFFF;
    KeAcquireInStackQueuedSpinLock(v2 + 609, &LockHandle);
    v4 = v2 + 607;
    while ( *(_DWORD **)v4 != v4 )
    {
      v5 = *(__int64 **)v4;
      if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *v5, *(__int64 **)(*v5 + 8) != v5) )
        __fastfail(3u);
      *(_QWORD *)v4 = v6;
      *(_QWORD *)(v6 + 8) = v4;
      if ( v5 != (__int64 *)48 )
        ExFreePoolWithTag(v5 - 6, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
