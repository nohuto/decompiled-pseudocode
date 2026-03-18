/*
 * XREFs of ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00CB310
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsGpqForegroundAccessibleForPti @ 0x1C0050680 (IsGpqForegroundAccessibleForPti.c)
 *     CheckGrantedAccess @ 0x1C0050878 (CheckGrantedAccess.c)
 *     CheckWinstaAttributeAccess @ 0x1C0053250 (CheckWinstaAttributeAccess.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0098230 (_GetCurrentLogicalCursorThread.c)
 *     InForegroundQueue @ 0x1C00CB420 (InForegroundQueue.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  __int64 CurrentLogicalCursorThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  int v11; // edi
  __int64 v13; // rcx
  bool v14; // zf
  struct tagRECT v16; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = a1;
  CurrentLogicalCursorThread = GetCurrentLogicalCursorThread(a1, a2, a3, a4);
  v10 = CurrentLogicalCursorThread;
  if ( v5 )
  {
    v11 = v5 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return 1LL;
      if ( (unsigned int)IsDesktopApp(*(_QWORD *)(CurrentLogicalCursorThread + 400), v7, v8, v9) )
        return 0LL;
      if ( !*(_DWORD *)(*(_QWORD *)(v10 + 400) + 836LL) )
        return 0LL;
      if ( !(unsigned int)InForegroundQueue((struct tagTHREADINFO *)v10, 0) )
        return 0LL;
      v13 = *(_QWORD *)(*(_QWORD *)(v10 + 400) + 784LL);
      if ( !v13 )
        return 0LL;
      v14 = (*(_DWORD *)(v13 + 100) & 1) == 0;
    }
    else
    {
      v14 = (unsigned int)CheckGrantedAccess(*(_DWORD *)(*(_QWORD *)(CurrentLogicalCursorThread + 400) + 656LL), 2u) == 0;
    }
    if ( v14 )
      return 0LL;
  }
  else
  {
    if ( **(_QWORD **)(CurrentLogicalCursorThread + 400) != gpepCSRSS
      && !(unsigned int)CheckWinstaAttributeAccess(16LL)
      && (!(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v10 + 400))
       || !(unsigned int)IsGpqForegroundAccessibleForPti(v10, 1)) )
    {
      return 0LL;
    }
    CCursorClip::GetClip(gpCursorClip, &v16);
    if ( *(_QWORD *)(v10 + 408) != gpqForeground && !v4 && IsRectEmptyInl(&v16) )
      return 0LL;
  }
  return 1LL;
}
