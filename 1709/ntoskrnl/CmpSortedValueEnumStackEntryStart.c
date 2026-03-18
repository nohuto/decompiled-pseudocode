/*
 * XREFs of CmpSortedValueEnumStackEntryStart @ 0x14069C048
 * Callers:
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14069C1C0 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpSortedValueEnumStackEntryStart(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  size_t v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  PVOID v13; // rbp
  __int64 v14; // rax
  _QWORD *p_PrivilegeCount; // r13
  __int64 v16; // r12
  size_t v17; // r15
  unsigned int *v18; // r14
  __int64 v19; // rax
  char v22; // [rsp+78h] [rbp+10h] BYREF

  HvpGetCellContextReinitialize((__int64)&v22);
  *(_QWORD *)a1 = v7;
  v9 = *(unsigned int *)(v8 + 36);
  if ( (_DWORD)v9 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v6, 8 * v9, 0x38374D43u);
    if ( TransientPoolWithTag )
    {
      v13 = CmpAllocateTransientPoolWithTag(v11, 8 * v9, 0x38374D43u);
      if ( v13 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(a2 + 8))(a2, *(unsigned int *)(a3 + 40), &v22);
        p_PrivilegeCount = &TransientPoolWithTag->PrivilegeCount;
        v16 = (__int64)v13;
        v17 = v9;
        v18 = (unsigned int *)v14;
        do
        {
          HvpGetCellContextReinitialize(v16);
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a2 + 8))(a2, *v18, v16);
          v16 += 8LL;
          *p_PrivilegeCount = v19;
          ++v18;
          ++p_PrivilegeCount;
          --v17;
        }
        while ( v17 );
        (*(void (__fastcall **)(__int64, char *))(a2 + 16))(a2, &v22);
        qsort(TransientPoolWithTag, v9, 8uLL, CmpSortedValueEnumStackValueCompareFunction);
        *(_QWORD *)(a1 + 8) = TransientPoolWithTag;
        TransientPoolWithTag = 0LL;
        v10 = 0;
        *(_QWORD *)(a1 + 16) = v13;
        *(_DWORD *)(a1 + 24) = v9;
      }
      else
      {
        v10 = -1073741670;
      }
      if ( TransientPoolWithTag )
        MiDeleteSubsection(TransientPoolWithTag);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return v10;
}
