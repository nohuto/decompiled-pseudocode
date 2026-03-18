/*
 * XREFs of CmpGetNameControlBlock @ 0x1404AB750
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     CmpUnlockNameHashEntry @ 0x1406FA798 (CmpUnlockNameHashEntry.c)
 */

char *__fastcall CmpGetNameControlBlock(unsigned __int16 *a1, unsigned int *a2, char *a3)
{
  unsigned __int16 *v4; // r13
  unsigned int v5; // ebx
  __int64 v6; // r12
  unsigned int v7; // eax
  char v8; // si
  unsigned __int16 v9; // di
  unsigned int v10; // eax
  WCHAR *v11; // r14
  __int64 v12; // r13
  WCHAR v13; // ax
  unsigned __int16 v14; // r15
  char v15; // bp
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // r14
  unsigned __int16 v20; // cx
  WCHAR *v21; // r15
  unsigned __int8 *v22; // r13
  unsigned __int16 v23; // bp
  unsigned __int16 v24; // r14
  unsigned __int16 v25; // ax
  WCHAR v26; // cx
  int v27; // edx
  __int64 v28; // rbp
  char *TransientPoolWithTag; // rax
  int v30; // eax
  _BYTE *v31; // rsi
  WCHAR v32; // ax
  char *v33; // rcx
  int v34; // eax
  unsigned int v36; // ebp
  __int64 v37; // rsi
  WCHAR v38; // ax
  char v39; // si
  unsigned int v40; // eax
  unsigned __int16 *v41; // r14
  __int64 v42; // r15
  unsigned int v43; // edx
  unsigned int v44; // ebp
  char v45; // cl
  int v46; // ebp
  unsigned int v47; // edx
  __int64 v48; // r13
  WCHAR v49; // ax
  int v50; // ecx
  WCHAR v51; // ax
  __int64 v52; // [rsp+28h] [rbp-50h]
  unsigned int v54; // [rsp+88h] [rbp+10h]
  unsigned __int16 v55; // [rsp+88h] [rbp+10h]
  unsigned int v56; // [rsp+88h] [rbp+10h]
  unsigned __int16 v57; // [rsp+90h] [rbp+18h]
  __int64 v58; // [rsp+90h] [rbp+18h]
  __int64 v59; // [rsp+98h] [rbp+20h]

  v4 = a1;
  if ( a2 )
  {
    v5 = *a2;
    v54 = *a2;
  }
  else
  {
    v5 = CmpHashUnicodeComponent(a1);
    v54 = v5;
  }
  v6 = 0LL;
  if ( a3 )
  {
    v39 = 1;
    v40 = *v4 >> 1;
    v41 = (unsigned __int16 *)*((_QWORD *)v4 + 1);
    if ( v40 )
    {
      v42 = v40;
      do
      {
        v43 = *v41;
        v44 = v43;
        if ( v43 >= 0x61 )
        {
          if ( v43 <= 0x7A )
            v43 -= 32;
          else
            v43 = RtlUpcaseUnicodeChar(v43);
        }
        v45 = 0;
        if ( v43 == v44 )
          v45 = v39;
        ++v41;
        v39 = v45;
        --v42;
      }
      while ( v42 );
    }
    *a3 = v39;
  }
  v7 = *v4;
  v8 = 1;
  v57 = *v4;
  v9 = (unsigned __int16)v7 >> 1;
  v10 = v7 >> 1;
  if ( v10 )
  {
    v11 = (WCHAR *)*((_QWORD *)v4 + 1);
    v12 = v10;
    do
    {
      v13 = *v11;
      v14 = v9;
      v15 = v8;
      if ( *v11 >= 0x61u )
      {
        if ( v13 > 0x7Au )
          v13 = RtlUpcaseUnicodeChar(v13);
        else
          v13 -= 32;
      }
      v9 = v57;
      v8 = 0;
      if ( v13 <= 0xFFu )
      {
        v9 = v14;
        v8 = v15;
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    v5 = v54;
    v4 = a1;
  }
  v52 = 16LL
      * (((unsigned __int16)(-30045 * (v5 ^ (v5 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v5 ^ (v5 >> 9))) >> 9)) & 0x7FF);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)CmpNameCacheTable + v52, 0LL);
  v16 = v52;
  v17 = *(_QWORD *)((char *)CmpNameCacheTable + v52 + 8);
  v58 = v17;
  if ( v17 )
  {
    v18 = 0xFFFFLL;
    while ( 1 )
    {
      v19 = (char *)(v17 - 8);
      v59 = v17 - 8;
      if ( v5 == *(_DWORD *)v17 )
      {
        v20 = *((_WORD *)v19 + 12);
        if ( v9 == v20 )
        {
          v21 = (WCHAR *)*((_QWORD *)v4 + 1);
          v22 = (unsigned __int8 *)(v19 + 26);
          if ( (*(_DWORD *)v19 & 1) != 0 )
          {
            v23 = v9;
            v24 = *a1 >> 1;
            if ( v24 )
            {
              while ( 1 )
              {
                if ( !v23 )
                {
LABEL_24:
                  v17 = v58;
                  goto LABEL_25;
                }
                v25 = *v22++;
                v26 = *v21++;
                v55 = v25;
                if ( v26 != v25 )
                {
                  if ( v26 >= 0x61u )
                  {
                    if ( v26 > 0x7Au )
                    {
                      v26 = RtlUpcaseUnicodeChar(v26);
                      v18 = 0xFFFFLL;
                      v25 = v55;
                    }
                    else
                    {
                      v26 -= 32;
                    }
                  }
                  v27 = v26 - v25;
                  if ( v26 != v25 )
                    break;
                }
                --v23;
                if ( !--v24 )
                  goto LABEL_24;
              }
              v17 = v58;
            }
            else
            {
LABEL_25:
              v27 = v24 - v23;
            }
            if ( !v27 )
            {
              v19 = (char *)v59;
LABEL_28:
              if ( (*(_DWORD *)v19 & 0xFFFFFFFE) == 0xFFFFFFFE )
                v19 = 0LL;
              else
                *(_DWORD *)v19 += 2;
LABEL_39:
              ExReleasePushLockEx((ULONG_PTR)CmpNameCacheTable + v52, 0LL, v17, v18);
              return v19;
            }
          }
          else
          {
            v46 = 0;
            v47 = v20 >> 1;
            v56 = v47;
            if ( !v47 )
              goto LABEL_28;
            v48 = v22 - (unsigned __int8 *)v21;
            while ( 1 )
            {
              v49 = *v21;
              if ( *v21 >= 0x61u )
              {
                if ( v49 <= 0x7Au )
                {
                  v50 = v49 - 32;
                }
                else
                {
                  v51 = RtlUpcaseUnicodeChar(v49);
                  v47 = v56;
                  v50 = v51;
                }
              }
              else
              {
                v50 = v49;
              }
              if ( v50 != *(WCHAR *)((char *)v21 + v48) )
                break;
              ++v21;
              if ( ++v46 >= v47 )
                goto LABEL_28;
            }
            v17 = v58;
            v18 = 0xFFFFLL;
          }
          v4 = a1;
        }
      }
      v17 = *(_QWORD *)(v17 + 8);
      v58 = v17;
      if ( !v17 )
      {
        v16 = v52;
        break;
      }
    }
  }
  v28 = v9;
  TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, (unsigned int)v9 + 26, 0x624E4D43u);
  if ( TransientPoolWithTag )
  {
    v19 = TransientPoolWithTag;
    memset(TransientPoolWithTag, 0, (unsigned int)v9 + 26);
    v30 = *(_DWORD *)v19;
    if ( v8 )
    {
      *(_DWORD *)v19 = v30 | 1;
      if ( v9 )
      {
        v31 = v19 + 26;
        do
        {
          v32 = *(_WORD *)(v6 + *((_QWORD *)v4 + 1));
          if ( v32 >= 0x61u )
          {
            if ( v32 > 0x7Au )
              LOBYTE(v32) = RtlUpcaseUnicodeChar(v32);
            else
              LOBYTE(v32) = v32 - 32;
          }
          *v31 = v32;
          v6 += 2LL;
          ++v31;
          --v28;
        }
        while ( v28 );
      }
    }
    else
    {
      v36 = v9 >> 1;
      *(_DWORD *)v19 = v30 & 0xFFFFFFFE;
      if ( v36 )
      {
        v37 = v36;
        do
        {
          v38 = *(_WORD *)(v6 + *((_QWORD *)v4 + 1));
          if ( v38 >= 0x61u )
          {
            if ( v38 <= 0x7Au )
              v38 -= 32;
            else
              v38 = RtlUpcaseUnicodeChar(v38);
          }
          *(_WORD *)&v19[v6 + 26] = v38;
          v6 += 2LL;
          --v37;
        }
        while ( v37 );
      }
    }
    v33 = (char *)CmpNameCacheTable;
    v34 = *(_DWORD *)v19 & 1;
    *((_DWORD *)v19 + 2) = v5;
    *(_DWORD *)v19 = v34 | 2;
    *((_WORD *)v19 + 12) = v9;
    *((_QWORD *)v19 + 2) = *(_QWORD *)&v33[v16 + 8];
    *(_QWORD *)&v33[v16 + 8] = v19 + 8;
    goto LABEL_39;
  }
  CmpUnlockNameHashEntry(v5);
  return 0LL;
}
