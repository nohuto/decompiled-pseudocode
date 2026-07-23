/*
 * XREFs of MiCopyToCfgBitMap @ 0x1404B4120
 * Callers:
 *     MiPopulateCfgBitMap @ 0x1404B3B10 (MiPopulateCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x1404B4820 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiEliminateZeroPages @ 0x1404B3970 (MiEliminateZeroPages.c)
 *     RtlEnumRvaListFirst @ 0x140568540 (RtlEnumRvaListFirst.c)
 */

__int64 __fastcall MiCopyToCfgBitMap(
        char *Src,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        size_t Size,
        int a8)
{
  unsigned int v10; // edx
  unsigned int v11; // r15d
  unsigned __int64 v12; // rdi
  char *PoolWithTag; // r13
  char *v14; // r14
  size_t v15; // r11
  int v16; // ebx
  int v17; // r9d
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int v25; // ebx
  unsigned int v26; // edi
  unsigned int v27; // ebx
  unsigned int i; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rdx
  int v36; // r11d
  int v37; // edi
  __int64 v38; // rcx
  unsigned int v39; // r11d
  unsigned int v40; // r10d
  __int64 v41; // rax
  unsigned __int8 *v42; // r8
  __int64 v43; // r9
  unsigned int v44; // eax
  __int64 v45; // rdx
  unsigned int v46; // r8d
  int v47; // r10d
  unsigned int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  int *v52; // rax
  void *v53; // rsp
  char v54; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v55; // [rsp+100h] [rbp+0h]
  unsigned int v56; // [rsp+104h] [rbp+4h]
  unsigned int v57; // [rsp+108h] [rbp+8h]
  int v58; // [rsp+10Ch] [rbp+Ch]
  __int64 v59; // [rsp+110h] [rbp+10h]
  char *v60; // [rsp+118h] [rbp+18h]
  size_t v61; // [rsp+120h] [rbp+20h]
  unsigned __int64 v62; // [rsp+128h] [rbp+28h]
  char *v63; // [rsp+130h] [rbp+30h]
  _RTL_BITMAP BitMapHeader; // [rsp+138h] [rbp+38h] BYREF
  __int64 v65; // [rsp+148h] [rbp+48h]
  __int64 v66; // [rsp+150h] [rbp+50h]
  ULONG_PTR v67; // [rsp+158h] [rbp+58h]

  v65 = a2;
  v62 = (unsigned __int64)Src;
  v67 = a3;
  v10 = 0;
  v55 = 0;
  v11 = a5;
  v59 = a5;
  v58 = 0;
  v12 = 4096LL;
  v66 = 4096LL;
  if ( a3 > 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6554694Du);
    v63 = PoolWithTag;
    v10 = v55;
    if ( PoolWithTag )
    {
      v58 = 1;
      goto LABEL_5;
    }
    v12 = 256LL;
    v66 = 256LL;
    v53 = alloca(256LL);
    PoolWithTag = &v54;
  }
  else
  {
    PoolWithTag = (char *)qword_1403CC428;
    if ( !a3 )
      PoolWithTag = (char *)qword_1403CC430;
  }
  v63 = PoolWithTag;
