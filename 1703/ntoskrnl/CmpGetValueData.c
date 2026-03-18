/*
 * XREFs of CmpGetValueData @ 0x1405031D0
 * Callers:
 *     CmQueryMultipleValueForLayeredKey @ 0x1401DF0C4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmpGetValueDataFromCache @ 0x140491A98 (CmpGetValueDataFromCache.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404CC0FC (CmpCommitSetValueKeyUoW.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpQueryKeyValueData @ 0x140503410 (CmpQueryKeyValueData.c)
 *     CmpCopyValue @ 0x14058E1DC (CmpCopyValue.c)
 *     CmpValueToData @ 0x1405B6E58 (CmpValueToData.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x140671210 (CmpGetValueForAudit.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpFindTagIndex @ 0x14080E168 (CmpFindTagIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

bool __fastcall CmpGetValueData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v7; // r14
  unsigned __int16 v8; // bp
  __int64 *v9; // rsi
  unsigned int v12; // eax
  __int64 v13; // rax
  bool result; // al
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64, int *); // rax
  char *PoolWithTag; // r12
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned int v20; // r15d
  const void *v21; // rax
  size_t v22; // r8
  char v23; // di
  int v24; // [rsp+70h] [rbp+18h] BYREF
  int v25; // [rsp+74h] [rbp+1Ch]
  __int64 v26; // [rsp+78h] [rbp+20h]

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = (__int64 *)a5;
  *(_BYTE *)a6 = 0;
  *v9 = 0LL;
  v12 = *(_DWORD *)(a3 + 4);
  if ( v12 >= 0x80000000 )
    v12 += 0x80000000;
  *a4 = v12;
  if ( *(_DWORD *)(a3 + 4) >= 0x80000000 )
  {
    if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 8))(a1, a2, a7) )
    {
      *v9 = a3 + 8;
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 196) < 4u || v12 - 16345 > 0x7FFFC026 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, *(unsigned int *)(a3 + 8), a7);
    *v9 = v13;
    return v13 != 0;
  }
  v15 = *(unsigned int *)(a3 + 8);
  v25 = 0;
  v16 = *(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8);
  PoolWithTag = 0LL;
  v24 = -1;
  a6 = 0xFFFFFFFFLL;
  a5 = 0xFFFFFFFFLL;
  v18 = v16(a1, v15, &v24);
  v19 = v18;
  if ( !v18 )
    return 0;
  v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(v18 + 4), &a5);
  if ( v26 )
  {
    v20 = *(_DWORD *)(a3 + 4);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v20, 0x64764D43u);
    if ( PoolWithTag )
    {
      if ( !*(_WORD *)(v19 + 2) )
      {
LABEL_18:
        v23 = 1;
LABEL_19:
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &a5);
        goto LABEL_20;
      }
      while ( 1 )
      {
        v21 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(
                              a1,
                              *(unsigned int *)(v26 + 4LL * v8),
                              &a6);
        if ( !v21 )
          break;
        v22 = v20;
        if ( v20 > 0x3FD8 )
          v22 = 16344LL;
        memmove(&PoolWithTag[16344 * v8], v21, v22);
        v20 -= 16344;
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &a6);
        if ( ++v8 >= *(_WORD *)(v19 + 2) )
          goto LABEL_18;
      }
    }
    v23 = 0;
    goto LABEL_19;
  }
  v23 = 0;
LABEL_20:
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v24);
  if ( !v23 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 0;
  }
  *v9 = (__int64)PoolWithTag;
  result = 1;
  *v7 = 1;
  return result;
}
