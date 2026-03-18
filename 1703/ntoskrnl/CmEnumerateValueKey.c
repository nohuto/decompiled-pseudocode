/*
 * XREFs of CmEnumerateValueKey @ 0x1404FF740
 * Callers:
 *     NtEnumerateValueKey @ 0x1404FF290 (NtEnumerateValueKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140491788 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyValueData @ 0x140503410 (CmpQueryKeyValueData.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140662EF0 (CmEnumerateValueFromLayeredKey.c)
 */

__int64 __fastcall CmEnumerateValueKey(__int64 a1, unsigned int a2, unsigned int a3, void *a4, int a5, __int64 a6)
{
  __int64 v6; // r12
  unsigned int v7; // r15d
  __int64 v8; // r14
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int KeyValueData; // esi
  unsigned int v20; // ebx
  char IsKeyDeletedForKeyBody; // al
  void *v22; // rcx
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  _DWORD v27[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v29[2]; // [rsp+50h] [rbp-10h] BYREF
  _DWORD v30[2]; // [rsp+58h] [rbp-8h] BYREF
  int v31; // [rsp+A0h] [rbp+40h] BYREF
  int v32; // [rsp+A4h] [rbp+44h]
  int v33; // [rsp+B0h] [rbp+50h]
  void *Src; // [rsp+B8h] [rbp+58h]

  Src = a4;
  v33 = a3;
  v6 = a2;
  v7 = -1;
  v32 = 0;
  v8 = 0LL;
  v31 = -1;
  v27[0] = -1;
  v27[1] = 0;
  v30[0] = -1;
  v30[1] = 0;
  v28 = 0LL;
  CmpLockRegistry();
  v12 = *(_QWORD *)(a1 + 8);
  if ( *(_WORD *)(v12 + 58) )
  {
    v20 = CmEnumerateValueFromLayeredKey(a1, (unsigned int)v6, a3, a4, a5, a6);
    CmpUnlockRegistry();
    return v20;
  }
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
    goto LABEL_4;
  CmpLockKcbShared(*(_QWORD *)(a1 + 8));
  IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
  v22 = (void *)v12;
  if ( IsKeyDeletedForKeyBody )
  {
LABEL_33:
    v23 = -1073740763;
    if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
      v23 = -1073741444;
    CmpUnlockKcb(v22);
    goto LABEL_36;
  }
  CmpUnlockKcb((PVOID)v12);
  v23 = CmpTransSearchAddTransFromKeyBody(a1, &v28);
  if ( v23 < 0 )
  {
LABEL_36:
    CmpUnlockRegistry();
    return (unsigned int)v23;
  }
  v8 = v28;
LABEL_4:
  CmpLockKcbShared(v12);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v8) )
    {
      v22 = (void *)v12;
      goto LABEL_33;
    }
    v13 = *(_QWORD *)(v12 + 24);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 2848), 1u);
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v13 + 8))(v13, *(unsigned int *)(v12 + 32), &v31);
    v15 = v14;
    if ( !v14 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
      goto LABEL_31;
    }
    CmpUpdateKeyNodeAccessBits(v13, v14, *(unsigned int *)(v12 + 32));
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
    if ( v8 && *(_QWORD *)(v12 + 280) == v8 )
    {
      (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v31);
      if ( (unsigned int)v6 < *(_DWORD *)(v12 + 272) )
      {
        v24 = *(unsigned int *)(v12 + 276);
        v29[0] = -1;
        v29[1] = 0;
        v25 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v13 + 8))(v13, v24, v29);
        if ( !v25 )
          goto LABEL_29;
        v7 = *(_DWORD *)(v25 + 4 * v6);
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v13 + 8))(v13, v7, v27);
        (*(void (__fastcall **)(__int64, _DWORD *))(v13 + 16))(v13, v29);
LABEL_12:
        if ( v17 )
        {
          KeyValueData = CmpQueryKeyValueData(v12, v7, v17, v33, Src, a5, a6);
          (*(void (__fastcall **)(__int64, _DWORD *))(v13 + 16))(v13, v27);
        }
        else
        {
LABEL_29:
          KeyValueData = -1073741670;
        }
        CmpUnlockKcb((PVOID)v12);
        CmpUnlockRegistry();
        return KeyValueData;
      }
      goto LABEL_16;
    }
    if ( (unsigned int)v6 >= *(_DWORD *)(v12 + 88) )
    {
      (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v31);
LABEL_16:
      CmpUnlockKcb((PVOID)v12);
      CmpUnlockRegistry();
      return 2147483674LL;
    }
    if ( (*(_DWORD *)(v12 + 4) & 8) == 0 )
      goto LABEL_10;
    if ( *(struct _KTHREAD **)(v12 + 48) == KeGetCurrentThread() || CmpTryConvertKcbLockSharedToExclusive(v12) )
      break;
    (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v31);
    CmpUnlockKcb((PVOID)v12);
    CmpLockKcbExclusive(v12);
    v8 = v28;
  }
  CmpCleanUpKcbValueCache(v12);
  v26 = *(_DWORD *)(v15 + 36);
  *(_QWORD *)(v12 + 96) = *(unsigned int *)(v15 + 40);
  *(_DWORD *)(v12 + 88) = v26;
LABEL_10:
  (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v31);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v12 + 24) + 8LL))(
          *(_QWORD *)(v12 + 24),
          *(unsigned int *)(v12 + 96),
          v30);
  if ( v16 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v12 + 24) + 8LL))(
            *(_QWORD *)(v12 + 24),
            *(unsigned int *)(v16 + 4 * v6),
            v27);
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v12 + 24) + 16LL))(*(_QWORD *)(v12 + 24), v30);
    goto LABEL_12;
  }
LABEL_31:
  CmpUnlockKcb((PVOID)v12);
  CmpUnlockRegistry();
  return 3221225626LL;
}
