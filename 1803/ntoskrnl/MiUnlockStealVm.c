/*
 * XREFs of MiUnlockStealVm @ 0x14003F9B0
 * Callers:
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiLockStealSystemVm @ 0x14003F754 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x1400D5854 (MiLockStealUserVm.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     MiUnlockSystemVa @ 0x14003FA38 (MiUnlockSystemVa.c)
 *     MiAttachThreadDone @ 0x1400831E4 (MiAttachThreadDone.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

LONG_PTR __fastcall MiUnlockStealVm(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rdi
  char *v4; // rcx
  char v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]

  result = MiUnlockSystemVa(a1);
  if ( *(_QWORD *)(a1 + 64) )
  {
    v4 = (char *)(a1 + 72);
    if ( a1 == -72 )
    {
      v6 = 0LL;
      v4 = &v5;
    }
    KiUnstackDetachProcess((__int64)v4, 1LL);
    return MiAttachThreadDone(*(_QWORD *)(a1 + 64));
  }
  else
  {
    v3 = *(void **)(a1 + 56);
    if ( v3 )
    {
      MmDetachSession(*(_QWORD *)(a1 + 56), a1 + 72);
      return ObfDereferenceObject(v3);
    }
  }
  return result;
}
