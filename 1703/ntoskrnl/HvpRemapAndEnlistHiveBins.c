/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x14048D724
 * Callers:
 *     HvLoadHive @ 0x14043A6FC (HvLoadHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvpFreeMap @ 0x140459130 (HvpFreeMap.c)
 *     HvpEnlistBinInMap @ 0x14048D860 (HvpEnlistBinInMap.c)
 *     HvpAllocateBin @ 0x14048DC6C (HvpAllocateBin.c)
 *     HvpValidateLoadedBin @ 0x14048DDFC (HvpValidateLoadedBin.c)
 *     HvpFreeBin @ 0x1404D289C (HvpFreeBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x140515304 (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // r15d
  char v2; // r13
  unsigned int v3; // edi
  unsigned int v5; // r12d
  __int64 CellMap; // rax
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rax
  _DWORD *v10; // r14
  unsigned int v11; // eax
  int v12; // eax
  int Bin; // esi
  unsigned int v14; // r9d
  _DWORD *v15; // r13
  char *v17; // rcx
  char *v18; // rdx
  unsigned int v19; // r8d
  __int64 v20; // rax
  unsigned int v21; // r8d
  int v22; // eax
  unsigned int v23; // r14d
  char *v24; // rsi
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rdx
  char *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // r14d
  unsigned int v34; // [rsp+40h] [rbp-39h]
  _DWORD *v35; // [rsp+48h] [rbp-31h] BYREF
  void *v36; // [rsp+50h] [rbp-29h] BYREF
  __int64 v37; // [rsp+58h] [rbp-21h] BYREF
  void *v38; // [rsp+60h] [rbp-19h] BYREF
  __int64 v39; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-9h]
  unsigned __int64 v41; // [rsp+78h] [rbp-1h]
  void *v42; // [rsp+80h] [rbp+7h] BYREF
  char v43; // [rsp+E0h] [rbp+67h]
  unsigned int Size; // [rsp+E8h] [rbp+6Fh]
  unsigned int Sizea; // [rsp+E8h] [rbp+6Fh]
  unsigned int v46; // [rsp+F0h] [rbp+77h]
  int v47; // [rsp+F8h] [rbp+7Fh]
  unsigned __int64 v48; // [rsp+F8h] [rbp+7Fh]

  v1 = 0;
  v2 = 0;
  v46 = 0;
  v3 = 0;
  v43 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
  v34 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v3);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x5B4uLL);
      v7 = *(_QWORD *)(CellMap + 16);
      v8 = *(_DWORD *)(CellMap + 32);
      v9 = *(_QWORD *)(CellMap + 8);
      v40 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
      v41 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v7 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        v7 = v9;
      v10 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned __int8)HvpValidateLoadedBin(
                              v10,
                              v3,
                              *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL)) )
      {
        v11 = v10[2];
        if ( v11 == v8 )
        {
          v12 = HvpEnlistBinInMap(BugCheckParameter2, v3);
          Bin = v12;
          if ( v12 < 0 )
            return (unsigned int)Bin;
          if ( v12 == 1073741833 )
          {
            HvpMarkDirty(BugCheckParameter2);
            v2 = 1;
            v43 = 1;
          }
          v3 += v10[2];
        }
        else
        {
          if ( v11 >= v8 )
          {
            v19 = v8 + v3;
            if ( v8 < v11 )
            {
              do
              {
                v20 = HvpGetCellMap(BugCheckParameter2, v19);
                if ( !v20 )
                  KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v21, 0x6B5uLL);
                v22 = *(_DWORD *)(v20 + 32);
                v8 += v22;
                v19 = v22 + v21;
              }
              while ( v8 < v10[2] );
            }
            Bin = HvpAllocateBin(BugCheckParameter2, v8, 0, v3, 825445699, (__int64)&v39, (__int64)&v42);
            if ( Bin < 0 )
              return (unsigned int)Bin;
            v23 = v3;
            v24 = (char *)v39;
            if ( v42 )
              v24 = (char *)v42;
            Sizea = 0;
            if ( v8 )
            {
              do
              {
                v25 = HvpGetCellMap(BugCheckParameter2, v23);
                if ( !v25 )
                  KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v23, 0x6E4uLL);
                v27 = *(_QWORD *)(v25 + 8);
                v28 = *(unsigned int *)(v25 + 32);
                v40 = v27 & 0xFFFFFFFFFFFFFFF0uLL;
                v29 = *(_QWORD *)(v25 + 16);
                v48 = v29 & 0xFFFFFFFFFFFFFFF0uLL;
                if ( (v29 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
                  v29 = v27;
                v30 = (char *)(v29 & 0xFFFFFFFFFFFFFFF0uLL);
                if ( v24 != v30 )
                {
                  memmove(v24, v30, (unsigned int)v28);
                  v26 = Sizea;
                }
                Sizea = v28 + v26;
                v24 += v28;
                v23 += v28;
                HvpFreeBin(BugCheckParameter2, v28, 0, v40, v48);
              }
              while ( Sizea < v8 );
              v5 = v34;
            }
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v3, 0LL);
            v39 = 0LL;
            v42 = 0LL;
          }
          else
          {
            v46 = v10[2];
            v47 = v11 + v3;
            Bin = HvpAllocateBin(BugCheckParameter2, v11, 0, v3, 825445699, (__int64)&v35, (__int64)&v36);
            if ( Bin < 0 )
              return (unsigned int)Bin;
            v15 = v35;
            if ( v36 )
              v15 = v36;
            if ( v10 != v15 )
              memmove(v15, v10, (unsigned int)v10[2]);
            Size = v8 - v10[2];
            Bin = HvpAllocateBin(BugCheckParameter2, Size, 0, v47, 825445699, (__int64)&v37, (__int64)&v38);
            if ( Bin < 0 )
            {
              v1 = v46;
              goto LABEL_18;
            }
            v17 = (char *)v37;
            if ( v38 )
              v17 = (char *)v38;
            v18 = (char *)v10 + (unsigned int)v10[2];
            if ( v17 != v18 )
              memmove(v17, v18, Size);
            HvpPointMapEntriesToBuffer(BugCheckParameter2, v47, 0LL);
            Bin = HvpEnlistBinInMap(BugCheckParameter2, v3);
            HvpFreeBin(BugCheckParameter2, v8, 0, v41, v40);
            if ( Bin == 1073741833 )
            {
              HvpMarkDirty(BugCheckParameter2);
              v43 = 1;
            }
            if ( Bin < 0 )
              return (unsigned int)Bin;
            v3 += v15[2];
            v35 = 0LL;
            v36 = 0LL;
            v37 = 0LL;
            v38 = 0LL;
          }
          v2 = v43;
        }
      }
      else
      {
        if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
          return (unsigned int)-1073741492;
        v10[1] = v3;
        v10[2] = 4096;
        *v10 = 1852400232;
        v10[8] = 4064;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        HvpMarkDirty(BugCheckParameter2);
        v2 = 1;
        v43 = 1;
      }
      if ( v3 >= v5 )
      {
        v1 = v46;
        break;
      }
    }
  }
  while ( v3 < *(_DWORD *)(BugCheckParameter2 + 1400) )
  {
    v31 = HvpGetCellMap(BugCheckParameter2, v3);
    v32 = v31;
    if ( !v31 )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x755uLL);
    v33 = *(_DWORD *)(v31 + 32);
    HvpFreeBin(
      BugCheckParameter2,
      v33,
      0,
      *(_DWORD *)(v31 + 8) & 0xFFFFFFF0,
      *(_QWORD *)(v31 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    while ( v33 )
    {
      *(_QWORD *)(v32 + 8) = 0LL;
      v3 += 4096;
      *(_QWORD *)(v32 + 16) = 0LL;
      *(_QWORD *)v32 = 0LL;
      *(_DWORD *)(v32 + 32) = 0;
      v33 -= 4096;
      if ( !v33 )
        break;
      v32 = HvpGetCellMap(BugCheckParameter2, v3);
      if ( !v32 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x770uLL);
    }
  }
  v14 = *(_DWORD *)(BugCheckParameter2 + 1400);
  if ( v5 < v14 )
    HvpFreeMap(BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 1408), ((v5 - 1) >> 21) + 1, (v14 - 1) >> 21);
  *(_DWORD *)(BugCheckParameter2 + 1400) = v5;
  if ( v2 )
  {
    return 1073741833;
  }
  else
  {
    Bin = 0;
    v15 = 0LL;
LABEL_18:
    if ( v15 )
      (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(v15, v1);
  }
  return (unsigned int)Bin;
}
