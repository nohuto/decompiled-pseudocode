/*
 * XREFs of PiSwStopDestroy @ 0x14055E5A8
 * Callers:
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpConcatPWSTR @ 0x14051B1D4 (PnpConcatPWSTR.c)
 *     PiSwFindChildren @ 0x140553A24 (PiSwFindChildren.c)
 *     PiSwCloseDevice @ 0x1406CDA04 (PiSwCloseDevice.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **Children; // rdi
  int v5; // esi
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
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
        v8 = v7 - 12;
        v9 = (const wchar_t *)*(v7 - 11);
        v7 = (_QWORD *)*v7;
        if ( !wcsicmp(v9, Str2) && (*((_DWORD *)v8 + 1) & 1) == 0 )
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
