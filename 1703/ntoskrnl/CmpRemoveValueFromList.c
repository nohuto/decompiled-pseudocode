/*
 * XREFs of CmpRemoveValueFromList @ 0x1404CF298
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140573C38 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvReallocateCell @ 0x1404D339C (HvReallocateCell.c)
 */

__int64 __fastcall CmpRemoveValueFromList(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rbx
  ULONG_PTR v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rax
  _DWORD *v9; // rdx
  ULONG_PTR v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v6 = a3[1];
  v7 = *a3 - 1;
  if ( *a3 == 1 )
  {
    HvFreeCell(BugCheckParameter2, v6);
    a3[1] = -1;
LABEL_7:
    *a3 = v7;
    return 0LL;
  }
  v13 = 0xFFFFFFFFLL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         v6,
         &v13);
  if ( v8 )
  {
    if ( (unsigned int)v4 < v7 )
    {
      v9 = (_DWORD *)(v8 + 4 * v4);
      do
      {
        v4 = (unsigned int)(v4 + 1);
        *v9++ = *(_DWORD *)(v8 + 4 * v4);
      }
      while ( (unsigned int)v4 < v7 );
    }
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v13);
    v10 = a3[1];
    v14 = 0LL;
    v11 = HvReallocateCell(BugCheckParameter2, v10, (__int64)&v14, (__int64)&v13);
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v13);
    a3[1] = v11;
    goto LABEL_7;
  }
  return 3221225626LL;
}
