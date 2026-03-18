/*
 * XREFs of ACPICMLidPowerStateCallBack @ 0x1C0017010
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C00168B0 (ACPICMButtonStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

void __fastcall ACPICMLidPowerStateCallBack(volatile signed __int64 *CallbackContext, PVOID Argument1, PVOID Argument2)
{
  char v4; // di
  NTSTATUS v5; // eax
  void *v6; // rcx
  void *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // [rsp+40h] [rbp-118h]
  _BYTE OutputBuffer[28]; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v11; // [rsp+6Ch] [rbp-ECh]

  if ( !(_DWORD)Argument1 )
  {
    v4 = 0;
    v5 = ZwPowerInformation(SystemPowerPolicyCurrent, 0LL, 0, OutputBuffer, 0xE8u);
    if ( v5 >= 0 )
    {
      if ( v11 <= 1 )
        _InterlockedOr64(CallbackContext + 1, 0x1000000000000000uLL);
      else
        _InterlockedAnd64(CallbackContext + 1, 0xEFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v6 = &unk_1C005B1F0;
      v7 = &unk_1C005B1F0;
      if ( CallbackContext )
      {
        v8 = *((_QWORD *)CallbackContext + 1);
        v4 = (char)CallbackContext;
        if ( (v8 & 0x200000000000LL) != 0 )
        {
          v6 = (void *)*((_QWORD *)CallbackContext + 70);
          if ( (v8 & 0x400000000000LL) != 0 )
            v7 = (void *)*((_QWORD *)CallbackContext + 71);
        }
      }
      v9 = (__int64)v7;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v7,
        10,
        23,
        (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
        v5,
        v4,
        (__int64)v6,
        v9);
    }
  }
}
