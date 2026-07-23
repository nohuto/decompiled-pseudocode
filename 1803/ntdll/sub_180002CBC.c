/*
 * XREFs of sub_180002CBC @ 0x180002CBC
 * Callers:
 *     sub_1800733EC @ 0x1800733EC (sub_1800733EC.c)
 * Callees:
 *     RtlCompressBuffer @ 0x1800641C0 (RtlCompressBuffer.c)
 *     ZwWriteFile @ 0x18009ABC0 (ZwWriteFile.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180002CBC(__int64 a1, UCHAR *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r10
  int v7; // eax
  UCHAR *v10; // r9
  ULONG v11; // r10d
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rax
  ULONG v16; // esi
  int v17; // ecx
  ULONG v18; // ecx
  ULONG Length; // eax
  __int64 v21; // rax
  unsigned int v22; // edx
  int v23; // eax
  char *v24; // rcx
  size_t v25; // r8
  char *v26; // rdx
  int v27; // r8d
  int v28; // ecx
  int v29; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  ULONG v31; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(unsigned int *)(a1 + 452);
  *a4 = 0;
  v7 = *(_DWORD *)(a1 + 448);
  *a3 = 0;
  v10 = (UCHAR *)(v4 + *(_QWORD *)(a1 + 440) + 72LL);
  v11 = v7 - v4 - 72;
  if ( v11 >= *(_DWORD *)(a1 + 208) )
    v11 = *(_DWORD *)(a1 + 208);
  v12 = RtlCompressBuffer(3u, a2 + 72, *((_DWORD *)a2 + 12) - 72, v10, v11, 0, &v31, *(PVOID *)(a1 + 432));
  v13 = v12;
  if ( v12 == -1073741789 )
  {
    v16 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 440) + *(unsigned int *)(a1 + 452)), a2, v16);
  }
  else
  {
    if ( v12 < 0 )
    {
      *a4 = 1;
      return (unsigned int)v13;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v14 = *(unsigned int *)(a1 + 452);
    v15 = *(_QWORD *)(a1 + 440);
    *(_OWORD *)(v14 + v15) = *(_OWORD *)a2;
    *(_OWORD *)(v14 + v15 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v14 + v15 + 32) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v14 + v15 + 48) = *((_OWORD *)a2 + 3);
    *(_QWORD *)(v14 + v15 + 64) = *((_QWORD *)a2 + 8);
    v16 = v31 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 452) + *(_QWORD *)(a1 + 440)) = v16;
  v17 = *(_DWORD *)(a1 + 452);
  ++*(_DWORD *)(a1 + 456);
  v18 = v16 + v17;
  *(_DWORD *)(a1 + 452) = v18;
  Length = *(_DWORD *)(a1 + 208);
  if ( v18 >= Length )
  {
    v13 = ZwWriteFile(
            *(HANDLE *)(a1 + 144),
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 440),
            Length,
            (PLARGE_INTEGER)(a1 + 360),
            0LL);
    if ( v13 < 0 )
    {
      v27 = *(_DWORD *)(a1 + 460);
      v28 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 452) = v27;
      v29 = v28 - 1;
      if ( !v27 )
        v29 = v28;
      *a4 = v29;
      *(_DWORD *)(a1 + 456) = v27 != 0;
    }
    else
    {
      v21 = *(unsigned int *)(a1 + 208);
      *(_QWORD *)(a1 + 360) += v21;
      v22 = *(_DWORD *)(a1 + 452) - v21;
      v23 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 452) = v22;
      *(_DWORD *)(a1 + 460) = v22;
      if ( v22 )
      {
        v24 = *(char **)(a1 + 440);
        v25 = v22;
        *(_DWORD *)(a1 + 456) = 1;
        v26 = &v24[*(unsigned int *)(a1 + 208)];
        *a3 = v23 - 1;
        memmove(v24, v26, v25);
      }
      else
      {
        *(_DWORD *)(a1 + 456) = 0;
        *a3 = v23;
      }
    }
  }
  return (unsigned int)v13;
}
