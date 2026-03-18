/*
 * XREFs of FirmwareDownload @ 0x1C000A3A4
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C000BC00 (IoctlFirmwareProcess.c)
 * Callees:
 *     FillClippedSGL @ 0x1C0006E94 (FillClippedSGL.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall FirmwareDownload(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  char v4; // dl
  __int64 v6; // rbx
  _DWORD *v7; // rsi
  __int64 v8; // r9
  char *v9; // r14
  char *v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // r10
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  unsigned __int64 v21; // rcx
  int v22; // eax

  v2 = 0;
  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  if ( v4 == 40 )
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
    if ( (unsigned int)v11 >= 0x20 )
    {
      v12 = *((_QWORD *)v10 + 2);
      v13 = v12 + 32;
      goto LABEL_16;
    }
LABEL_18:
    v7[5] = 3;
LABEL_19:
    v2 = -1056964602;
    *(_BYTE *)(a2 + 3) = 21;
LABEL_20:
    StorPortExtendedFunction(60LL, a1, 0LL, 1LL);
    return v2;
  }
  if ( (unsigned int)v11 < 0x18 )
    goto LABEL_18;
  v12 = *((_QWORD *)v9 + 2);
  v13 = v12 + 24;
LABEL_16:
  if ( v11 < v13 )
    goto LABEL_18;
  if ( !v12 )
    goto LABEL_18;
  if ( (v9[8] & 3) != 0 )
    goto LABEL_18;
  v15 = *((_QWORD *)v9 + 2);
  if ( (v15 & 3) != 0 )
    goto LABEL_18;
  v16 = a1[36];
  v17 = a1[7];
  v18 = v16;
  if ( v16 > 0x200000 )
    v18 = 0x200000LL;
  if ( v17 && (unsigned int)v18 >= v17 )
    v18 = v17;
  v19 = a1[12];
  if ( v19 && v19 < (unsigned int)v18 )
    v18 = v19;
  if ( v15 > v18 )
  {
    v7[5] = 4;
    goto LABEL_19;
  }
  if ( (a1[13] & 8) == 0 )
  {
    if ( v16 > 0x200000 )
      v16 = 0x200000;
    if ( v17 && v16 >= v17 )
      v16 = a1[7];
    if ( v19 && v19 < v16 )
      v16 = a1[12];
    StorPortExtendedFunction(0LL, a1, 24 * (((v16 - 1) >> 12) + 2) + 16, 1701672526LL);
    v2 = -1056964605;
    v7[5] = 1;
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_20;
  }
  v20 = v8 + 24;
  if ( v10 )
    v20 = v8 + 32;
  *(_DWORD *)(v6 + 4208) = v20;
  *(_BYTE *)(v6 + 4245) |= 3u;
  SrbAssignQueueId((__int64)a1, a2);
  v21 = *((_QWORD *)v9 + 1);
  v22 = (*((_QWORD *)v9 + 2) >> 2) - 1;
  *(_BYTE *)(v6 + 4096) = 17;
  *(_DWORD *)(v6 + 4136) = v22;
  *(_DWORD *)(v6 + 4140) = v21 >> 2;
  *(_QWORD *)(v6 + 4216) = NVMeFirmwareDownloadCompletion;
  return v2;
}
