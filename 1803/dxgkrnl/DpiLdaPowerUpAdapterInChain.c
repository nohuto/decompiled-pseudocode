/*
 * XREFs of DpiLdaPowerUpAdapterInChain @ 0x1C020980C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiFdoSetAdapterPowerState @ 0x1C01F8B44 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerUpAdapterInChain(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r8d

  v2 = *(_DWORD **)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = (int)v2[6];
  v6 = v2[2];
  v7 = v2[8];
  if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 3 )
  {
    v3 = DpiFdoSetAdapterPowerState(
           *(PDEVICE_OBJECT *)(v4 + 24),
           (POWER_STATE)v5,
           (unsigned __int16)v6 >> 12,
           HIWORD(v6) & 0xF,
           v2[8]);
    if ( v3 < 0 )
      goto LABEL_14;
    v9 = *(_QWORD *)(v4 + 2592);
    if ( !v9 )
    {
      v10 = WdLogNewEntry5_WdWarning(a1, a2, v8);
      *(_QWORD *)(v10 + 24) = 0LL;
LABEL_15:
      WdLogEvent5_WdWarning(v10);
      return (unsigned int)v3;
    }
    v4 = *(_QWORD *)(v9 + 64);
  }
  if ( *(_BYTE *)(v4 + 496) != 1 )
  {
    v12 = *(_DWORD *)(v4 + 2600);
    a2 = 1LL;
    if ( v12 > 1 )
    {
      do
      {
        a1 = *(_QWORD *)(*(_QWORD *)(v4 + 2592) + 8LL * (unsigned int)a2);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 284LL) != 1 )
          goto LABEL_9;
        a2 = (unsigned int)(a2 + 1);
      }
      while ( (unsigned int)a2 < v12 );
    }
    v3 = DpiFdoSetAdapterPowerState(
           *(PDEVICE_OBJECT *)(v4 + 24),
           (POWER_STATE)v5,
           (unsigned __int16)v6 >> 12,
           HIWORD(v6) & 0xF,
           v7);
    if ( v3 >= 0 )
      return (unsigned int)v3;
LABEL_14:
    v10 = WdLogNewEntry5_WdWarning(a1, a2, v8);
    *(_QWORD *)(v10 + 24) = v5;
    goto LABEL_15;
  }
LABEL_9:
  v11 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v11 + 24) = 0LL;
  WdLogEvent5_WdEvent(v11);
  return (unsigned int)v3;
}
