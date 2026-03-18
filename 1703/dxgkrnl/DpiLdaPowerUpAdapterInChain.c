/*
 * XREFs of DpiLdaPowerUpAdapterInChain @ 0x1C01CDDC0
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0102F30 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiFdoSetAdapterPowerState @ 0x1C0102954 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerUpAdapterInChain(__int64 a1, __int64 a2)
{
  int v4; // ebp
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned int v18; // edx

  v4 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v6 = *(_DWORD **)(a2 + 184);
  v7 = *(_QWORD *)(a1 + 64);
  v8 = (int)v6[6];
  v9 = v6[2];
  v10 = v6[8];
  if ( v7 && *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 3 )
  {
    v4 = DpiFdoSetAdapterPowerState(
           *(PDEVICE_OBJECT *)(v7 + 24),
           (POWER_STATE)v8,
           (unsigned __int16)v9 >> 12,
           HIWORD(v9) & 0xF,
           v6[8]);
    if ( v4 < 0 )
      goto LABEL_14;
    v14 = *(_QWORD *)(v7 + 2592);
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdWarning(v5, v11, v12, v13);
      *(_QWORD *)(v15 + 24) = 0LL;
LABEL_15:
      WdLogEvent5_WdWarning(v15);
      return (unsigned int)v4;
    }
    v7 = *(_QWORD *)(v14 + 64);
  }
  if ( *(_BYTE *)(v7 + 496) != 1 )
  {
    v17 = *(_DWORD *)(v7 + 2600);
    v18 = 1;
    if ( v17 > 1 )
    {
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v7 + 2592) + 8LL * v18);
        if ( *(_DWORD *)(*(_QWORD *)(v5 + 64) + 284LL) != 1 )
          goto LABEL_9;
      }
      while ( ++v18 < v17 );
    }
    v4 = DpiFdoSetAdapterPowerState(
           *(PDEVICE_OBJECT *)(v7 + 24),
           (POWER_STATE)v8,
           (unsigned __int16)v9 >> 12,
           HIWORD(v9) & 0xF,
           v10);
    if ( v4 >= 0 )
      return (unsigned int)v4;
LABEL_14:
    v15 = WdLogNewEntry5_WdWarning(v5, v11, v12, v13);
    *(_QWORD *)(v15 + 24) = v8;
    goto LABEL_15;
  }
LABEL_9:
  v16 = WdLogNewEntry5_WdEvent(v5);
  *(_QWORD *)(v16 + 24) = 0LL;
  WdLogEvent5_WdEvent(v16);
  return (unsigned int)v4;
}
