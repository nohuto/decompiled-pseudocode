/*
 * XREFs of bLoadFontFile @ 0x1C0228AE4
 * Callers:
 *     ttfdSemLoadFontFile @ 0x1C0226A70 (ttfdSemLoadFontFile.c)
 * Callees:
 *     EngFntCacheLookUp @ 0x1C0041230 (EngFntCacheLookUp.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     bLoadTTF @ 0x1C022910C (bLoadTTF.c)
 *     ttfdUnloadFontFile @ 0x1C022B1B4 (ttfdUnloadFontFile.c)
 *     ttfdUnloadFontFileTTC @ 0x1C022B218 (ttfdUnloadFontFileTTC.c)
 *     vFontFileCache @ 0x1C022C6F4 (vFontFileCache.c)
 *     bComputeGlyphAttrBits @ 0x1C0233618 (bComputeGlyphAttrBits.c)
 */

__int64 __fastcall bLoadFontFile(__int64 a1, __int64 a2, unsigned int a3, __int16 a4, ULONG FastCheckSum, PVOID *a6)
{
  int v8; // r14d
  _DWORD *v9; // r13
  int v10; // eax
  _DWORD *v11; // rax
  __int64 result; // rax
  unsigned int v13; // r14d
  unsigned int v14; // r14d
  char *v15; // rdi
  unsigned int v16; // r12d
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  char *v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // rcx
  int v26; // eax
  PVOID *v27; // rdi
  __int64 v28; // r14
  char *v29; // rax
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // r14d
  unsigned int *v34; // r12
  PVOID v35; // rax
  unsigned int v36; // r14d
  __int64 v37; // r15
  void *v38; // rcx
  void *v39; // rcx
  int v40; // [rsp+20h] [rbp-88h]
  int v41; // [rsp+40h] [rbp-68h]
  int v42; // [rsp+44h] [rbp-64h]
  ULONG v43; // [rsp+4Ch] [rbp-5Ch] BYREF
  unsigned int v44; // [rsp+50h] [rbp-58h]
  unsigned int v45; // [rsp+54h] [rbp-54h]
  int v46; // [rsp+58h] [rbp-50h]
  _DWORD *v47; // [rsp+60h] [rbp-48h]
  char *v48; // [rsp+68h] [rbp-40h]

  v8 = 0;
  v42 = 0;
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v41 = 0;
  if ( FastCheckSum )
  {
    v11 = EngFntCacheLookUp(FastCheckSum, &v43);
    v9 = v11;
    if ( v11 )
    {
      if ( *v11 != 1416914532 )
        return 0LL;
      v8 = v11[1];
      v42 = v8;
      v10 = 1;
      v41 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( !v10 )
  {
    if ( !a2 || a3 < 0x1C )
      return 0LL;
    if ( _byteswap_ulong(*(_DWORD *)a2) != 1953784678 || _byteswap_ulong(*(_DWORD *)(a2 + 4)) < 0x10000 )
    {
      v13 = 0;
LABEL_43:
      v29 = (char *)EngAllocMem(1u, 0x48u, 0x64667454u);
      v15 = v29;
      *a6 = v29;
      v48 = v29;
      if ( !v29 )
        return 0LL;
      *((_DWORD *)v29 + 11) = 1;
      *((_DWORD *)v29 + 10) = 0;
      if ( v41 )
        v30 = (char *)v9 + (unsigned int)v9[4];
      else
        v30 = 0LL;
      if ( (unsigned int)bLoadTTF(a1, a2, a3, 0LL, a4, v15 + 48, v30, FastCheckSum) )
      {
        v31 = *((_QWORD *)v15 + 6);
        *(_QWORD *)v31 = v15;
        *((_DWORD *)v15 + 2) = 1;
        *((_DWORD *)v15 + 3) = (*(_DWORD *)(v31 + 284) == 2) + 1;
        *(_QWORD *)v15 = 0LL;
        *((_QWORD *)v15 + 4) = 0LL;
        if ( *(_DWORD *)(v31 + 284) == 2 )
        {
          *((_QWORD *)v15 + 8) = v31;
          *((_DWORD *)v15 + 15) = 2;
          *((_DWORD *)v15 + 14) = 0;
        }
        goto LABEL_50;
      }
LABEL_69:
      EngFreeMem(*a6);
      *a6 = 0LL;
      return 0LL;
    }
    v8 = 1;
    v42 = 1;
    v10 = v41;
  }
  if ( !v8 )
  {
    v13 = v42;
    goto LABEL_43;
  }
  if ( v10 )
    v14 = v9[2];
  else
    v14 = *(unsigned __int8 *)(a2 + 11) | ((*(unsigned __int8 *)(a2 + 10) | ((*(unsigned __int8 *)(a2 + 9) | (*(unsigned __int8 *)(a2 + 8) << 8)) << 8)) << 8);
  if ( !v14 || a2 && (v14 >= 0x7FFFFFE || v14 > (a3 - 12) >> 2) )
    return 0LL;
  v15 = (char *)EngAllocMem(1u, 32 * v14 + 40, 0x64667454u);
  *a6 = v15;
  v48 = v15;
  if ( !v15 )
    return 0LL;
  v16 = 0;
  v17 = 0;
  v45 = 0;
  v18 = v9 + 4;
  v47 = v9 + 4;
  while ( 1 )
  {
    if ( v41 )
    {
      v19 = (char *)v9 + *v18;
      v20 = *((_DWORD *)v19 + 41);
    }
    else
    {
      v19 = 0LL;
      v21 = 4 * v17 + 12;
      v20 = *(unsigned __int8 *)((unsigned int)v21 + a2 + 3) | ((*(unsigned __int8 *)((unsigned int)v21 + a2 + 2) | ((*(unsigned __int8 *)(v21 + a2 + 1) | (*(unsigned __int8 *)(v21 + a2) << 8)) << 8)) << 8);
    }
    v44 = v20;
    v22 = 16LL * v16;
    *(_DWORD *)&v15[v22 + 44] = 1;
    *(_DWORD *)&v15[v22 + 40] = v20;
    LOWORD(v40) = a4;
    if ( !(unsigned int)bLoadTTF(a1, a2, a3, v20, v40, &v15[v22 + 48], v19, FastCheckSum) )
      break;
    v23 = *(_QWORD *)&v15[16 * v16 + 48];
    *(_QWORD *)v23 = v15;
    v24 = 2;
    if ( *(_DWORD *)(v23 + 284) == 2 )
    {
      *(_QWORD *)&v15[16 * v16 + 64] = v23;
      v25 = 2LL * (v16 + 1);
      *(_DWORD *)&v15[8 * v25 + 44] = 2;
      *(_DWORD *)&v15[8 * v25 + 40] = v44;
    }
    else
    {
      v24 = 1;
    }
    v16 += v24;
    v17 = v45 + 1;
    v45 = v17;
    v18 = ++v47;
    if ( v17 >= v14 )
    {
      v26 = 1;
      goto LABEL_34;
    }
  }
  v26 = 0;
LABEL_34:
  if ( !v26 )
  {
    if ( v16 )
    {
      v27 = (PVOID *)(v15 + 48);
      v28 = v16;
      do
      {
        if ( *((_DWORD *)v27 - 1) == 1 )
          ttfdUnloadFontFile(*v27);
        v27 += 2;
        --v28;
      }
      while ( v28 );
    }
    goto LABEL_69;
  }
  *((_DWORD *)v15 + 2) = v14;
  *((_DWORD *)v15 + 3) = v16;
  *(_QWORD *)v15 = 0LL;
  *((_QWORD *)v15 + 4) = 0LL;
  v13 = v42;
LABEL_50:
  if ( v41 )
  {
    v32 = (unsigned int)v9[3];
    if ( (_DWORD)v32 )
    {
      v33 = 1;
      v34 = (_DWORD *)((char *)v9 + v32);
      v35 = EngAllocMem(0, *(_DWORD *)((char *)v9 + v32), 0x64667454u);
      *((_QWORD *)v15 + 4) = v35;
      if ( v35 )
      {
        memmove(v35, v34, *v34);
      }
      else
      {
        v33 = 0;
        v46 = 0;
      }
      if ( !v33 )
        goto LABEL_53;
    }
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 300LL) & 0x100) != 0 && !(unsigned int)bComputeGlyphAttrBits(v15) )
    {
LABEL_53:
      ttfdUnloadFontFileTTC(*a6);
      *a6 = 0LL;
      return 0LL;
    }
    if ( FastCheckSum )
      vFontFileCache(v15, FastCheckSum, v13);
  }
  v36 = 0;
  for ( result = 1LL; v36 < *((_DWORD *)v15 + 3); result = 1LL )
  {
    v37 = *(_QWORD *)&v15[16 * v36 + 48];
    if ( *(_DWORD *)&v15[16 * v36 + 44] == 1 )
    {
      v38 = *(void **)(v37 + 88);
      if ( v38 )
      {
        EngFreeMem(v38);
        *(_QWORD *)(v37 + 88) = 0LL;
      }
      v39 = *(void **)(v37 + 96);
      if ( v39 )
      {
        EngFreeMem(v39);
        *(_QWORD *)(v37 + 96) = 0LL;
      }
    }
    ++v36;
  }
  return result;
}
