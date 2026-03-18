/*
 * XREFs of FirmwareActivate @ 0x1C000B59C
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C000C78C (IoctlFirmwareProcess.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 */

__int64 __fastcall FirmwareActivate(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  char v4; // dl
  __int64 v6; // rdi
  __int64 v7; // r8
  _DWORD *v8; // r9
  char *v9; // rsi
  char v10; // cl
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // ecx

  v3 = 0;
  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  v7 = *(_QWORD *)(a1 + 1112);
  if ( v4 == 40 )
    v8 = *(_DWORD **)(a2 + 64);
  else
    v8 = *(_DWORD **)(a2 + 24);
  v9 = (char *)v8 + (unsigned int)v8[11];
  if ( v8[12] >= 0xCu
    && (v10 = v9[8]) != 0
    && (unsigned __int8)v10 <= (unsigned __int8)((*(_BYTE *)(v7 + 260) >> 1) & 7) )
  {
    v11 = v8[10];
    *(_BYTE *)(v6 + 4253) = *(_BYTE *)(v6 + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, a2);
    v12 = *(_DWORD *)(v6 + 4136) ^ (*(_DWORD *)(v6 + 4136) ^ (unsigned __int8)v9[8]) & 7;
    *(_BYTE *)(v6 + 4096) = 16;
    *(_DWORD *)(v6 + 4136) = v12;
    if ( v11 >= 0 )
      v13 = v12 & 0xFFFFFFE7 | 8;
    else
      v13 = v12 & 0xFFFFFFE7 | 0x10;
    *(_DWORD *)(v6 + 4136) = v13;
    *(_QWORD *)(v6 + 4224) = NVMeFirmwareActivateCompletion;
  }
  else
  {
    v8[5] = 3;
    *(_BYTE *)(a2 + 3) = 21;
    StorPortExtendedFunction(60LL, a1, 0LL, 1LL);
    return (unsigned int)-1056964602;
  }
  return v3;
}
