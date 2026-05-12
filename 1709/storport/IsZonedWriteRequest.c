/*
 * XREFs of IsZonedWriteRequest @ 0x1C002B5D4
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009270 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0031FD8 (RaidZoneWriteGroupListSearchRequest.c)
 * Callees:
 *     PortSrbGetLbaFromCdb @ 0x1C0047664 (PortSrbGetLbaFromCdb.c)
 */

char __fastcall IsZonedWriteRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int8 v6; // r11
  _BYTE *v8; // r10
  char v9; // di
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  int v15; // ecx
  int v16; // ecx
  _BYTE *v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // r9
  char v20; // di
  unsigned int v21; // ebp
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // r11
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbx

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 0;
  if ( !*(_BYTE *)(a1 + 121) )
    return 0;
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v4 != 15 )
    return 0;
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_BYTE *)(v5 + 2);
  if ( v6 == 40 ? *(_DWORD *)(v5 + 20) : v6 )
    return 0;
  if ( v6 != 40 )
  {
    v8 = (_BYTE *)(v5 + 72);
    goto LABEL_32;
  }
  v8 = 0LL;
  v9 = 0;
  if ( !*(_DWORD *)(v5 + 20) )
  {
    v10 = *(_DWORD *)(v5 + 56);
    v11 = 0LL;
    if ( v10 )
    {
      while ( 1 )
      {
        v12 = *(unsigned int *)(v5 + 4 * v11 + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v13 = *(unsigned int *)(v5 + 16);
          if ( (unsigned int)v12 < (unsigned int)v13 )
            break;
        }
LABEL_29:
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v10 )
          goto LABEL_32;
      }
      v14 = (unsigned int)v12;
      v15 = *(_DWORD *)(v12 + v5) - 64;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 && v14 + 40 <= v13 )
          {
            v17 = (_BYTE *)(v14 + v5 + 32);
            if ( !*(_DWORD *)(v14 + v5 + 12) )
              v17 = v8;
            v8 = v17;
            goto LABEL_32;
          }
          goto LABEL_28;
        }
        v18 = v14 + 56;
      }
      else
      {
        v18 = v14 + 40;
      }
      if ( v18 <= v13 )
      {
        v9 = 1;
        if ( !*(_BYTE *)(v14 + v5 + 10) )
          goto LABEL_32;
        v8 = (_BYTE *)(v14 + v5 + 24);
      }
LABEL_28:
      if ( v9 )
        goto LABEL_32;
      goto LABEL_29;
    }
  }
LABEL_32:
  v19 = 0;
  if ( v6 == 40 )
  {
    v20 = 0;
    if ( *(_DWORD *)(v5 + 20) )
    {
      v19 = 0;
    }
    else
    {
      v21 = *(_DWORD *)(v5 + 56);
      v22 = 0LL;
      if ( v21 )
      {
        while ( 1 )
        {
          v23 = *(unsigned int *)(v5 + 4 * v22 + 120);
          if ( (unsigned int)v23 >= 0x80 )
          {
            v24 = *(unsigned int *)(v5 + 16);
            if ( (unsigned int)v23 < (unsigned int)v24 )
              break;
          }
LABEL_47:
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= v21 )
            goto LABEL_51;
        }
        v25 = (unsigned int)v23;
        v26 = *(_DWORD *)(v23 + v5) - 64;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 == 1 && v25 + 40 <= v24 )
              goto LABEL_51;
            goto LABEL_46;
          }
          v28 = v25 + 56;
        }
        else
        {
          v28 = v25 + 40;
        }
        if ( v28 <= v24 )
        {
          v19 = *(_BYTE *)(v25 + v5 + 10);
          v20 = 1;
        }
LABEL_46:
        if ( v20 )
          goto LABEL_51;
        goto LABEL_47;
      }
    }
  }
  else
  {
    v19 = *(_BYTE *)(v5 + 10);
  }
LABEL_51:
  if ( !v8 || ((*v8 - 10) & 0x5F) != 0 || !*(_DWORD *)(a1 + 580) )
    return 0;
  v29 = PortSrbGetLbaFromCdb(v8, v19) / (*(_QWORD *)(a1 + 2696) / (unsigned __int64)*(unsigned int *)(a1 + 580));
  if ( RtlCompareMemory(*(const void **)(a1 + 136), "HGST", 4uLL) == 4 )
  {
    if ( (unsigned int)v29 <= 0x20B )
      return 0;
  }
  else if ( (unsigned int)v29 <= 0x60 )
  {
    return 0;
  }
  return 1;
}
