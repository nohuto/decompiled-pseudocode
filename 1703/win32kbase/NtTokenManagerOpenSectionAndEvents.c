/*
 * XREFs of NtTokenManagerOpenSectionAndEvents @ 0x1C008EF00
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?OpenSectionAndEvents@CTokenManager@@SAJPEAPEAXPEA_K00@Z @ 0x1C008F088 (-OpenSectionAndEvents@CTokenManager@@SAJPEAPEAXPEA_K00@Z.c)
 */

__int64 __fastcall NtTokenManagerOpenSectionAndEvents(HANDLE *a1, unsigned __int64 *a2, HANDLE *a3, HANDLE *a4)
{
  unsigned __int64 v8; // r13
  int v9; // ebx
  HANDLE Handle; // [rsp+28h] [rbp-40h] BYREF
  HANDLE v12; // [rsp+30h] [rbp-38h] BYREF
  HANDLE v13; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-28h] BYREF

  v13 = (HANDLE)-1LL;
  v8 = 0LL;
  v14 = 0LL;
  v12 = (HANDLE)-1LL;
  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm() )
  {
    v9 = CTokenManager::OpenSectionAndEvents(&v13, &v14, &v12, &Handle);
    v8 = v14;
  }
  else
  {
    v9 = -1073741790;
  }
  if ( a1 && a2 && a3 && a4 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = v13;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v8;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v12;
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = Handle;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    if ( v12 != (HANDLE)-1LL )
      ObCloseHandle(v12, 1);
    if ( v13 != (HANDLE)-1LL )
      ObCloseHandle(v13, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
