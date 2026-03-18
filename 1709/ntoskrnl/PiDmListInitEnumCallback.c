/*
 * XREFs of PiDmListInitEnumCallback @ 0x1405B9CF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14051804C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x140518388 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140518534 (PiDmAddCacheReferenceForObject.c)
 *     _PnpStringFromGuid @ 0x140519B48 (_PnpStringFromGuid.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmListInitEnumCallback(ULONG_PTR a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // eax
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rdx
  int ObjectProperty; // edi
  wchar_t *v10; // rdx
  int v11; // eax
  void *v12; // r8
  unsigned int *v13; // rsi
  void *v15; // rcx
  PVOID PoolWithTag; // rax
  int v17; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+64h] [rbp-35h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  wchar_t v20[40]; // [rsp+70h] [rbp-29h] BYREF

  v18 = 0;
  P = 0LL;
  v3 = 1024;
  v17 = 1024;
  *a3 = 0;
  while ( 1 )
  {
    if ( v3 > *(_DWORD *)(a2 + 8) )
    {
      v15 = *(void **)a2;
      *(_DWORD *)(a2 + 8) = v3;
      if ( v15 )
        ExFreePoolWithTag(v15, 0x5A706E50u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a2 + 8), 0x5A706E50u);
      *(_QWORD *)a2 = PoolWithTag;
      if ( !PoolWithTag )
        break;
    }
    v6 = *(int *)(a2 + 12);
    v7 = *(_DWORD *)(a1 + 28);
    v8 = *(_QWORD *)(a1 + 16);
    v17 = 0;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       v8,
                       v7,
                       0LL,
                       0LL,
                       *((_QWORD *)&PiDmListDefs + 5 * v6 + 4),
                       (__int64)&v18,
                       *(_QWORD *)a2,
                       *(_DWORD *)(a2 + 8),
                       (__int64)&v17,
                       0);
    if ( ObjectProperty != -1073741789 )
      goto LABEL_4;
    v3 = v17;
  }
  ObjectProperty = -1073741670;
LABEL_4:
  if ( ObjectProperty == -1073741275 )
    return 0;
  if ( ObjectProperty >= 0 )
  {
    if ( v18 == 13 )
    {
      PnpStringFromGuid(*(int **)a2, v20);
      v10 = v20;
    }
    else
    {
      if ( v18 != 18 )
        return (unsigned int)ObjectProperty;
      v10 = *(wchar_t **)a2;
    }
    v11 = PiDmAddCacheReferenceForObject(
            *((unsigned int *)&PiDmListDefs + 10 * *(int *)(a2 + 12)),
            (__int64)v10,
            (volatile signed __int32 **)&P);
    v13 = (unsigned int *)P;
    ObjectProperty = v11;
    if ( v11 >= 0 )
      PiDmListAddObject(*(_DWORD *)(a2 + 12), (ULONG_PTR)P, a1, 0LL);
    if ( v13 )
    {
      PiDmRemoveCacheReferenceForObject(v13[7], *((_QWORD *)v13 + 2), v12);
      PiDmObjectRelease(v13);
    }
  }
  return (unsigned int)ObjectProperty;
}
