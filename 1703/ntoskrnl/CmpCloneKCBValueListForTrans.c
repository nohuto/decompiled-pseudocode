/*
 * XREFs of CmpCloneKCBValueListForTrans @ 0x14045B8F4
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvDuplicateCell @ 0x14045B9CC (HvDuplicateCell.c)
 */

char __fastcall CmpCloneKCBValueListForTrans(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v12 = -1;
  v13 = 0;
  *a3 = 0;
  if ( *(_QWORD *)(a1 + 280) )
    return 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 24) + 8LL))(
         *(_QWORD *)(a1 + 24),
         *(unsigned int *)(a1 + 32),
         &v12);
  v9 = v7;
  if ( v7 )
  {
    if ( !*(_DWORD *)(v7 + 36) )
    {
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = -1;
      goto LABEL_7;
    }
    LOBYTE(v8) = 1;
    v10 = HvDuplicateCell(*(_QWORD *)(a1 + 24), *(unsigned int *)(v7 + 40), 1LL, v8);
    *(_DWORD *)(a1 + 276) = v10;
    if ( v10 != -1 )
    {
      *(_DWORD *)(a1 + 272) = *(_DWORD *)(v9 + 36);
LABEL_7:
      v11 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 280) = a2;
      *a3 = 1;
      (*(void (__fastcall **)(__int64, int *))(v11 + 16))(v11, &v12);
      return 1;
    }
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), &v12);
  }
  return 0;
}
