/*
 * XREFs of sub_180004554 @ 0x180004554
 * Callers:
 *     sub_180051668 @ 0x180051668 (sub_180051668.c)
 * Callees:
 *     RtlCompressBuffer @ 0x1800638A0 (RtlCompressBuffer.c)
 *     ZwWriteFile @ 0x1800A5400 (ZwWriteFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180004554(__int64 a1, _OWORD *a2, _DWORD *a3, _DWORD *a4)
{
  ULONG v5; // eax
  __int64 v7; // r10
  ULONG CompressedBufferSize; // r11d
  NTSTATUS v11; // eax
  unsigned __int32 v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  ULONG v15; // esi
  int v16; // ecx
  ULONG v17; // ecx
  ULONG v18; // eax
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // eax
  char *v23; // rcx
  size_t v24; // r8
  char *v25; // rdx
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  ULONG FinalCompressedSize; // [rsp+80h] [rbp+8h] BYREF

  *a4 = 0;
  v5 = *(_DWORD *)(a1 + 208);
  v7 = *(unsigned int *)(a1 + 452);
  *a3 = 0;
  CompressedBufferSize = *(_DWORD *)(a1 + 448) - v7 - 72;
  if ( CompressedBufferSize >= v5 )
    CompressedBufferSize = v5;
  v11 = RtlCompressBuffer(
          3u,
          (PUCHAR)a2 + 72,
          *((_DWORD *)a2 + 12) - 72,
          (PUCHAR)(v7 + *(_QWORD *)(a1 + 440) + 72LL),
          CompressedBufferSize,
          0,
          &FinalCompressedSize,
          *(PVOID *)(a1 + 432));
  v12 = v11;
  if ( v11 == -1073741789 )
  {
    v15 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 440) + *(unsigned int *)(a1 + 452)), a2, v15);
  }
  else
  {
    if ( v11 < 0 )
    {
      *a4 = 1;
      return v12;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v13 = *(unsigned int *)(a1 + 452);
    v14 = *(_QWORD *)(a1 + 440);
    *(_OWORD *)(v13 + v14) = *a2;
    *(_OWORD *)(v13 + v14 + 16) = a2[1];
    *(_OWORD *)(v13 + v14 + 32) = a2[2];
    *(_OWORD *)(v13 + v14 + 48) = a2[3];
    *(_QWORD *)(v13 + v14 + 64) = *((_QWORD *)a2 + 8);
    v15 = FinalCompressedSize + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 452) + *(_QWORD *)(a1 + 440)) = v15;
  v16 = *(_DWORD *)(a1 + 452);
  ++*(_DWORD *)(a1 + 456);
  v17 = v15 + v16;
  *(_DWORD *)(a1 + 452) = v17;
  v18 = *(_DWORD *)(a1 + 208);
  if ( v17 >= v18 )
  {
    v12 = ZwWriteFile(
            *(HANDLE *)(a1 + 144),
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 440),
            v18,
            (PLARGE_INTEGER)(a1 + 360),
            0LL);
    if ( (v12 & 0x80000000) != 0 )
    {
      v26 = *(_DWORD *)(a1 + 460);
      v27 = v26 == 0;
      *(_DWORD *)(a1 + 452) = v26;
      v28 = *(_DWORD *)(a1 + 456);
      if ( !v27 )
      {
        *(_DWORD *)(a1 + 456) = 1;
        *a4 = v28 - 1;
        return v12;
      }
      *a4 = v28;
    }
    else
    {
      v20 = *(unsigned int *)(a1 + 208);
      *(_QWORD *)(a1 + 360) += v20;
      v21 = *(_DWORD *)(a1 + 452) - v20;
      v22 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 452) = v21;
      *(_DWORD *)(a1 + 460) = v21;
      if ( v21 )
      {
        v23 = *(char **)(a1 + 440);
        v24 = v21;
        *(_DWORD *)(a1 + 456) = 1;
        v25 = &v23[*(unsigned int *)(a1 + 208)];
        *a3 = v22 - 1;
        memmove(v23, v25, v24);
        return v12;
      }
      *a3 = v22;
    }
    *(_DWORD *)(a1 + 456) = 0;
  }
  return v12;
}
