/*
 * XREFs of FirmwareDownload @ 0x1C000AA74
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C000C370 (IoctlFirmwareProcess.c)
 * Callees:
 *     FillClippedSGL @ 0x1C00072D0 (FillClippedSGL.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall FirmwareDownload(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // r12
  char v5; // dl
  __int64 v6; // rbx
  _DWORD *v7; // rbp
  __int64 v8; // r11
  char *v9; // r15
  char *v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  unsigned __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned __int8 v20; // cl
  unsigned int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 v26; // [rsp+128h] [rbp+20h]

  v2 = 0;
  v4 = a1;
  v5 = *(_BYTE *)(a2 + 2);
  if ( v5 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  if ( v5 == 40 )
    v7 = *(_DWORD **)(a2 + 64);
  else
    v7 = *(_DWORD **)(a2 + 24);
  v8 = (unsigned int)v7[11];
  v9 = (char *)v7 + v8;
  if ( *(_DWORD *)((char *)v7 + v8) == 2 && *((_DWORD *)v9 + 1) >= 0x20u )
    v10 = (char *)v7 + v8;
  else
    v10 = 0LL;
  v11 = (unsigned int)v7[12];
  if ( v10 )
  {
    if ( (unsigned int)v11 < 0x20 )
      goto LABEL_18;
    v12 = *((_QWORD *)v10 + 2);
    v13 = v12 + 32;
  }
  else
  {
    if ( (unsigned int)v11 < 0x18 )
      goto LABEL_18;
    v12 = *((_QWORD *)v9 + 2);
    v13 = v12 + 24;
  }
  if ( v11 < v13 )
    goto LABEL_18;
  if ( !v12 )
    goto LABEL_18;
  if ( (v9[8] & 3) != 0 )
    goto LABEL_18;
  v15 = *((_QWORD *)v9 + 2);
  v26 = v15;
  if ( (v15 & 3) != 0 )
    goto LABEL_18;
  v16 = *(_DWORD *)(v4 + 144);
  v17 = *(_DWORD *)(v4 + 28);
  v18 = v16;
  if ( v16 > 0x200000 )
    v18 = 0x200000LL;
  if ( v17 && (unsigned int)v18 >= v17 )
    v18 = v17;
  v19 = *(_DWORD *)(v4 + 48);
  if ( v19 && v19 < (unsigned int)v18 )
    v18 = v19;
  if ( v15 > v18 )
  {
    v7[5] = 4;
    goto LABEL_19;
  }
  v20 = *(_BYTE *)(*(_QWORD *)(v4 + 1080) + 319LL);
  if ( v20 == 0xFF )
  {
    v21 = 4;
  }
  else
  {
    v21 = v20 << 12;
    if ( !v21 )
      goto LABEL_40;
  }
  if ( v26 % v21 )
  {
LABEL_18:
    v7[5] = 3;
LABEL_19:
    *(_BYTE *)(a2 + 3) = 21;
    v2 = -1056964602;
LABEL_20:
    StorPortExtendedFunction(60LL, v4, 0LL, 1LL);
    return v2;
  }
LABEL_40:
  if ( (*(_DWORD *)(v4 + 52) & 8) == 0 )
  {
    if ( v16 > 0x200000 )
      v16 = 0x200000;
    if ( v17 && v16 >= v17 )
      v16 = *(_DWORD *)(v4 + 28);
    if ( v19 && v19 < v16 )
      v16 = *(_DWORD *)(v4 + 48);
    StorPortExtendedFunction(0LL, a1, 24 * (((v16 - 1) >> 12) + 2) + 16, 1701672526LL);
    v4 = a1;
    v2 = -1056964605;
    v7[5] = 1;
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_20;
  }
  v22 = v8 + 24;
  if ( v10 )
    v22 = v8 + 32;
  *(_DWORD *)(v6 + 4208) = v22;
  *(_BYTE *)(v6 + 4245) |= 3u;
  SrbAssignQueueId(v4, a2);
  v23 = *((_QWORD *)v9 + 1);
  v24 = (*((_QWORD *)v9 + 2) >> 2) - 1;
  *(_BYTE *)(v6 + 4096) = 17;
  *(_DWORD *)(v6 + 4136) = v24;
  *(_DWORD *)(v6 + 4140) = v23 >> 2;
  *(_QWORD *)(v6 + 4216) = NVMeFirmwareDownloadCompletion;
  return v2;
}
