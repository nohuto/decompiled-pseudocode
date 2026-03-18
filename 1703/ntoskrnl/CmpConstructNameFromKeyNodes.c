/*
 * XREFs of CmpConstructNameFromKeyNodes @ 0x1405039C0
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpCopyCompressedName @ 0x1404D2CB0 (CmpCopyCompressedName.c)
 *     CmpKeyFullNameLength @ 0x140501640 (CmpKeyFullNameLength.c)
 *     CmpSetKcbAtLayerHeight @ 0x14066DD6C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int16 v5; // di
  unsigned int v6; // r15d
  struct _PRIVILEGE_SET *v7; // r12
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _WORD *v11; // rax
  _WORD *v12; // r14
  unsigned __int16 v13; // si
  __int64 v14; // rcx
  unsigned __int16 v15; // bp
  unsigned __int16 v16; // r10
  unsigned __int16 v17; // si
  __int16 v18; // cx
  __int64 i; // rdi
  const void *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r8
  _WORD *v24; // rdx
  unsigned __int8 *v25; // rax
  __int16 v26; // cx
  SIZE_T v28; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v30; // r11
  __int64 v31; // r11
  __int16 v32; // r10
  __int64 v33; // rdx
  _WORD *v34; // rcx
  _QWORD v35[4]; // [rsp+20h] [rbp-58h] BYREF
  char v36; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v37; // [rsp+88h] [rbp+10h]

  v37 = a2;
  memset(v35, 0, sizeof(v35));
  WORD1(v35[0]) = -1;
  HvpGetCellContextReinitialize((__int64)&v36);
  v3 = *(unsigned __int16 *)(a1 + 2);
  _mm_lfence();
  if ( (__int16)v3 >= 2 )
  {
    v3 = (__int16)v3 - 2;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v3);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8LL * (__int16)v3 + 8);
  }
  v5 = *(_WORD *)(v4 + 58);
  v6 = 0;
  v7 = 0LL;
  if ( v5 >= 2 && v5 != 1 )
  {
    v28 = 8LL * (unsigned int)(v5 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v3, v28, 0x35364D43u);
    v7 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v7 = (struct _PRIVILEGE_SET *)v35[3];
      v6 = -1073741670;
      goto LABEL_27;
    }
    memset(TransientPoolWithTag, 0, v28);
  }
  WORD1(v35[0]) = -1;
  LOWORD(v35[0]) = v5;
  v35[3] = v7;
  v8 = CmpKeyFullNameLength(v4);
  v10 = v8;
  if ( v8 > 0xFFFF )
  {
    v6 = -1073741811;
  }
  else
  {
    v11 = CmpAllocateTransientPoolWithTag(v9, v8 + 16LL, 0x624E4D43u);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, v10 + 16);
      *v12 = v10;
      v12[1] = v10;
      *((_QWORD *)v12 + 1) = v12 + 8;
      v13 = (unsigned __int16)v10 >> 1;
      do
      {
        if ( (*(_DWORD *)(v4 + 176) & 0x40000) == 0 || !*(_QWORD *)(v4 + 64) )
        {
          v14 = *(_QWORD *)(v4 + 72);
          v15 = *(_WORD *)(v14 + 24);
          if ( (*(_DWORD *)v14 & 1) == 0 )
            v15 >>= 1;
          v16 = *(_WORD *)(v4 + 58);
          v17 = v13 - v15;
          WORD1(v35[0]) = v16;
          if ( v16 )
          {
            v30 = *(_QWORD *)(v4 + 184);
            if ( v30 )
            {
              do
              {
                CmpSetKcbAtLayerHeight(v35, v16, *(_QWORD *)(v30 + 16));
                v30 = *(_QWORD *)(v31 + 24);
                v16 = v32 - 1;
              }
              while ( v30 );
              v7 = (struct _PRIVILEGE_SET *)v35[3];
            }
          }
          else
          {
            v35[1] = v4;
          }
          v18 = *(_WORD *)(v4 + 58);
          for ( i = 0LL; v18 >= 0; --v18 )
          {
            if ( v18 >= 2 )
              i = *((_QWORD *)v7 + v18 - 2);
            else
              i = v35[v18 + 1];
            if ( *(_QWORD *)(i + 192) )
              break;
            if ( *(_DWORD *)(i + 32) != -1 )
              break;
          }
          v20 = *(const void **)(i + 192);
          if ( (unsigned __int64)v20 >= 2 )
          {
            memmove((void *)(*((_QWORD *)v12 + 1) + 2LL * v17), v20, 2LL * v15);
          }
          else if ( v20 == (const void *)1 )
          {
            v33 = *(_QWORD *)(i + 72);
            v34 = (_WORD *)(*((_QWORD *)v12 + 1) + 2LL * v17);
            if ( (*(_DWORD *)v33 & 1) != 0 )
              CmpCopyCompressedName(v34, 2 * v15, (unsigned __int8 *)(v33 + 26), v15);
            else
              memmove(v34, (const void *)(v33 + 26), 2LL * v15);
          }
          else
          {
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(i + 24) + 8LL))(
                    *(_QWORD *)(i + 24),
                    *(unsigned int *)(i + 32),
                    &v36);
            v22 = v21;
            v23 = v15;
            if ( (*(_BYTE *)(v21 + 2) & 0x20) != 0 )
            {
              v24 = (_WORD *)(*((_QWORD *)v12 + 1) + 2LL * v17);
              if ( v15 )
              {
                v25 = (unsigned __int8 *)(v21 + 76);
                do
                {
                  v26 = *v25++;
                  *v24++ = v26;
                  --v23;
                }
                while ( v23 );
              }
            }
            else
            {
              memmove((void *)(*((_QWORD *)v12 + 1) + 2LL * v17), (const void *)(v21 + 76), 2LL * v15);
            }
            (*(void (__fastcall **)(_QWORD, char *, __int64, __int64))(*(_QWORD *)(i + 24) + 16LL))(
              *(_QWORD *)(i + 24),
              &v36,
              v23,
              v22);
          }
          v13 = v17 - 1;
          *(_WORD *)(*((_QWORD *)v12 + 1) + 2LL * v13) = 92;
        }
        v4 = *(_QWORD *)(v4 + 64);
      }
      while ( v4 );
      *v37 = v12;
    }
    else
    {
      v6 = -1073741670;
    }
  }
LABEL_27:
  if ( v7 )
    MiDeleteSubsection(v7);
  return v6;
}
