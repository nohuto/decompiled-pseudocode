/*
 * XREFs of RaidLogMiniportCompletion @ 0x1C0006790
 * Callers:
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     RaidAdapterRequestComplete @ 0x1C002DF24 (RaidAdapterRequestComplete.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 */

__int64 __fastcall RaidLogMiniportCompletion(_QWORD *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // r10
  unsigned __int8 v6; // r8
  __int64 v7; // r14
  int v8; // r9d
  unsigned __int8 v9; // al
  int v10; // edx
  int v11; // esi
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  __int64 result; // rax
  unsigned int v17; // eax
  int v18; // edi
  __int64 v19; // r8
  __int64 v20; // r11
  unsigned __int32 v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r10
  int v26; // eax
  unsigned int v27; // esi
  int v28; // eax
  unsigned int v29; // r8d
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned int v33; // r8d
  unsigned int v34; // edx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned int v37; // r9d
  unsigned int v38; // edx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v42; // [rsp+50h] [rbp+8h] BYREF
  __int64 v43; // [rsp+58h] [rbp+10h]

  v1 = 0;
  v43 = 0LL;
  v3 = a1[21];
  v4 = 0;
  v5 = 0;
  v42 = 0;
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
          v37 = *(_DWORD *)(v7 + 56);
          v38 = 0;
          if ( v37 )
          {
            while ( 1 )
            {
              v39 = *(unsigned int *)(v7 + 4LL * v38 + 120);
              if ( (unsigned int)v39 >= 0x80 )
              {
                v40 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v39 <= (unsigned int)v40 && *(_DWORD *)(v39 + v7) == 96 && v39 + 24 <= v40 )
                  break;
              }
              if ( ++v38 >= v37 )
                goto LABEL_59;
            }
            v6 = *(_BYTE *)((unsigned int)v39 + v7 + 8);
          }
LABEL_59:
          v28 = v6;
        }
        else
        {
          v28 = *(unsigned __int8 *)(v3 + 4);
        }
        v14 = ((v11 | 0x170000) << 8) | (unsigned int)(v28 << 16);
        break;
      case 36:
        if ( v9 == 40 )
        {
          v33 = *(_DWORD *)(v7 + 56);
          v34 = 0;
          if ( v33 )
          {
            while ( 1 )
            {
              v35 = *(unsigned int *)(v7 + 4LL * v34 + 120);
              if ( (unsigned int)v35 >= 0x80 )
              {
                v36 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v35 <= (unsigned int)v36 && *(_DWORD *)(v35 + v7) == 97 && v35 + 24 <= v36 )
                  break;
              }
              if ( ++v34 >= v33 )
                goto LABEL_51;
            }
            v8 = *(_DWORD *)((unsigned int)v35 + v7 + 12);
          }
LABEL_51:
          v27 = (v8 << 16) | ((v11 | 0x240000) << 8);
        }
        else
        {
          v27 = ((v11 | 0x240000) << 8) | (*(_DWORD *)(v3 + 8) << 16);
        }
        v14 = v27;
        break;
      case 37:
        if ( v9 == 40 )
        {
          v29 = *(_DWORD *)(v7 + 56);
          v30 = 0;
          if ( v29 )
          {
            while ( 1 )
            {
              v31 = *(unsigned int *)(v7 + 4LL * v30 + 120);
              if ( (unsigned int)v31 >= 0x80 )
              {
                v32 = *(unsigned int *)(v7 + 16);
                if ( (unsigned int)v31 <= (unsigned int)v32 && *(_DWORD *)(v31 + v7) == 98 && v31 + 24 <= v32 )
                  break;
              }
              if ( ++v30 >= v29 )
                goto LABEL_43;
            }
            v5 = *(_BYTE *)((unsigned int)v31 + v7 + 8);
          }
LABEL_43:
          v26 = v5;
        }
        else
        {
          v26 = *(unsigned __int8 *)(v3 + 4);
        }
        v14 = ((v11 | 0x250000) << 8) | (unsigned int)(v26 << 16);
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
      SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v7, 0, 0, (unsigned int)&v42, 0LL, 0LL);
      if ( SrbScsiData )
        v4 = *SrbScsiData;
      v12 = (unsigned int)(v11 << 8) | (unsigned __int64)(v4 << 16);
      v13 = v42;
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
    v25 = a1[21];
    if ( *(_BYTE *)(v25 + 2) == 40 )
      v15 = *(_QWORD *)(v7 + 80);
    else
      v15 = *(_QWORD *)(v25 + 48);
  }
  result = a1[28];
  if ( result )
  {
    v17 = *(_DWORD *)(result + 88);
    v18 = ((unsigned __int8)v17 << 8) | BYTE1(v17);
    result = HIWORD(v17);
    v1 = (unsigned __int8)result | (v18 << 8);
  }
  v19 = a1[27];
  v20 = a1[21];
  if ( v19 && *(_DWORD *)(v19 + 5060) && *(_QWORD *)(v19 + 5064) )
  {
    v21 = _InterlockedIncrement((volatile signed __int32 *)(v19 + 5056));
    if ( *(_DWORD *)(v19 + 5060) == 256 )
      v22 = (unsigned __int8)v21;
    else
      v22 = v21 % *(_DWORD *)(v19 + 5060);
    v23 = v43;
    v24 = *(_QWORD *)(v19 + 5064) + 48 * v22;
    *(_DWORD *)v24 = 1;
    if ( !v23 )
      v23 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v24 + 40) = v23;
    result = v1;
    *(_QWORD *)(v24 + 16) = v1;
    *(_QWORD *)(v24 + 8) = v15;
    *(_QWORD *)(v24 + 24) = v20;
    *(_QWORD *)(v24 + 32) = v14;
  }
  return result;
}
