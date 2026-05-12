/*
 * XREFs of RaidLogMiniportCompletion @ 0x1C0002690
 * Callers:
 *     StorPortNotification @ 0x1C00022F0 (StorPortNotification.c)
 *     RaidAdapterRequestComplete @ 0x1C00275A8 (RaidAdapterRequestComplete.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001737C (GetSrbScsiData.c)
 */

__int64 __fastcall RaidLogMiniportCompletion(_QWORD *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // r11
  unsigned __int8 v6; // r9
  __int64 v7; // r14
  int v8; // r10d
  unsigned __int8 v9; // al
  int v10; // edx
  int v11; // edi
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  __int64 result; // rax
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r11
  unsigned __int32 v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r10
  int v25; // eax
  unsigned int v26; // edi
  unsigned int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned int v31; // r8d
  unsigned int v32; // edx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned int v35; // r8d
  unsigned int v36; // edx
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  int v39; // eax
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v41; // [rsp+50h] [rbp+8h] BYREF
  __int64 v42; // [rsp+58h] [rbp+10h]

  v1 = 0;
  v42 = 0LL;
  v3 = a1[21];
  v4 = 0;
  v5 = 0;
  v41 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = *(_BYTE *)(v3 + 2);
  if ( v9 == 40 )
  {
    v10 = *(_DWORD *)(v3 + 20);
    v7 = v3;
  }
  else
  {
    v10 = v9;
  }
  v11 = *(unsigned __int8 *)(v3 + 3);
  if ( v10 )
  {
    switch ( v10 )
    {
      case 23:
        if ( v9 == 40 )
        {
          v35 = *(_DWORD *)(v7 + 56);
          v36 = 0;
          if ( v35 )
          {
            while ( 1 )
            {
              v37 = *(unsigned int *)(v7 + 4LL * v36 + 120);
              if ( (unsigned int)v37 >= 0x80 )
              {
                v38 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v37 <= (unsigned int)v38 && *(_DWORD *)(v37 + v7) == 96 && v37 + 24 <= v38 )
                  break;
              }
              if ( ++v36 >= v35 )
                goto LABEL_58;
            }
            v6 = *(_BYTE *)((unsigned int)v37 + v7 + 8);
          }
LABEL_58:
          v39 = v6;
        }
        else
        {
          v39 = *(unsigned __int8 *)(v3 + 4);
        }
        v14 = ((v11 | 0x170000) << 8) | (unsigned int)(v39 << 16);
        break;
      case 36:
        if ( v9 == 40 )
        {
          v31 = *(_DWORD *)(v7 + 56);
          v32 = 0;
          if ( v31 )
          {
            while ( 1 )
            {
              v33 = *(unsigned int *)(v7 + 4LL * v32 + 120);
              if ( (unsigned int)v33 >= 0x80 )
              {
                v34 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v33 <= (unsigned int)v34 && *(_DWORD *)(v33 + v7) == 97 && v33 + 24 <= v34 )
                  break;
              }
              if ( ++v32 >= v31 )
                goto LABEL_49;
            }
            v8 = *(_DWORD *)((unsigned int)v33 + v7 + 12);
          }
LABEL_49:
          v26 = (v8 << 16) | ((v11 | 0x240000) << 8);
        }
        else
        {
          v26 = ((v11 | 0x240000) << 8) | (*(_DWORD *)(v3 + 8) << 16);
        }
        v14 = v26;
        break;
      case 37:
        if ( v9 == 40 )
        {
          v27 = *(_DWORD *)(v7 + 56);
          v28 = 0;
          if ( v27 )
          {
            while ( 1 )
            {
              v29 = *(unsigned int *)(v7 + 4LL * v28 + 120);
              if ( (unsigned int)v29 >= 0x80 )
              {
                v30 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v29 <= (unsigned int)v30 && *(_DWORD *)(v29 + v7) == 98 && v29 + 24 <= v30 )
                  break;
              }
              if ( ++v28 >= v27 )
                goto LABEL_41;
            }
            v5 = *(_BYTE *)((unsigned int)v29 + v7 + 8);
          }
LABEL_41:
          v25 = v5;
        }
        else
        {
          v25 = *(unsigned __int8 *)(v3 + 4);
        }
        v14 = ((v11 | 0x250000) << 8) | (unsigned int)(v25 << 16);
        break;
      default:
        v14 = (v11 | (unsigned int)(v10 << 16)) << 8;
        break;
    }
  }
  else
  {
    if ( v9 == 40 )
    {
      SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v7, 0, 0, (unsigned int)&v41, 0LL, 0LL);
      if ( SrbScsiData )
        v4 = *SrbScsiData;
      v12 = (unsigned int)(v11 << 8) | (unsigned __int64)(v4 << 16);
      v13 = v41;
    }
    else
    {
      v12 = *(unsigned __int8 *)(v3 + 4) | (unsigned __int64)(*(unsigned __int8 *)(v3 + 72) << 16);
      v13 = (unsigned int)(v11 << 8);
    }
    v14 = v13 | v12;
  }
  v15 = a1[20];
  if ( !v15 )
  {
    v24 = a1[21];
    if ( *(_BYTE *)(v24 + 2) == 40 )
      v15 = *(_QWORD *)(v7 + 80);
    else
      v15 = *(_QWORD *)(v24 + 48);
  }
  result = a1[28];
  if ( result )
  {
    v17 = *(_DWORD *)(result + 88);
    result = BYTE2(v17);
    v1 = BYTE2(v17) | ((((unsigned __int8)v17 << 8) | BYTE1(v17)) << 8);
  }
  v18 = a1[27];
  v19 = a1[21];
  if ( v18 && *(_DWORD *)(v18 + 5060) && *(_QWORD *)(v18 + 5064) )
  {
    v20 = _InterlockedIncrement((volatile signed __int32 *)(v18 + 5056));
    if ( *(_DWORD *)(v18 + 5060) == 256 )
      v21 = (unsigned __int8)v20;
    else
      v21 = v20 % *(_DWORD *)(v18 + 5060);
    v22 = v42;
    v23 = *(_QWORD *)(v18 + 5064) + 48 * v21;
    *(_DWORD *)v23 = 1;
    if ( !v22 )
      v22 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v23 + 40) = v22;
    result = v1;
    *(_QWORD *)(v23 + 16) = v1;
    *(_QWORD *)(v23 + 8) = v15;
    *(_QWORD *)(v23 + 24) = v19;
    *(_QWORD *)(v23 + 32) = v14;
  }
  return result;
}
