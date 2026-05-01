/*
 * XREFs of ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180176318
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1800088B0 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800056F0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800207A0 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180176018 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18017616C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessAppId(CallerIdentity *this, unsigned __int16 **a2)
{
  __int64 v3; // rcx
  int CallingProcessHandle; // eax
  unsigned __int16 **v5; // r8
  unsigned int v6; // ebx
  int ProcessAppId; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE ProcessHandle; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&ProcessHandle);
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v3, 1, &ProcessHandle);
  v6 = CallingProcessHandle;
  if ( CallingProcessHandle >= 0 )
  {
    ProcessAppId = CallerIdentity::GetProcessAppId(ProcessHandle, this, v5);
    v6 = -2147023728;
    v8 = ProcessAppId;
    if ( ProcessAppId != -2147023728 )
    {
      if ( ProcessAppId >= 0 )
      {
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xE9,
          (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
          (const char *)(unsigned int)ProcessAppId);
        v6 = v8;
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xE3,
      (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
  }
  CAutoHandle<void *>::~CAutoHandle<void *>(&ProcessHandle);
  return v6;
}
