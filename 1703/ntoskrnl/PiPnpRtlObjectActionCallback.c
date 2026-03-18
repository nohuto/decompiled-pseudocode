/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x140484FD0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiDmGetObjectList @ 0x14044F15C (PiDmGetObjectList.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x140485340 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1404854F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140485F2C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140486114 (PiDmObjectUpdateCachedObjectProperty.c)
 */

__int64 __fastcall PiPnpRtlObjectActionCallback(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // ebx
  __int64 v10; // r14
  int AggregatedBooleanPropertyData; // eax
  int v12; // r8d
  unsigned int v14; // eax
  PVOID PoolWithTag; // r12
  int ObjectProperty; // ebx
  _DWORD *v17; // rdi
  _DWORD *v18; // rcx
  unsigned int v19; // edx
  _WORD *v20; // r9
  int ObjectList; // eax
  size_t Size; // [rsp+60h] [rbp-48h] BYREF
  __int64 v23; // [rsp+68h] [rbp-40h] BYREF
  __int64 v24; // [rsp+70h] [rbp-38h]
  int v25; // [rsp+C8h] [rbp+20h] BYREF

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
        || (v9 = 0, (*(_DWORD *)(v10 + 72) & 0x10000) == 0)
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
      goto LABEL_9;
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
    v17 = (_DWORD *)a6;
    if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    v18 = *(_DWORD **)(a6 + 48);
    v19 = *(_DWORD *)(a6 + 40);
    v20 = *(_WORD **)(a6 + 32);
    v23 = 0LL;
    v24 = 0LL;
    if ( a3 < 6 )
    {
      v23 = *(_QWORD *)(a6 + 16);
      v24 = *(_QWORD *)(a6 + 24);
      ObjectList = PiDmGetObjectList(
                     (unsigned int)a3,
                     (__int64)PiDmPnpObjectMatchCallback,
                     (__int64)&v23,
                     v20,
                     v19,
                     v18);
      if ( ObjectList != -1073741802 )
      {
        *v17 = ObjectList;
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
  v10 = a6;
  v9 = 0;
  if ( (*(_DWORD *)(a6 + 60) & 0x20000) != 0 )
    goto LABEL_9;
  v14 = *(_DWORD *)(a6 + 56);
  PoolWithTag = 0LL;
  if ( !v14 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x47706E50u)) != 0LL )
  {
    if ( (ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             a2,
                             a3,
                             *(_QWORD *)(v10 + 16),
                             *(_QWORD *)(v10 + 24),
                             *(_QWORD *)(v10 + 32),
                             (__int64)&v25,
                             (__int64)PoolWithTag,
                             *(_DWORD *)(v10 + 56),
                             (__int64)&Size,
                             0),
          ObjectProperty >= 0)
      && v25 == *(_DWORD *)(v10 + 40)
      && (_DWORD)Size == *(_DWORD *)(v10 + 56)
      && !memcmp(PoolWithTag, *(const void **)(v10 + 48), (unsigned int)Size)
      || ObjectProperty == -1073741275 && !*(_DWORD *)(v10 + 40) && !*(_DWORD *)(v10 + 56) )
    {
      *(_DWORD *)v10 = ObjectProperty;
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
LABEL_9:
      if ( !*(_QWORD *)(v10 + 16) )
        PiPnpRtlCacheObjectBaseKey(a1, a2, (unsigned int)a3);
    }
  }
  return v9;
}
