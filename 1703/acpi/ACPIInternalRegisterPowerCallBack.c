/*
 * XREFs of ACPIInternalRegisterPowerCallBack @ 0x1C00052D0
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0023720 (ACPICMButtonStartWorker.c)
 *     ACPIInitStartACPI @ 0x1C00AA248 (ACPIInitStartACPI.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIInternalRegisterPowerCallBack(PVOID CallbackContext, PCALLBACK_FUNCTION CallbackFunction)
{
  NTSTATUS v4; // edi
  __int64 v6; // rcx
  void *v7; // rax
  void *v8; // rdx
  __int64 v9; // [rsp+40h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-38h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  if ( (*((_QWORD *)CallbackContext + 1) & 0x4000000000000000LL) != 0 )
    return 0LL;
  _InterlockedOr64((volatile signed __int64 *)CallbackContext + 1, 0x4000000000000000uLL);
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( v4 < 0 )
  {
    v6 = *((_QWORD *)CallbackContext + 1);
    v7 = &unk_1C0066CD0;
    v8 = &unk_1C0066CD0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)*((_QWORD *)CallbackContext + 70);
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (void *)*((_QWORD *)CallbackContext + 71);
    }
    v9 = (__int64)v8;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      10,
      11,
      (__int64)&WPP_adf19d460b46334a5cb7bb3ee834865a_Traceguids,
      v4,
      (char)CallbackContext,
      (__int64)v7,
      v9);
    v4 = 0;
    _InterlockedAnd64((volatile signed __int64 *)CallbackContext + 1, 0xBFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    ExRegisterCallback(CallbackObject, CallbackFunction, CallbackContext);
  }
  return (unsigned int)v4;
}
