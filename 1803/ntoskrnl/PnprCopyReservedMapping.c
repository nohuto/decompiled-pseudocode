/*
 * XREFs of PnprCopyReservedMapping @ 0x14023C96C
 * Callers:
 *     PnprRecopyMirrorPages @ 0x14023D148 (PnprRecopyMirrorPages.c)
 * Callees:
 *     MmUnmapReservedMapping @ 0x140001420 (MmUnmapReservedMapping.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1400C5360 (MmMapLockedPagesWithReservedMapping.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PnprGetPageDestination @ 0x14023CD68 (PnprGetPageDestination.c)
 */

__int64 PnprCopyReservedMapping()
{
  __int64 v0; // rax
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned int v4; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 i; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rsi
  PHYSICAL_ADDRESS v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  size_t v28; // rbx
  char *v29; // rdi
  char *v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  unsigned __int64 v34; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v37[16]; // [rsp+B8h] [rbp-50h] BYREF

  v0 = *(unsigned int *)(PnprContext + 180);
  v1 = *(_QWORD *)(PnprContext + 144);
  v2 = 3 * v0;
  v3 = *(_QWORD *)(v1 + 24 * v0);
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
  {
    MmUnmapReservedMapping(*(PVOID *)(v1 + 24 * v0 + 8), 0x51706E50u, *(PMDL *)(v1 + 24 * v0));
    v3 = *(_QWORD *)(v1 + 8 * v2);
  }
  memset(Src, 0, sizeof(Src));
  memset(v37, 0, sizeof(v37));
  v4 = 0;
  PhysicalAddress = MmGetPhysicalAddress((PVOID)(v3 & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)(
              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
              &v34) >= 0
    && v34 != 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = 1;
    v37[0] = v34 >> 12;
    Src[0] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  v6 = *(_QWORD *)(v1 + 8 * v2 + 8);
  for ( i = v6 + 0x10000; v6 < i; v6 += 4096LL )
  {
    v35 = MI_READ_PTE_LOCK_FREE(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v35);
    v10 = v9 & (v8 >> 12);
    if ( (!v4 || v10 != Src[v4 - 1]) && (int)PnprGetPageDestination(v10 << 12, &v34) >= 0 && v34 != 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v4 >= 0x10 )
        return 3221225485LL;
      v11 = v4;
      v12 = v34 >> 12;
      ++v4;
      Src[v11] = v10;
      v37[v11] = v12;
    }
  }
  v14 = *(unsigned int *)(PnprContext + 180);
  v15 = *(_QWORD *)(PnprContext + 136);
  v16 = 3 * v14;
  v17 = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v15 + 24 * v14) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)((PHYSICAL_ADDRESS)v17.QuadPart, &v34) >= 0
    && v34 != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v4 >= 0x10 )
      return 3221225485LL;
    v18 = v4;
    v19 = v34 >> 12;
    ++v4;
    Src[v18] = (unsigned __int64)v17.QuadPart >> 12;
    v37[v18] = v19;
  }
  v20 = *(_QWORD *)(v15 + 8 * v16 + 8);
  v21 = v20 + 0x10000;
  while ( v20 < v21 )
  {
    v35 = MI_READ_PTE_LOCK_FREE(((v20 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v35) >> 12) & 0xFFFFFFFFFLL;
    if ( v4 > 0x10 )
      return 3221225485LL;
    if ( (!v4 || v22 != Src[v4 - 1]) && (int)PnprGetPageDestination(v22 << 12, &v34) >= 0 && v34 != 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v4 >= 0x10 )
        return 3221225485LL;
      v23 = v4;
      v24 = v34 >> 12;
      ++v4;
      Src[v23] = v22;
      v37[v23] = v24;
    }
    v20 += 4096LL;
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
  memmove(&v29[v28], v37, v28);
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
