/*
 * XREFs of Controller_ExecuteDSM @ 0x1C0053F00
 * Callers:
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0007D90 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C0009194 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Controller_QuerySupportedDSMs @ 0x1C0009270 (Controller_QuerySupportedDSMs.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C00526FC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00541C8 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0054388 (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C000DE84 (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF_q_guid_L @ 0x1C000E560 (WPP_RECORDER_SF_q_guid_L.c)
 *     WPP_RECORDER_SF_q_guid_LLLLL @ 0x1C000E660 (WPP_RECORDER_SF_q_guid_LLLLL.c)
 *     WPP_RECORDER_SF_q_guid_Ld @ 0x1C000E7DC (WPP_RECORDER_SF_q_guid_Ld.c)
 */

__int64 __fastcall Controller_ExecuteDSM(__int64 *a1, const void *a2, int a3, int a4, void *a5, unsigned __int16 a6)
{
  unsigned int v6; // edi
  __int64 v7; // r13
  int v10; // eax
  _DWORD *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rbx
  __int64 v17; // rax
  void *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // cl
  int v25; // [rsp+20h] [rbp-99h]
  int v26; // [rsp+20h] [rbp-99h]
  unsigned int Size; // [rsp+60h] [rbp-59h]
  _QWORD v29[3]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v30[3]; // [rsp+88h] [rbp-31h] BYREF
  void *Src; // [rsp+A0h] [rbp-19h]
  char v32[8]; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-1h]
  int v35; // [rsp+C0h] [rbp+7h]

  v6 = 0;
  v7 = *a1;
  Src = a5;
  v10 = a6;
  if ( a6 < 4u )
    v10 = 4;
  Size = v10 + 56;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v10 + 56), 0x49434858u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    v16[2] = Size;
    *v16 = 1130980673;
    v16[1] = 1297302623;
    v16[3] = 4;
    v16[4] = 1048578;
    memcpy_s(v16 + 5, 0x10uLL, a2, 0x10uLL);
    LOWORD(v17) = *((_WORD *)v16 + 9);
    if ( (unsigned __int16)v17 >= 4u )
      v17 = (unsigned __int16)v17;
    else
      v17 = 4LL;
    v18 = Src;
    *(_DWORD *)((char *)v16 + v17 + 24) = a3;
    *(_DWORD *)((char *)v16 + v17 + 20) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 28) = 0x40000;
    *(_DWORD *)((char *)v16 + v17 + 32) = a4;
    *(_WORD *)((char *)v16 + v17 + 36) = 2;
    *(_WORD *)((char *)v16 + v17 + 38) = a6;
    memcpy_s((char *)v16 + v17 + 40, a6, v18, a6);
    v30[2] = Size;
    v34 = 0LL;
    v35 = 0;
    v29[1] = &v33;
    v30[0] = 1LL;
    v30[1] = v16;
    v33 = 1114596673LL;
    v29[0] = 1LL;
    v29[2] = 20LL;
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, v7);
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, char *))(WdfFunctions_01023 + 1488))(
           WdfDriverGlobals,
           v19,
           0LL,
           3325956LL,
           v30,
           v29,
           0LL,
           v32) >= 0 )
    {
      if ( (_DWORD)v33 == 1114596673 )
      {
        if ( (_DWORD)v34 && HIWORD(v34) )
        {
          v21 = HIWORD(v34);
          v23 = 3;
          if ( (unsigned __int64)HIWORD(v34) - 1 <= 3 )
            v23 = BYTE6(v34) - 1;
          v6 = v35 & ((256 << (8 * v23)) - 1);
        }
        WPP_RECORDER_SF_q_guid_LLLLL(a1[9], HIWORD(v34), v21, (unsigned int)v34, v26);
      }
      else
      {
        WPP_RECORDER_SF_q_guid_L(a1[9], v20, v21, v22, v26);
      }
    }
    else
    {
      WPP_RECORDER_SF_q_guid_Ld(a1[9], v20, v21, v22, v26);
    }
    ExFreePoolWithTag(v16, 0x49434858u);
  }
  else
  {
    WPP_RECORDER_SF__guid_d(a1[9], v13, v14, v15, v25, (__int64)a2);
  }
  return v6;
}
