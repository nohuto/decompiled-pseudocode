/*
 * XREFs of ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C021C6A0
 * Callers:
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C01EAD90 (NtUserSendInteractiveControlHapticsReport.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0221980 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SendDeviceHapticsOutput(
        InteractiveControlManager *this,
        int a2,
        const GUID *a3)
{
  const GUID *v3; // r9
  InteractiveControlDevice **v7; // rbx
  __int64 v8; // rsi
  InteractiveControlDevice *v9; // rcx
  __int64 v10; // rax
  unsigned int pRelatedActivityId; // [rsp+30h] [rbp-29h] BYREF
  _DWORD pRelatedActivityId_4[3]; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v15; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+6Ch] [rbp+13h]
  unsigned int *p_pRelatedActivityId; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+78h] [rbp+1Fh]
  int v20; // [rsp+7Ch] [rbp+23h]

  v3 = 0LL;
  pRelatedActivityId = 0;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v17 = 0;
    v20 = 0;
    v15 = "InteractiveControlManager::SendDeviceHapticsOutput entry";
    p_pRelatedActivityId = pRelatedActivityId_4;
    v16 = 57;
    pRelatedActivityId_4[0] = a2;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EAB, a3, 0LL, 4u, &pData);
    v3 = (const GUID *)pRelatedActivityId;
  }
  v7 = (InteractiveControlDevice **)((char *)this + 40);
  v8 = 5LL;
  do
  {
    v9 = *v7;
    if ( *v7 && (!a2 || a2 == *((_DWORD *)v9 + 2)) )
    {
      pRelatedActivityId = InteractiveControlDevice::SendHapticFeedbackOutput(
                             v9,
                             (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)a3);
      v3 = (const GUID *)pRelatedActivityId;
      if ( (pRelatedActivityId & 0x80000000) != 0 && (unsigned int)dword_1C0320190 > 2 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( aFunctionFailed[v10] );
        v17 = 0;
        v20 = 0;
        v16 = v10 + 1;
        p_pRelatedActivityId = pRelatedActivityId_4;
        v15 = "Function failed.";
        pRelatedActivityId_4[0] = pRelatedActivityId;
        v19 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, a3, (LPCGUID)pRelatedActivityId, 4u, &pData);
        v3 = (const GUID *)pRelatedActivityId;
      }
    }
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v17 = 0;
    v20 = 0;
    v15 = "InteractiveControlManager::SendDeviceHapticsOutput exit";
    p_pRelatedActivityId = &pRelatedActivityId;
    v16 = 56;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, a3, v3, 4u, &pData);
    LODWORD(v3) = pRelatedActivityId;
  }
  return (unsigned int)v3;
}
