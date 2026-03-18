/*
 * XREFs of MiPfAllocateMdls @ 0x140493FB0
 * Callers:
 *     MiPfPrepareReadList @ 0x140494BE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140495440 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiSetInPagePriority @ 0x1400271D0 (MiSetInPagePriority.c)
 *     MiGetInPageSupportBlock @ 0x14002A960 (MiGetInPageSupportBlock.c)
 *     MiEndingOffsetWithLock @ 0x14002B0E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiGetSubsectionDriverProtos @ 0x1400B6F28 (MiGetSubsectionDriverProtos.c)
 *     MmCreateMdl @ 0x140122030 (MmCreateMdl.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 */

__int64 __fastcall MiPfAllocateMdls(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned int v6; // r8d
  _QWORD *v7; // r14
  _QWORD *v8; // r9
  _QWORD *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  char *v14; // rax
  char *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // r13
  __int64 v19; // r13
  __int64 *v20; // rsi
  unsigned int v21; // edi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  char **v24; // rcx
  __int64 SubsectionDriverProtos; // rax
  unsigned __int64 v26; // rdx
  ULONG v27; // eax
  __int64 v28; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-A8h]
  _QWORD *v33; // [rsp+28h] [rbp-A0h]
  _QWORD *v34; // [rsp+30h] [rbp-98h]
  unsigned int v35; // [rsp+38h] [rbp-90h]
  unsigned int v36; // [rsp+3Ch] [rbp-8Ch]
  __int64 *v37; // [rsp+40h] [rbp-88h]
  _QWORD *v38; // [rsp+48h] [rbp-80h]
  __int64 v39; // [rsp+50h] [rbp-78h]
  PMDL Mdl; // [rsp+58h] [rbp-70h]
  char *v41; // [rsp+60h] [rbp-68h]
  unsigned __int64 v42; // [rsp+68h] [rbp-60h]
  unsigned __int64 v43; // [rsp+70h] [rbp-58h]
  unsigned int v47; // [rsp+E8h] [rbp+20h]

  v3 = *(_QWORD **)(a1 + 64);
  v35 = *(_DWORD *)(a1 + 48);
  v36 = *(_DWORD *)(a1 + 52);
  v33 = v3;
  v39 = *(_QWORD *)(a1 + 8);
  v32 = *(_QWORD *)(a1 + 16);
  if ( !v32 )
    v32 = *(_QWORD *)(a1 + 8) + 128LL;
  v4 = 0LL;
  v5 = a1 + 8 * (*(unsigned int *)(a1 + 60) + 13LL);
  v6 = 0;
  v43 = v5;
  v7 = 0LL;
  v47 = 0;
  v8 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( (unsigned __int64)v3 >= v5 )
    return v6;
  v9 = v3 + 1;
  v34 = v3 + 1;
  while ( 1 )
  {
    v10 = *v3;
    if ( (*v3 & 2) != 0 )
      break;
LABEL_6:
    if ( (v10 & 1) != 0 )
    {
      if ( (v10 & 0xFFFFFFFC) != 0 )
      {
        if ( v7 )
        {
          if ( (__int64)((v10 & 0xFFFFFFFFFFFFFFFCuLL) - v4) >> 3 > dword_14038913C )
            goto LABEL_17;
        }
        else
        {
          v8 = v3;
          v38 = v3;
        }
        v7 = v3;
        v4 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v7 )
        goto LABEL_18;
    }
    else
    {
      if ( v7 )
      {
        if ( (__int64)((v10 & 0xFFFFFFFFFFFFFFFCuLL) - v4) >> 3 > dword_14038913C )
          goto LABEL_17;
      }
      else
      {
        v8 = v3;
        v38 = v3;
      }
      v7 = v3;
      v4 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v9 == (_QWORD *)v5 )
        goto LABEL_18;
    }
