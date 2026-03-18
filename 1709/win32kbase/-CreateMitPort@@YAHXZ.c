/*
 * XREFs of ?CreateMitPort@@YAHXZ @ 0x1C00865A0
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C00864E4 (UserSetMITInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     CoreMsgCreatePort @ 0x1C0086608 (CoreMsgCreatePort.c)
 */

__int64 CreateMitPort(void)
{
  unsigned int v0; // ebx
  int Port; // eax
  __int64 v2; // rcx
  unsigned __int16 v4; // r9
  int v5; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v0 = 0;
  Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
           1LL,
           &P,
           0LL);
  if ( Port < 0 )
  {
    v4 = 32;
  }
  else
  {
    Port = CoreMsgCreatePort(v2, P);
    if ( Port >= 0 )
    {
      v0 = 1;
      goto LABEL_4;
    }
    v4 = 31;
  }
  v5 = Port;
  WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, v4, (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids, v5);
LABEL_4:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v0;
}
