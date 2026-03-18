/*
 * XREFs of DpiLdaPowerDownAllAdaptersInChain @ 0x1C01E8044
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0101690 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiFdoSetAdapterPowerState @ 0x1C0100CC8 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerDownAllAdaptersInChain(__int64 a1, __int64 a2)
{
  int v4; // esi
  bool v5; // r12
  _DWORD *v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // r8d
  __int64 v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r14
  int v18; // r15d
  int v19; // ebx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  unsigned int v26; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v6 = *(_DWORD **)(a2 + 184);
  v7 = *(_QWORD *)(a1 + 64);
  v8 = v6[8];
  v9 = (int)v6[6];
  v10 = v6[2];
  v26 = v8;
  if ( *(_BYTE *)(v7 + 508) == 1 )
  {
    v5 = *(_DWORD *)(v7 + 236) == 2;
  }
  else
  {
    v11 = *(_QWORD *)(v7 + 2592);
    if ( !v11 )
    {
      v4 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v7 + 24),
             (POWER_STATE)v9,
             (unsigned __int16)v10 >> 12,
             HIWORD(v10) & 0xF,
             v8);
      if ( v4 < 0 )
      {
        v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v15 + 24) = v9;
        WdLogEvent5_WdWarning(v15);
      }
      return (unsigned int)v4;
    }
    v7 = *(_QWORD *)(v11 + 64);
  }
  v16 = 0LL;
  if ( *(_DWORD *)(v7 + 2600) )
  {
    v17 = (unsigned __int16)v10 >> 12;
    v18 = HIWORD(v10) & 0xF;
    v19 = (unsigned __int16)v10 >> 12;
    while ( 1 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 2592) + 8 * v16) + 64LL);
      v4 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v20 + 24),
             *(POWER_STATE *)(v20 + 4 * v17 + 1176),
             v19,
             v18,
             v8);
      if ( v4 < 0 || *(_DWORD *)(v20 + 236) != 2 && v5 )
        break;
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *(_DWORD *)(v7 + 2600) )
        return (unsigned int)v4;
      v8 = v26;
    }
    v4 = -1071774666;
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21, v23);
    v24[3] = 275LL;
    v24[4] = 21LL;
    v24[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  return (unsigned int)v4;
}
