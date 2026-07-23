/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18005E2A4
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x18005D680 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A0800 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A0840 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A08A0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010B890 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        HANDLE SourceProcessHandle,
        PVOID *a4,
        char a5)
{
  PVOID *v8; // r12
  unsigned int v9; // r13d
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  HANDLE v23; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  SIZE_T v32; // r12
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v35; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v39; // [rsp+68h] [rbp-98h]
  PVOID v40; // [rsp+70h] [rbp-90h]
  _QWORD v41[144]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD Buffer[218]; // [rsp+500h] [rbp+400h] BYREF
  HANDLE SourceHandle; // [rsp+868h] [rbp+768h]
  unsigned int v44; // [rsp+878h] [rbp+778h]
  HANDLE v45; // [rsp+880h] [rbp+780h]
  __int64 v46; // [rsp+888h] [rbp+788h]
  HANDLE v47; // [rsp+898h] [rbp+798h]
  HANDLE v48; // [rsp+8B0h] [rbp+7B0h]
  HANDLE v49; // [rsp+8D0h] [rbp+7D0h]
  HANDLE v50; // [rsp+8F0h] [rbp+7F0h]
  HANDLE v51; // [rsp+968h] [rbp+868h]

  v40 = BaseAddress;
  v39 = a4;
  BaseAddressa = 0LL;
  v35 = 0LL;
  *a4 = 0LL;
  v8 = a4;
  v9 = 0;
  memset(v41, 0, 0x478uLL);
  v10 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x478uLL, &BufferSize);
  if ( v10 >= 0 )
  {
    if ( BufferSize == 1144 )
    {
      if ( Buffer[0] == 1146311504 )
      {
        v11 = (unsigned __int64)v44 << 6;
        v12 = 0xFFFFFFFFLL;
        if ( v11 <= 0xFFFFFFFF )
          v12 = (unsigned int)v11;
        v10 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v11 > 0xFFFFFFFF )
          goto LABEL_43;
        v9 = -1;
        if ( (unsigned int)v12 < 0xFFFFFB88 )
          v9 = v12 + 1144;
        v10 = (unsigned int)v12 >= 0xFFFFFB88 ? 0xC0000095 : 0;
        if ( (unsigned int)(v12 + 1144) < 0x478 )
        {
LABEL_43:
          if ( v10 >= 0 )
            goto LABEL_44;
          goto LABEL_54;
        }
        v13 = 8LL;
        v14 = v41;
        v15 = Buffer;
        do
        {
          v16 = v15[1];
          *(_OWORD *)v14 = *v15;
          v17 = v15[2];
          *((_OWORD *)v14 + 1) = v16;
          v18 = v15[3];
          *((_OWORD *)v14 + 2) = v17;
          v19 = v15[4];
          *((_OWORD *)v14 + 3) = v18;
          v20 = v15[5];
          *((_OWORD *)v14 + 4) = v19;
          v21 = v15[6];
          *((_OWORD *)v14 + 5) = v20;
          v22 = v15[7];
          v15 += 8;
          *((_OWORD *)v14 + 6) = v21;
          v14 += 16;
          *((_OWORD *)v14 - 1) = v22;
          --v13;
        }
        while ( v13 );
        v23 = SourceHandle;
        v24 = v15[1];
        *(_OWORD *)v14 = *v15;
        v25 = v15[2];
        *((_OWORD *)v14 + 1) = v24;
        v26 = v15[3];
        *((_OWORD *)v14 + 2) = v25;
        v27 = v15[4];
        *((_OWORD *)v14 + 3) = v26;
        v28 = v15[5];
        *((_OWORD *)v14 + 4) = v27;
        v29 = v15[6];
        v30 = *((_QWORD *)v15 + 14);
        *((_OWORD *)v14 + 5) = v28;
        *((_OWORD *)v14 + 6) = v29;
        v14[14] = v30;
        v41[109] = 0LL;
        v41[112] = 0LL;
        v41[115] = 0LL;
        v41[118] = 0LL;
        v41[122] = 0LL;
        v41[126] = 0LL;
        v41[141] = 0LL;
        if ( !v23
          || (v10 = ZwDuplicateObject(ProcessHandle, v23, SourceProcessHandle, (PHANDLE)&v41[109], 0, 0, 2u), v10 >= 0) )
        {
          if ( !v45
            || (v10 = ZwDuplicateObject(ProcessHandle, v45, SourceProcessHandle, (PHANDLE)&v41[112], 0, 0, 2u), v10 >= 0) )
          {
            if ( !v47
              || (v10 = ZwDuplicateObject(ProcessHandle, v47, SourceProcessHandle, (PHANDLE)&v41[115], 0, 0, 2u),
                  v10 >= 0) )
            {
              if ( !v48
                || (v10 = ZwDuplicateObject(ProcessHandle, v48, SourceProcessHandle, (PHANDLE)&v41[118], 0, 0, 2u),
                    v10 >= 0) )
              {
                if ( !v49
                  || (v10 = ZwDuplicateObject(ProcessHandle, v49, SourceProcessHandle, (PHANDLE)&v41[122], 0, 0, 2u),
                      v10 >= 0) )
                {
                  if ( !v50
                    || (v10 = ZwDuplicateObject(ProcessHandle, v50, SourceProcessHandle, (PHANDLE)&v41[126], 0, 0, 2u),
                        v10 >= 0) )
                  {
                    if ( !v51
                      || (v10 = ZwDuplicateObject(ProcessHandle, v51, SourceProcessHandle, (PHANDLE)&v41[141], 0, 0, 2u),
                          v10 >= 0) )
                    {
                      BaseAddressa = 0LL;
                      RegionSize = v9;
                      v10 = ZwAllocateVirtualMemory(SourceProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
                      if ( v10 >= 0 )
                      {
                        HIDWORD(v41[0]) = HIDWORD(v41[0]) & 0xFFFFFFF8 | 1;
                        if ( v41[113] )
                          v41[113] = (char *)BaseAddressa + 1144;
                        if ( LOWORD(v41[35]) )
                          v41[36] = (char *)BaseAddressa + 296;
                        v31 = 0LL;
                        v10 = NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v41, v9, 0LL);
                        if ( v10 >= 0 )
                        {
                          if ( !v46 )
                          {
LABEL_42:
                            v10 = 0;
                            *v8 = BaseAddressa;
                            goto LABEL_43;
                          }
                          v35 = 0LL;
                          RegionSize = 1LL;
                          v10 = ZwAllocateVirtualMemory(
                                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                  &v35,
                                  0LL,
                                  &RegionSize,
                                  0x1000u,
                                  4u);
                          if ( v10 >= 0 )
                          {
                            if ( v12 )
                            {
                              while ( 1 )
                              {
                                v32 = RegionSize;
                                if ( RegionSize > v12 - v31 )
                                  v32 = v12 - v31;
                                v10 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v31 + v46), v35, v32, &BufferSize);
                                if ( v10 < 0 )
                                  goto LABEL_54;
                                if ( BufferSize != v32 )
                                  goto LABEL_53;
                                v10 = NtWriteVirtualMemory(
                                        SourceProcessHandle,
                                        (char *)BaseAddressa + v31 + 1144,
                                        v35,
                                        BufferSize,
                                        &NumberOfBytesWritten);
                                if ( v10 < 0 )
                                  goto LABEL_54;
                                if ( NumberOfBytesWritten != BufferSize )
                                {
LABEL_53:
                                  v10 = -2147483635;
                                  goto LABEL_54;
                                }
                                v31 += NumberOfBytesWritten;
                                if ( v31 >= v12 )
                                {
                                  v8 = v39;
                                  break;
                                }
                              }
                            }
                            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v35, &RegionSize, 0x8000u);
                            v35 = 0LL;
                            goto LABEL_42;
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
      }
      else
      {
        v10 = -1073741816;
      }
    }
    else
    {
      v10 = -2147483635;
    }
  }
LABEL_54:
  if ( v35 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v35, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v41[126] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[126], 0LL, 0LL, 0, 0, 1u);
  if ( v41[122] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[122], 0LL, 0LL, 0, 0, 1u);
  if ( v41[115] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[115], 0LL, 0LL, 0, 0, 1u);
  if ( v41[118] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[118], 0LL, 0LL, 0, 0, 1u);
  if ( v41[112] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[112], 0LL, 0LL, 0, 0, 1u);
  if ( v41[109] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[109], 0LL, 0LL, 0, 0, 1u);
  if ( v41[141] )
    ZwDuplicateObject(SourceProcessHandle, (HANDLE)v41[141], 0LL, 0LL, 0, 0, 1u);
LABEL_44:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle);
  return (unsigned int)v10;
}
