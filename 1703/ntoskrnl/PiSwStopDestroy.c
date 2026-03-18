/*
 * XREFs of PiSwStopDestroy @ 0x140570B8C
 * Callers:
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiSwFindChildren @ 0x140450FE0 (PiSwFindChildren.c)
 *     PnpConcatPWSTR @ 0x1404BEFD4 (PnpConcatPWSTR.c)
 *     PiSwCloseDevice @ 0x14056E1C4 (PiSwCloseDevice.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rdi
  int v5; // esi
  _QWORD *v7; // rbx
  __int64 v8; // r14
  const wchar_t *v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  wchar_t *Str2; // [rsp+60h] [rbp+18h] BYREF

  Str2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren();
  if ( Children )
  {
    v5 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2uLL);
    if ( v5 >= 0 )
    {
      v7 = *Children;
      while ( v7 != Children )
      {
        v8 = (__int64)(v7 - 12);
        v9 = (const wchar_t *)*(v7 - 11);
        v7 = (_QWORD *)*v7;
        if ( !wcsicmp(v9, Str2) && (*(_DWORD *)(v8 + 4) & 1) == 0 )
          PiSwCloseDevice(v8);
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v5 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
