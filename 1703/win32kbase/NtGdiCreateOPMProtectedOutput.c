/*
 * XREFs of NtGdiCreateOPMProtectedOutput @ 0x1C00EDF50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00EDC7C (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutput(_OWORD *a1, void **a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // [rsp+30h] [rbp-38h] BYREF
  void *v9; // [rsp+38h] [rbp-30h] BYREF
  _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v10[4]; // [rsp+40h] [rbp-28h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList((__int64)a1, (__int64)a2, a3);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    if ( a1 + 1 < a1 || a1 + 1 > (_OWORD *)W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    *(_OWORD *)v10 = *a1;
    v8 = 0;
    v7 = OPMCreateProtectedOutput((COPM *)(unsigned int)v10[3], (struct _LUID *)v10, v10[2], &v9, &v8);
    if ( v8 && v7 >= 0 )
      v7 = -1073741198;
    if ( v7 >= 0 )
    {
      if ( a2 + 1 > (void **)W32UserProbeAddress || a2 + 1 <= a2 )
        *(_BYTE *)W32UserProbeAddress = 0;
      *a2 = v9;
    }
    UserSessionSwitchLeaveCrit();
    if ( v7 < 0 )
      return (unsigned int)v7;
    return v6;
  }
  return result;
}
