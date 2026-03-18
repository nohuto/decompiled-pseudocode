/*
 * XREFs of CmpGetNameControlBlock @ 0x140480E00
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockNameHashEntry @ 0x140694BD4 (CmpUnlockNameHashEntry.c)
 */

char *__fastcall CmpGetNameControlBlock(__m128i *a1, unsigned int *a2, char *a3)
{
  __m128i *v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // r15
  unsigned int v7; // r12d
  char v8; // si
  unsigned __int16 v9; // bp
  WCHAR *v10; // rdi
  __int64 v11; // rbp
  WCHAR v12; // ax
  char v13; // r14
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r8
  char *v17; // r13
  unsigned __int8 *v18; // r12
  unsigned __int16 *v19; // r14
  unsigned __int16 v20; // di
  unsigned __int16 v21; // bp
  int v22; // r13d
  int v23; // edx
  char *TransientPoolWithTag; // rax
  _BYTE *v25; // rdi
  __int64 i; // rsi
  WCHAR v27; // cx
  char v28; // al
  int v29; // eax
  char *v30; // rcx
  unsigned int v32; // ebp
  __int64 v33; // rdi
  WCHAR v34; // ax
  char v35; // bp
  WCHAR *v36; // r14
  unsigned int v37; // eax
  __int64 v38; // r12
  WCHAR v39; // si
  int v40; // r8d
  char v41; // dl
  WCHAR *v42; // rdi
  int v43; // ebp
  unsigned int v44; // r14d
  __int64 v45; // r12
  WCHAR v46; // ax
  __int64 v47; // [rsp+28h] [rbp-50h]
  unsigned __int16 v49; // [rsp+88h] [rbp+10h]
  __int64 v50; // [rsp+90h] [rbp+18h]
  char *v51; // [rsp+98h] [rbp+20h]

  v4 = a1;
  if ( a2 )
    v5 = *a2;
  else
    v5 = CmpHashUnicodeComponent(a1);
  v6 = 0LL;
  if ( a3 )
  {
    v35 = 1;
    v36 = (WCHAR *)v4->m128i_i64[1];
    v37 = a1->m128i_u16[0] >> 1;
    if ( v37 )
    {
      v38 = v37;
      do
      {
        v39 = *v36;
        if ( *v36 >= 0x61u )
        {
          if ( v39 <= 0x7Au )
            v40 = v39 - 32;
          else
            v40 = RtlUpcaseUnicodeChar(v39);
        }
        else
        {
          v40 = v39;
        }
        ++v36;
        v41 = 0;
        if ( v40 == v39 )
          v41 = v35;
        v35 = v41;
        --v38;
      }
      while ( v38 );
    }
    v4 = a1;
    *a3 = v35;
  }
  v7 = v4->m128i_u16[0];
  v8 = 1;
  v9 = (unsigned __int16)v4->m128i_i16[0] >> 1;
  v49 = v9;
  if ( v7 >> 1 )
  {
    v10 = (WCHAR *)v4->m128i_i64[1];
    v11 = v7 >> 1;
    do
    {
      v12 = *v10;
      v13 = v8;
      if ( *v10 >= 0x61u )
      {
        if ( v12 > 0x7Au )
          v12 = RtlUpcaseUnicodeChar(v12);
        else
          v12 -= 32;
      }
      if ( v12 > 0xFFu )
        v49 = v7;
      ++v10;
      v8 = 0;
      if ( v12 <= 0xFFu )
        v8 = v13;
      --v11;
    }
    while ( v11 );
    v4 = a1;
    v9 = v49;
  }
  v14 = 16LL
      * (((unsigned __int16)(-30045 * (v5 ^ (v5 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v5 ^ (v5 >> 9))) >> 9)) & 0x7FF);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)CmpNameCacheTable + v14, 0LL);
  v15 = 16LL
      * (((unsigned __int16)(-30045 * (v5 ^ (v5 >> 9))) ^ (unsigned __int16)((101027 * (v5 ^ (v5 >> 9))) >> 9)) & 0x7FF);
  v47 = v15;
  v16 = *(_QWORD *)((char *)CmpNameCacheTable + v15 + 8);
  v50 = v16;
  if ( !v16 )
  {
LABEL_34:
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(v15, (unsigned int)v9 + 26, 0x624E4D43u);
    v17 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      CmpUnlockNameHashEntry(v5);
      return 0LL;
    }
    memset(TransientPoolWithTag, 0, (unsigned int)v9 + 26);
    if ( v8 )
    {
      *(_DWORD *)v17 |= 1u;
      if ( v9 )
      {
        v25 = v17 + 26;
        for ( i = v9; i; --i )
        {
          v27 = *(_WORD *)(v6 + v4->m128i_i64[1]);
          if ( v27 >= 0x61u )
          {
            if ( v27 > 0x7Au )
            {
              v28 = RtlUpcaseUnicodeChar(v27);
              goto LABEL_40;
            }
            LOBYTE(v27) = v27 - 32;
          }
          v28 = v27;
LABEL_40:
          *v25 = v28;
          v6 += 2LL;
          ++v25;
        }
      }
    }
    else
    {
      *(_DWORD *)v17 &= ~1u;
      v32 = v9 >> 1;
      if ( v32 )
      {
        v33 = v32;
        do
        {
          v34 = *(_WORD *)(v6 + v4->m128i_i64[1]);
          if ( v34 >= 0x61u )
          {
            if ( v34 <= 0x7Au )
              v34 -= 32;
            else
              v34 = RtlUpcaseUnicodeChar(v34);
          }
          *(_WORD *)&v17[v6 + 26] = v34;
          v6 += 2LL;
          --v33;
        }
        while ( v33 );
      }
    }
    v29 = *(_DWORD *)v17 & 1;
    *((_WORD *)v17 + 12) = v49;
    v30 = (char *)CmpNameCacheTable + v47;
    *((_DWORD *)v17 + 2) = v5;
    *(_DWORD *)v17 = v29 | 2;
    *((_QWORD *)v17 + 2) = *((_QWORD *)v30 + 1);
    *((_QWORD *)v30 + 1) = v17 + 8;
    goto LABEL_42;
  }
  while ( 1 )
  {
    v17 = (char *)(v16 - 8);
    v51 = (char *)(v16 - 8);
    if ( v5 != *(_DWORD *)v16 )
      goto LABEL_32;
    v15 = *((unsigned __int16 *)v17 + 12);
    if ( v9 != (_WORD)v15 )
      goto LABEL_32;
    if ( (*(_DWORD *)v17 & 1) == 0 )
    {
      v42 = (WCHAR *)v4->m128i_i64[1];
      v43 = 0;
      v44 = (unsigned __int16)v15 >> 1;
      if ( !v44 )
        break;
      v45 = v17 - (char *)v42 + 26;
      while ( 1 )
      {
        v46 = *v42;
        if ( *v42 >= 0x61u )
          v15 = v46 <= 0x7Au ? (unsigned int)v46 - 32 : RtlUpcaseUnicodeChar(v46);
        else
          v15 = v46;
        if ( (_DWORD)v15 != *(WCHAR *)((char *)v42 + v45) )
          break;
        ++v42;
        if ( ++v43 >= v44 )
          goto LABEL_30;
      }
      v16 = v50;
      goto LABEL_80;
    }
    v18 = (unsigned __int8 *)(v17 + 26);
    v15 = v49;
    v19 = (unsigned __int16 *)v4->m128i_i64[1];
    v20 = v49;
    v21 = (unsigned __int16)a1->m128i_i16[0] >> 1;
    if ( v21 )
    {
      while ( 1 )
      {
        if ( !v20 )
        {
LABEL_27:
          v16 = v50;
          v17 = v51;
          goto LABEL_28;
        }
        v15 = *v19++;
        v22 = *v18++;
        if ( (_WORD)v15 != (_WORD)v22 )
        {
          if ( (unsigned __int16)v15 >= 0x61u )
          {
            if ( (unsigned __int16)v15 > 0x7Au )
              v15 = RtlUpcaseUnicodeChar(v15);
            else
              LOWORD(v15) = v15 - 32;
          }
          v23 = (unsigned __int16)v15 - v22;
          if ( (unsigned __int16)v15 != v22 )
            break;
        }
        --v20;
        if ( !--v21 )
          goto LABEL_27;
      }
      v17 = v51;
      v16 = v50;
    }
    else
    {
LABEL_28:
      v23 = v21 - v20;
    }
    if ( !v23 )
      break;
LABEL_80:
    v9 = v49;
    v4 = a1;
LABEL_32:
    v16 = *(_QWORD *)(v16 + 8);
    v50 = v16;
    if ( !v16 )
    {
      v14 = 16LL
          * (((unsigned __int16)(-30045 * (v5 ^ (v5 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027
                                                                                                  * (v5 ^ (v5 >> 9))) >> 9)) & 0x7FF);
      goto LABEL_34;
    }
  }
LABEL_30:
  v14 = 16LL
      * (((unsigned __int16)(-30045 * (v5 ^ (v5 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v5 ^ (v5 >> 9))) >> 9)) & 0x7FF);
  if ( (*(_DWORD *)v17 & 0xFFFFFFFE) == 0xFFFFFFFE )
    v17 = 0LL;
  else
    *(_DWORD *)v17 += 2;
LABEL_42:
  ExReleasePushLockEx((ULONG_PTR)CmpNameCacheTable + v14, 0LL);
  return v17;
}
