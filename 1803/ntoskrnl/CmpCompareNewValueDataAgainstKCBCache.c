/*
 * XREFs of CmpCompareNewValueDataAgainstKCBCache @ 0x1404A3C14
 * Callers:
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpGetValueDataFromCache @ 0x1404A17F4 (CmpGetValueDataFromCache.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1404A3370 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInListWithStatus @ 0x1404A38E0 (CmpFindNameInListWithStatus.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 */

__int64 __fastcall CmpCompareNewValueDataAgainstKCBCache(__int64 a1, __int64 a2, int a3, void *a4, int a5)
{
  int v5; // esi
  char v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // r8
  void *ValueDataFromCache; // r14
  __int64 v16; // rax
  ULONG_PTR v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  ULONG_PTR v22; // rbx
  unsigned int v23; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v24[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v26[2]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v27[4]; // [rsp+50h] [rbp-10h] BYREF
  char v28; // [rsp+A0h] [rbp+40h] BYREF
  void *Source2; // [rsp+B8h] [rbp+58h]

  Source2 = a4;
  v5 = a5;
  v26[1] = 0;
  v28 = 0;
  v25[1] = 0;
  v26[0] = -1;
  v25[0] = -1;
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 176) & 0x100000) == 0 )
    goto LABEL_2;
  v24[0] = -1;
  v24[1] = 0;
  if ( *(struct _KTHREAD **)(a1 + 48) != KeGetCurrentThread() && !CmpTryConvertKcbLockSharedToExclusive(a1) )
    return 1LL;
  ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 24) + 72LL, 0LL);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
          *(_QWORD *)(a1 + 24),
          *(unsigned int *)(a1 + 32),
          v24);
  v17 = *(_QWORD *)(a1 + 24);
  v18 = v16;
  if ( v16 )
  {
    CmpUpdateKeyNodeAccessBits(v17, v16, *(_DWORD *)(a1 + 32));
    v19 = *(_QWORD *)(a1 + 24);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v19 + 72));
    KeAbPostRelease(v19 + 72);
    CmpCleanUpKcbValueCache(a1);
    v20 = *(_DWORD *)(v18 + 36);
    *(_QWORD *)(a1 + 96) = *(unsigned int *)(v18 + 40);
    v21 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 88) = v20;
    (*(void (__fastcall **)(__int64, _DWORD *))(v21 + 16))(v21, v24);
LABEL_2:
    v10 = *(_QWORD *)(a1 + 24);
    v27[0] = *(_DWORD *)(a1 + 88);
    v27[1] = *(_DWORD *)(a1 + 96);
    if ( (int)CmpFindNameInListWithStatus(v10, v27, a2, 0, 0LL, (__int64)&v23) < 0 )
      return 2;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
            *(_QWORD *)(a1 + 24),
            v23,
            v26);
    v12 = 2;
    v13 = v11;
    if ( (*(_BYTE *)(v11 + 16) & 2) == 0 && a3 == *(_DWORD *)(v11 + 12) && v5 == (*(_DWORD *)(v11 + 4) & 0x7FFFFFFF) )
    {
      if ( v5 )
      {
        if ( *(_DWORD *)(v11 + 4) >= 0x80000000 )
        {
          ValueDataFromCache = (void *)(v11 + 8);
          goto LABEL_9;
        }
        v9 = 1;
        ValueDataFromCache = (void *)CmpGetValueDataFromCache(a1, v23, v11, (__int64)&v28, (__int64)v25);
        if ( ValueDataFromCache )
        {
LABEL_9:
          v12 = v5 != (unsigned int)RtlCompareMemory(ValueDataFromCache, Source2, v5 & 0x7FFFFFFF) ? 2 : 0;
          if ( ValueDataFromCache && v9 )
          {
            if ( v28 == 1 )
              ExFreePoolWithTag(ValueDataFromCache, 0);
            else
              (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v25);
          }
        }
      }
      else
      {
        v12 = 0;
      }
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *, __int64))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v26, v13);
    return v12;
  }
  v22 = v17 + 72;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v17 + 72));
  KeAbPostRelease(v22);
  return 2LL;
}
