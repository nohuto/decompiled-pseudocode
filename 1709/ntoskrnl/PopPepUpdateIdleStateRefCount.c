/*
 * XREFs of PopPepUpdateIdleStateRefCount @ 0x140123884
 * Callers:
 *     PopPepDeviceDState @ 0x140123504 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140123750 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x140131440 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepInitializeVetoMasks @ 0x140242A58 (PopPepInitializeVetoMasks.c)
 *     PopPepPlatformStateRegistered @ 0x140242E70 (PopPepPlatformStateRegistered.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140243450 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepUnregisterDevice @ 0x1406FEF48 (PopPepUnregisterDevice.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 *     PopFxPlatformStateAvailable @ 0x14023E838 (PopFxPlatformStateAvailable.c)
 */

void __fastcall PopPepUpdateIdleStateRefCount(__int64 a1, int a2, int a3)
{
  char v3; // bp
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // r14
  int v6; // esi
  unsigned int v8; // esi
  bool v9; // zf
  unsigned int v10; // ecx
  __int64 v11; // rdx
  ULONG_PTR v12; // rbx
  int v13; // eax
  signed __int32 v14; // eax
  __int64 v15; // rsi
  ULONG_PTR v16; // rbx
  signed __int32 v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-148h]
  _DWORD v19[3]; // [rsp+24h] [rbp-144h] BYREF
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-138h]

  v3 = 0;
  v4 = 0LL;
  CurrentIrql = 0;
  v6 = a1;
  if ( a3 )
    v6 = a2;
  v8 = (a1 ^ a2) & v6;
  v9 = !_BitScanForward((unsigned int *)&a1, v8);
  v18 = v10;
  if ( v9 )
    return;
  v11 = 2LL;
  do
  {
    v12 = PopPepPlatformState + 384 * a1;
    v8 &= v8 - 1;
    if ( a3 )
    {
      v14 = *(_DWORD *)(v12 + 320);
      if ( v14 <= 0 || v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 320), v14 + 1, v14) )
      {
        BugCheckParameter2[v4] = v12;
        v4 = (unsigned int)(v4 + 1);
      }
    }
    else
    {
      v13 = _InterlockedDecrement((volatile signed __int32 *)(v12 + 320));
      if ( v13 < 0x40000000 )
        PopFxBugCheck(0x668uLL, v12, v13, v8);
      if ( v13 == 0x40000000 )
      {
        if ( !v3 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v3 = 1;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 320), -1, 0x40000000) == 0x40000000 )
        {
          LOBYTE(v11) = 1;
          PopFxPlatformStateAvailable(v18, v11);
          if ( *(_DWORD *)(v12 + 320) != -1 )
            PopFxBugCheck(0x669uLL, v12, *(int *)(v12 + 320), 0LL);
          *(_DWORD *)(v12 + 320) = 0;
          v11 = 2LL;
        }
      }
    }
    v9 = !_BitScanForward((unsigned int *)&a1, v8);
    v18 = a1;
  }
  while ( !v9 );
  if ( (_DWORD)v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    while ( 1 )
    {
      KeYieldProcessorEx(v19);
      v15 = 0LL;
      do
      {
        v16 = BugCheckParameter2[v15];
        v17 = *(_DWORD *)(v16 + 320);
        if ( v17 <= 0 )
        {
          if ( v17 || _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 320), -1, 0) )
          {
LABEL_23:
            v15 = (unsigned int)(v15 + 1);
            continue;
          }
          PopFxPlatformStateAvailable((__int64)(v16 - PopPepPlatformState) / 384, 0LL);
          if ( *(_DWORD *)(v16 + 320) != -1 )
            PopFxBugCheck(0x669uLL, v16, *(int *)(v16 + 320), 0LL);
          *(_DWORD *)(v16 + 320) = 1073741825;
        }
        else if ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 320), v17 + 1, v17) )
        {
          goto LABEL_23;
        }
        v4 = (unsigned int)(v4 - 1);
        BugCheckParameter2[v15] = BugCheckParameter2[v4];
      }
      while ( (unsigned int)v15 < (unsigned int)v4 );
      if ( !(_DWORD)v4 )
      {
LABEL_36:
        __writecr8(CurrentIrql);
        return;
      }
    }
  }
  if ( v3 )
    goto LABEL_36;
}
