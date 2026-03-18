/*
 * XREFs of IopReplaceSymlinkPath @ 0x14071D76C
 * Callers:
 *     IopSymlinkApplyToOpenedName @ 0x14071DA8C (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlRemoveDotsFromPath @ 0x1405DCDE0 (FsRtlRemoveDotsFromPath.c)
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
  unsigned int v7; // r15d
  unsigned __int16 v9; // bx
  unsigned __int16 v11; // r13
  WCHAR *v12; // r14
  wchar_t *v13; // rdi
  unsigned int v14; // esi
  NTSTATUS result; // eax
  wchar_t *v16; // rcx
  const void *v17; // rdx
  WCHAR *v18; // rdi
  __int16 v19; // r15
  _WORD *v20; // rdx
  __int64 v21; // rax
  wchar_t *v22; // rcx
  __int16 *v23; // rax
  unsigned __int16 v24; // r8
  unsigned __int16 v25; // dx
  __int16 v26; // r14
  __int16 v27; // r9
  __int64 v28; // r11
  wchar_t v29; // bx
  wchar_t v30; // r8
  __int64 v31; // rax
  _WORD *Src; // [rsp+20h] [rbp-48h]
  unsigned __int16 v33; // [rsp+70h] [rbp+8h]
  USHORT NewLength; // [rsp+78h] [rbp+10h] BYREF
  int v35; // [rsp+88h] [rbp+20h]

  v7 = a5;
  v9 = a4[5];
  v11 = a4[3];
  v12 = (WCHAR *)&a1[a5];
  v33 = v9;
  v13 = (wchar_t *)&a1[a2];
  NewLength = 0;
  LOWORD(v14) = 0;
  if ( a2 < a5 )
    return -1073741192;
  Src = (_WORD *)((char *)a4 + (unsigned __int16)a4[4] + 20);
  if ( *Src != 92 )
  {
    v16 = (wchar_t *)&a1[a2];
    v17 = *(const void **)(a3 + 96);
    NewLength = *(_WORD *)(a3 + 88) - v11;
    v14 = NewLength;
    memmove(v16, v17, NewLength);
    v18 = &v13[(unsigned __int64)v14 >> 1];
    if ( v18 != v12 )
    {
      do
      {
        if ( *v18 == 92 )
          break;
        LOWORD(v14) = v14 - 2;
        *v18-- = 0;
        NewLength = v14;
      }
      while ( v18 != v12 );
      if ( v18 < v12 )
        return -1073741192;
    }
    v13 = v18 + 1;
    goto LABEL_9;
  }
  if ( wcsnicmp(a1, L"\\Device\\Mup", 0xBuLL) )
  {
LABEL_9:
    v19 = a6;
    goto LABEL_10;
  }
  v23 = *(__int16 **)(a3 + 96);
  v24 = *(_WORD *)(a3 + 88);
  v35 = 1;
  v25 = 0;
  v26 = *v23;
  v27 = (*v23 != 59) + 3;
  if ( (v24 & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)(a3 + 96);
      v29 = *(_WORD *)(v28 + 2LL * v25);
      if ( v29 == 92 )
      {
        --v27;
        if ( v26 != 59
          && v27 == 2
          && (unsigned __int16)(v35 + v25) < (unsigned __int16)(v24 >> 1)
          && *(_WORD *)(v28 + 2LL * ((unsigned int)v25 + 1)) != 59 )
        {
          v27 = 0;
        }
        if ( !v27 )
          break;
      }
      *v13 = v29;
      ++v25;
      v24 = *(_WORD *)(a3 + 88);
      ++v13;
      if ( v25 >= (unsigned __int16)(v24 >> 1) )
        goto LABEL_36;
    }
  }
  else
  {
LABEL_36:
    if ( v27 )
      return -1073741192;
  }
  if ( v25 < (unsigned __int16)(v24 >> 1) )
  {
    v30 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v25);
    do
    {
      *v13 = v30;
      ++v25;
      ++v13;
      v30 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v25);
    }
    while ( v30 != 92 && v25 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) );
    v7 = a5;
  }
  v9 = v33;
  v31 = v7 + v25;
  v19 = 2 * v25 + a6;
  v12 = (WCHAR *)&a1[v31];
LABEL_10:
  if ( v9 )
  {
    memmove(v13, Src, v9);
    LOWORD(v14) = v33 + v14;
    NewLength = v14;
    v13 += (unsigned __int64)v9 >> 1;
  }
  if ( v11 )
  {
    v20 = (_WORD *)(*(_QWORD *)(a3 + 96) + *(unsigned __int16 *)(a3 + 88) - v11);
    if ( *(v13 - 1) == 92 && *v20 == 92 )
    {
      *v13-- = 0;
      LOWORD(v14) = v14 - 2;
    }
    memmove(v13, v20, v11);
    NewLength = v11 + v14;
    v13 += (unsigned __int64)v11 >> 1;
  }
  *v13 = 0;
  v21 = -1LL;
  do
    ++v21;
  while ( v12[v21] );
  result = FsRtlRemoveDotsFromPath(v12, 2 * v21, &NewLength);
  if ( result >= 0 )
  {
    v22 = *(wchar_t **)(a3 + 96);
    *(_WORD *)(a3 + 88) = v19 + NewLength;
    *(_WORD *)(a3 + 90) = a7;
    if ( a1 != v22 )
    {
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      *(_QWORD *)(a3 + 96) = a1;
    }
    return 0;
  }
  return result;
}
