/*
 * XREFs of sub_18010840C @ 0x18010840C
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180106790 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x180001CE0 (PssNtFreeSnapshot.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x1800A5A40 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18010840C(__int64 a1, void *a2, PVOID *a3, int a4)
{
  PVOID v7; // r14
  unsigned int v8; // r15d
  unsigned __int64 v9; // r12
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  void *v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  void *v28; // rdx
  void *v29; // rdx
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD Buffer[142]; // [rsp+60h] [rbp-A0h] BYREF

  v36 = a4;
  v7 = 0LL;
  BaseAddress = 0LL;
  memset(Buffer, 0, 0x468uLL);
  v8 = -1;
  v9 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v9 <= 0xFFFFFFFF )
  {
    if ( (unsigned int)v9 < 0xFFFFFB98 )
      v8 = v9 + 1128;
    v10 = (unsigned int)v9 >= 0xFFFFFB98 ? 0xC0000095 : 0;
    if ( (unsigned int)(v9 + 1128) >= 0x468 )
    {
      v11 = 8LL;
      v12 = Buffer;
      v13 = (_OWORD *)a1;
      do
      {
        v14 = v13[1];
        *v12 = *v13;
        v15 = v13[2];
        v12[1] = v14;
        v16 = v13[3];
        v12[2] = v15;
        v17 = v13[4];
        v12[3] = v16;
        v18 = v13[5];
        v12[4] = v17;
        v19 = v13[6];
        v12[5] = v18;
        v20 = v13[7];
        v13 += 8;
        v12[6] = v19;
        v12 += 8;
        *(v12 - 1) = v20;
        --v11;
      }
      while ( v11 );
      v21 = *(void **)(a1 + 872);
      v22 = v13[1];
      *v12 = *v13;
      v23 = v13[2];
      v12[1] = v22;
      v24 = v13[3];
      v12[2] = v23;
      v25 = v13[4];
      v12[3] = v24;
      v26 = v13[5];
      v27 = *((_QWORD *)v13 + 12);
      v12[4] = v25;
      v12[5] = v26;
      *((_QWORD *)v12 + 12) = v27;
      Buffer[109] = 0LL;
      Buffer[112] = 0LL;
      Buffer[115] = 0LL;
      Buffer[118] = 0LL;
      Buffer[122] = 0LL;
      Buffer[126] = 0LL;
      if ( v21 )
      {
        v10 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v21, a2, (PHANDLE)&Buffer[109], 0, 0, 2u);
        if ( v10 < 0 )
          goto LABEL_29;
      }
      v28 = *(void **)(a1 + 896);
      if ( v28 )
      {
        v10 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28, a2, (PHANDLE)&Buffer[112], 0, 0, 2u);
        if ( v10 < 0 )
          goto LABEL_29;
      }
      v29 = *(void **)(a1 + 920);
      if ( v29 )
      {
        v10 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, a2, (PHANDLE)&Buffer[115], 0, 0, 2u);
        if ( v10 < 0 )
          goto LABEL_29;
      }
      v30 = *(void **)(a1 + 944);
      if ( v30 )
      {
        v10 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, a2, (PHANDLE)&Buffer[118], 0, 0, 2u);
        if ( v10 < 0 )
          goto LABEL_29;
      }
      v31 = *(void **)(a1 + 976);
      if ( v31 )
      {
        v10 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, (PHANDLE)&Buffer[122], 0, 0, 2u);
        if ( v10 < 0 )
          goto LABEL_29;
      }
      v32 = *(void **)(a1 + 1008);
      if ( v32 )
      {
        v10 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, a2, (PHANDLE)&Buffer[126], 0, 0, 2u);
        if ( v10 < 0 )
          goto LABEL_29;
      }
      BaseAddress = 0LL;
      RegionSize[0] = v8;
      v10 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
      if ( v10 < 0 )
        goto LABEL_29;
      HIDWORD(Buffer[0]) = HIDWORD(Buffer[0]) & 0xFFFFFFF8 | 1;
      if ( *(_QWORD *)(a1 + 904) )
        Buffer[113] = (char *)BaseAddress + 1128;
      if ( *(_WORD *)(a1 + 280) )
        Buffer[36] = (char *)BaseAddress + 296;
      v10 = ZwWriteVirtualMemory(a2, BaseAddress, Buffer, v8, 0LL);
      if ( v10 < 0
        || (v33 = *(void **)(a1 + 904)) != 0LL
        && (v10 = ZwWriteVirtualMemory(a2, (PVOID)Buffer[113], v33, (unsigned int)v9, 0LL), v10 < 0) )
      {
LABEL_29:
        v7 = BaseAddress;
LABEL_31:
        if ( v7 )
        {
          RegionSize[0] = v8;
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
        }
        goto LABEL_33;
      }
      v7 = BaseAddress;
      v10 = 0;
      *a3 = BaseAddress;
    }
    if ( v10 >= 0 )
      goto LABEL_45;
    goto LABEL_31;
  }
  v10 = -1073741675;
LABEL_33:
  if ( Buffer[126] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[126], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[122] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[122], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[115] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[115], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[118] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[118], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[112] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[112], 0LL, 0LL, 0, 0, 1u);
  if ( Buffer[109] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[109], 0LL, 0LL, 0, 0, 1u);
LABEL_45:
  if ( (v36 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v10;
}
