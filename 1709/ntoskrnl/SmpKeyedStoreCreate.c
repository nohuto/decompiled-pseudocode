/*
 * XREFs of SmpKeyedStoreCreate @ 0x140444B98
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     SmAlloc @ 0x1400064E8 (SmAlloc.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14000C970 (SmKmStoreDeleteWhenEmpty.c)
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14011B054 (SmKmStoreRefFromStoreIndex.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SmpDirtyStoreCreate @ 0x140444C7C (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  int v3; // eax
  _QWORD *v5; // rdi
  int v8; // ebx
  _QWORD *v9; // rax
  int v10; // esi
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(a3 + 1740);
  v16 = -1;
  v5 = 0LL;
  v8 = SmpDirtyStoreCreate(a2, (v3 & 1) != 0 ? 2048 : 512, 1LL, &v16);
  if ( v8 < 0 )
    goto LABEL_11;
  v9 = SmAlloc(0x30uLL, 0x53506D73u);
  v5 = v9;
  if ( !v9 )
  {
    v8 = -1073741670;
LABEL_11:
    v10 = v16;
    goto LABEL_5;
  }
  memset(v9, 0, 0x30uLL);
  v5[1] = a3;
  v10 = v16;
  *((_WORD *)v5 + 8) = v16;
  if ( SmpKeyedStoreEntryGet(BugCheckParameter2, v5 + 1, 1, 0) )
  {
    v10 = -1;
    v5 = 0LL;
    v8 = 0;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_5:
  if ( v10 != -1 )
  {
    v12 = v10 & 0x3FF;
    v13 = (__int64 *)SmKmStoreRefFromStoreIndex(a2, v12);
    SmKmStoreDeleteWhenEmpty(v14, *v13);
    v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, v12);
    ExReleaseRundownProtection_0(v15 + 1);
  }
  if ( v5 )
    MiDeleteSubsection((PPRIVILEGE_SET)v5);
  return (unsigned int)v8;
}
