/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x18005D2A4
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x18005D680 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x18005D700 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A0800 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A0840 (ZwDuplicateObject.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, void *a2, PVOID *a3, int a4)
{
  PVOID v7; // r14
  unsigned int v8; // r15d
  unsigned __int64 v9; // rax
  unsigned int v10; // r13d
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  _OWORD *v13; // rax
  _QWORD *v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  void *v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  void *v34; // rdx
  void *v35; // rdx
  void *v36; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD Buffer[144]; // [rsp+60h] [rbp-A0h] BYREF

  v39 = a4;
  v7 = 0LL;
  BaseAddress = 0LL;
  v8 = 0;
  memset(Buffer, 0, 0x478uLL);
  v9 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = *(_DWORD *)(a1 + 888) << 6;
  v11 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v9 > 0xFFFFFFFF )
    goto LABEL_30;
  v8 = -1;
  if ( v10 < 0xFFFFFB88 )
    v8 = v10 + 1144;
  v11 = v10 >= 0xFFFFFB88 ? 0xC0000095 : 0;
  if ( v10 + 1144 < 0x478 )
  {
LABEL_30:
    if ( v11 >= 0 )
      goto LABEL_31;
    goto LABEL_40;
  }
  v12 = 8LL;
  v13 = (_OWORD *)a1;
  v14 = Buffer;
  do
  {
    v15 = v13[1];
    *(_OWORD *)v14 = *v13;
    v16 = v13[2];
    *((_OWORD *)v14 + 1) = v15;
    v17 = v13[3];
    *((_OWORD *)v14 + 2) = v16;
    v18 = v13[4];
    *((_OWORD *)v14 + 3) = v17;
    v19 = v13[5];
    *((_OWORD *)v14 + 4) = v18;
    v20 = v13[6];
    *((_OWORD *)v14 + 5) = v19;
    v21 = v13[7];
    v13 += 8;
    *((_OWORD *)v14 + 6) = v20;
    v14 += 16;
    *((_OWORD *)v14 - 1) = v21;
    --v12;
  }
  while ( v12 );
  v22 = *(void **)(a1 + 872);
  v23 = v13[1];
  *(_OWORD *)v14 = *v13;
  v24 = v13[2];
  *((_OWORD *)v14 + 1) = v23;
  v25 = v13[3];
  *((_OWORD *)v14 + 2) = v24;
  v26 = v13[4];
  *((_OWORD *)v14 + 3) = v25;
  v27 = v13[5];
  *((_OWORD *)v14 + 4) = v26;
  v28 = v13[6];
  v29 = *((_QWORD *)v13 + 14);
  *((_OWORD *)v14 + 5) = v27;
  *((_OWORD *)v14 + 6) = v28;
  v14[14] = v29;
  Buffer[109] = 0LL;
  Buffer[112] = 0LL;
  Buffer[115] = 0LL;
  Buffer[118] = 0LL;
  Buffer[122] = 0LL;
  Buffer[126] = 0LL;
  Buffer[141] = 0LL;
  if ( !v22
    || (v11 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v22, a2, (PHANDLE)&Buffer[109], 0, 0, 2u), v11 >= 0) )
  {
    v30 = *(void **)(a1 + 896);
    if ( !v30
      || (v11 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, a2, (PHANDLE)&Buffer[112], 0, 0, 2u), v11 >= 0) )
    {
      v31 = *(void **)(a1 + 920);
      if ( !v31
        || (v11 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, (PHANDLE)&Buffer[115], 0, 0, 2u), v11 >= 0) )
      {
        v32 = *(void **)(a1 + 944);
        if ( !v32
          || (v11 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, a2, (PHANDLE)&Buffer[118], 0, 0, 2u), v11 >= 0) )
        {
          v33 = *(void **)(a1 + 976);
          if ( !v33
            || (v11 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, a2, (PHANDLE)&Buffer[122], 0, 0, 2u), v11 >= 0) )
          {
            v34 = *(void **)(a1 + 1008);
            if ( !v34
              || (v11 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v34, a2, (PHANDLE)&Buffer[126], 0, 0, 2u),
                  v11 >= 0) )
            {
              v35 = *(void **)(a1 + 1128);
              if ( !v35
                || (v11 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v35, a2, (PHANDLE)&Buffer[141], 0, 0, 2u),
                    v11 >= 0) )
              {
                BaseAddress = 0LL;
                RegionSize[0] = v8;
                v11 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
                if ( v11 >= 0 )
                {
                  HIDWORD(Buffer[0]) = HIDWORD(Buffer[0]) & 0xFFFFFFF8 | 1;
                  if ( *(_QWORD *)(a1 + 904) )
                    Buffer[113] = (char *)BaseAddress + 1144;
                  if ( *(_WORD *)(a1 + 280) )
                    Buffer[36] = (char *)BaseAddress + 296;
                  v11 = NtWriteVirtualMemory(a2, BaseAddress, Buffer, v8, 0LL);
                  if ( v11 >= 0 )
                  {
                    v36 = *(void **)(a1 + 904);
                    if ( !v36 || (v11 = NtWriteVirtualMemory(a2, (PVOID)Buffer[113], v36, v10, 0LL), v11 >= 0) )
                    {
                      v7 = BaseAddress;
                      v11 = 0;
                      *a3 = BaseAddress;
                      goto LABEL_30;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v7 = BaseAddress;
LABEL_40:
  if ( v7 )
  {
    RegionSize[0] = v8;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, 0x8000u);
  }
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
  if ( Buffer[141] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[141], 0LL, 0LL, 0, 0, 1u);
LABEL_31:
  if ( (v39 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v11;
}
