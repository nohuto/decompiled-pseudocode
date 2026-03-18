/*
 * XREFs of GreSfmOpenTokenEvent @ 0x1C0089DE0
 * Callers:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0089BF0 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle, __int64 a2, int a3)
{
  int v4; // r8d
  NTSTATUS v5; // eax
  PVOID v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDwmState", (int)ghsemDwmState, a3);
  if ( UserIsCurrentProcessDwm() )
  {
    v5 = ObReferenceObjectByHandle(
           *((HANDLE *)gpSfmState + 3),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           0,
           &Object,
           0LL);
    v6 = Object;
    v7 = v5;
    if ( v5 >= 0 )
    {
      v7 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v6);
    }
  }
  else
  {
    v7 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v4);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
    PsLeavePriorityRegion(v8);
  }
  return v7;
}
