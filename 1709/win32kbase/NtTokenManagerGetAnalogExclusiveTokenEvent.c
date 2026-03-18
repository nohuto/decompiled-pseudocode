/*
 * XREFs of NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C01535C0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z @ 0x1C01538F8 (-GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveTokenEvent(HANDLE *a1)
{
  CTokenManager *v2; // rcx
  int AnalogExclusiveTokenEventInternal; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm() )
  {
    AnalogExclusiveTokenEventInternal = -1073741823;
    if ( g_pTokenManager )
      AnalogExclusiveTokenEventInternal = CTokenManager::GetAnalogExclusiveTokenEventInternal(v2, &Handle);
  }
  else
  {
    AnalogExclusiveTokenEventInternal = -1073741790;
  }
  if ( AnalogExclusiveTokenEventInternal < 0 )
    goto LABEL_13;
  if ( Handle == (HANDLE)-1LL )
  {
    AnalogExclusiveTokenEventInternal = -1073741811;
  }
  else
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = Handle;
  }
  if ( AnalogExclusiveTokenEventInternal < 0 )
  {
LABEL_13:
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)AnalogExclusiveTokenEventInternal;
}
