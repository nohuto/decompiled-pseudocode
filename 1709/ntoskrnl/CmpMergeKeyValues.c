/*
 * XREFs of CmpMergeKeyValues @ 0x140699A74
 * Callers:
 *     CmpCopySyncTree2 @ 0x1405A5E80 (CmpCopySyncTree2.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpAddValueToListEx @ 0x140476AC8 (CmpAddValueToListEx.c)
 *     CmpFindNameInList @ 0x140479444 (CmpFindNameInList.c)
 *     CmpInitializeValueNameString @ 0x14059D1F8 (CmpInitializeValueNameString.c)
 *     CmpSyncKeyValues @ 0x1405A62E4 (CmpSyncKeyValues.c)
 *     CmpCopyValue @ 0x1405A651C (CmpCopyValue.c)
 */

char __fastcall CmpMergeKeyValues(__int64 a1, int a2, _DWORD *a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
{
  char v7; // bl
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int *v12; // r13
  _WORD *PoolWithTag; // rax
  unsigned int v14; // r14d
  _WORD *v15; // r12
  unsigned int *v16; // rsi
  unsigned int v17; // r15d
  __int64 v18; // rax
  bool v19; // zf
  void (__fastcall *v20)(__int64, _DWORD *); // rax
  int v21; // eax
  char v23; // [rsp+30h] [rbp-30h]
  _DWORD v24[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v25[2]; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-10h] BYREF
  int v27; // [rsp+A8h] [rbp+48h]
  unsigned int v28; // [rsp+B0h] [rbp+50h] BYREF
  ULONG_PTR v29; // [rsp+B8h] [rbp+58h]

  v29 = a4;
  v25[1] = 0;
  v24[1] = 0;
  v7 = 0;
  v26[0] = 0LL;
  v26[1] = 0LL;
  v9 = a6;
  v25[0] = -1;
  v24[0] = -1;
  v10 = a3[15];
  if ( *(_DWORD *)(a6 + 60) < v10 )
    *(_DWORD *)(a6 + 60) = v10;
  v11 = a3[16];
  if ( *(_DWORD *)(v9 + 64) < v11 )
    *(_DWORD *)(v9 + 64) = v11;
  v12 = (unsigned int *)(v9 + 36);
  if ( *(_DWORD *)(v9 + 36) )
  {
    v14 = a3[9];
    if ( v14 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x7FFFuLL, 0x20204D43u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        return (char)PoolWithTag;
      v27 = a5 >> 31;
      v16 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                              a1,
                              (unsigned int)a3[10],
                              v25);
      if ( v16 )
      {
        v17 = 0;
        while ( 1 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *v16, v24);
          if ( !v18 )
            break;
          CmpInitializeValueNameString(v18, (__int64)v26, v15);
          v19 = !CmpFindNameInList(v29, (int)v12, (int)v26, 0, (__int64)&v28, (__int64)&a6);
          v20 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
          if ( v19 )
          {
            v20(a1, v24);
            break;
          }
          v20(a1, v24);
          if ( (_DWORD)a6 == -1 )
          {
            v21 = CmpCopyValue(a1, *v16, v29, v27);
            if ( v21 == -1 || (int)CmpAddValueToListEx(v29, v21, v28, v27, v12, 1) < 0 )
              break;
          }
          ++v17;
          ++v16;
          if ( v17 >= v14 )
          {
            v7 = 1;
            break;
          }
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v25);
      }
      ExFreePoolWithTag(v15, 0);
    }
    else
    {
      v7 = 1;
    }
    LOBYTE(PoolWithTag) = v7;
    return (char)PoolWithTag;
  }
  LOBYTE(PoolWithTag) = CmpSyncKeyValues(a1, a2, (__int64)a3, a4, a5, v9, v23);
  return (char)PoolWithTag;
}
