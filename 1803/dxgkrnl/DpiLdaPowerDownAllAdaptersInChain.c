/*
 * XREFs of DpiLdaPowerDownAllAdaptersInChain @ 0x1C0209694
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiFdoSetAdapterPowerState @ 0x1C01F8B44 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerDownAllAdaptersInChain(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // esi
  __int64 v4; // rdi
  bool v5; // r14
  unsigned int v6; // r8d
  __int64 v7; // rbp
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r15
  int v16; // r12d
  int v17; // ebx
  __int64 v18; // r13
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v22; // [rsp+60h] [rbp+8h]

  v2 = *(_DWORD **)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = v2[8];
  v7 = (int)v2[6];
  v8 = v2[2];
  v22 = v6;
  if ( *(_BYTE *)(v4 + 508) == 1 )
  {
    v5 = *(_DWORD *)(v4 + 236) == 2;
  }
  else
  {
    v9 = *(_QWORD *)(v4 + 2592);
    if ( !v9 )
    {
      v3 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v4 + 24),
             (POWER_STATE)v7,
             (unsigned __int16)v8 >> 12,
             HIWORD(v8) & 0xF,
             v6);
      if ( v3 < 0 )
      {
        v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
        *(_QWORD *)(v13 + 24) = v7;
        WdLogEvent5_WdWarning(v13);
      }
      return (unsigned int)v3;
    }
    v4 = *(_QWORD *)(v9 + 64);
  }
  v14 = 0LL;
  if ( *(_DWORD *)(v4 + 2600) )
  {
    v15 = (unsigned __int16)v8 >> 12;
    v16 = HIWORD(v8) & 0xF;
    v17 = (unsigned __int16)v8 >> 12;
    while ( 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2592) + 8 * v14) + 64LL);
      v3 = DpiFdoSetAdapterPowerState(
             *(PDEVICE_OBJECT *)(v18 + 24),
             *(POWER_STATE *)(v18 + 4 * v15 + 1176),
             v17,
             v16,
             v6);
      if ( v3 < 0 || *(_DWORD *)(v18 + 236) != 2 && v5 )
        break;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(v4 + 2600) )
        return (unsigned int)v3;
      v6 = v22;
    }
    v3 = -1071774666;
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19);
    v20[3] = 275LL;
    v20[4] = 21LL;
    v20[5] = -1071774666LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  return (unsigned int)v3;
}
