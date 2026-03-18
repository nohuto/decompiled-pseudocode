/*
 * XREFs of CmpCompareNewValueDataAgainstKCBCache @ 0x14048FD04
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpFindNameInListWithStatus @ 0x1404905C4 (CmpFindNameInListWithStatus.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140491788 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpGetValueDataFromCache @ 0x140491A98 (CmpGetValueDataFromCache.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 */

__int64 __fastcall CmpCompareNewValueDataAgainstKCBCache(__int64 a1, int a2, int a3, const void *a4, int a5)
{
  char v6; // r14
  bool v8; // zf
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  void *ValueDataFromCache; // rsi
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v24[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v27[4]; // [rsp+50h] [rbp-10h] BYREF
  char v28; // [rsp+90h] [rbp+30h] BYREF

  v26[1] = 0;
  v6 = 0;
  v26[0] = -1;
  v28 = 0;
  v8 = (*(_DWORD *)(a1 + 176) & 0x100000) == 0;
  v25[0] = -1;
  v25[1] = 0;
  if ( v8 )
  {
LABEL_2:
    v11 = *(_QWORD *)(a1 + 24);
    v27[0] = *(_DWORD *)(a1 + 88);
    v27[1] = *(_DWORD *)(a1 + 96);
    if ( (int)CmpFindNameInListWithStatus(v11, (unsigned int)v27, a2, 0, 0LL, (__int64)&v23) < 0 )
      return 2;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
            *(_QWORD *)(a1 + 24),
            v23,
            v26);
    if ( a3 == *(_DWORD *)(v12 + 12) )
    {
      v13 = a5;
      if ( a5 == (*(_DWORD *)(v12 + 4) & 0x7FFFFFFF) )
      {
        if ( *(_DWORD *)(v12 + 4) >= 0x80000000 )
        {
          ValueDataFromCache = (void *)(v12 + 8);
LABEL_7:
          if ( v13 )
            v15 = RtlCompareMemory(ValueDataFromCache, a4, v13 & 0x7FFFFFFF);
          else
            v15 = 0;
          v16 = v15 != v13 ? 2 : 0;
          if ( ValueDataFromCache && v6 )
          {
            if ( v28 == 1 )
              ExFreePoolWithTag(ValueDataFromCache, 0);
            else
              (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v25);
          }
          goto LABEL_11;
        }
        v6 = 1;
        ValueDataFromCache = (void *)CmpGetValueDataFromCache(a1, v23, v12, (unsigned int)&v28, (__int64)v25);
        if ( ValueDataFromCache )
          goto LABEL_7;
      }
    }
    v16 = 2;
LABEL_11:
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v26);
    return v16;
  }
  v24[0] = -1;
  v24[1] = 0;
  if ( *(struct _KTHREAD **)(a1 + 48) != KeGetCurrentThread()
    && !(unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(a1) )
  {
    return 1LL;
  }
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
