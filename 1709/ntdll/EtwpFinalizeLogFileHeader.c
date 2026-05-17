/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x18006305C
 * Callers:
 *     EtwpLogger @ 0x180062A90 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1801098DC (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     EtwpAddProviderTrackingInfo @ 0x180065010 (EtwpAddProviderTrackingInfo.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x180088978 (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x180088B58 (EtwpWriteRemainingCompressedData.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A0180 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A01C0 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x1800A05A0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A09E0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  NTSTATUS VolumeInformationFile; // esi
  unsigned int v7; // r14d
  unsigned __int64 Heap; // r15
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rsi
  const void *v12; // rdx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned int v17; // ecx
  unsigned int v18; // r12d
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  int v21; // [rsp+58h] [rbp-29h] BYREF
  int v22; // [rsp+5Ch] [rbp-25h] BYREF
  __int64 v23; // [rsp+60h] [rbp-21h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-19h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v26[16]; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v27[20]; // [rsp+90h] [rbp+Fh] BYREF
  int v28; // [rsp+A4h] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v22 = 0;
  v21 = 0;
  if ( v4 )
  {
LABEL_2:
    if ( *(_QWORD *)(a1 + 464) != a1 + 464
      || *(_QWORD *)(a1 + 480) != a1 + 480
      || *(_QWORD *)(a1 + 520)
      || (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 208);
    }
    else
    {
      VolumeInformationFile = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 144), v25, v27, 24LL, 3);
      if ( VolumeInformationFile < 0 )
        goto LABEL_24;
      v7 = (v28 + 7) & ~(v28 - 1);
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v7);
    if ( !Heap )
    {
      VolumeInformationFile = -1073741801;
      return RtlNtStatusToDosError(VolumeInformationFile);
    }
    v9 = *(_QWORD *)(a1 + 144);
    v23 = 0LL;
    VolumeInformationFile = NtReadFile(v9, 0LL, 0LL, 0LL, v25, Heap, v7, &v23, 0LL);
    if ( VolumeInformationFile < 0 )
      goto LABEL_23;
    if ( v7 >= *(_DWORD *)Heap )
      v7 = *(_DWORD *)Heap;
    if ( !a2 )
    {
      *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(Heap + 140) = *(_DWORD *)(a1 + 392);
      *(_DWORD *)(Heap + 152) += *(_DWORD *)(a1 + 384);
      *(_DWORD *)(Heap + 380) += *(_DWORD *)(a1 + 388);
      v10 = *(_DWORD *)(a1 + 324);
      if ( (v10 & 0x10000) != 0 )
      {
        if ( (v10 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, Heap, v7, v22, v21);
      }
      else
      {
        *(_QWORD *)(Heap + 120) = MEMORY[0x7FFE0014];
      }
    }
    v11 = *(unsigned int *)(Heap + 4);
    *(_DWORD *)(Heap + 48) = v11;
    v12 = *(const void **)(a1 + 520);
    if ( v12 )
    {
      v17 = *(_DWORD *)(a1 + 528);
      v18 = (v17 + 7) & 0xFFFFFFF8;
      if ( (unsigned int)v11 < v7 && (unsigned int)v11 >= 0x180 && v7 - (unsigned int)v11 >= v18 )
      {
        memmove((void *)(Heap + v11), v12, v17);
        *(_DWORD *)(Heap + 48) = v11 + v18;
      }
    }
    EtwpAddProviderTrackingInfo(a1, Heap, v7);
    v13 = NtWriteFile(*(_QWORD *)(a1 + 144), 0LL, 0LL, 0LL, v25, Heap, v7, &v23, 0LL);
    VolumeInformationFile = v13;
    if ( a2 )
      goto LABEL_23;
    if ( v13 < 0 )
      goto LABEL_23;
    v14 = *(_DWORD *)(a1 + 324);
    if ( (v14 & 0x4000020) == 0 )
      goto LABEL_23;
    if ( (v14 & 0x4000000) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 360);
    }
    else
    {
      v19 = *(unsigned int *)(a1 + 320);
      if ( (v14 & 0x2000) != 0 )
        v20 = v19 << 10;
      else
        v20 = v19 << 20;
      v15 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
      if ( v15 >= v20 )
        goto LABEL_23;
    }
    v24 = v15;
    if ( v15 )
      VolumeInformationFile = ZwSetInformationFile(*(_QWORD *)(a1 + 144), v26, &v24, 8LL, 20);
LABEL_23:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_24;
  }
  VolumeInformationFile = EtwpWriteRemainingCompressedData(a1, &v22, &v21);
  if ( VolumeInformationFile >= 0 )
  {
    *(_DWORD *)(a1 + 392) += v22;
    *(_DWORD *)(a1 + 388) += v21;
    goto LABEL_2;
  }
LABEL_24:
  if ( VolumeInformationFile )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v2;
}
