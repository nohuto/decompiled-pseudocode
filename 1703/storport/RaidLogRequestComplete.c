/*
 * XREFs of RaidLogRequestComplete @ 0x1C003C114
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000AB10 (RaUnitAsyncError.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C870 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003D940 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000D264 (DbgLogRequest.c)
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 */

void __fastcall RaidLogRequestComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // di
  unsigned __int8 v5; // r8
  __int64 v8; // rsi
  unsigned __int8 v9; // r14
  int v10; // r9d
  unsigned __int8 v11; // r10
  char v12; // r11
  int v13; // edx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned int j; // edx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r10d
  unsigned int k; // edx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // r9d
  unsigned int i; // edx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v33; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v5 = *(_BYTE *)(a3 + 2);
  v33 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( v5 == 40 )
  {
    v13 = *(_DWORD *)(a3 + 20);
    v8 = a3;
  }
  else
  {
    v13 = v5;
  }
  if ( !v13 )
  {
    if ( v5 == 40 )
    {
      SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v8, 0LL, 0LL, &v33, 0LL, 0LL);
      if ( SrbScsiData )
        v3 = *SrbScsiData;
      v14 = *(unsigned __int8 *)(v8 + 3) | ((unsigned __int64)v3 << 8);
      v15 = v33;
    }
    else
    {
      v14 = *(unsigned __int8 *)(a3 + 3) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 72) << 8);
      v15 = *(unsigned __int8 *)(a3 + 4);
    }
    goto LABEL_51;
  }
  if ( v13 == 23 )
  {
    if ( v5 == 40 )
    {
      v28 = *(_DWORD *)(v8 + 56);
      for ( i = 0; i < v28; ++i )
      {
        v30 = *(unsigned int *)(v8 + 4LL * i + 120);
        if ( (unsigned int)v30 >= 0x80 )
        {
          v31 = *(unsigned int *)(v8 + 16);
          if ( (unsigned int)v30 <= (unsigned int)v31 )
          {
            if ( *(_DWORD *)(v30 + v8) == 96 && v30 + 24 <= v31 )
            {
              v11 = *(_BYTE *)((unsigned int)v30 + v8 + 8);
              v12 = 1;
            }
            if ( v12 )
              break;
          }
        }
      }
      v20 = v11 | 0x1700LL;
      goto LABEL_19;
    }
    v20 = *(unsigned __int8 *)(a3 + 4) | 0x1700LL;
LABEL_21:
    v21 = *(unsigned __int8 *)(a3 + 3);
    goto LABEL_22;
  }
  if ( v13 != 36 )
  {
    if ( v13 != 37 )
    {
      v14 = *(unsigned __int8 *)(a3 + 3);
      v15 = (unsigned int)(v13 << 24);
LABEL_51:
      v22 = v15 | (v14 << 8);
      goto LABEL_52;
    }
    if ( v5 == 40 )
    {
      v16 = *(_DWORD *)(v8 + 56);
      for ( j = 0; j < v16; ++j )
      {
        v18 = *(unsigned int *)(v8 + 4LL * j + 120);
        if ( (unsigned int)v18 >= 0x80 )
        {
          v19 = *(unsigned int *)(v8 + 16);
          if ( (unsigned int)v18 <= (unsigned int)v19 )
          {
            if ( *(_DWORD *)(v18 + v8) == 98 && v18 + 24 <= v19 )
            {
              v9 = *(_BYTE *)((unsigned int)v18 + v8 + 8);
              v12 = 1;
            }
            if ( v12 )
              break;
          }
        }
      }
      v20 = v9 | 0x2500LL;
LABEL_19:
      v21 = *(unsigned __int8 *)(v8 + 3);
LABEL_22:
      v22 = (v21 | (v20 << 8)) << 8;
      goto LABEL_52;
    }
    v20 = *(unsigned __int8 *)(a3 + 4) | 0x2500LL;
    goto LABEL_21;
  }
  if ( v5 == 40 )
  {
    v23 = *(_DWORD *)(v8 + 56);
    for ( k = 0; k < v23; ++k )
    {
      v25 = *(unsigned int *)(v8 + 4LL * k + 120);
      if ( (unsigned int)v25 >= 0x80 )
      {
        v26 = *(unsigned int *)(v8 + 16);
        if ( (unsigned int)v25 <= (unsigned int)v26 )
        {
          if ( *(_DWORD *)(v25 + v8) == 97 && v25 + 24 <= v26 )
          {
            v10 = *(_DWORD *)((unsigned int)v25 + v8 + 12);
            v12 = 1;
          }
          if ( v12 )
            break;
        }
      }
    }
    v27 = *(unsigned __int8 *)(v8 + 3);
  }
  else
  {
    v10 = *(_DWORD *)(a3 + 8);
    v27 = *(unsigned __int8 *)(a3 + 3);
  }
  v22 = (v27 | ((v10 | 0x2400u) << 8)) << 8;
LABEL_52:
  DbgLogRequest(a1, 2, a2, *(int *)(a2 + 48), a3, v22, 0LL);
}
