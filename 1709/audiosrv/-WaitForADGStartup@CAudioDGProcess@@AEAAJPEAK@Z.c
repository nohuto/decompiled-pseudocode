/*
 * XREFs of ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x18001DF54
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18001D400 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001D5C8 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001DCF4 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

unsigned int __fastcall CAudioDGProcess::WaitForADGStartup(CAudioDGProcess *this, unsigned int *a2)
{
  void *v3; // rcx
  unsigned int result; // eax
  void *v6; // rax
  CAudioDGProcess *v7; // rcx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  HANDLE Handles[3]; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  int *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  int *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]

  v3 = (void *)*((_QWORD *)this + 11);
  result = -2004287472;
  v10 = -2004287472;
  if ( v3 )
  {
    v6 = (void *)*((_QWORD *)this + 14);
    Handles[1] = v3;
    Handles[0] = v6;
    result = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( !result )
      return result;
    if ( result != 1 )
      goto LABEL_12;
    if ( !GetExitCodeProcess(*((HANDLE *)this + 11), a2) )
    {
      result = GetLastError();
      if ( (int)result > 0 )
        result = (unsigned __int16)result | 0x80070000;
      v10 = result;
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids, result);
LABEL_12:
        v7 = WPP_GLOBAL_Control;
        result = v10;
      }
LABEL_13:
      if ( (result & 0x80000000) == 0 )
        return result;
      goto LABEL_25;
    }
    v7 = WPP_GLOBAL_Control;
    if ( *a2 != -1073740760 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids, *a2);
        v7 = WPP_GLOBAL_Control;
      }
      result = *a2;
      if ( (int)*a2 > 0 )
        result = (unsigned __int16)result | 0x80070000;
      v10 = result;
      goto LABEL_13;
    }
    result = -2147024319;
    v10 = -2147024319;
  }
  else
  {
    v7 = WPP_GLOBAL_Control;
  }
LABEL_25:
  if ( v7 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v7 + 28) & 4) != 0 && *((_BYTE *)v7 + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)v7 + 2), 23LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids, result);
    result = v10;
  }
  if ( (unsigned int)dword_18014A3F0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAudioDGProcess::WaitForADGStartup");
    v17 = 0;
    v20 = 0;
    v15 = &v11;
    v18 = &v10;
    v11 = 425;
    v16 = 4;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v8, v9, 5u, &pData);
    return v10;
  }
  return result;
}
