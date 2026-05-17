/*
 * XREFs of sub_180003410 @ 0x180003410
 * Callers:
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 * Callees:
 *     sub_180003694 @ 0x180003694 (sub_180003694.c)
 *     sub_180003794 @ 0x180003794 (sub_180003794.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_180009274 @ 0x180009274 (sub_180009274.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x18009AB80 (ZwReadFile.c)
 *     ZwWriteFile @ 0x18009ABC0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x18009AFA0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009B3E0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180003410(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  NTSTATUS VolumeInformationFile; // esi
  unsigned int v7; // r15d
  __int64 Heap; // r14
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // r15
  const void *v13; // rdx
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // r12d
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  int v22; // [rsp+58h] [rbp-29h] BYREF
  int v23; // [rsp+5Ch] [rbp-25h] BYREF
  __int64 v24; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v26[16]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v28[20]; // [rsp+90h] [rbp+Fh] BYREF
  int v29; // [rsp+A4h] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v23 = 0;
  v22 = 0;
  if ( !v4 )
  {
    VolumeInformationFile = sub_180003794(a1, &v23, &v22);
    if ( VolumeInformationFile < 0 )
      goto LABEL_26;
    *(_DWORD *)(a1 + 392) += v23;
    *(_DWORD *)(a1 + 388) += v22;
  }
  if ( *(_QWORD *)(a1 + 464) != a1 + 464
    || *(_QWORD *)(a1 + 480) != a1 + 480
    || *(_QWORD *)(a1 + 520)
    || (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 208);
    goto LABEL_9;
  }
  VolumeInformationFile = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 144), v26, v28, 24LL, 3);
  if ( VolumeInformationFile >= 0 )
  {
    v7 = (v29 + 7) & ~(v29 - 1);
LABEL_9:
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v7);
    if ( !Heap )
    {
      VolumeInformationFile = -1073741801;
      return RtlNtStatusToDosError(VolumeInformationFile);
    }
    v9 = *(_QWORD *)(a1 + 144);
    v24 = 0LL;
    VolumeInformationFile = ZwReadFile(v9, 0LL, 0LL, 0LL, v26, Heap, v7, &v24, 0LL);
    if ( VolumeInformationFile < 0 )
      goto LABEL_25;
    v10 = *(_DWORD *)Heap;
    if ( v7 < *(_DWORD *)Heap )
      v10 = v7;
    if ( !a2 )
    {
      *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(Heap + 140) = *(_DWORD *)(a1 + 392);
      *(_DWORD *)(Heap + 152) += *(_DWORD *)(a1 + 384);
      *(_DWORD *)(Heap + 380) += *(_DWORD *)(a1 + 388);
      v11 = *(_DWORD *)(a1 + 324);
      if ( (v11 & 0x10000) != 0 )
      {
        if ( (v11 & 0x1000) != 0 )
          sub_180003694(a1, Heap, v10, v23, v22);
      }
      else
      {
        *(_QWORD *)(Heap + 120) = MEMORY[0x7FFE0014];
      }
    }
    v12 = *(unsigned int *)(Heap + 4);
    *(_DWORD *)(Heap + 48) = v12;
    v13 = *(const void **)(a1 + 520);
    if ( v13 )
    {
      v18 = *(_DWORD *)(a1 + 528);
      v19 = (v18 + 7) & 0xFFFFFFF8;
      if ( (unsigned int)v12 < v10 && (unsigned int)v12 >= 0x180 && v10 - (unsigned int)v12 >= v19 )
      {
        memmove((void *)(Heap + v12), v13, v18);
        *(_DWORD *)(Heap + 48) = v12 + v19;
      }
    }
    sub_180009274(a1, Heap, v10);
    v14 = ZwWriteFile(*(_QWORD *)(a1 + 144), 0LL, 0LL, 0LL, v26, Heap, v10, &v24, 0LL);
    VolumeInformationFile = v14;
    if ( a2 )
      goto LABEL_25;
    if ( v14 < 0 )
      goto LABEL_25;
    v15 = *(_DWORD *)(a1 + 324);
    if ( (v15 & 0x4000020) == 0 )
      goto LABEL_25;
    if ( (v15 & 0x4000000) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 360);
    }
    else
    {
      v20 = *(unsigned int *)(a1 + 320);
      if ( (v15 & 0x2000) != 0 )
        v21 = v20 << 10;
      else
        v21 = v20 << 20;
      v16 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
      if ( v16 >= v21 )
        goto LABEL_25;
    }
    v25 = v16;
    if ( v16 )
      VolumeInformationFile = ZwSetInformationFile(*(_QWORD *)(a1 + 144), v27, &v25, 8LL, 20);
LABEL_25:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  }
LABEL_26:
  if ( VolumeInformationFile )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v2;
}
