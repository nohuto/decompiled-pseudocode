/*
 * XREFs of MiCopyToCfgBitMap @ 0x1405145B0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140063450 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x14049B024 (MiPopulateCfgBitMap.c)
 * Callees:
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlEnumRvaListFirst @ 0x140441CDC (RtlEnumRvaListFirst.c)
 *     MiEliminateZeroPages @ 0x1404CCB30 (MiEliminateZeroPages.c)
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
  __int64 v11; // r9
  char *PoolWithTag; // r13
  char *v13; // r14
  size_t v14; // r11
  int v15; // ebx
  int v16; // edx
  __int64 v17; // r8
  size_t v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r15
  unsigned int v22; // ebx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // r11d
  unsigned int v30; // r10d
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rdx
  int v34; // ebx
  int v35; // r10d
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // r11d
  unsigned int v39; // ecx
  unsigned int v40; // eax
  int *v41; // rax
  void *v42; // rsp
  char v43; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v44; // [rsp+100h] [rbp+0h]
  unsigned int v45; // [rsp+104h] [rbp+4h]
  unsigned int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  __int64 v48; // [rsp+110h] [rbp+10h]
  unsigned __int64 v49; // [rsp+118h] [rbp+18h]
  char *v50; // [rsp+120h] [rbp+20h]
  size_t v51; // [rsp+128h] [rbp+28h]
  char *v52; // [rsp+130h] [rbp+30h]
  unsigned __int64 v53; // [rsp+138h] [rbp+38h]
  _RTL_BITMAP BitMapHeader; // [rsp+140h] [rbp+40h] BYREF
  __int64 v55; // [rsp+150h] [rbp+50h]
  ULONG_PTR v56; // [rsp+158h] [rbp+58h]

  v55 = a2;
  v53 = (unsigned __int64)Src;
  v56 = a3;
  v45 = 0;
  v10 = a5;
  v48 = a5;
  v47 = 0;
  v11 = 4096LL;
  v49 = 4096LL;
  if ( a3 <= 1 )
  {
    PoolWithTag = (char *)qword_14036CEE8;
    if ( !a3 )
      PoolWithTag = (char *)qword_14036CEF0;
    goto LABEL_37;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6554694Du);
  v52 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = 256LL;
    v49 = 256LL;
    v42 = alloca(256LL);
    PoolWithTag = &v43;
LABEL_37:
    v52 = PoolWithTag;
    goto LABEL_4;
  }
  v47 = 1;
  v11 = 4096LL;
LABEL_4:
  v13 = Src;
  v50 = Src;
  v14 = Size;
  v51 = (Size >> 12) + ((unsigned __int64)(((unsigned __int16)Src & 0xFFF) + (unsigned int)(Size & 0xFFF) + 4095) >> 12);
  v15 = 0;
  while ( v14 )
  {
    v16 = v11 - 1;
    v17 = (unsigned int)(v11 - 1);
    if ( v11 - (unsigned __int64)((unsigned int)v17 & (unsigned int)v13) < v14 )
      v18 = (unsigned int)v11 - ((unsigned int)v13 & v16);
    else
      v18 = (unsigned int)v14;
    v46 = v18;
    if ( a3 > 1 )
    {
      if ( a8 == 1 )
      {
        v22 = v45;
        if ( v45 < *(_DWORD *)a3 )
        {
          v23 = ~(v11 - 1);
          v24 = (2 * (((unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL * v45) - v48) >> 4) & (v23 >> 4))) >> 3;
          if ( v24 >= v49 )
          {
            v48 += (*(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL * v45) - v48) & v23;
            v13 += v24;
            v50 = v13;
            v14 -= v24;
            Size = v14;
          }
          v11 = v49;
        }
        if ( v11 - (unsigned __int64)((unsigned int)v17 & (unsigned int)v13) < v14 )
          v18 = (unsigned int)v11 - ((unsigned int)v13 & v16);
        else
          v18 = (unsigned int)v14;
        memmove(PoolWithTag, v13, (unsigned int)v18);
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v18;
        while ( v22 < *(_DWORD *)a3 )
        {
          v17 = *(_QWORD *)(a3 + 8) + 16LL * v22;
          v25 = *(_DWORD *)v17 - v48;
          if ( v25 >= (unsigned int)v18 >> 1 << 7 )
            break;
          v26 = v25 >> 4;
          if ( (*(_BYTE *)(v17 + 8) & 5) != 0 )
          {
            _bittestandreset((signed __int32 *)PoolWithTag, 2 * v26 + 1);
            _bittestandset((signed __int32 *)PoolWithTag, 2 * v26);
          }
          else
          {
            RtlClearBits(&BitMapHeader, 2 * v26, 2u);
          }
          v45 = ++v22;
        }
        v48 += (unsigned int)v18 >> 1 << 7;
      }
      else if ( !a8 )
      {
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v18;
        RtlClearAllBits(&BitMapHeader);
        v27 = v10 + ((unsigned int)v18 >> 1 << 7);
        v44 = v27;
        if ( !*a6 )
        {
          *a6 = RtlEnumRvaListFirst(a3, a6 + 2, a6 + 1);
          v27 = v44;
        }
        v28 = *a6;
        while ( v28 )
        {
          if ( v28 >= v10 )
          {
            if ( v28 >= v27 )
              break;
            v39 = a6[1];
            if ( (v39 & 1) != 0 )
            {
              if ( (v28 & 0xF) != 0 )
              {
                RtlSetBits(&BitMapHeader, 2 * ((v28 - v10) >> 4), 2u);
              }
              else
              {
                v40 = 2 * ((v28 - v10) >> 4);
                if ( (v39 & 0x10) != 0 )
                {
                  _bittestandreset((signed __int32 *)PoolWithTag, v40);
                  _bittestandset((signed __int32 *)PoolWithTag, v40 + 1);
                }
                else
                {
                  _bittestandset((signed __int32 *)PoolWithTag, v40);
                  _bittestandreset((signed __int32 *)PoolWithTag, v40 + 1);
                }
              }
            }
          }
          v29 = ++a6[3];
          v30 = a6[2];
          v31 = a6[4];
          v17 = v31 + *(_QWORD *)(a3 + 16);
          v11 = *(_QWORD *)(a3 + 24) - v31;
          if ( v11 )
          {
            do
            {
              if ( !v11 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, a3, (ULONG_PTR)(a6 + 2), v30);
              v32 = *(unsigned __int8 *)v17++;
              --v11;
              v33 = v32 >> 6;
              v30 += (v32 & 0x3F) * RtlpRvaCompressionTableScales[v33];
            }
            while ( (_DWORD)v33 != 3 );
            a6[2] = v30;
            v17 = (unsigned int)(v17 - *(_DWORD *)(a3 + 16));
            a6[4] = v17;
            if ( a6 != (unsigned int *)-4LL )
            {
              v34 = 0;
              v17 = *(unsigned int *)(a3 + 8);
              if ( (unsigned int)v17 <= 1 )
              {
                if ( (_DWORD)v17 == 1 )
                {
                  v41 = *(int **)(a3 + 48);
                  if ( v41 )
                    v34 = *v41;
                  else
                    v34 = 1;
                }
              }
              else
              {
                v35 = v29 * v17;
                v36 = 0LL;
                v11 = *(_QWORD *)(a3 + 40);
                do
                {
                  if ( _bittest64((const signed __int64 *)v11, (unsigned int)(v36 + v35)) )
                  {
                    v37 = *(_QWORD *)(a3 + 48);
                    if ( v37 )
                      v38 = *(_DWORD *)(v37 + 4 * v36);
                    else
                      v38 = 1 << v36;
                    v34 |= v38;
                  }
                  v36 = (unsigned int)(v36 + 1);
                }
                while ( (unsigned int)v36 < (unsigned int)v17 );
              }
              a6[1] = v34;
            }
            v28 = a6[2];
            v27 = v44;
          }
          else
          {
            v28 = 0;
            v27 = v44;
          }
        }
        v10 = v27;
        *a6 = v28;
        v13 = v50;
        v18 = v46;
      }
    }
    v15 = MiSplitPrivatePage((ULONG_PTR)v13, v55, v17, v11);
    if ( v15 < 0 )
      break;
    v15 = MiCopyToUserVa((ULONG_PTR)v13, v55, PoolWithTag, v18);
    if ( v15 < 0 )
      break;
    if ( v45 )
      **(_DWORD **)(a3 + 16) = v45;
    v13 += v18;
    v50 = v13;
    v14 = Size - v18;
    Size -= v18;
    v11 = v49;
  }
  v19 = v51;
  v20 = v53;
  if ( v47 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( a3 )
  {
    if ( v15 >= 0 )
    {
LABEL_18:
      MiEliminateZeroPages(
        (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
        v20 & 0xFFFFFFFFFFFFF000uLL,
        v19 << 12);
      return (unsigned int)v15;
    }
    if ( v13 != (char *)v20 && v15 != -1073741818 )
    {
      v19 = (unsigned __int64)&v13[-(v20 & 0xFFFFFFFFFFFFF000uLL)] >> 12;
      goto LABEL_18;
    }
  }
  return (unsigned int)v15;
}
