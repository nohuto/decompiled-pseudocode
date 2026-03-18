/*
 * XREFs of PnprCopyReservedMapping @ 0x1401FFC24
 * Callers:
 *     PnprRecopyMirrorPages @ 0x140200330 (PnprRecopyMirrorPages.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14014E860 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x140150450 (MmUnmapReservedMapping.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PnprGetPageDestination @ 0x1401FFF84 (PnprGetPageDestination.c)
 *     MmContainingPageForReservedMapping @ 0x140216ED4 (MmContainingPageForReservedMapping.c)
 */

__int64 PnprCopyReservedMapping()
{
  __int64 v0; // rax
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // r8
  unsigned int v4; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rsi
  PHYSICAL_ADDRESS v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r12
  __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  size_t v28; // rbx
  char *v29; // rdi
  char *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  _QWORD v34[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v36[16]; // [rsp+B8h] [rbp-50h] BYREF

  v0 = *(unsigned int *)(PnprContext + 180);
  v1 = *(_QWORD *)(PnprContext + 144);
  v2 = 3 * v0;
  v3 = *(_QWORD *)(v1 + 24 * v0);
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
    MmUnmapReservedMapping(*(PVOID *)(v1 + 24 * v0 + 8), 0x51706E50u, (PMDL)v3);
  memset(Src, 0, sizeof(Src));
  memset(v36, 0, sizeof(v36));
  v4 = 0;
  PhysicalAddress = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v1 + 8 * v2) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)(
              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
              v34) >= 0
    && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = 1;
    v36[0] = v34[0] >> 12;
    Src[0] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  v6 = *(_QWORD *)(v1 + 8 * v2 + 8);
  v7 = v6 + 0x10000;
  while ( v6 < v7 )
  {
    v8 = MmContainingPageForReservedMapping(v6);
    if ( !v4 || v8 != Src[v4 - 1] )
    {
      v9 = v8 << 12;
      if ( (int)PnprGetPageDestination(v9, v34) >= 0 && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v4 >= 0x10 )
          return 3221225485LL;
        v10 = v4;
        v11 = v34[0] >> 12;
        ++v4;
        Src[v10] = v9 >> 12;
        v36[v10] = v11;
      }
    }
    v6 += 4096LL;
  }
  v12 = *(unsigned int *)(PnprContext + 180);
  v13 = *(_QWORD *)(PnprContext + 136);
  v14 = 3 * v12;
  v15 = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v13 + 24 * v12) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)((PHYSICAL_ADDRESS)v15.QuadPart, v34) >= 0
    && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v4 >= 0x10 )
      return 3221225485LL;
    v16 = v4;
    v17 = v34[0] >> 12;
    ++v4;
    Src[v16] = (unsigned __int64)v15.QuadPart >> 12;
    v36[v16] = v17;
  }
  v18 = *(_QWORD *)(v13 + 8 * v14 + 8);
  v19 = v18 + 0x10000;
  while ( v18 < v19 )
  {
    v21 = MmContainingPageForReservedMapping(v18);
    if ( v4 > 0x10 )
      return 3221225485LL;
    if ( !v4 || v21 != Src[v4 - 1] )
    {
      v22 = v21 << 12;
      if ( (int)PnprGetPageDestination(v22, v34) >= 0 && v34[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v4 >= 0x10 )
          return 3221225485LL;
        v23 = v4;
        v24 = v34[0] >> 12;
        ++v4;
        Src[v23] = v22 >> 12;
        v36[v23] = v24;
      }
    }
    v18 += 4096LL;
  }
  if ( !v4 )
    return 0LL;
  v25 = *(_QWORD *)(v1 + 8 * v2);
  v26 = (unsigned __int64)v4 << 13;
  v27 = v4;
  *(_DWORD *)(v25 + 40) = v26;
  v28 = v4;
  *(_QWORD *)v25 = 0LL;
  *(_WORD *)(v25 + 10) = 0;
  *(_QWORD *)(v25 + 32) = 0LL;
  *(_DWORD *)(v25 + 44) = 0;
  *(_WORD *)(v25 + 8) = 8 * (((v26 + 4095) >> 12) + 6);
  v29 = (char *)(*(_QWORD *)(v1 + 8 * v2) + 48LL);
  v28 *= 8LL;
  memmove(v29, Src, v28);
  memmove(&v29[v28], v36, v28);
  *(_WORD *)(*(_QWORD *)(v1 + 8 * v2) + 10LL) |= *(_WORD *)(v1 + 8 * v2 + 16);
  v30 = (char *)MmMapLockedPagesWithReservedMapping(
                  *(PVOID *)(v1 + 8 * v2 + 8),
                  0x51706E50u,
                  *(PMDL *)(v1 + 8 * v2),
                  MmCached);
  if ( v30 )
  {
    memmove(&v30[4096 * v27], v30, v27 << 12);
    return 0LL;
  }
  v31 = PnprContext;
  v32 = *(_DWORD *)(PnprContext + 20984);
  if ( !v32 )
    v32 = 5957;
  *(_DWORD *)(PnprContext + 20984) = v32;
  v33 = *(_DWORD *)(v31 + 20988);
  if ( !v33 )
    v33 = 10;
  *(_DWORD *)(v31 + 20988) = v33;
  return 3221225626LL;
}
