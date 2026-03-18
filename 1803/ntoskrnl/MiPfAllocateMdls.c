/*
 * XREFs of MiPfAllocateMdls @ 0x1404BC050
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     MiSetInPagePriority @ 0x140048490 (MiSetInPagePriority.c)
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     MmCreateMdl @ 0x140049840 (MmCreateMdl.c)
 *     MiGetInPageSupportBlock @ 0x140057704 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     MiEndingOffsetWithLock @ 0x140128880 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiPfAllocateMdls(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // eax
  _QWORD *v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // r10
  unsigned __int64 v8; // r12
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  char *v20; // rax
  char *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r9
  SIZE_T v24; // r8
  __int64 v25; // rbp
  __int64 *v26; // rdi
  unsigned int v27; // r12d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  int v30; // r15d
  PMDL v31; // rcx
  char **v32; // rcx
  __int64 SubsectionDriverProtos; // rax
  unsigned __int64 v34; // rax
  int v35; // eax
  ULONG v36; // eax
  __int64 v37; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  _QWORD *v41; // [rsp+20h] [rbp-A8h]
  _QWORD *v42; // [rsp+28h] [rbp-A0h]
  _QWORD *v43; // [rsp+30h] [rbp-98h]
  PMDL Mdl; // [rsp+38h] [rbp-90h]
  unsigned int v45; // [rsp+40h] [rbp-88h]
  unsigned int v46; // [rsp+44h] [rbp-84h]
  __int64 *v47; // [rsp+48h] [rbp-80h]
  _QWORD *v48; // [rsp+50h] [rbp-78h]
  __int64 v49; // [rsp+58h] [rbp-70h]
  char *v50; // [rsp+60h] [rbp-68h]
  unsigned __int64 v51; // [rsp+68h] [rbp-60h]
  unsigned __int64 v52; // [rsp+70h] [rbp-58h]
  unsigned int v56; // [rsp+E8h] [rbp+20h]

  v45 = *(_DWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  v56 = 0;
  v8 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v9 = *(_QWORD **)(a1 + 64);
  v10 = a1 + 8 * (*(unsigned int *)(a1 + 60) + 13LL);
  v46 = v4;
  v49 = v6;
  v51 = v10;
  v42 = v9;
  if ( (unsigned __int64)v9 >= v10 )
    return 0;
  v11 = (_QWORD *)(v6 + 128);
  v12 = v9 + 1;
  v43 = v9 + 1;
  if ( *(_QWORD *)(a1 + 16) )
    v11 = *(_QWORD **)(a1 + 16);
  v13 = 0;
  v41 = v11;
  while ( 1 )
  {
    v14 = *v9;
    v15 = (*v9 >> 2) & 0x3FFFFFFFLL;
    if ( (*v9 & 2) != 0 )
      break;
LABEL_6:
    if ( (v14 & 1) != 0 )
    {
      if ( v15 )
      {
        v34 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v5 )
        {
          if ( (__int64)(v34 - v8) >> 3 > dword_1403CC3BC )
            goto LABEL_17;
        }
        else
        {
          v7 = v9;
          v48 = v9;
        }
        v5 = v9;
        v8 = v34;
      }
      if ( v5 )
        goto LABEL_18;
    }
    else
    {
      v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 )
      {
        if ( (__int64)(v16 - v8) >> 3 > dword_1403CC3BC )
          goto LABEL_17;
      }
      else
      {
        v7 = v9;
        v48 = v9;
      }
      v5 = v9;
      v8 = v16;
      if ( v12 == (_QWORD *)v10 )
        goto LABEL_18;
    }
LABEL_10:
    ++v9;
    ++v12;
    v42 = v9;
    v43 = v12;
    if ( (unsigned __int64)v9 >= v10 )
      return v13;
  }
  if ( !v5 )
  {
    if ( !v15 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( !v15 )
    goto LABEL_18;
LABEL_17:
  v42 = v9 - 1;
  v43 = v12 - 1;
LABEL_18:
  v52 = *v5 & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = *v7 & 0xFFFFFFFFFFFFFFFCuLL;
  v19 = ((__int64)(v52 - v18) >> 3) + 1;
  v20 = (char *)MiGetInPageSupportBlock(0);
  v50 = v20;
  v21 = v20;
  if ( !v20 )
    return (unsigned int)-1073741670;
  *((_QWORD *)v20 + 30) = 0LL;
  MiSetInPagePriority((__int64)v20, v46, v45);
  v24 = v19 << 12;
  if ( v19 <= 0x10 )
  {
    Mdl = (PMDL)(v22 + 264);
    *(_QWORD *)(v22 + 264) = v23;
    *(_WORD *)(v22 + 272) = 8 * (((v24 + 4095) >> 12) + 6);
    *(_WORD *)(v22 + 274) = v23;
    *(_QWORD *)(v22 + 296) = v23;
    *(_DWORD *)(v22 + 308) = v23;
    *(_DWORD *)(v22 + 304) = v24;
    goto LABEL_21;
  }
  Mdl = MmCreateMdl(0LL, 0LL, v24);
  if ( Mdl )
  {
LABEL_21:
    v25 = (__int64)v41;
    v26 = v47;
    v27 = v56;
    while ( 1 )
    {
      v28 = *(_QWORD *)(v25 + 8);
      if ( v18 >= v28 && v18 < v28 + 8LL * *(unsigned int *)(v25 + 44) )
        break;
      if ( (*(_BYTE *)(v25 + 34) & 2) != 0 && (*(_DWORD *)(v49 + 56) & 0x4000000) != 0 )
      {
        if ( *(_QWORD *)(v25 + 24) )
        {
          SharedProtos = MiGetSharedProtos(v49, a2, v25);
          if ( SharedProtos )
          {
            v39 = *(_QWORD *)(SharedProtos + 72);
            if ( v18 >= v39 && v18 < v39 + 8LL * *(unsigned int *)(v25 + 44) )
              break;
          }
        }
      }
      if ( (*(_DWORD *)(v49 + 56) & 0x20) != 0 )
      {
        SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v25);
        if ( SubsectionDriverProtos )
        {
          v40 = *(_QWORD *)(SubsectionDriverProtos + 72);
          if ( v18 >= v40 && v18 < v40 + 8LL * *(unsigned int *)(v25 + 44) )
            break;
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( v26 )
        {
          if ( v27 >= *((_DWORD *)v26 + 4) )
          {
            v26 = (__int64 *)*v26;
            v27 = 1;
            v25 = v26[3];
          }
          else
          {
            v37 = v27++;
            v25 = v26[v37 + 3];
          }
        }
        else
        {
          v26 = *(__int64 **)(a1 + 24);
          v27 = 1;
          v25 = v26[3];
        }
      }
      else
      {
        v25 = *(_QWORD *)(v25 + 16);
      }
    }
    v56 = v27;
    v47 = v26;
    v41 = (_QWORD *)v25;
    v29 = MiStartingOffset((__int64 *)v25, v18, a2);
    v30 = v29;
    v9 = v42;
    v12 = v43;
    v10 = v51;
    v8 = v52;
    *((_QWORD *)v50 + 12) = v29;
    if ( (*(_BYTE *)v5 & 1) != 0 && (*(_DWORD *)(v49 + 56) & 0x20) != 0 )
    {
      v35 = MiEndingOffsetWithLock(v41);
      v31 = Mdl;
      v36 = v35 - v30;
      if ( v36 <= Mdl->ByteCount )
        Mdl->ByteCount = (v36 + 511) & 0xFFFFFE00;
    }
    else
    {
      v31 = Mdl;
    }
    v7 = v48;
    *((_QWORD *)v50 + 29) = v48;
    *((_QWORD *)v50 + 24) = v5;
    *((_QWORD *)v50 + 25) = v49;
    *((_QWORD *)v50 + 27) = a3;
    if ( a3 )
      v50[190] |= 0x80u;
    *((_QWORD *)v50 + 31) = v31;
    v32 = *(char ***)(a1 + 96);
    if ( *v32 != (char *)(a1 + 88) )
      __fastfail(3u);
    *(_QWORD *)v50 = a1 + 88;
    *((_QWORD *)v50 + 1) = v32;
    *v32 = v50;
    *(_QWORD *)(a1 + 96) = v50;
    ++*(_DWORD *)(a1 + 76);
    v13 = 0;
    v5 = 0LL;
    goto LABEL_10;
  }
  MiFreeInPageSupportBlock(v21);
  return (unsigned int)-1073741670;
}
