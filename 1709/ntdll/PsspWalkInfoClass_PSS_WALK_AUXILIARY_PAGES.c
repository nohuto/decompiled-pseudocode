/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x18005DDF4
 * Callers:
 *     PssNtWalkSnapshot @ 0x18005DAB0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __fastcall PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v4; // rcx
  __int64 v7; // r14
  NTSTATUS result; // eax
  __int64 v9; // rbx
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(void **)(a1 + 896);
  if ( !v4 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*(_QWORD *)a2 )
  {
    ViewSize = 0LL;
    result = ZwMapViewOfSection(
               v4,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)a2,
               0LL,
               0LL,
               0LL,
               &ViewSize,
               ViewShare,
               0,
               2u);
    if ( result < 0 )
      return result;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v7 = *(unsigned int *)(a2 + 8);
  if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 888) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v9 = *(_QWORD *)(a1 + 904) + (v7 << 6);
  memset(a3, 0, 0x50uLL);
  *a3 = *(_QWORD *)v9;
  *(_OWORD *)(a3 + 1) = *(_OWORD *)(v9 + 8);
  *(_OWORD *)(a3 + 3) = *(_OWORD *)(v9 + 24);
  *(_OWORD *)(a3 + 5) = *(_OWORD *)(v9 + 40);
  a3[7] = *(_QWORD *)(v9 + 56);
  a3[8] = *(_QWORD *)a2 + (unsigned int)((_DWORD)v7 << 12);
  result = 0;
  *((_DWORD *)a3 + 18) = 4096;
  *(_QWORD *)(a2 + 8) = (unsigned int)(v7 + 1);
  return result;
}
