/*
 * XREFs of ?HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z @ 0x180060550
 * Callers:
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180027DA0 (-HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSystemCheckLocationCapability(void *a1, bool *a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+40h] [rbp+18h] BYREF
  PSID Sid; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  if ( ConvertStringSidToSidW(L"S-1-15-3-3215430884-1339816292-89257616-1145831019", &Sid)
    && (unsigned int)CheckTokenCapability(a1, Sid, &v6) )
  {
    *a2 = v6 != 0;
  }
  else if ( (int)GetLastError() > 0 )
  {
    return (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    return GetLastError();
  }
  return v4;
}
