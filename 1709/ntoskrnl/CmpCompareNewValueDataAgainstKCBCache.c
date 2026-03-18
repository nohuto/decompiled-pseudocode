/*
 * XREFs of CmpCompareNewValueDataAgainstKCBCache @ 0x14047AD50
 * Callers:
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpGetValueDataFromCache @ 0x140477D78 (CmpGetValueDataFromCache.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140477DB8 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpFindNameInListWithStatus @ 0x140479488 (CmpFindNameInListWithStatus.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 */

__int64 __fastcall CmpCompareNewValueDataAgainstKCBCache(__int64 a1, __int64 a2, int a3, const void *a4, int a5)
{
  int v5; // ebx
  char v7; // r12
  bool v9; // zf
  __int64 v12; // rcx
  __int64 v13; // rax
  void *ValueDataFromCache; // rsi
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v24[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v27[4]; // [rsp+50h] [rbp-10h] BYREF
  char v28; // [rsp+90h] [rbp+30h] BYREF

  v5 = a5;
  v26[1] = 0;
  v28 = 0;
  v7 = 0;
  v26[0] = -1;
  v25[0] = -1;
  v9 = (*(_DWORD *)(a1 + 176) & 0x100000) == 0;
  v25[1] = 0;
  if ( v9 )
  {
LABEL_2:
    v12 = *(_QWORD *)(a1 + 24);
    v27[0] = *(_DWORD *)(a1 + 88);
    v27[1] = *(_DWORD *)(a1 + 96);
    if ( (int)CmpFindNameInListWithStatus(v12, v27, a2, 0, 0LL, (__int64)&v23) < 0 )
      return 2;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
            *(_QWORD *)(a1 + 24),
            v23,
            v26);
    if ( a3 == *(_DWORD *)(v13 + 12) && v5 == (*(_DWORD *)(v13 + 4) & 0x7FFFFFFF) )
    {
      if ( *(_DWORD *)(v13 + 4) >= 0x80000000 )
      {
        ValueDataFromCache = (void *)(v13 + 8);
LABEL_7:
        if ( v5 )
          v15 = RtlCompareMemory(ValueDataFromCache, a4, v5 & 0x7FFFFFFF);
        else
          v15 = 0;
        v16 = v15 != v5 ? 2 : 0;
        if ( ValueDataFromCache && v7 )
        {
          if ( v28 == 1 )
            ExFreePoolWithTag(ValueDataFromCache, 0);
          else
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v25);
        }
        goto LABEL_11;
      }
      v7 = 1;
      ValueDataFromCache = (void *)CmpGetValueDataFromCache(a1, v23, v13, (__int64)&v28, (__int64)v25);
      if ( ValueDataFromCache )
        goto LABEL_7;
    }
    v16 = 2;
LABEL_11:
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v26);
    return v16;
  }
  v24[0] = -1;
  v24[1] = 0;
  if ( *(struct _KTHREAD **)(a1 + 48) != KeGetCurrentThread() && !CmpTryConvertKcbLockSharedToExclusive(a1) )
    return 1LL;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 24) + 2848LL), 1u);
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 32),
          v24);
  v19 = *(_QWORD *)(a1 + 24);
  v20 = v18;
  if ( v18 )
  {
    CmpUpdateKeyNodeAccessBits(v19, v18, *(unsigned int *)(a1 + 32));
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 24) + 2848LL));
    CmpCleanUpKcbValueCache(a1);
    v21 = *(_DWORD *)(v20 + 36);
    *(_QWORD *)(a1 + 96) = *(unsigned int *)(v20 + 40);
    v22 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 88) = v21;
    (*(void (__fastcall **)(__int64, _DWORD *))(v22 + 16))(v22, v24);
    goto LABEL_2;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v19 + 2848));
  return 2LL;
}
