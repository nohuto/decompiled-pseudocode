/*
 * XREFs of ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C0099BC4
 * Callers:
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C00A2BD4 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00371A0 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0037530 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 */

bool __fastcall FxPkgPnp::PnpIncrementRestartCountLogic(
        FxPkgPnp *this,
        void *RestartKey,
        unsigned __int8 CreatedNewKey)
{
  char v3; // r13
  unsigned __int8 m_AchievedStart; // r12
  bool v6; // r14
  int v7; // edi
  _LARGE_INTEGER v8; // rbx
  NTSTATUS v10; // eax
  unsigned int count; // [rsp+40h] [rbp-89h] BYREF
  unsigned int length; // [rsp+44h] [rbp-85h] BYREF
  unsigned int type; // [rsp+48h] [rbp-81h] BYREF
  unsigned int ValueLengthQueried; // [rsp+4Ch] [rbp-7Dh] BYREF
  unsigned int ValueType; // [rsp+50h] [rbp-79h] BYREF
  unsigned int value; // [rsp+54h] [rbp-75h] BYREF
  int Data; // [rsp+58h] [rbp-71h] BYREF
  _LARGE_INTEGER currentTickCount; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING valueNameStartTime; // [rsp+68h] [rbp-61h] BYREF
  _UNICODE_STRING valueNameCount; // [rsp+78h] [rbp-51h] BYREF
  _UNICODE_STRING valueNameStartAchieved; // [rsp+88h] [rbp-41h] BYREF
  _LARGE_INTEGER startTickCount; // [rsp+98h] [rbp-31h] BYREF
  FxPkgPnp *v24; // [rsp+A0h] [rbp-29h]
  wchar_t valueNameCount_buffer[8]; // [rsp+A8h] [rbp-21h] BYREF
  wchar_t valueNameStartTime_buffer[12]; // [rsp+B8h] [rbp-11h] BYREF
  wchar_t valueNameStartAchieved_buffer[16]; // [rsp+D0h] [rbp+7h] BYREF

  count = 0;
  v3 = 0;
  valueNameStartTime.Buffer = valueNameStartTime_buffer;
  valueNameCount.Buffer = valueNameCount_buffer;
  wcscpy(valueNameStartTime_buffer, L"StartTime");
  valueNameStartAchieved.Buffer = valueNameStartAchieved_buffer;
  wcscpy(valueNameCount_buffer, L"Count");
  *(_DWORD *)&valueNameStartTime.Length = 1310738;
  *(_DWORD *)&valueNameCount.Length = 786442;
  wcscpy(valueNameStartAchieved_buffer, L"StartAchieved");
  *(_DWORD *)&valueNameStartAchieved.Length = 1835034;
  m_AchievedStart = this->m_AchievedStart;
  v24 = this;
  currentTickCount.QuadPart = MEMORY[0xFFFFF78000000320];
  v6 = m_AchievedStart != 0;
  if ( CreatedNewKey )
    goto LABEL_20;
  v7 = FxRegKey::_QueryValue(this->m_Globals, RestartKey, &valueNameStartTime, 8u, &startTickCount, &length, &type);
  if ( v7 >= 0 && length == 8 && type == 3 )
  {
    v7 = FxRegKey::_QueryULong(RestartKey, &valueNameCount, &count);
    if ( v7 == -1073741772 )
    {
      count = 1;
      v7 = 0;
    }
  }
  if ( v7 >= 0 )
  {
    v8 = startTickCount;
    if ( currentTickCount.QuadPart >= startTickCount.QuadPart )
    {
      if ( KeQueryTimeIncrement() * (currentTickCount.QuadPart - v8.QuadPart) <= 600000000 )
      {
        if ( ++count > 5 )
        {
          v7 = -1073741823;
LABEL_22:
          if ( v7 >= 0 && v3 )
            v7 = ZwSetValueKey(RestartKey, &valueNameCount, 0, 4u, &count, 4u);
          goto LABEL_25;
        }
LABEL_21:
        v3 = 1;
        goto LABEL_22;
      }
      if ( !m_AchievedStart
        && !((int)FxRegKey::_QueryValue(
                    v24->m_Globals,
                    RestartKey,
                    &valueNameStartAchieved,
                    4u,
                    &value,
                    &ValueLengthQueried,
                    &ValueType) >= 0
          && ValueLengthQueried == 4
          && ValueType == 4
           ? value
           : 0) )
      {
        m_AchievedStart = 0;
        v7 = -1073741823;
        goto LABEL_25;
      }
      v6 = 1;
      m_AchievedStart = 0;
    }
LABEL_20:
    count = 1;
    v7 = ZwSetValueKey(RestartKey, &valueNameStartTime, 0, 3u, &currentTickCount, 8u);
    goto LABEL_21;
  }
LABEL_25:
  if ( v6 )
  {
    Data = m_AchievedStart;
    v10 = ZwSetValueKey(RestartKey, &valueNameStartAchieved, 0, 4u, &Data, 4u);
    if ( v7 >= 0 )
      v7 = v10;
  }
  return v7 >= 0;
}
