/*
 * XREFs of RaidLogRequestComplete @ 0x1C003DA24
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000B8F8 (RaUnitAsyncError.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003E190 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C003E810 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0004198 (DbgLogRequest.c)
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 */

void __fastcall RaidLogRequestComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  unsigned __int8 v5; // r8
  __int64 v8; // rdi
  unsigned __int8 v9; // r14
  int v10; // r9d
  unsigned __int8 v11; // r10
  char v12; // r11
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned int k; // edx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx
  unsigned int v23; // r10d
  unsigned int j; // edx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // r9d
  unsigned int i; // edx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int v32; // eax
  int v33; // ecx
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v35; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v5 = *(_BYTE *)(a3 + 2);
  v35 = 0;
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
  switch ( v13 )
  {
    case 0:
      if ( v5 == 40 )
      {
        SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v8, 0LL, 0LL, &v35, 0LL, 0LL);
        if ( SrbScsiData )
          v3 = *SrbScsiData;
        v14 = *(unsigned __int8 *)(v8 + 3) | (v3 << 8);
        v15 = v35;
      }
      else
      {
        v14 = *(unsigned __int8 *)(a3 + 3) | (*(unsigned __int8 *)(a3 + 72) << 8);
        v15 = *(unsigned __int8 *)(a3 + 4);
      }
      goto LABEL_50;
    case 23:
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
        v32 = *(unsigned __int8 *)(v8 + 3);
        v33 = v11;
      }
      else
      {
        v33 = *(unsigned __int8 *)(a3 + 4);
        v32 = *(unsigned __int8 *)(a3 + 3);
      }
      v22 = ((v32 | (unsigned int)(v33 << 8)) << 8) | 0x17000000LL;
      break;
    case 36:
      if ( v5 == 40 )
      {
        v23 = *(_DWORD *)(v8 + 56);
        for ( j = 0; j < v23; ++j )
        {
          v25 = *(unsigned int *)(v8 + 4LL * j + 120);
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
        v27 = (v10 << 8) | *(unsigned __int8 *)(v8 + 3);
      }
      else
      {
        v27 = *(unsigned __int8 *)(a3 + 3) | (*(_DWORD *)(a3 + 8) << 8);
      }
      v22 = (unsigned int)(v27 << 8) | 0x24000000LL;
      break;
    case 37:
      if ( v5 == 40 )
      {
        v16 = *(_DWORD *)(v8 + 56);
        for ( k = 0; k < v16; ++k )
        {
          v18 = *(unsigned int *)(v8 + 4LL * k + 120);
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
        v20 = *(unsigned __int8 *)(v8 + 3);
        v21 = v9;
      }
      else
      {
        v21 = *(unsigned __int8 *)(a3 + 4);
        v20 = *(unsigned __int8 *)(a3 + 3);
      }
      v22 = ((v20 | (unsigned int)(v21 << 8)) << 8) | 0x25000000LL;
      break;
    default:
      v14 = *(unsigned __int8 *)(a3 + 3);
      v15 = (unsigned int)(v13 << 24);
LABEL_50:
      v22 = v15 | (unsigned int)(v14 << 8);
      break;
  }
  DbgLogRequest(a1, 2, a2, *(int *)(a2 + 48), a3, v22, 0LL);
}
