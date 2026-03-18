/*
 * XREFs of CmEnumerateValueKey @ 0x14047E740
 * Callers:
 *     NtEnumerateValueKey @ 0x14047E270 (NtEnumerateValueKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140477DB8 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpQueryKeyValueData @ 0x14047DAE0 (CmpQueryKeyValueData.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 */

__int64 __fastcall CmEnumerateValueKey(__int64 a1, unsigned int a2, int a3, _DWORD *a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  unsigned int v7; // ebp
  ULONG_PTR v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int KeyValueData; // edi
  __int64 v19; // rcx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  bool v24; // zf
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  _DWORD v33[2]; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v34[2]; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v35[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v36; // [rsp+58h] [rbp-40h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+8h] BYREF
  int v38; // [rsp+B0h] [rbp+18h]

  v38 = a3;
  v6 = a2;
  v7 = -1;
  v37 = 0xFFFFFFFFLL;
  v33[0] = -1;
  v33[1] = 0;
  v35[0] = -1;
  v35[1] = 0;
  v36 = 0LL;
  CmpLockRegistry();
  v11 = *(_QWORD *)(a1 + 8);
  if ( *(_WORD *)(v11 + 58) )
  {
    v22 = CmEnumerateValueFromLayeredKey(a1, v6, a3, (_DWORD)a4, a5, a6);
    CmpUnlockRegistry(v23);
    return v22;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    ExAcquirePushLockSharedEx(v11 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 48));
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v24 = (*(_DWORD *)(a1 + 48) & 1) == 0;
      v25 = -1073740763;
      if ( v24 )
        v25 = -1073741444;
      CmpUnlockKcb(v11);
      CmpUnlockRegistry(v26);
      return v25;
    }
    CmpUnlockKcb(v11);
    v28 = CmpTransSearchAddTransFromKeyBody(a1, &v36);
    if ( v28 < 0 )
    {
      CmpUnlockRegistry(v27);
      return (unsigned int)v28;
    }
  }
  ExAcquirePushLockSharedEx(v11 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 48));
  while ( 1 )
  {
    v12 = v36;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v36) )
    {
      v24 = (*(_DWORD *)(a1 + 48) & 1) == 0;
      KeyValueData = -1073740763;
      if ( v24 )
        KeyValueData = -1073741444;
      goto LABEL_14;
    }
    v13 = *(_QWORD *)(v11 + 24);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 2848), 1u);
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v13 + 8))(v13, *(unsigned int *)(v11 + 32), &v37);
    v15 = v14;
    if ( !v14 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
      goto LABEL_35;
    }
    CmpUpdateKeyNodeAccessBits(v13, v14, *(unsigned int *)(v11 + 32));
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
    if ( v12 && *(_QWORD *)(v11 + 280) == v12 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v13 + 16))(v13, &v37);
      if ( (unsigned int)v6 < *(_DWORD *)(v11 + 272) )
      {
        v29 = *(unsigned int *)(v11 + 276);
        v34[0] = -1;
        v34[1] = 0;
        v30 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v13 + 8))(v13, v29, v34);
        if ( !v30 )
          goto LABEL_33;
        v7 = *(_DWORD *)(v30 + 4 * v6);
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v13 + 8))(v13, v7, v33);
        (*(void (__fastcall **)(__int64, _DWORD *))(v13 + 16))(v13, v34);
LABEL_12:
        if ( v17 )
        {
          KeyValueData = CmpQueryKeyValueData(v11, v7, v17, v38, a4, a5, (int *)a6);
          (*(void (__fastcall **)(__int64, _DWORD *))(v13 + 16))(v13, v33);
        }
        else
        {
LABEL_33:
          KeyValueData = -1073741670;
        }
LABEL_14:
        CmpUnlockKcb(v11);
        CmpUnlockRegistry(v19);
        return KeyValueData;
      }
      goto LABEL_17;
    }
    if ( (unsigned int)v6 >= *(_DWORD *)(v11 + 88) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v13 + 16))(v13, &v37);
LABEL_17:
      CmpUnlockKcb(v11);
      CmpUnlockRegistry(v21);
      return 2147483674LL;
    }
    if ( (*(_DWORD *)(v11 + 4) & 8) == 0 )
      goto LABEL_10;
    if ( *(struct _KTHREAD **)(v11 + 48) == KeGetCurrentThread() || CmpTryConvertKcbLockSharedToExclusive(v11) )
      break;
    (*(void (__fastcall **)(__int64, __int64 *))(v13 + 16))(v13, &v37);
    CmpUnlockKcb(v11);
    CmpLockKcbExclusive(v11);
  }
  CmpCleanUpKcbValueCache(v11);
  v31 = *(_DWORD *)(v15 + 36);
  *(_QWORD *)(v11 + 96) = *(unsigned int *)(v15 + 40);
  *(_DWORD *)(v11 + 88) = v31;
LABEL_10:
  (*(void (__fastcall **)(__int64, __int64 *))(v13 + 16))(v13, &v37);
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v11 + 24) + 8LL))(
          *(_QWORD *)(v11 + 24),
          *(unsigned int *)(v11 + 96),
          v35);
  if ( v16 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v11 + 24) + 8LL))(
            *(_QWORD *)(v11 + 24),
            *(unsigned int *)(v16 + 4 * v6),
            v33);
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v11 + 24) + 16LL))(*(_QWORD *)(v11 + 24), v35);
    goto LABEL_12;
  }
LABEL_35:
  CmpUnlockKcb(v11);
  CmpUnlockRegistry(v32);
  return 3221225626LL;
}
