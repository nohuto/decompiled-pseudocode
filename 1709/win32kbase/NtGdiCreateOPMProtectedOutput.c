/*
 * XREFs of NtGdiCreateOPMProtectedOutput @ 0x1C00F10A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00A0C50 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A1C90 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutput(_OWORD *a1, void **a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  int v10; // [rsp+30h] [rbp-38h] BYREF
  void *v11; // [rsp+38h] [rbp-30h] BYREF
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v12[4]; // [rsp+40h] [rbp-28h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)v12 = *a1;
    v10 = 0;
    v11 = (void *)-1LL;
    v6 = OPMCreateProtectedOutput((COPM *)(unsigned int)v12[3], (struct _LUID *)v12, v12[2], &v11, &v10);
    if ( v10 && v6 >= 0 )
      v6 = -1073741198;
    v9 = (unsigned __int64)(a2 + 1);
    if ( (unsigned __int64)(a2 + 1) > MmUserProbeAddress || v9 <= (unsigned __int64)a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v11;
    UserSessionSwitchLeaveCrit(MmUserProbeAddress, v9, v7, v8);
    if ( v6 < 0 )
      return (unsigned int)v6;
    return v5;
  }
  return result;
}
