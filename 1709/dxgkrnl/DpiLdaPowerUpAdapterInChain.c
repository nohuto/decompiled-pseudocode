/*
 * XREFs of DpiLdaPowerUpAdapterInChain @ 0x1C01E81D0
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0101690 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiFdoSetAdapterPowerState @ 0x1C0100CC8 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerUpAdapterInChain(__int64 a1, __int64 a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v9 = *(_DWORD **)(a2 + 184);
  v10 = *(_QWORD *)(a1 + 64);
  v11 = (int)v9[6];
  v12 = v9[2];
  v13 = v9[8];
  if ( v10 && *(_DWORD *)(v10 + 16) == 1953656900 && *(_DWORD *)(v10 + 20) == 3 )
  {
    v4 = DpiFdoSetAdapterPowerState(
           *(PDEVICE_OBJECT *)(v10 + 24),
           (POWER_STATE)v11,
           (unsigned __int16)v12 >> 12,
           HIWORD(v12) & 0xF,
           v9[8]);
    if ( v4 < 0 )
      goto LABEL_15;
    v14 = *(_QWORD *)(v10 + 2592);
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v15 + 24) = 0LL;
LABEL_16:
      WdLogEvent5_WdWarning(v15);
      return (unsigned int)v4;
    }
    v10 = *(_QWORD *)(v14 + 64);
  }
  if ( *(_BYTE *)(v10 + 496) != 1 )
  {
    v7 = *(unsigned int *)(v10 + 2600);
    v5 = 1LL;
    if ( (unsigned int)v7 > 1 )
    {
      v8 = *(_QWORD *)(v10 + 2592);
      do
      {
        v6 = *(_QWORD *)(v8 + 8LL * (unsigned int)v5);
        if ( *(_DWORD *)(*(_QWORD *)(v6 + 64) + 284LL) != 1 )
          goto LABEL_9;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < (unsigned int)v7 );
    }
    v4 = DpiFdoSetAdapterPowerState(
           *(PDEVICE_OBJECT *)(v10 + 24),
           (POWER_STATE)v11,
           (unsigned __int16)v12 >> 12,
           HIWORD(v12) & 0xF,
           v13);
    if ( v4 >= 0 )
      return (unsigned int)v4;
LABEL_15:
    v15 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v15 + 24) = v11;
    goto LABEL_16;
  }
LABEL_9:
  v16 = WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
  *(_QWORD *)(v16 + 24) = 0LL;
  WdLogEvent5_WdEvent(v16);
  return (unsigned int)v4;
}
