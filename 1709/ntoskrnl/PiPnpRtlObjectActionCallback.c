/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x1405232C0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140523648 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1405237D0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140524280 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14052447C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmGetObjectList @ 0x1405902C0 (PiDmGetObjectList.c)
 */

__int64 __fastcall PiPnpRtlObjectActionCallback(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rbx
  int AggregatedBooleanPropertyData; // eax
  int v12; // r8d
  _QWORD *v13; // r9
  __int64 v15; // r15
  unsigned int v16; // eax
  PVOID PoolWithTag; // r12
  int ObjectProperty; // ebx
  _DWORD *v19; // rdi
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // r9
  int ObjectList; // eax
  size_t Size; // [rsp+60h] [rbp-48h] BYREF
  __int64 v25; // [rsp+68h] [rbp-40h] BYREF
  __int64 v26; // [rsp+70h] [rbp-38h]
  int v27; // [rsp+C8h] [rbp+20h] BYREF

  v9 = -1073741822;
  if ( a4 == 8 )
  {
    if ( a5 == 1 )
    {
      v10 = a6;
      AggregatedBooleanPropertyData = PiDmObjectGetAggregatedBooleanPropertyData(
                                        a3,
                                        a2,
                                        a3,
                                        *(_QWORD *)(a6 + 24),
                                        *(_QWORD *)(a6 + 32),
                                        *(_QWORD *)(a6 + 40),
                                        *(_QWORD *)(a6 + 48),
                                        *(_DWORD *)(a6 + 56),
                                        *(_QWORD *)(a6 + 64));
      if ( AggregatedBooleanPropertyData != -1073741802
        || (*(_DWORD *)(v10 + 72) & 0x10000) == 0
        && ((AggregatedBooleanPropertyData = PiDmObjectGetCachedObjectProperty(
                                               a3,
                                               a2,
                                               v12,
                                               *(_QWORD *)(v10 + 24),
                                               *(_QWORD *)(v10 + 32),
                                               *(_QWORD *)(v10 + 40),
                                               *(_QWORD *)(v10 + 48),
                                               *(_DWORD *)(v10 + 56),
                                               *(_QWORD *)(v10 + 64)),
             AggregatedBooleanPropertyData >= 0)
         || AggregatedBooleanPropertyData == -1073741275
         || AggregatedBooleanPropertyData == -1073741772
         || AggregatedBooleanPropertyData == -1073741789) )
      {
        *(_DWORD *)v10 = AggregatedBooleanPropertyData;
        return (unsigned int)-1073741536;
      }
      else
      {
        v13 = (_QWORD *)(v10 + 16);
        v9 = 0;
        if ( !*v13 )
          PiPnpRtlCacheObjectBaseKey(a1, a2, (unsigned int)a3);
      }
      return v9;
    }
    if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
      return v9;
    if ( *(int *)a6 >= 0 )
    {
      PiDmObjectUpdateCachedObjectProperty(
        a3,
        a2,
        a3,
        *(_QWORD *)(a6 + 24),
        *(_QWORD *)(a6 + 32),
        **(_DWORD **)(a6 + 40),
        *(void **)(a6 + 48),
        **(_DWORD **)(a6 + 64));
    }
    else if ( *(_DWORD *)a6 == -1073741275 )
    {
      PiDmObjectUpdateCachedObjectProperty(a3, a2, a3, *(_QWORD *)(a6 + 24), *(_QWORD *)(a6 + 32), 0, 0LL, 0);
    }
    return 0;
  }
  if ( a4 == 5 )
  {
    if ( a5 != 1 )
      return v9;
    v19 = (_DWORD *)a6;
    if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    v20 = *(_QWORD *)(a6 + 48);
    v21 = *(_DWORD *)(a6 + 40);
    v22 = *(_QWORD *)(a6 + 32);
    v25 = 0LL;
    v26 = 0LL;
    if ( a3 < 6 )
    {
      v25 = *(_QWORD *)(a6 + 16);
      v26 = *(_QWORD *)(a6 + 24);
      ObjectList = PiDmGetObjectList(a3, (unsigned int)PiDmPnpObjectMatchCallback, (unsigned int)&v25, v22, v21, v20);
      if ( ObjectList != -1073741802 )
      {
        *v19 = ObjectList;
        return (unsigned int)-1073741536;
      }
    }
    return 0;
  }
  if ( a4 != 9 )
    return v9;
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
      return v9;
    PiDmObjectUpdateCachedObjectProperty(
      a3,
      a2,
      a3,
      *(_QWORD *)(a6 + 24),
      *(_QWORD *)(a6 + 32),
      *(_DWORD *)(a6 + 40),
      *(void **)(a6 + 48),
      *(_DWORD *)(a6 + 56));
    return 0;
  }
  v15 = a6;
  v9 = 0;
  if ( (*(_DWORD *)(a6 + 60) & 0x20000) != 0 )
    goto LABEL_49;
  v16 = *(_DWORD *)(a6 + 56);
  PoolWithTag = 0LL;
  if ( !v16 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x47706E50u)) != 0LL )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a2,
                       a3,
                       *(_QWORD *)(v15 + 16),
                       *(_QWORD *)(v15 + 24),
                       *(_QWORD *)(v15 + 32),
                       (__int64)&v27,
                       (__int64)PoolWithTag,
                       *(_DWORD *)(v15 + 56),
                       (__int64)&Size,
                       0);
    if ( ObjectProperty >= 0
      && v27 == *(_DWORD *)(v15 + 40)
      && (_DWORD)Size == *(_DWORD *)(v15 + 56)
      && !memcmp(PoolWithTag, *(const void **)(v15 + 48), (unsigned int)Size)
      || ObjectProperty == -1073741275 && !*(_DWORD *)(v15 + 40) && !*(_DWORD *)(v15 + 56) )
    {
      *(_DWORD *)v15 = ObjectProperty;
      v9 = -1073741536;
    }
    else
    {
      v9 = 0;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
    if ( !v9 )
    {
LABEL_49:
      if ( !*(_QWORD *)(v15 + 16) )
        PiPnpRtlCacheObjectBaseKey(a1, a2, (unsigned int)a3);
    }
  }
  return v9;
}
