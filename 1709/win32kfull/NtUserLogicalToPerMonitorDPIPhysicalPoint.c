/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C013F110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C0101130 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 *v18; // r9
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp+18h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v21 = 0;
      goto LABEL_15;
    }
  }
  v21 = 0;
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (_QWORD *)MmUserProbeAddress;
  *v8 = *v8;
  v23 = *a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress, (__int64)v8, v4, v5);
  v13 = CurrentThreadDpiAwarenessContext;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 456) + 224LL) & 1) != 0
      || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16) + 456) + 224LL) & 0x20) != 0
      || (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)(*(_DWORD *)(a1 + 368) >> 8)) & 0x1FF) == 0 )
    {
      v17 = v23;
    }
    else
    {
      TransformPointBetweenCoordinateSpaces(&v24, &v23, a1, 0LL);
      v17 = v24;
    }
    if ( !DCEPtInRect((_DWORD *)(a1 + 128), v17) )
      goto LABEL_13;
    v25 = GuessMonitorOverrideForCoordinateConversions(v23, *(unsigned int *)(a1 + 368), 0LL);
    v18 = &v25;
    v19 = *(unsigned int *)(a1 + 368);
  }
  else
  {
    v22 = GuessMonitorOverrideForCoordinateConversions(v23, CurrentThreadDpiAwarenessContext, 0LL);
    v18 = &v22;
    v19 = v13;
  }
  LogicalToPhysicalDPIPoint(&v23, &v23, v19, v18);
  v21 = 1;
LABEL_13:
  if ( v21 == 1 )
  {
    *a2 = v23;
    v21 = 1;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v21;
}