LABEL_10:
    ++v3;
    ++v9;
    v33 = v3;
    v34 = v9;
    if ( (unsigned __int64)v3 >= v5 )
      return v6;
  }
  if ( !v7 )
  {
    if ( (v10 & 0xFFFFFFFC) == 0 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( (v10 & 0xFFFFFFFC) == 0 )
    goto LABEL_18;
LABEL_17:
  v33 = v3 - 1;
  v34 = v9 - 1;
LABEL_18:
  v42 = *v7 & 0xFFFFFFFFFFFFFFFCuLL;
  v12 = *v8 & 0xFFFFFFFFFFFFFFFCuLL;
  v13 = ((__int64)(v42 - v12) >> 3) + 1;
  v14 = (char *)MiGetInPageSupportBlock(0);
  v41 = v14;
  v15 = v14;
  if ( !v14 )
    return (unsigned int)-1073741670;
  *((_QWORD *)v14 + 30) = 0LL;
  MiSetInPagePriority((__int64)v14, v36, v35);
  if ( v13 <= 0x10 )
  {
    v18 = v13 << 12;
    Mdl = (PMDL)(v16 + 256);
    *(_QWORD *)(v16 + 256) = v17;
    *(_WORD *)(v16 + 266) = v17;
    *(_QWORD *)(v16 + 288) = v17;
    *(_DWORD *)(v16 + 300) = v17;
    *(_WORD *)(v16 + 264) = 8 * (((v18 + 4095) >> 12) + 6);
    *(_DWORD *)(v16 + 296) = v18;
    goto LABEL_21;
  }
  Mdl = MmCreateMdl(0LL, 0LL, v13 << 12);
  if ( Mdl )
  {
LABEL_21:
    v19 = v32;
    v20 = v37;
    v21 = v47;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v19 + 8);
      if ( v12 >= v22 && v12 < v22 + 8LL * *(unsigned int *)(v19 + 44) )
        break;
      if ( (*(_BYTE *)(v19 + 34) & 2) != 0 && (*(_DWORD *)(v39 + 56) & 0x4000000) != 0 )
      {
        if ( *(_QWORD *)(v19 + 24) )
        {
          SharedProtos = MiGetSharedProtos(v39, a2, v19);
          if ( SharedProtos )
          {
            v30 = *(_QWORD *)(SharedProtos + 32);
            if ( v12 >= v30 && v12 < v30 + 8LL * *(unsigned int *)(v19 + 44) )
              break;
          }
        }
      }
      if ( (*(_DWORD *)(v39 + 56) & 0x20) != 0 )
      {
        SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v19);
        if ( SubsectionDriverProtos )
        {
          v31 = *(_QWORD *)(SubsectionDriverProtos + 32);
          if ( v12 >= v31 && v12 < v31 + 8LL * *(unsigned int *)(v19 + 44) )
            break;
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( v20 )
        {
          if ( v21 >= *((_DWORD *)v20 + 4) )
          {
            v20 = (__int64 *)*v20;
            v21 = 1;
            v19 = v20[3];
          }
          else
          {
            v28 = v21++;
            v19 = v20[v28 + 3];
          }
        }
        else
        {
          v20 = *(__int64 **)(a1 + 24);
          v21 = 1;
          v19 = v20[3];
        }
      }
      else
      {
        v19 = *(_QWORD *)(v19 + 16);
      }
    }
    v47 = v21;
    v37 = v20;
    v32 = v19;
    v23 = MiStartingOffset((__int64 *)v19, v12, a2);
    v3 = v33;
    v4 = v42;
    v9 = v34;
    v5 = v43;
    *((_QWORD *)v41 + 12) = v23;
    if ( (*(_BYTE *)v7 & 1) != 0 && (*(_DWORD *)(v39 + 56) & 0x20) != 0 )
    {
      v27 = MiEndingOffsetWithLock((_QWORD *)v19) - v23;
      if ( v27 <= Mdl->ByteCount )
        Mdl->ByteCount = (v27 + 511) & 0xFFFFFE00;
    }
    v8 = v38;
    *((_QWORD *)v41 + 29) = v38;
    *((_QWORD *)v41 + 24) = v7;
    *((_QWORD *)v41 + 25) = v39;
    *((_QWORD *)v41 + 27) = a3;
    if ( a3 )
      v41[190] |= 0x80u;
    *((_QWORD *)v41 + 31) = Mdl;
    v24 = *(char ***)(a1 + 96);
    if ( *v24 != (char *)(a1 + 88) )
      __fastfail(3u);
    *(_QWORD *)v41 = a1 + 88;
    *((_QWORD *)v41 + 1) = v24;
    *v24 = v41;
    *(_QWORD *)(a1 + 96) = v41;
    ++*(_DWORD *)(a1 + 76);
    v6 = 0;
    v7 = 0LL;
    goto LABEL_10;
  }
  MiFreeInPageSupportBlock(v15, v26);
  return (unsigned int)-1073741670;
}
