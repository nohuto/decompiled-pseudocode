/*
 * XREFs of KeStopProfile @ 0x140208460
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1405970E0 (EtwpDisableKernelTrace.c)
 *     ExpProfileDelete @ 0x140760720 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140760D44 (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x140143640 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiStopProfileTarget @ 0x1402089D0 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  ULONG_PTR Context[26]; // [rsp+20h] [rbp-E8h] BYREF

  memset(Context, 0, 0xC8uLL);
  HIDWORD(Context[1]) = KeNumberProcessors_0;
  Context[0] = a1;
  LODWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[2]) = 1310721;
  memset((char *)&Context[2] + 4, 0, 0xA4uLL);
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget((ULONG_PTR)Context);
  else
    KeIpiGenericCall(KiStopProfileTarget, (ULONG_PTR)Context);
  if ( Context[23] )
    ExFreePoolWithTag((PVOID)Context[23], 0);
  return Context[24];
}
