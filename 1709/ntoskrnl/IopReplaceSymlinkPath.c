/*
 * XREFs of IopReplaceSymlinkPath @ 0x1406B8A48
 * Callers:
 *     IopSymlinkApplyToOpenedName @ 0x1406B8D58 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     FsRtlRemoveDotsFromPath @ 0x1405BC3B0 (FsRtlRemoveDotsFromPath.c)
 */

NTSTATUS __fastcall IopReplaceSymlinkPath(
        const wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        __int16 a6,
        __int16 a7)
{
  unsigned int v7; // ebx
  unsigned __int16 v8; // r13
  USHORT v11; // si
  WCHAR *v12; // r14
  wchar_t *v13; // rdi
  NTSTATUS result; // eax
  wchar_t *v15; // rcx
  const void *v16; // rdx
  WCHAR *v17; // rdi
  __int16 v18; // r15
  _WORD *v19; // rdx
  __int64 v20; // rax
  wchar_t *v21; // rcx
  unsigned __int16 v22; // dx
  __int16 v23; // r14
  __int16 v24; // ax
  __int16 v25; // r8
  __int64 v26; // r10
  wchar_t v27; // r11
  wchar_t v28; // r8
  _WORD *Src; // [rsp+20h] [rbp-48h]
  unsigned __int16 v30; // [rsp+70h] [rbp+8h]
  USHORT NewLength; // [rsp+78h] [rbp+10h] BYREF
  int v32; // [rsp+88h] [rbp+20h]

  v7 = a5;
  v8 = a4[3];
  NewLength = 0;
  v11 = 0;
  v12 = (WCHAR *)&a1[a5];
  v13 = (wchar_t *)&a1[a2];
  v30 = a4[5];
  if ( a2 < a5 )
    return -1073741192;
  Src = (_WORD *)((char *)a4 + (unsigned __int16)a4[4] + 20);
  if ( *Src != 92 )
  {
    v15 = (wchar_t *)&a1[a2];
    v16 = *(const void **)(a3 + 96);
    NewLength = *(_WORD *)(a3 + 88) - v8;
    v11 = NewLength;
    memmove(v15, v16, NewLength);
    v17 = &v13[(unsigned __int64)v11 >> 1];
    if ( v17 != v12 )
    {
      do
      {
        if ( *v17 == 92 )
          break;
        v11 -= 2;
        *v17-- = 0;
        NewLength = v11;
      }
      while ( v17 != v12 );
      if ( v17 < v12 )
        return -1073741192;
    }
    v13 = v17 + 1;
    goto LABEL_9;
  }
  if ( wcsnicmp(a1, L"\\Device\\Mup", 0xBuLL) )
  {
LABEL_9:
    v18 = a6;
    goto LABEL_10;
  }
  v22 = 0;
  v23 = **(_WORD **)(a3 + 96);
  v24 = *(_WORD *)(a3 + 88) & 0xFFFE;
  v25 = (v23 != 59) + 3;
  v32 = 1;
  if ( v24 )
  {
    while ( 1 )
    {
      v26 = *(_QWORD *)(a3 + 96);
      v27 = *(_WORD *)(v26 + 2LL * v22);
      if ( v27 == 92 )
      {
        --v25;
        if ( v23 == 59 || v25 != 2 )
          goto LABEL_34;
        if ( (unsigned __int16)(v32 + v22) < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1)
          && *(_WORD *)(v26 + 2LL * ((unsigned int)v22 + 1)) != 59 )
        {
          break;
        }
      }
LABEL_35:
      *v13 = v27;
      ++v22;
      ++v13;
      if ( v22 >= (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) )
        goto LABEL_36;
    }
    v25 = 0;
LABEL_34:
    if ( !v25 )
      goto LABEL_37;
    goto LABEL_35;
  }
LABEL_36:
  if ( v25 )
    return -1073741192;
LABEL_37:
  if ( v22 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) )
  {
    v28 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v22);
    do
    {
      *v13 = v28;
      ++v22;
      ++v13;
      v28 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v22);
    }
    while ( v28 != 92 && v22 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) );
    v7 = a5;
  }
  v18 = 2 * v22 + a6;
  v12 = (WCHAR *)&a1[v7 + v22];
LABEL_10:
  if ( v30 )
  {
    memmove(v13, Src, v30);
    v11 += v30;
    NewLength = v11;
    v13 += (unsigned __int64)v30 >> 1;
  }
  if ( v8 )
  {
    v19 = (_WORD *)(*(_QWORD *)(a3 + 96) + *(unsigned __int16 *)(a3 + 88) - v8);
    if ( *(v13 - 1) == 92 && *v19 == 92 )
    {
      *v13-- = 0;
      v11 -= 2;
    }
    memmove(v13, v19, v8);
    NewLength = v8 + v11;
    v13 += (unsigned __int64)v8 >> 1;
  }
  *v13 = 0;
  v20 = -1LL;
  do
    ++v20;
  while ( v12[v20] );
  result = FsRtlRemoveDotsFromPath(v12, 2 * v20, &NewLength);
  if ( result >= 0 )
  {
    v21 = *(wchar_t **)(a3 + 96);
    *(_WORD *)(a3 + 88) = v18 + NewLength;
    *(_WORD *)(a3 + 90) = a7;
    if ( a1 != v21 )
    {
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      *(_QWORD *)(a3 + 96) = a1;
    }
    return 0;
  }
  return result;
}
