/*
 * XREFs of FirmwareDownload @ 0x1C000AE68
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C000C78C (IoctlFirmwareProcess.c)
 * Callees:
 *     FillClippedSGL @ 0x1C00075C4 (FillClippedSGL.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall FirmwareDownload(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  char v5; // dl
  __int64 v6; // rdi
  _DWORD *v7; // r14
  __int64 v8; // r12
  char *v9; // r13
  char *v10; // r11
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  char v14; // bl
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // r10d
  unsigned __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rax
  unsigned __int8 v22; // cl
  unsigned int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // [rsp+D0h] [rbp-48h]

  v2 = 0;
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
  v16 = *((_QWORD *)v9 + 2);
  v27 = v16;
  if ( (v16 & 3) != 0 )
    goto LABEL_18;
  v17 = *(_DWORD *)(a1 + 152);
  v18 = *(_DWORD *)(a1 + 28);
  v19 = v17;
  if ( v17 > 0x200000 )
    v19 = 0x200000LL;
  if ( v18 && (unsigned int)v19 >= v18 )
    v19 = v18;
  v20 = *(_DWORD *)(a1 + 48);
  if ( v20 && v20 < (unsigned int)v19 )
    v19 = v20;
  if ( v16 > v19 )
  {
    v7[5] = 4;
    goto LABEL_19;
  }
  v21 = *(_QWORD *)(a1 + 1112);
  v14 = 4;
  v22 = *(_BYTE *)(v21 + 319);
  if ( v22 == 0xFF )
  {
    v23 = 4;
  }
  else
  {
    v23 = v22 << 12;
    if ( !v23 )
      goto LABEL_40;
  }
  if ( v27 % v23 )
  {
LABEL_18:
    v7[5] = 3;
LABEL_19:
    v2 = -1056964602;
    v14 = 21;
LABEL_20:
    *(_BYTE *)(a2 + 3) = v14;
    StorPortExtendedFunction(60LL, a1, 0LL, 1LL);
    return v2;
  }
LABEL_40:
  if ( (*(_DWORD *)(a1 + 52) & 8) == 0 )
  {
    if ( v17 > 0x200000 )
      v17 = 0x200000;
    if ( v18 && v17 >= v18 )
      v17 = v18;
    if ( v20 && v20 < v17 )
      v17 = v20;
    StorPortExtendedFunction(0LL, a1, 24 * (((v17 - 1) >> 12) + 2) + 16, 1701672526LL);
    v7[5] = 1;
    v2 = -1056964605;
    goto LABEL_20;
  }
  v24 = v8 + 24;
  if ( v10 )
    v24 = v8 + 32;
  *(_DWORD *)(v6 + 4216) = v24;
  *(_BYTE *)(v6 + 4253) |= 3u;
  SrbAssignQueueId(a1, a2);
  v25 = *((_QWORD *)v9 + 1);
  v26 = (*((_QWORD *)v9 + 2) >> 2) - 1;
  *(_BYTE *)(v6 + 4096) = 17;
  *(_DWORD *)(v6 + 4136) = v26;
  *(_DWORD *)(v6 + 4140) = v25 >> 2;
  *(_QWORD *)(v6 + 4224) = NVMeFirmwareDownloadCompletion;
  return v2;
}
