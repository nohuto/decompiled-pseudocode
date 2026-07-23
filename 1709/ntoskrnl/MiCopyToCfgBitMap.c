/*
 * XREFs of MiCopyToCfgBitMap @ 0x1404D3670
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1400A5EA0 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1404D355C (MiPopulateCfgBitMap.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiEliminateZeroPages @ 0x1404D4270 (MiEliminateZeroPages.c)
 *     RtlEnumRvaListFirst @ 0x140579988 (RtlEnumRvaListFirst.c)
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
  unsigned int v10; // r15d
  unsigned __int64 v11; // r11
  char *PoolWithTag; // r13
  char *v13; // r14
  size_t v14; // r10
  int v15; // ebx
  int v16; // r8d
  size_t v17; // rdi
  unsigned int v18; // ebx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r15
  __int64 v24; // r8
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // r11d
  unsigned int v30; // r10d
  __int64 v31; // rax
  unsigned __int8 *v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  __int64 v35; // rdx
  int v36; // ebx
  unsigned int v37; // r8d
  int v38; // r10d
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // r11d
  unsigned int v42; // ecx
  unsigned int v43; // eax
  int *v44; // rax
  void *v45; // rsp
  char v46; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v47; // [rsp+100h] [rbp+0h]
  unsigned int v48; // [rsp+104h] [rbp+4h]
  unsigned int v49; // [rsp+108h] [rbp+8h]
  int v50; // [rsp+10Ch] [rbp+Ch]
  __int64 v51; // [rsp+110h] [rbp+10h]
  PVOID P; // [rsp+118h] [rbp+18h]
  char *v53; // [rsp+120h] [rbp+20h]
  size_t v54; // [rsp+128h] [rbp+28h]
  unsigned __int64 v55; // [rsp+130h] [rbp+30h]
  _RTL_BITMAP BitMapHeader; // [rsp+138h] [rbp+38h] BYREF
  __int64 v57; // [rsp+148h] [rbp+48h]
  __int64 v58; // [rsp+150h] [rbp+50h]
  ULONG_PTR v59; // [rsp+158h] [rbp+58h]

  v57 = a2;
  v55 = (unsigned __int64)Src;
  v59 = a3;
  v48 = 0;
  v10 = a5;
  v51 = a5;
  v50 = 0;
  v11 = 4096LL;
  v58 = 4096LL;
  if ( a3 <= 1 )
  {
    if ( a3 )
      PoolWithTag = (char *)qword_1403891A8;
    else
      PoolWithTag = (char *)qword_1403891B0;
    goto LABEL_36;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6554694Du);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = 256LL;
    v58 = 256LL;
    v45 = alloca(256LL);
    PoolWithTag = &v46;
LABEL_36:
    P = PoolWithTag;
    goto LABEL_4;
  }
  v50 = 1;
  v11 = 4096LL;
LABEL_4:
  v13 = Src;
  v53 = Src;
  v14 = Size;
  v54 = (Size >> 12) + (((Size & 0xFFF) + 4095 + ((unsigned __int16)Src & 0xFFF)) >> 12);
  v15 = 0;
  while ( v14 )
  {
    v16 = v11 - 1;
    if ( v11 - (((_DWORD)v11 - 1) & (unsigned int)v13) < v14 )
      v17 = (unsigned int)v11 - ((unsigned int)v13 & v16);
    else
      v17 = (unsigned int)v14;
    v49 = v17;
    if ( a3 > 1 )
    {
      if ( a8 == 1 )
      {
        v18 = v48;
        if ( v48 < *(_DWORD *)a3 )
        {
          v19 = (*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL * v48) - v51) & ~(v11 - 1);
          v20 = (2 * (v19 >> 4)) >> 3;
          if ( v20 >= v11 )
          {
            v51 += v19;
            v13 += v20;
            v53 = v13;
            v14 -= v20;
            Size = v14;
          }
        }
        if ( v11 - (((_DWORD)v11 - 1) & (unsigned int)v13) < v14 )
          v17 = (unsigned int)v11 - ((unsigned int)v13 & v16);
        else
          v17 = (unsigned int)v14;
        memmove(PoolWithTag, v13, (unsigned int)v17);
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v17;
        while ( v18 < *(_DWORD *)a3 )
        {
          v24 = *(_QWORD *)(a3 + 8) + 16LL * v18;
          v25 = *(_DWORD *)v24 - v51;
          if ( v25 >= (unsigned int)v17 >> 1 << 7 )
            break;
          v26 = v25 >> 4;
          if ( (*(_BYTE *)(v24 + 8) & 5) != 0 )
          {
            _bittestandreset((signed __int32 *)PoolWithTag, 2 * v26 + 1);
            _bittestandset((signed __int32 *)PoolWithTag, 2 * v26);
          }
          else
          {
            RtlClearBits(&BitMapHeader, 2 * v26, 2u);
          }
          v48 = ++v18;
        }
        v51 += (unsigned int)v17 >> 1 << 7;
      }
      else if ( !a8 )
      {
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v17;
        RtlClearAllBits(&BitMapHeader);
        v27 = v10 + ((unsigned int)v17 >> 1 << 7);
        v47 = v27;
        if ( !*a6 )
        {
          *a6 = RtlEnumRvaListFirst(a3, a6 + 2, a6 + 1);
          v27 = v47;
        }
        v28 = *a6;
        while ( v28 )
        {
          if ( v28 >= v10 )
          {
            if ( v28 >= v27 )
              break;
            v42 = a6[1];
            if ( (v42 & 1) != 0 )
            {
              if ( (v28 & 0xF) != 0 )
              {
                RtlSetBits(&BitMapHeader, 2 * ((v28 - v10) >> 4), 2u);
              }
              else
              {
                v43 = 2 * ((v28 - v10) >> 4);
                if ( (v42 & 4) != 0 )
                {
                  _bittestandreset((signed __int32 *)PoolWithTag, v43);
                  _bittestandset((signed __int32 *)PoolWithTag, v43 + 1);
                }
                else
                {
                  _bittestandset((signed __int32 *)PoolWithTag, v43);
                  _bittestandreset((signed __int32 *)PoolWithTag, v43 + 1);
                }
              }
            }
          }
          v29 = ++a6[3];
          v30 = a6[2];
          v31 = a6[4];
          v32 = (unsigned __int8 *)(v31 + *(_QWORD *)(a3 + 16));
          v33 = *(_QWORD *)(a3 + 24) - v31;
          if ( v33 )
          {
            do
            {
              if ( !v33 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, a3, (ULONG_PTR)(a6 + 2), v30);
              v34 = *v32++;
              --v33;
              v35 = v34 >> 6;
              v30 += (v34 & 0x3F) * RtlpRvaCompressionTableScales[v35];
            }
            while ( (_DWORD)v35 != 3 );
            a6[2] = v30;
            a6[4] = (_DWORD)v32 - *(_DWORD *)(a3 + 16);
            if ( a6 != (unsigned int *)-4LL )
            {
              v36 = 0;
              v37 = *(_DWORD *)(a3 + 8);
              if ( v37 <= 1 )
              {
                if ( v37 == 1 )
                {
                  v44 = *(int **)(a3 + 48);
                  if ( v44 )
                    v36 = *v44;
                  else
                    v36 = 1;
                }
              }
              else
              {
                v38 = v29 * v37;
                v39 = 0LL;
                do
                {
                  if ( _bittest64(*(const signed __int64 **)(a3 + 40), (unsigned int)(v39 + v38)) )
                  {
                    v40 = *(_QWORD *)(a3 + 48);
                    if ( v40 )
                      v41 = *(_DWORD *)(v40 + 4 * v39);
                    else
                      v41 = 1 << v39;
                    v36 |= v41;
                  }
                  v39 = (unsigned int)(v39 + 1);
                }
                while ( (unsigned int)v39 < v37 );
              }
              a6[1] = v36;
            }
            v28 = a6[2];
            v27 = v47;
          }
          else
          {
            v28 = 0;
            v27 = v47;
          }
        }
        v10 = v27;
        *a6 = v28;
        v13 = v53;
        v17 = v49;
      }
    }
    v15 = MiSplitPrivatePage((unsigned __int64)v13, v57);
    if ( v15 < 0 )
      break;
    v15 = MiCopyToUserVa((unsigned __int64)v13, v57, PoolWithTag, v17);
    if ( v15 < 0 )
      break;
    if ( v48 )
      **(_DWORD **)(a3 + 16) = v48;
    v13 += v17;
    v53 = v13;
    v14 = Size - v17;
    Size -= v17;
    v11 = v58;
  }
  v21 = v54;
  v22 = v55;
  if ( v50 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( a3 )
  {
    if ( v15 >= 0 )
    {
LABEL_27:
      MiEliminateZeroPages(
        &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
        v22 & 0xFFFFFFFFFFFFF000uLL,
        v21 << 12);
      return (unsigned int)v15;
    }
    if ( v13 != (char *)v22 && v15 != -1073741818 )
    {
      v21 = (unsigned __int64)&v13[-(v22 & 0xFFFFFFFFFFFFF000uLL)] >> 12;
      goto LABEL_27;
    }
  }
  return (unsigned int)v15;
}
