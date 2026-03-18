/*
 * XREFs of CmpConstructNameFromKeyNodes @ 0x14047F860
 * Callers:
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpCopyCompressedName @ 0x14047442C (CmpCopyCompressedName.c)
 *     CmpKeyFullNameLength @ 0x140481360 (CmpKeyFullNameLength.c)
 *     CmpStartKcbStack @ 0x140481B10 (CmpStartKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpSetKcbAtLayerHeight @ 0x140698264 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, _QWORD *a2)
{
  __int64 KcbAtLayerHeight; // rbx
  int started; // r15d
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  _WORD *TransientPoolWithTag; // rax
  _WORD *v9; // r14
  struct _PRIVILEGE_SET *v10; // r12
  unsigned __int16 v11; // bp
  __int64 v12; // rcx
  unsigned __int16 v13; // si
  unsigned __int16 v14; // r10
  unsigned __int16 v15; // bp
  __int16 v16; // cx
  __int64 i; // rdi
  const void *v18; // rdx
  __int64 v19; // rax
  _WORD *v20; // r8
  unsigned __int8 *v21; // rax
  __int64 v22; // rdx
  __int16 v23; // cx
  __int64 v25; // r11
  __int64 v26; // r11
  __int16 v27; // r10
  __int64 v28; // rdx
  _WORD *v29; // rcx
  _QWORD v30[4]; // [rsp+20h] [rbp-58h] BYREF
  char v31; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v32; // [rsp+88h] [rbp+10h]

  v32 = a2;
  memset(v30, 0, sizeof(v30));
  WORD1(v30[0]) = -1;
  HvpGetCellContextReinitialize((__int64)&v31);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 2));
  started = CmpStartKcbStack(v30, *(unsigned __int16 *)(KcbAtLayerHeight + 58));
  if ( started < 0 )
    goto LABEL_31;
  v5 = CmpKeyFullNameLength(KcbAtLayerHeight);
  v7 = v5;
  if ( v5 > 0xFFFF )
  {
    started = -1073741811;
LABEL_31:
    v10 = (struct _PRIVILEGE_SET *)v30[3];
    goto LABEL_24;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(v6, v5 + 16LL, 0x624E4D43u);
  v9 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    started = -1073741670;
    goto LABEL_31;
  }
  memset(TransientPoolWithTag, 0, v7 + 16);
  v10 = (struct _PRIVILEGE_SET *)v30[3];
  *v9 = v7;
  v9[1] = v7;
  v11 = (unsigned __int16)v7 >> 1;
  *((_QWORD *)v9 + 1) = v9 + 8;
  started = 0;
  do
  {
    if ( (*(_DWORD *)(KcbAtLayerHeight + 176) & 0x40000) == 0 || !*(_QWORD *)(KcbAtLayerHeight + 64) )
    {
      v12 = *(_QWORD *)(KcbAtLayerHeight + 72);
      v13 = *(_WORD *)(v12 + 24);
      if ( (*(_DWORD *)v12 & 1) == 0 )
        v13 >>= 1;
      v14 = *(_WORD *)(KcbAtLayerHeight + 58);
      v15 = v11 - v13;
      WORD1(v30[0]) = v14;
      if ( v14 )
      {
        v25 = *(_QWORD *)(KcbAtLayerHeight + 184);
        if ( v25 )
        {
          do
          {
            CmpSetKcbAtLayerHeight(v30, v14, *(_QWORD *)(v25 + 16));
            v25 = *(_QWORD *)(v26 + 24);
            v14 = v27 - 1;
          }
          while ( v25 );
          v10 = (struct _PRIVILEGE_SET *)v30[3];
        }
      }
      else
      {
        v30[1] = KcbAtLayerHeight;
      }
      v16 = *(_WORD *)(KcbAtLayerHeight + 58);
      for ( i = 0LL; v16 >= 0; --v16 )
      {
        if ( v16 >= 2 )
          i = *((_QWORD *)v10 + v16 - 2);
        else
          i = v30[v16 + 1];
        if ( *(_QWORD *)(i + 192) )
          break;
        if ( *(_DWORD *)(i + 32) != -1 )
          break;
      }
      v18 = *(const void **)(i + 192);
      if ( v18 )
      {
        if ( v18 == (const void *)1 )
        {
          v28 = *(_QWORD *)(i + 72);
          v29 = (_WORD *)(*((_QWORD *)v9 + 1) + 2LL * v15);
          if ( (*(_DWORD *)v28 & 1) != 0 )
            CmpCopyCompressedName(v29, 2 * v13, (unsigned __int8 *)(v28 + 26), v13);
          else
            memmove(v29, (const void *)(v28 + 26), 2LL * v13);
        }
        else
        {
          memmove((void *)(*((_QWORD *)v9 + 1) + 2LL * v15), v18, 2LL * v13);
        }
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(i + 24) + 8LL))(
                *(_QWORD *)(i + 24),
                *(unsigned int *)(i + 32),
                &v31);
        if ( (*(_BYTE *)(v19 + 2) & 0x20) != 0 )
        {
          v20 = (_WORD *)(*((_QWORD *)v9 + 1) + 2LL * v15);
          if ( v13 )
          {
            v21 = (unsigned __int8 *)(v19 + 76);
            v22 = v13;
            do
            {
              v23 = *v21++;
              *v20++ = v23;
              --v22;
            }
            while ( v22 );
          }
        }
        else
        {
          memmove((void *)(*((_QWORD *)v9 + 1) + 2LL * v15), (const void *)(v19 + 76), 2LL * v13);
        }
        (*(void (__fastcall **)(_QWORD, char *, _WORD *))(*(_QWORD *)(i + 24) + 16LL))(*(_QWORD *)(i + 24), &v31, v20);
      }
      v11 = v15 - 1;
      *(_WORD *)(*((_QWORD *)v9 + 1) + 2LL * v11) = 92;
    }
    KcbAtLayerHeight = *(_QWORD *)(KcbAtLayerHeight + 64);
  }
  while ( KcbAtLayerHeight );
  *v32 = v9;
LABEL_24:
  if ( v10 )
    MiDeleteSubsection(v10);
  return (unsigned int)started;
}
