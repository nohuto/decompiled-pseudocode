/*
 * XREFs of PopWriteHeaderPages @ 0x140435AC8
 * Callers:
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 * Callees:
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     tcpxsum @ 0x140188C30 (tcpxsum.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopWriteHiberPages @ 0x140435F04 (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteHeaderPages(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  void *v4; // rsi
  __int64 v6; // rax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // r10
  __int64 v11; // rdx
  _DWORD *v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // eax
  size_t v16; // r8
  size_t v17; // rbx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // edx
  unsigned int v21; // ebx
  size_t v22; // r8
  _OWORD *v23; // rax
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  __int128 v26; // xmm1
  int v27; // eax
  int v28; // edx
  unsigned int v29; // ebx
  int v30; // eax
  int v31; // edx
  unsigned int v32; // ebx

  v2 = *(unsigned int *)(a1 + 152);
  v4 = *(void **)(a1 + 144);
  *(_DWORD *)(a1 + 184) = 0;
  memset(v4, 0, v2 << 12);
  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
    return 3221225495LL;
  v8 = PopHiberScratchPages;
  v9 = *(_DWORD *)(v6 + 40) >> 12;
  a2[18] = v9;
  if ( v9 < v8 )
    return 3221225495LL;
  v10 = *(_QWORD *)(a1 + 120);
  if ( v8 )
  {
    v11 = 0LL;
    v12 = v4;
    v13 = v8;
    do
    {
      v14 = *(_DWORD *)(v11 + v10 + 48);
      v11 += 8LL;
      *v12++ = v14;
      --v13;
    }
    while ( v13 );
  }
  PopWriteHiberPages(
    a1,
    v4,
    (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12,
    (unsigned int)(*(_DWORD *)(a1 + 256) + 2));
  v15 = PopHiberScratchPages;
  a2[18] = PopHiberScratchPages;
  a2[19] = tcpxsum(0, (const char *)v4, (4 * v15 + 4095) & 0xFFFFF000);
  if ( *(_QWORD *)(a1 + 248) )
  {
    v16 = (unsigned __int64)*(unsigned int *)(a1 + 152) << 12;
    *(_DWORD *)(a1 + 184) = 1;
    memset(v4, 0, v16);
    v17 = (unsigned int)(*(_DWORD *)(a1 + 256) << 12);
    memmove(v4, *(const void **)(a1 + 248), v17);
    a2[215] = tcpxsum(0, (const char *)v4, v17);
    v18 = *(_DWORD *)(a1 + 256);
    a2[216] = v18;
    PopWriteHiberPages(a1, v4, v18, 2LL);
    v19 = tcpxsum(0, (const char *)v4, v17);
    v20 = a2[215];
    v21 = v19;
    if ( v20 != v19 )
    {
      DbgPrint("Checksum for resume context page changed from %lx to %lx\n", v20, v19);
      KeBugCheckEx(0xA0u, 3uLL, (unsigned int)a2[215], v21, 0x1C9DuLL);
    }
  }
  v22 = (unsigned __int64)*(unsigned int *)(a1 + 152) << 12;
  *(_DWORD *)(a1 + 184) = 2;
  memset(v4, 0, v22);
  v23 = *(_OWORD **)(a1 + 176);
  v24 = 11LL;
  v25 = v4;
  do
  {
    *v25 = *v23;
    v25[1] = v23[1];
    v25[2] = v23[2];
    v25[3] = v23[3];
    v25[4] = v23[4];
    v25[5] = v23[5];
    v25[6] = v23[6];
    v25 += 8;
    v26 = v23[7];
    v23 += 8;
    *(v25 - 1) = v26;
    --v24;
  }
  while ( v24 );
  *v25 = *v23;
  v25[1] = v23[1];
  v25[2] = v23[2];
  v25[3] = v23[3];
  a2[20] = tcpxsum(0, (const char *)v4, 0x5C0u);
  PopWriteHiberPages(a1, v4, 1LL, 1LL);
  v27 = tcpxsum(0, (const char *)v4, 0x5C0u);
  v28 = a2[20];
  v29 = v27;
  if ( v28 != v27 )
  {
    DbgPrint("Checksum for context page changed from %lx to %lx\n", v28, v27);
    KeBugCheckEx(0xA0u, 3uLL, (unsigned int)a2[20], v29, 0x1CB3uLL);
  }
  v30 = tcpxsum(0, (const char *)v4, 0x1000u);
  v31 = a2[20];
  v32 = v30;
  if ( v31 != v30 )
  {
    DbgPrint("Checksum for partial context page %lx doesn't match full %lx\n", v31, v30);
    KeBugCheckEx(0xA0u, 4uLL, (unsigned int)a2[20], v32, 0x1CBAuLL);
  }
  return 0LL;
}
