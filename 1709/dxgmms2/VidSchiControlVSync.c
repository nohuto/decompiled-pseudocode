/*
 * XREFs of VidSchiControlVSync @ 0x1C0071FE0
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1C00104D0 (VidSchiControlVSyncThread.c)
 *     VidSchControlVSyncAdapter @ 0x1C0071330 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncEnabled @ 0x1C0071EE0 (VidSchIsVSyncEnabled.c)
 *     VidSchSetMonitorPowerState @ 0x1C0074A30 (VidSchSetMonitorPowerState.c)
 * Callees:
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0002154 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 */

__int64 __fastcall VidSchiControlVSync(__int64 a1, __int64 a2, int a3)
{
  char v4; // di
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // rdx
  int v12; // eax
  __int64 v13; // rax
  const EVENT_DESCRIPTOR *v14; // rdx

  v4 = a2;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 1968) == ((_BYTE)a2 != 0) )
      return 0;
    if ( (_BYTE)a2 )
    {
      LODWORD(a2) = 0;
      _InterlockedExchange((volatile __int32 *)(a1 + 2036), 1);
      if ( *(_DWORD *)(a1 + 40) )
      {
        do
        {
          v12 = *(_DWORD *)(a1 + 1992);
          if ( _bittest(&v12, a2) )
          {
            if ( *(_BYTE *)(a1 + 1996) )
              _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 3008) + 23592LL), 1);
            *(_QWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)a2 + 3008) + 23600LL) = 0LL;
          }
          LODWORD(a2) = a2 + 1;
        }
        while ( (unsigned int)a2 < *(_DWORD *)(a1 + 40) );
      }
    }
    v7 = DXGADAPTER::DdiControlInterrupt(*(DXGADAPTER **)(a1 + 16), (enum _DXGK_INTERRUPT_TYPE)a2);
    if ( v7 == -1073741822 )
      v7 = 0;
    if ( v7 < 0 )
      return (unsigned int)v7;
    v9 = bTracingEnabled == 0;
    *(_BYTE *)(a1 + 1968) = v4 != 0;
    if ( !v9 )
    {
      if ( v4 )
      {
        if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
          goto LABEL_10;
        v14 = (const EVENT_DESCRIPTOR *)&EventEnableVSync;
      }
      else
      {
        if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
          goto LABEL_10;
        v14 = (const EVENT_DESCRIPTOR *)&EventDisableVSync;
      }
      McTemplateK0p(v6, v14, v8, *(_QWORD *)(a1 + 16));
    }
LABEL_10:
    if ( *(_BYTE *)(a1 + 1968) )
      *(_BYTE *)(a1 + 1996) = 0;
    if ( v4 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 36), 0x10u);
    else
      _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
    v10 = *(unsigned int *)(a1 + 5992);
    *(_QWORD *)(a1 + 8 * v10 + 6000) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a1 + 4 * v10 + 6032) = a3;
    *(_DWORD *)(a1 + 5992) = ((unsigned __int8)*(_DWORD *)(a1 + 5992) + 1) & 3;
    return (unsigned int)v7;
  }
  v13 = WdLogNewEntry5_WdAssertion(0LL, a2);
  WdLogEvent5_WdAssertion(v13);
  return 0LL;
}
