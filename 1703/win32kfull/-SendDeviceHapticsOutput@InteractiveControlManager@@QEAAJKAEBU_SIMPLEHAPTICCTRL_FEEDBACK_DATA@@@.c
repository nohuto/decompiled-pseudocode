/*
 * XREFs of ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C021B444
 * Callers:
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C01DEC70 (NtUserSendInteractiveControlHapticsReport.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0220588 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SendDeviceHapticsOutput(
        InteractiveControlManager *this,
        int a2,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a3)
{
  unsigned int v3; // r9d
  LPCGUID v7; // r9
  LPCGUID v8; // r8
  InteractiveControlDevice **v9; // rbx
  __int64 v10; // rsi
  InteractiveControlDevice *v11; // rcx
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v17; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v18[3]; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]

  v3 = 0;
  v17 = 0;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SendDeviceHapticsOutput entry");
    v23 &= (unsigned int)v7;
    v21 = v18;
    v18[0] = a2;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC2DB, v8, v7, 4u, &pData);
    v3 = v17;
  }
  v9 = (InteractiveControlDevice **)((char *)this + 40);
  v10 = 5LL;
  do
  {
    v11 = *v9;
    if ( *v9 && (!a2 || a2 == *((_DWORD *)v11 + 2)) )
    {
      v17 = InteractiveControlDevice::SendHapticFeedbackOutput(v11, a3);
      v3 = v17;
      if ( v17 < 0 && (unsigned int)dword_1C0324190 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v23 = 0;
        v21 = v18;
        v18[0] = (_DWORD)v12;
        v22 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v13, v12, 4u, &pData);
        v3 = v17;
      }
    }
    ++v9;
    --v10;
  }
  while ( v10 );
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SendDeviceHapticsOutput exit");
    v23 = 0;
    v21 = &v17;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v14, v15, 4u, &pData);
    return (unsigned int)v17;
  }
  return v3;
}
