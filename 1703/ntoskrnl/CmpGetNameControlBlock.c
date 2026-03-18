/*
 * XREFs of CmpGetNameControlBlock @ 0x140502E40
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockNameHashEntry @ 0x14066A554 (CmpUnlockNameHashEntry.c)
 */

_BYTE *__fastcall CmpGetNameControlBlock(__m128i *a1, unsigned int *a2, char *a3)
{
  __m128i *v4; // r12
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int v7; // ebp
  __int64 v8; // rsi
  WCHAR *v9; // rdi
  __int64 v10; // rsi
  WCHAR v11; // ax
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // r8
  _BYTE *v18; // r13
  unsigned __int8 *v19; // rbp
  unsigned __int16 v20; // si
  unsigned __int16 *v21; // r15
  unsigned __int16 v22; // di
  int v23; // r12d
  int v24; // edx
  char *v25; // rdx
  _BYTE *TransientPoolWithTag; // rax
  _BYTE *v27; // rdi
  WCHAR v28; // cx
  char v29; // al
  int v30; // eax
  unsigned int v32; // esi
  __int64 v33; // rdi
  WCHAR v34; // cx
  WCHAR v35; // ax
  char v36; // bp
  unsigned int v37; // eax
  WCHAR *v38; // r15
  __int64 v39; // r12
  WCHAR v40; // si
  int v41; // r8d
  char v42; // dl
  WCHAR *v43; // rdi
  int v44; // esi
  unsigned int v45; // ebp
  __int64 v46; // r15
  WCHAR v47; // ax
  __int64 v48; // [rsp+20h] [rbp-68h]
  char *v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+30h] [rbp-58h]
  char v52; // [rsp+98h] [rbp+10h]
  unsigned __int16 v53; // [rsp+A0h] [rbp+18h]
  __int64 v54; // [rsp+A8h] [rbp+20h]

  v4 = a1;
  if ( a2 )
    v5 = *a2;
  else
    v5 = CmpHashUnicodeComponent(a1);
  v6 = 0LL;
  if ( a3 )
  {
    v36 = 1;
    v37 = v4->m128i_u16[0] >> 1;
    v38 = (WCHAR *)v4->m128i_i64[1];
    if ( v37 )
    {
      v39 = v37;
      do
      {
        v40 = *v38;
        if ( *v38 >= 0x61u )
        {
          if ( v40 <= 0x7Au )
            v41 = v40 - 32;
          else
            v41 = RtlUpcaseUnicodeChar(v40);
        }
        else
        {
          v41 = v40;
        }
        ++v38;
        v42 = 0;
        if ( v41 == v40 )
          v42 = v36;
        v36 = v42;
        --v39;
      }
      while ( v39 );
      v4 = a1;
    }
    *a3 = v36;
  }
  v7 = v4->m128i_u16[0];
  v52 = 1;
  LOWORD(v8) = (unsigned __int16)v7 >> 1;
  v53 = (unsigned __int16)v7 >> 1;
  if ( v7 >> 1 )
  {
    v9 = (WCHAR *)v4->m128i_i64[1];
    v10 = v7 >> 1;
    do
    {
      v11 = *v9;
      if ( *v9 >= 0x61u )
      {
        if ( v11 > 0x7Au )
          v11 = RtlUpcaseUnicodeChar(v11);
        else
          v11 -= 32;
      }
      if ( v11 > 0xFFu )
      {
        v52 = 0;
        v53 = v7;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    LOWORD(v8) = v53;
  }
  v12 = v5 ^ (v5 >> 9);
  v13 = 101027 * v12;
  v14 = 16LL
      * (((unsigned __int16)(-30045 * v12) ^ (unsigned __int16)((unsigned __int64)(unsigned int)(101027 * v12) >> 9)) & 0x7FF);
  v48 = v14;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)CmpNameCacheTable + v14, 0LL);
  v49 = (char *)CmpNameCacheTable;
  v16 = 16LL * (((unsigned __int16)v13 ^ (unsigned __int16)(v13 >> 9)) & 0x7FF);
  v50 = v16;
  v17 = *(_QWORD *)((char *)CmpNameCacheTable + v16 + 8);
  v54 = v17;
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = (_BYTE *)(v17 - 8);
      if ( v5 == *(_DWORD *)v17 )
      {
        v15 = *((unsigned __int16 *)v18 + 12);
        if ( (_WORD)v8 == (_WORD)v15 )
        {
          if ( (*(_DWORD *)v18 & 1) != 0 )
          {
            v19 = v18 + 26;
            v20 = (unsigned __int16)v4->m128i_i16[0] >> 1;
            v21 = (unsigned __int16 *)v4->m128i_i64[1];
            v22 = v53;
            if ( v20 )
            {
              while ( 1 )
              {
                if ( !v22 )
                {
LABEL_19:
                  v17 = v54;
                  v4 = a1;
                  goto LABEL_20;
                }
                v15 = *v21++;
                v23 = *v19++;
                if ( (_WORD)v15 != (_WORD)v23 )
                {
                  if ( (unsigned __int16)v15 >= 0x61u )
                  {
                    if ( (unsigned __int16)v15 > 0x7Au )
                      v15 = RtlUpcaseUnicodeChar(v15);
                    else
                      LOWORD(v15) = v15 - 32;
                  }
                  v24 = (unsigned __int16)v15 - v23;
                  if ( (unsigned __int16)v15 != v23 )
                    break;
                }
                --v22;
                if ( !--v20 )
                  goto LABEL_19;
              }
              v4 = a1;
              v17 = v54;
            }
            else
            {
LABEL_20:
              v24 = v20 - v22;
            }
            if ( !v24 )
            {
LABEL_22:
              v25 = v49;
              v14 = v48;
              if ( (*(_DWORD *)v18 & 0xFFFFFFFE) == 0xFFFFFFFE )
                v18 = 0LL;
              else
                *(_DWORD *)v18 = *(_DWORD *)v18 & 1 | ((*(_DWORD *)v18 & 0xFFFFFFFE) + 2);
              goto LABEL_41;
            }
          }
          else
          {
            v43 = (WCHAR *)v4->m128i_i64[1];
            v44 = 0;
            v45 = (unsigned __int16)v15 >> 1;
            if ( !v45 )
              goto LABEL_22;
            v46 = v18 - (_BYTE *)v43 + 26;
            while ( 1 )
            {
              v47 = *v43;
              if ( *v43 >= 0x61u )
                v15 = v47 <= 0x7Au ? (unsigned int)v47 - 32 : RtlUpcaseUnicodeChar(v47);
              else
                v15 = v47;
              if ( (_DWORD)v15 != *(WCHAR *)((char *)v43 + v46) )
                break;
              ++v43;
              if ( ++v44 >= v45 )
                goto LABEL_22;
            }
            v17 = v54;
          }
          LOWORD(v8) = v53;
        }
      }
      v17 = *(_QWORD *)(v17 + 8);
      v54 = v17;
      if ( !v17 )
      {
        v14 = v48;
        v16 = v50;
        break;
      }
    }
  }
  v8 = (unsigned __int16)v8;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(v15, (unsigned int)(unsigned __int16)v8 + 26, 0x624E4D43u);
  v18 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, (unsigned int)(unsigned __int16)v8 + 26);
    if ( v52 )
    {
      *(_DWORD *)v18 |= 1u;
      if ( (_WORD)v8 )
      {
        v27 = v18 + 26;
        do
        {
          v28 = *(_WORD *)(v6 + v4->m128i_i64[1]);
          if ( v28 >= 0x61u )
          {
            if ( v28 > 0x7Au )
              v29 = RtlUpcaseUnicodeChar(v28);
            else
              v29 = v28 - 32;
          }
          else
          {
            v29 = *(_WORD *)(v6 + v4->m128i_i64[1]);
          }
          *v27 = v29;
          v6 += 2LL;
          ++v27;
          --v8;
        }
        while ( v8 );
      }
    }
    else
    {
      *(_DWORD *)v18 &= ~1u;
      v32 = (unsigned __int16)v8 >> 1;
      if ( v32 )
      {
        v33 = v32;
        do
        {
          v34 = *(_WORD *)(v6 + v4->m128i_i64[1]);
          if ( v34 < 0x61u )
          {
            v35 = *(_WORD *)(v6 + v4->m128i_i64[1]);
          }
          else if ( v34 <= 0x7Au )
          {
            v35 = v34 - 32;
          }
          else
          {
            v35 = RtlUpcaseUnicodeChar(v34);
          }
          *(_WORD *)&v18[v6 + 26] = v35;
          v6 += 2LL;
          --v33;
        }
        while ( v33 );
      }
    }
    v25 = (char *)CmpNameCacheTable;
    v30 = *(_DWORD *)v18 & 1 | 2;
    *((_DWORD *)v18 + 2) = v5;
    *(_DWORD *)v18 = v30;
    *((_WORD *)v18 + 12) = v53;
    *((_QWORD *)v18 + 2) = *(_QWORD *)&v25[v16 + 8];
    *(_QWORD *)&v25[v16 + 8] = v18 + 8;
LABEL_41:
    ExReleasePushLockEx((ULONG_PTR)&v25[v14], 0LL);
    return v18;
  }
  else
  {
    CmpUnlockNameHashEntry(v5);
    return 0LL;
  }
}
