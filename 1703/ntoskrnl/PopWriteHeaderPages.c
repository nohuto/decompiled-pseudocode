/*
 * XREFs of PopWriteHeaderPages @ 0x140405288
 * Callers:
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     tcpxsum @ 0x140189130 (tcpxsum.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopWriteHiberPages @ 0x140405508 (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteHeaderPages(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  void *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 v10; // rdx
  _DWORD *v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  size_t v15; // r8
  size_t v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // edx
  ULONG_PTR v20; // rbx
  size_t v21; // r8
  _OWORD *v22; // rax
  __int64 v23; // rdx
  _OWORD *v24; // rcx
  __int128 v25; // xmm1
  unsigned int v26; // eax
  int v27; // edx
  ULONG_PTR v28; // rbx
  unsigned int v29; // eax
  int v30; // edx
  ULONG_PTR v31; // rbx

  v2 = *(unsigned int *)(a1 + 152);
  v4 = *(void **)(a1 + 144);
  *(_DWORD *)(a1 + 184) = 0;
  memset(v4, 0, v2 << 12);
  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
    return 3221225495LL;
  v7 = (unsigned int)PopHiberScratchPages;
  v8 = *(_DWORD *)(v6 + 40) >> 12;
  a2[18] = v8;
  if ( v8 < (unsigned int)v7 )
    return 3221225495LL;
  v9 = *(_QWORD *)(a1 + 120);
  if ( (_DWORD)v7 )
  {
    v10 = 0LL;
    v11 = v4;
    v12 = (unsigned int)v7;
    do
    {
      v13 = *(_DWORD *)(v10 + v9 + 48);
      v10 += 8LL;
      *v11++ = v13;
      --v12;
    }
    while ( v12 );
  }
  PopWriteHiberPages(a1, v4, (unsigned __int64)(4 * v7 + 4095) >> 12, (unsigned int)(*(_DWORD *)(a1 + 256) + 2));
  v14 = PopHiberScratchPages;
  a2[18] = PopHiberScratchPages;
  a2[19] = tcpxsum(0, (const char *)v4, (4 * v14 + 4095) & 0xFFFFF000);
  if ( *(_QWORD *)(a1 + 248) )
  {
    v15 = (unsigned __int64)*(unsigned int *)(a1 + 152) << 12;
    *(_DWORD *)(a1 + 184) = 1;
    memset(v4, 0, v15);
    v16 = (unsigned int)(*(_DWORD *)(a1 + 256) << 12);
    memmove(v4, *(const void **)(a1 + 248), v16);
    a2[215] = tcpxsum(0, (const char *)v4, v16);
    v17 = *(_DWORD *)(a1 + 256);
    a2[216] = v17;
    PopWriteHiberPages(a1, v4, v17, 2LL);
    v18 = tcpxsum(0, (const char *)v4, v16);
    v19 = a2[215];
    v20 = v18;
    if ( v19 != v18 )
    {
      DbgPrint("Checksum for resume context page changed from %lx to %lx\n", v19, v18);
      KeBugCheckEx(0xA0u, 3uLL, (unsigned int)a2[215], v20, 0x1C4DuLL);
    }
  }
  v21 = (unsigned __int64)*(unsigned int *)(a1 + 152) << 12;
  *(_DWORD *)(a1 + 184) = 2;
  memset(v4, 0, v21);
  v22 = *(_OWORD **)(a1 + 176);
  v23 = 11LL;
  v24 = v4;
  do
  {
    *v24 = *v22;
    v24[1] = v22[1];
    v24[2] = v22[2];
    v24[3] = v22[3];
    v24[4] = v22[4];
    v24[5] = v22[5];
    v24[6] = v22[6];
    v24 += 8;
    v25 = v22[7];
    v22 += 8;
    *(v24 - 1) = v25;
    --v23;
  }
  while ( v23 );
  *v24 = *v22;
  v24[1] = v22[1];
  v24[2] = v22[2];
  v24[3] = v22[3];
  a2[20] = tcpxsum(0, (const char *)v4, 0x5C0u);
  PopWriteHiberPages(a1, v4, 1LL, 1LL);
  v26 = tcpxsum(0, (const char *)v4, 0x5C0u);
  v27 = a2[20];
  v28 = v26;
  if ( v27 != v26 )
  {
    DbgPrint("Checksum for context page changed from %lx to %lx\n", v27, v26);
    KeBugCheckEx(0xA0u, 3uLL, (unsigned int)a2[20], v28, 0x1C63uLL);
  }
  v29 = tcpxsum(0, (const char *)v4, 0x1000u);
  v30 = a2[20];
  v31 = v29;
  if ( v30 != v29 )
  {
    DbgPrint("Checksum for partial context page %lx doesn't match full %lx\n", v30, v29);
    KeBugCheckEx(0xA0u, 4uLL, (unsigned int)a2[20], v31, 0x1C6AuLL);
  }
  return 0LL;
}
