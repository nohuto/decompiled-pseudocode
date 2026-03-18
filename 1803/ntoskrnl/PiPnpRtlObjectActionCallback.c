/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x140506EC0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1405071E4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x140507368 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140507E74 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140508230 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmGetObjectList @ 0x1405BE9E4 (PiDmGetObjectList.c)
 */

__int64 __fastcall PiPnpRtlObjectActionCallback(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned int v10; // edi
  int v11; // r9d
  int v12; // r9d
  int ObjectList; // eax
  int v14; // r8d
  bool v15; // zf
  unsigned int v17; // eax
  PVOID PoolWithTag; // rbp
  int ObjectProperty; // edi
  int v20; // eax
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // r9
  void *v24; // [rsp+30h] [rbp-68h]
  SIZE_T v25; // [rsp+38h] [rbp-60h]
  size_t Size; // [rsp+60h] [rbp-38h] BYREF
  __int64 v27; // [rsp+68h] [rbp-30h] BYREF
  __int64 v28; // [rsp+70h] [rbp-28h]
  int v29; // [rsp+B8h] [rbp+20h] BYREF

  v6 = a6;
  v10 = -1073741822;
  v11 = a4 - 5;
  if ( !v11 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v10;
    v21 = *(_QWORD *)(a6 + 48);
    v22 = *(_DWORD *)(a6 + 40);
    v23 = *(_QWORD *)(a6 + 32);
    v27 = 0LL;
    v28 = 0LL;
    if ( a3 < 7 )
    {
      v27 = *(_QWORD *)(a6 + 16);
      v28 = *(_QWORD *)(a6 + 24);
      ObjectList = PiDmGetObjectList(a3, (unsigned int)PiDmPnpObjectMatchCallback, (unsigned int)&v27, v23, v22, v21);
      if ( ObjectList != -1073741802 )
        goto LABEL_19;
    }
    return 0;
  }
  v12 = v11 - 3;
  if ( !v12 )
  {
    if ( a5 == 1 )
    {
      ObjectList = PiDmObjectGetAggregatedBooleanPropertyData(
                     a3,
                     a2,
                     a3,
                     *(_QWORD *)(a6 + 24),
                     *(_QWORD *)(a6 + 32),
                     *(_QWORD *)(a6 + 40),
                     *(_QWORD *)(a6 + 48),
                     *(_DWORD *)(a6 + 56),
                     *(_QWORD *)(a6 + 64));
      if ( ObjectList == -1073741802 )
      {
        if ( (*(_DWORD *)(v6 + 72) & 0x10000) != 0
          || (ObjectList = PiDmObjectGetCachedObjectProperty(
                             a3,
                             a2,
                             v14,
                             *(_QWORD *)(v6 + 24),
                             *(_QWORD *)(v6 + 32),
                             *(_QWORD *)(v6 + 40),
                             *(_QWORD *)(v6 + 48),
                             *(_DWORD *)(v6 + 56),
                             *(_QWORD *)(v6 + 64)),
              ObjectList < 0)
          && ObjectList != -1073741275
          && ObjectList != -1073741772
          && ObjectList != -1073741789 )
        {
          v10 = 0;
          v15 = *(_QWORD *)(v6 + 16) == 0LL;
          goto LABEL_11;
        }
      }
LABEL_19:
      *(_DWORD *)v6 = ObjectList;
      return (unsigned int)-1073741536;
    }
    if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
      return v10;
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
      {
        LODWORD(v25) = 0;
        PiDmObjectUpdateCachedObjectProperty(a3, a2, a3, *(_QWORD *)(a6 + 24), *(_QWORD *)(a6 + 32), 0, 0LL, v25);
      }
      return 0;
    }
    LODWORD(v25) = **(_DWORD **)(a6 + 64);
    v24 = *(void **)(a6 + 48);
    v20 = **(_DWORD **)(a6 + 40);
    goto LABEL_35;
  }
  if ( v12 != 1 )
    return v10;
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
      return v10;
    LODWORD(v25) = *(_DWORD *)(a6 + 56);
    v24 = *(void **)(a6 + 48);
    v20 = *(_DWORD *)(a6 + 40);
LABEL_35:
    PiDmObjectUpdateCachedObjectProperty(a3, a2, a3, *(_QWORD *)(a6 + 24), *(_QWORD *)(a6 + 32), v20, v24, v25);
    return 0;
  }
  v10 = 0;
  if ( (*(_DWORD *)(a6 + 60) & 0x20000) != 0 )
    goto LABEL_33;
  v17 = *(_DWORD *)(a6 + 56);
  PoolWithTag = 0LL;
  if ( !v17 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x47706E50u)) != 0LL )
  {
    if ( (ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             a2,
                             a3,
                             *(_QWORD *)(v6 + 16),
                             *(_QWORD *)(v6 + 24),
                             *(_QWORD *)(v6 + 32),
                             (__int64)&v29,
                             (__int64)PoolWithTag,
                             *(_DWORD *)(v6 + 56),
                             (__int64)&Size,
                             0),
          ObjectProperty >= 0)
      && v29 == *(_DWORD *)(v6 + 40)
      && (_DWORD)Size == *(_DWORD *)(v6 + 56)
      && !memcmp(PoolWithTag, *(const void **)(v6 + 48), (unsigned int)Size)
      || ObjectProperty == -1073741275 && !*(_DWORD *)(v6 + 40) && !*(_DWORD *)(v6 + 56) )
    {
      *(_DWORD *)v6 = ObjectProperty;
      v10 = -1073741536;
    }
    else
    {
      v10 = 0;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
    if ( !v10 )
    {
LABEL_33:
      v15 = *(_QWORD *)(v6 + 16) == 0LL;
LABEL_11:
      if ( v15 )
        PiPnpRtlCacheObjectBaseKey(a1, a2, (unsigned int)a3);
    }
  }
  return v10;
}
