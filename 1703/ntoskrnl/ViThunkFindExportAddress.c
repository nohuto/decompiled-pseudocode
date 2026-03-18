/*
 * XREFs of ViThunkFindExportAddress @ 0x1408154E8
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x14081544C (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 */

unsigned __int64 __fastcall ViThunkFindExportAddress(__int64 a1, char *a2, int *a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  int v6; // esi
  int v7; // ebx
  unsigned __int64 v8; // rbp
  NTSTATUS v9; // eax
  _DWORD *v10; // r8
  int v11; // r9d
  int v12; // ecx
  char *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r11
  char v16; // r10
  int v17; // eax
  unsigned int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // r11
  int v21; // edi
  __int64 v22; // rax
  unsigned __int16 v23; // cx
  unsigned int v24; // edx
  unsigned __int64 v25; // r10
  int v27; // [rsp+70h] [rbp+8h] BYREF
  char *v28; // [rsp+78h] [rbp+10h]
  __int64 v29; // [rsp+80h] [rbp+18h] BYREF

  v28 = a2;
  v3 = (_QWORD *)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 16);
  *a3 = 0;
  v6 = 0;
  if ( v4 == (_QWORD *)(a1 + 16) )
    return 0LL;
  v7 = 1;
  while ( 1 )
  {
    v8 = v4[6];
    v9 = RtlpImageDirectoryEntryToDataEx(v8, 1, 0, &v27, &v29);
    v10 = (_DWORD *)v29;
    if ( v9 < 0 )
      v10 = 0LL;
    v29 = (__int64)v10;
    if ( v10 )
    {
      v11 = 0;
      v12 = v10[6] - 1;
      while ( 1 )
      {
        v13 = v28;
        v14 = (unsigned int)(v12 + v11) >> 1;
        v15 = v8 + *(unsigned int *)(v8 + (unsigned int)v10[8] + 4 * v14) - (_QWORD)v28;
        while ( 1 )
        {
          v16 = *v13;
          if ( *v13 != v13[v15] )
            break;
          ++v13;
          if ( !v16 )
          {
            v17 = 0;
            goto LABEL_11;
          }
        }
        v17 = (unsigned __int8)*v13 < (unsigned __int8)v13[v15] ? -1 : 1;
LABEL_11:
        if ( v17 >= 0 )
        {
          if ( v17 <= 0 )
            goto LABEL_15;
          v11 = v14 + 1;
          goto LABEL_14;
        }
        if ( !(_DWORD)v14 )
          break;
        v12 = v14 - 1;
LABEL_14:
        if ( v12 < (unsigned int)v11 )
          goto LABEL_15;
      }
      v11 = 1;
      v12 = 0;
LABEL_15:
      if ( v12 >= v11 )
      {
        v18 = *(unsigned __int16 *)(v8 + (unsigned int)v10[9] + 2 * v14);
        if ( v18 < v10[5] )
          break;
      }
    }
    if ( ++v6 != 2 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4 != v3 )
        continue;
    }
    return 0LL;
  }
  v19 = (unsigned int)v10[7];
  v20 = v19 + v8;
  v21 = *(_DWORD *)(v19 + v8 + 4LL * (unsigned __int16)v18);
  v22 = v19 + 4LL * (unsigned __int16)v18;
  v23 = 0;
  v24 = v10[5];
  v25 = v8 + *(unsigned int *)(v22 + v8);
  if ( v24 )
  {
    while ( v23 == (_WORD)v18 || *(_DWORD *)(v20 + 4LL * v23) != v21 )
    {
      if ( ++v23 >= v24 )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    v7 = 0;
  }
  *a3 = v7;
  return v25;
}
