/*
 * XREFs of VidSchiControlVSync @ 0x1C0056C4C
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1C00049F0 (VidSchiControlVSyncThread.c)
 *     VidSchIsVSyncEnabled @ 0x1C0056B50 (VidSchIsVSyncEnabled.c)
 *     VidSchControlVSyncAdapter @ 0x1C0056ED0 (VidSchControlVSyncAdapter.c)
 *     VidSchSetMonitorPowerState @ 0x1C007AE10 (VidSchSetMonitorPowerState.c)
 * Callees:
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0004AE8 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 */

__int64 __fastcall VidSchiControlVSync(__int64 a1, __int64 a2, int a3)
{
  char v4; // di
  int v6; // eax
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx

  v4 = a2;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 1984) == ((_BYTE)a2 != 0) )
      return 0;
    if ( (_BYTE)a2 )
    {
      LODWORD(a2) = 0;
      _InterlockedExchange((volatile __int32 *)(a1 + 2052), 1);
      if ( *(_DWORD *)(a1 + 40) )
      {
        do
        {
          v6 = *(_DWORD *)(a1 + 2008);
          if ( _bittest(&v6, a2) )
          {
            if ( *(_BYTE *)(a1 + 2012) )
              _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 3032) + 28072LL), 1);
            *(_QWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 3032) + 28080LL) = 0LL;
          }
          LODWORD(a2) = a2 + 1;
        }
        while ( (unsigned int)a2 < *(_DWORD *)(a1 + 40) );
      }
    }
    v8 = DXGADAPTER::DdiControlInterrupt(*(DXGADAPTER **)(a1 + 16), (enum _DXGK_INTERRUPT_TYPE)a2);
    if ( v8 == -1073741822 )
      v8 = 0;
    if ( v8 < 0 )
      return (unsigned int)v8;
    v10 = bTracingEnabled == 0;
    *(_BYTE *)(a1 + 1984) = v4 != 0;
    if ( !v10 )
    {
      if ( v4 )
      {
        if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
          goto LABEL_13;
        v14 = (const EVENT_DESCRIPTOR *)&EventEnableVSync;
      }
      else
      {
        if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
          goto LABEL_13;
        v14 = (const EVENT_DESCRIPTOR *)&EventDisableVSync;
      }
      McTemplateK0p(v7, v14, v9, *(_QWORD *)(a1 + 16));
    }
LABEL_13:
    if ( *(_BYTE *)(a1 + 1984) )
      *(_BYTE *)(a1 + 2012) = 0;
    if ( v4 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 36), 0x10u);
    else
      _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
    v11 = *(unsigned int *)(a1 + 6184);
    *(_QWORD *)(a1 + 8 * v11 + 6192) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a1 + 4 * v11 + 6224) = a3;
    *(_DWORD *)(a1 + 6184) = ((unsigned __int8)*(_DWORD *)(a1 + 6184) + 1) & 3;
    return (unsigned int)v8;
  }
  v13 = WdLogNewEntry5_WdAssertion(0LL, a2);
  WdLogEvent5_WdAssertion(v13);
  return 0LL;
}
