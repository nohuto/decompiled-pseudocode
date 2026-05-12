/*
 * XREFs of RaidLogMiniportCompletion @ 0x1C0005ED0
 * Callers:
 *     StorPortNotification @ 0x1C0005A70 (StorPortNotification.c)
 *     RaidAdapterRequestComplete @ 0x1C002CF98 (RaidAdapterRequestComplete.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 */

__int64 __fastcall RaidLogMiniportCompletion(_QWORD *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rax
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // r11
  unsigned __int8 v6; // r10
  __int64 v7; // r14
  int v8; // r9d
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // r8
  int v11; // edx
  int v12; // esi
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 result; // rax
  unsigned int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned __int32 v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // esi
  unsigned int v26; // r9d
  unsigned int v27; // edx
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned int v30; // r10d
  unsigned int v31; // edx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned int v34; // r9d
  unsigned int v35; // edx
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v39; // [rsp+50h] [rbp+8h] BYREF
  __int64 v40; // [rsp+58h] [rbp+10h]

  v1 = 0LL;
  v40 = 0LL;
  v3 = a1[21];
  v4 = 0;
  v5 = 0;
  v39 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = *(_BYTE *)(v3 + 2);
  v10 = *(_BYTE *)(v3 + 3);
  if ( v9 == 40 )
  {
    v11 = *(_DWORD *)(v3 + 20);
    v7 = v3;
  }
  else
  {
    v11 = v9;
  }
  v12 = v10;
  switch ( v11 )
  {
    case 0:
      if ( v9 == 40 )
      {
        SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v7, 0, 0, (unsigned int)&v39, 0LL, 0LL);
        if ( SrbScsiData )
          v4 = *SrbScsiData;
        v13 = ((unsigned __int64)v4 << 16) | (unsigned int)(v12 << 8);
        v14 = v39;
        goto LABEL_7;
      }
      v13 = *(unsigned __int8 *)(v3 + 4) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 72) << 16);
LABEL_6:
      v14 = (unsigned int)(v12 << 8);
LABEL_7:
      v15 = v14 | v13;
      break;
    case 23:
      if ( v9 == 40 )
      {
        v34 = *(_DWORD *)(v7 + 56);
        v35 = 0;
        if ( v34 )
        {
          while ( 1 )
          {
            v36 = *(unsigned int *)(v7 + 4LL * v35 + 120);
            if ( (unsigned int)v36 >= 0x80 )
            {
              v37 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v36 <= (unsigned int)v37 && *(_DWORD *)(v36 + v7) == 96 && v36 + 24 <= v37 )
                break;
            }
            if ( ++v35 >= v34 )
              goto LABEL_55;
          }
          v6 = *(_BYTE *)(v36 + v7 + 8);
        }
LABEL_55:
        v13 = (v10 | 0x170000u) << 8;
        v14 = (unsigned __int64)v6 << 16;
        goto LABEL_7;
      }
      v13 = (unsigned __int64)*(unsigned __int8 *)(v3 + 4) << 16;
      v12 = v10 | 0x170000;
      goto LABEL_6;
    case 36:
      if ( v9 == 40 )
      {
        v30 = *(_DWORD *)(v7 + 56);
        v31 = 0;
        if ( v30 )
        {
          while ( 1 )
          {
            v32 = *(unsigned int *)(v7 + 4LL * v31 + 120);
            if ( (unsigned int)v32 >= 0x80 )
            {
              v33 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v32 <= (unsigned int)v33 && *(_DWORD *)(v32 + v7) == 97 && v32 + 24 <= v33 )
                break;
            }
            if ( ++v31 >= v30 )
              goto LABEL_47;
          }
          v8 = *(_DWORD *)(v32 + v7 + 12);
        }
LABEL_47:
        v25 = (v8 << 16) | ((v10 | 0x240000) << 8);
      }
      else
      {
        v25 = ((v10 | 0x240000) << 8) | (*(_DWORD *)(v3 + 8) << 16);
      }
      v15 = v25;
      break;
    case 37:
      if ( v9 == 40 )
      {
        v26 = *(_DWORD *)(v7 + 56);
        v27 = 0;
        if ( v26 )
        {
          while ( 1 )
          {
            v28 = *(unsigned int *)(v7 + 4LL * v27 + 120);
            if ( (unsigned int)v28 >= 0x80 )
            {
              v29 = *(unsigned int *)(v7 + 16);
              if ( (unsigned int)v28 <= (unsigned int)v29 && *(_DWORD *)(v28 + v7) == 98 && v28 + 24 <= v29 )
                break;
            }
            if ( ++v27 >= v26 )
              goto LABEL_39;
          }
          v5 = *(_BYTE *)(v28 + v7 + 8);
        }
LABEL_39:
        v13 = (v10 | 0x250000u) << 8;
        v14 = (unsigned __int64)v5 << 16;
        goto LABEL_7;
      }
      v13 = (unsigned __int64)*(unsigned __int8 *)(v3 + 4) << 16;
      v12 = v10 | 0x250000;
      goto LABEL_6;
    default:
      v15 = (v10 | (unsigned int)(v11 << 16)) << 8;
      break;
  }
  result = a1[28];
  if ( result )
  {
    v17 = *(_DWORD *)(result + 88);
    v18 = ((unsigned __int64)(unsigned __int8)v17 << 8) | BYTE1(v17);
    result = HIWORD(v17);
    v1 = (unsigned __int8)result | (v18 << 8);
  }
  v19 = a1[27];
  v20 = a1[21];
  v21 = a1[20];
  if ( v19 && *(_DWORD *)(v19 + 5060) && *(_QWORD *)(v19 + 5064) )
  {
    v22 = _InterlockedIncrement((volatile signed __int32 *)(v19 + 5056));
    if ( *(_DWORD *)(v19 + 5060) == 256 )
      v23 = (unsigned __int8)v22;
    else
      v23 = v22 % *(_DWORD *)(v19 + 5060);
    result = v40;
    v24 = *(_QWORD *)(v19 + 5064) + 48 * v23;
    *(_DWORD *)v24 = 1;
    if ( !result )
      result = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v24 + 40) = result;
    *(_QWORD *)(v24 + 8) = v21;
    *(_QWORD *)(v24 + 16) = v1;
    *(_QWORD *)(v24 + 24) = v20;
    *(_QWORD *)(v24 + 32) = v15;
  }
  return result;
}
