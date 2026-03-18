/*
 * XREFs of CmpCloneKCBValueListForTrans @ 0x140599910
 * Callers:
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvDuplicateCell @ 0x1405999E4 (HvDuplicateCell.c)
 */

char __fastcall CmpCloneKCBValueListForTrans(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v12 = -1;
  v13 = 0;
  *a3 = 0;
  if ( *(_QWORD *)(a1 + 280) )
    return 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
         *(_QWORD *)(a1 + 24),
         *(unsigned int *)(a1 + 32),
         &v12);
  v8 = v6;
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 36) )
    {
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = -1;
      goto LABEL_6;
    }
    LOBYTE(v7) = 1;
    v9 = HvDuplicateCell(*(_QWORD *)(a1 + 24), *(unsigned int *)(v6 + 40), 1LL, v7);
    *(_DWORD *)(a1 + 276) = v9;
    if ( v9 != -1 )
    {
      *(_DWORD *)(a1 + 272) = *(_DWORD *)(v8 + 36);
LABEL_6:
      v10 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 280) = a2;
      *a3 = 1;
      (*(void (__fastcall **)(__int64, int *))(v10 + 16))(v10, &v12);
      return 1;
    }
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v12);
  }
  return 0;
}
