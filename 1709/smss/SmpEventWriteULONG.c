/*
 * XREFs of SmpEventWriteULONG @ 0x140002EC8
 * Callers:
 *     SmscpLoadSubSystem @ 0x140002490 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140002C6C (SmpExecuteImage.c)
 *     SmpInitializeKnownDlls @ 0x140006E00 (SmpInitializeKnownDlls.c)
 *     SmpNtSerializeBoot @ 0x1400071F4 (SmpNtSerializeBoot.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteULONG(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  int *v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+2Ch] [rbp-1Ch]
  int v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, EventDescriptor) )
    {
      v5 = 0;
      v3 = &v6;
      v4 = 4;
      ((void (__fastcall *)(REGHANDLE, PCEVENT_DESCRIPTOR, __int64, int **))EtwEventWrite)(
        SmpTraceHandle,
        EventDescriptor,
        1LL,
        &v3);
    }
  }
}
