/*
 * XREFs of KeStopProfile @ 0x140246090
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14057BDC8 (EtwpDisableKernelTrace.c)
 *     EtwpCoverageSamplerStop @ 0x1407B8748 (EtwpCoverageSamplerStop.c)
 *     ExpProfileDelete @ 0x1407C7A20 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x1407C7F8C (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x14016C6C0 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiStopProfileTarget @ 0x1402465D0 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
