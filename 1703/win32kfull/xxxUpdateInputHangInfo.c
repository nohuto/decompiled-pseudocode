/*
 * XREFs of xxxUpdateInputHangInfo @ 0x1C00526B0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     ?xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z @ 0x1C00C85A8 (-xxxDesktopThreadWaiter@@YAKKPEAVLegacyInputDispatcher@@@Z.c)
 * Callees:
 *     IsWindowGhosted @ 0x1C005CE98 (IsWindowGhosted.c)
 *     xxxHandleHealthyThread @ 0x1C0131FD0 (xxxHandleHealthyThread.c)
 *     xxxHandleHealthyWindow @ 0x1C013208C (xxxHandleHealthyWindow.c)
 */

__int64 __fastcall xxxUpdateInputHangInfo(__int64 a1, int a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // r8
  int v5; // esi
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r9d

  v3 = 0;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a2 )
  {
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v4 )
      v5 = -1;
  }
  else
  {
    v5 = 0;
  }
  if ( !a1 )
  {
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1040LL) = v5;
    v3 = 1;
    if ( *(int *)(gptiCurrent + 440LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    goto LABEL_7;
  }
  v7 = *(__int64 **)(gptiCurrent + 1024LL);
  if ( v7 )
  {
    v8 = gdwHungAppTimeout;
    while ( v7[1] != a1 )
    {
      v10 = *((_DWORD *)v7 + 4);
      if ( v10 )
      {
        if ( (unsigned int)(v4 - v10) > gdwHungAppTimeout )
          break;
      }
      v7 = (__int64 *)*v7;
      if ( !v7 )
        goto LABEL_16;
    }
    v7[1] = a1;
    *((_DWORD *)v7 + 4) = v5;
    goto LABEL_13;
  }
LABEL_16:
  v9 = Win32AllocPoolZInit(48LL, 1952936789LL);
  if ( v9 )
  {
    *(_QWORD *)v9 = *(_QWORD *)(gptiCurrent + 1024LL);
    *(_QWORD *)(v9 + 8) = a1;
    *(_DWORD *)(v9 + 16) = v5;
    *(_QWORD *)(gptiCurrent + 1024LL) = v9;
LABEL_13:
    v3 = 1;
  }
  if ( (unsigned int)IsWindowGhosted(a1, v8) )
    xxxHandleHealthyWindow(a1);
LABEL_7:
  *(_DWORD *)(gptiCurrent + 1096LL) &= ~0x80000000;
  return v3;
}
