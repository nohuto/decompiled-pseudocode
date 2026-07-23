/*
 * XREFs of sub_18004AE34 @ 0x18004AE34
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     RtlpUnWaitCriticalSection @ 0x18004A860 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 */

HANDLE __fastcall sub_18004AE34(__int64 a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // rbx
  NTSTATUS v5; // eax
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  v2 = -1LL;
  Handle = (HANDLE)-1LL;
  if ( byte_18015AC09 )
  {
    v5 = ZwCreateEvent(&Handle, 0x100003u, 0LL, SynchronizationEvent, 0);
    v2 = (signed __int64)Handle;
    if ( v5 < 0 )
      v2 = -1LL;
    Handle = (HANDLE)v2;
  }
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v2, 0LL);
  if ( !v3 )
    return Handle;
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  return (HANDLE)v3;
}
