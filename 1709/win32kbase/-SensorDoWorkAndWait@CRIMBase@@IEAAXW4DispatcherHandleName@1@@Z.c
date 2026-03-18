/*
 * XREFs of ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C001A81C
 * Callers:
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C001A5D0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z @ 0x1C012C2B0 (-ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRIMBase::SensorDoWorkAndWait(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  struct _KEVENT *v3; // rdi
  void *v4; // rbx

  v2 = ((unsigned __int64)a2 << 6) + a1 + 144;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v3 = *(struct _KEVENT **)(v2 + 48);
  if ( v3 && (v4 = *(void **)(v2 + 56)) != 0LL )
  {
    ObfReferenceObject(*(PVOID *)(v2 + 48));
    ObfReferenceObject(v4);
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
  }
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 || v3 )
  {
    KeSetEvent(v3, 1, 0);
    KeWaitForSingleObject(v4, WrUserRequest, 0, 0, 0LL);
    if ( v3 )
      ObfDereferenceObject(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
  }
}