LABEL_5:
  v14 = Src;
  v60 = Src;
  v15 = Size;
  v61 = (Size >> 12) + ((unsigned __int64)(((unsigned __int16)Src & 0xFFF) + (unsigned int)(Size & 0xFFF) + 4095) >> 12);
  v16 = 0;
  v17 = v62;
  while ( v15 )
  {
    v18 = v17 & (unsigned int)(v12 - 1);
    if ( v12 - v18 < v15 )
      v19 = v12 - v18;
    else
      v19 = v15;
    v56 = v19;
    if ( a3 > 1 )
    {
      if ( a8 == 1 )
      {
        if ( v10 < *(_DWORD *)a3 )
        {
          v23 = (*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL * v10) - v59) & ~(v12 - 1);
          v24 = (2 * (v23 >> 4)) >> 3;
          if ( v24 >= v12 )
          {
            v59 += v23;
            v14 += v24;
            v60 = v14;
            v15 -= v24;
            Size = v15;
            v17 = (int)v14;
          }
        }
        if ( v12 - (((_DWORD)v12 - 1) & (unsigned int)v14) < v15 )
          v25 = v12 - (v17 & (v12 - 1));
        else
          v25 = v15;
        v56 = v25;
        memmove(PoolWithTag, v14, v25);
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v25;
        v26 = v25 >> 1;
        v27 = v25 >> 1 << 7;
        for ( i = v55; i < *(_DWORD *)a3; i = ++v55 )
        {
          v29 = 2LL * i;
          v30 = *(_QWORD *)(a3 + 8);
          v31 = *(_DWORD *)(v30 + 8 * v29) - v59;
          v27 = v26 << 7;
          if ( v31 >= v26 << 7 )
            break;
          v32 = v31 >> 4;
          if ( (*(_BYTE *)(v30 + 8 * v29 + 8) & 5) != 0 )
          {
            _bittestandreset((signed __int32 *)PoolWithTag, 2 * v32 + 1);
            _bittestandset((signed __int32 *)PoolWithTag, 2 * v32);
          }
          else
          {
            RtlClearBits(&BitMapHeader, 2 * v32, 2u);
          }
        }
        v59 += v27;
      }
      else if ( !a8 )
      {
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v19;
        RtlClearAllBits(&BitMapHeader);
        v33 = v11 + (v19 >> 1 << 7);
        v57 = v33;
        v34 = *a6;
        if ( !*a6 )
        {
          v34 = RtlEnumRvaListFirst(a3, a6 + 2, a6 + 1);
          *a6 = v34;
          goto LABEL_47;
        }
        do
        {
          if ( v34 >= v11 )
          {
            if ( v34 >= v33 )
              break;
            v48 = a6[1];
            if ( (v48 & 1) != 0 )
            {
              v49 = (v34 - v11) >> 4;
              if ( (v34 & 0xF) != 0 )
              {
                RtlSetBits(&BitMapHeader, 2 * v49, 2u);
              }
              else
              {
                v50 = 2 * v49;
                v51 = v50 + 1;
                if ( (v48 & 4) != 0 )
                {
                  _bittestandreset((signed __int32 *)PoolWithTag, v50);
                  _bittestandset((signed __int32 *)PoolWithTag, v51);
                }
                else
                {
                  _bittestandset((signed __int32 *)PoolWithTag, v50);
                  _bittestandreset((signed __int32 *)PoolWithTag, v51);
                }
              }
            }
          }
          v39 = ++a6[3];
          v40 = a6[2];
          v41 = a6[4];
          v42 = (unsigned __int8 *)(v41 + *(_QWORD *)(a3 + 16));
          v43 = *(_QWORD *)(a3 + 24) - v41;
          if ( v43 )
          {
            do
            {
              if ( !v43 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, a3, (ULONG_PTR)(a6 + 2), v40);
              v44 = *v42++;
              --v43;
              v45 = v44 >> 6;
              v40 += (v44 & 0x3F) * RtlpRvaCompressionTableScales[v45];
            }
            while ( (_DWORD)v45 != 3 );
            a6[2] = v40;
            a6[4] = (_DWORD)v42 - *(_DWORD *)(a3 + 16);
            if ( a6 != (unsigned int *)-4LL )
            {
              v37 = 0;
              v46 = *(_DWORD *)(a3 + 8);
              if ( v46 <= 1 )
              {
                if ( v46 == 1 )
                {
                  v52 = *(int **)(a3 + 48);
                  if ( v52 )
                    v37 = *v52;
                  else
                    v37 = 1;
                }
              }
              else
              {
                v47 = v39 * v46;
                v38 = 0LL;
                do
                {
                  if ( _bittest64(*(const signed __int64 **)(a3 + 40), (unsigned int)(v38 + v47)) )
                  {
                    v35 = *(_QWORD *)(a3 + 48);
                    if ( v35 )
                      v36 = *(_DWORD *)(v35 + 4 * v38);
                    else
                      v36 = 1 << v38;
                    v37 |= v36;
                  }
                  v38 = (unsigned int)(v38 + 1);
                }
                while ( (unsigned int)v38 < v46 );
              }
              a6[1] = v37;
            }
            v34 = a6[2];
          }
          else
          {
            v34 = 0;
          }
LABEL_47:
          v33 = v57;
        }
        while ( v34 );
        v11 = v33;
        *a6 = v34;
        v14 = v60;
      }
    }
    v16 = MiSplitPrivatePage((ULONG_PTR)v14, v65);
    if ( v16 < 0 )
      break;
    v20 = v56;
    v16 = MiCopyToUserVa((ULONG_PTR)v14, v65, PoolWithTag, v56);
    if ( v16 < 0 )
      break;
    v10 = v55;
    if ( v55 )
      **(_DWORD **)(a3 + 16) = v55;
    v14 += v20;
    v60 = v14;
    v17 = (int)v14;
    v15 = Size - v20;
    Size -= v20;
    v12 = v66;
  }
  v21 = v61;
  if ( v58 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( a3 )
  {
    if ( v16 >= 0 )
    {
LABEL_19:
      MiEliminateZeroPages(
        (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
        v62 & 0xFFFFFFFFFFFFF000uLL,
        v21 << 12);
      return (unsigned int)v16;
    }
    if ( v14 != (char *)v62 && v16 != -1073741818 )
    {
      v21 = (unsigned __int64)&v14[-(v62 & 0xFFFFFFFFFFFFF000uLL)] >> 12;
      goto LABEL_19;
    }
  }
  return (unsigned int)v16;
}
