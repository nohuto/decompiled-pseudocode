/*
 * XREFs of WheapCreateRecordFromGenericErrorData @ 0x140289C88
 * Callers:
 *     WheapDefaultErrSrcCreateRecord @ 0x140289E80 (WheapDefaultErrSrcCreateRecord.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     WheaInitializeRecordHeader @ 0x140289AA0 (WheaInitializeRecordHeader.c)
 *     WheapAddSectionFromGenericErrorData @ 0x140289B74 (WheapAddSectionFromGenericErrorData.c)
 *     WheapSqmDwordCommon @ 0x14028ACBC (WheapSqmDwordCommon.c)
 */

__int64 __fastcall WheapCreateRecordFromGenericErrorData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *v5; // rdi
  unsigned int v7; // edx
  unsigned int v8; // ebx
  int v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  bool v16; // cc
  int v17; // eax
  char v18; // cl
  int v19; // r12d
  __int64 v20; // r9
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // eax
  bool v24; // cf
  unsigned int v25; // ebp
  __int64 v26; // rcx
  unsigned int v27; // eax

  v5 = (_DWORD *)(a2 + *(unsigned int *)(a2 + 64));
  v7 = *(_DWORD *)(a2 + 68);
  v8 = 20;
  if ( v7 < 0x14 || (unsigned int)(v5[3] + 20) < 0x14 )
    goto LABEL_2;
  v12 = v5[3] + 20;
  v13 = v5[1];
  if ( v13 && (v14 = v5[2]) != 0 )
  {
    if ( v12 > v13 )
      goto LABEL_2;
    v15 = v13 + v14;
    if ( v15 < v13 )
      goto LABEL_2;
    v16 = v15 <= v7;
  }
  else
  {
    v16 = v12 <= v7;
  }
  if ( !v16 || a4 < 0x80 )
  {
LABEL_2:
    v11 = -1073741811;
    goto LABEL_28;
  }
  memset((void *)a3, 0, a4);
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  *(_DWORD *)(a3 + 104) ^= (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  v17 = *(_DWORD *)(a3 + 104);
  v18 = v17 ^ (*(_DWORD *)(a2 + 12) >> 1);
  *(_DWORD *)(a3 + 20) = a4;
  *(_DWORD *)(a3 + 104) = v17 ^ v18 & 4;
  v19 = (*v5 >> 4) & 0x3FF;
  if ( v19 )
  {
    while ( v8 + 64 >= v8 && v8 + 64 <= v12 )
    {
      v20 = (__int64)v5 + v8;
      v21 = -1;
      v22 = *(_DWORD *)(v20 + 24);
      if ( *(_WORD *)(v20 + 20) == 768 )
      {
        v23 = v22 + 72;
        v24 = v23 < 0x48;
      }
      else
      {
        v23 = v22 + 64;
        v24 = v23 < 0x40;
      }
      if ( !v24 )
        v21 = v23;
      if ( v24 )
        break;
      if ( v21 + v8 < v8 )
        break;
      v25 = v21 + v8;
      if ( v21 + v8 > v12 )
        break;
      v11 = WheapAddSectionFromGenericErrorData(a1, a3, a4, v20, v21, 1);
      if ( v11 < 0 )
        goto LABEL_28;
      v8 = v25;
      if ( !--v19 )
        goto LABEL_25;
    }
    goto LABEL_2;
  }
LABEL_25:
  v26 = (unsigned int)v5[1];
  if ( !(_DWORD)v26 )
    return 0;
  if ( (v27 = v5[2]) == 0 )
    return 0;
  v11 = WheapAddSectionFromGenericErrorData(a1, a3, a4, (__int64)v5 + v26, v27, 0);
  if ( v11 >= 0 )
    return 0;
LABEL_28:
  WheapSqmDwordCommon(6LL, &WHEA_SQM_EVENT_INCREMENTDWORD, 7203LL);
  return (unsigned int)v11;
}
