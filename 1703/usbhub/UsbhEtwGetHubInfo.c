/*
 * XREFs of UsbhEtwGetHubInfo @ 0x1C00082F0
 * Callers:
 *     UsbhEtwLogHubPastExceptions @ 0x1C000820C (UsbhEtwLogHubPastExceptions.c)
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     UsbhQueryBusRelations @ 0x1C0015090 (UsbhQueryBusRelations.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0015D58 (UsbhArmHubForWakeDetect.c)
 *     UsbhFdoPower_WaitWake @ 0x1C00188B0 (UsbhFdoPower_WaitWake.c)
 *     UsbhEtwLogHubInformation @ 0x1C001EB70 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C0059060 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C0059150 (UsbhEtwLogHubException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetHubInfo(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 result; // rax

  *(_WORD *)a2 = *(_WORD *)(a1 + 2548);
  *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 2550);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = *(unsigned __int16 *)(a1 + 5208);
  if ( *(_WORD *)(a1 + 5208) )
    ++*(_DWORD *)(a2 + 4);
  v2 = *(unsigned __int16 *)(a1 + 5210);
  *(_DWORD *)(a2 + 12) = v2;
  if ( v2 )
    ++*(_DWORD *)(a2 + 4);
  v3 = *(unsigned __int16 *)(a1 + 5212);
  *(_DWORD *)(a2 + 16) = v3;
  if ( v3 )
    ++*(_DWORD *)(a2 + 4);
  v4 = *(unsigned __int16 *)(a1 + 5214);
  *(_DWORD *)(a2 + 20) = v4;
  if ( v4 )
    ++*(_DWORD *)(a2 + 4);
  v5 = *(unsigned __int16 *)(a1 + 5216);
  *(_DWORD *)(a2 + 24) = v5;
  if ( v5 )
    ++*(_DWORD *)(a2 + 4);
  v6 = *(unsigned __int16 *)(a1 + 5218);
  *(_DWORD *)(a2 + 28) = v6;
  if ( v6 )
    ++*(_DWORD *)(a2 + 4);
  result = *(unsigned int *)(a1 + 2536);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
