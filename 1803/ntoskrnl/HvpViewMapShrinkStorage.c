/*
 * XREFs of HvpViewMapShrinkStorage @ 0x140706E50
 * Callers:
 *     HvFreeHivePartial @ 0x14049A144 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmSiUnmapViewOfSection @ 0x1400CC138 (CmSiUnmapViewOfSection.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1404E366C (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140706C7C (HvpViewMapMakeViewRangeInvalid.c)
 */

struct _PRIVILEGE_SET *__fastcall HvpViewMapShrinkStorage(SIZE_T a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  struct _PRIVILEGE_SET *p_Privileges; // rbx
  __int64 v5; // r10
  unsigned __int64 ViewForFileOffset; // rbx
  __int64 v8; // rsi
  __int64 v9; // r10
  unsigned __int64 *Luid; // rax
  __int64 v11; // rax
  void *v12; // r8
  struct _PRIVILEGE_SET *result; // rax
  struct _PRIVILEGE_SET Privileges; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned int)(a2 + 4096);
  p_Privileges = &Privileges;
  v5 = v3;
  Privileges.Privilege[0].Luid = (LUID)&Privileges;
  *(_QWORD *)&Privileges.PrivilegeCount = &Privileges;
  if ( v3 < v2 )
  {
    do
    {
      ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v5);
      v8 = *(_QWORD *)(ViewForFileOffset + 48);
      HvpViewMapMakeViewRangeInvalid(a1, (_QWORD *)ViewForFileOffset, v9, v8);
      if ( *(_QWORD *)(ViewForFileOffset + 40) == *(_QWORD *)(ViewForFileOffset + 48) )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), (PRTL_BALANCED_NODE)ViewForFileOffset);
        Luid = (unsigned __int64 *)Privileges.Privilege[0].Luid;
        if ( **(struct _PRIVILEGE_SET ***)&Privileges.Privilege[0].Luid != &Privileges )
          __fastfail(3u);
        *(LUID *)(ViewForFileOffset + 8) = Privileges.Privilege[0].Luid;
        *(_QWORD *)ViewForFileOffset = &Privileges;
        *Luid = ViewForFileOffset;
        Privileges.Privilege[0].Luid = (LUID)ViewForFileOffset;
      }
      v5 = v8;
    }
    while ( v8 < v2 );
    p_Privileges = *(struct _PRIVILEGE_SET **)&Privileges.PrivilegeCount;
  }
  *(_QWORD *)(a1 + 8) = v3;
  v11 = *(_QWORD *)&p_Privileges->PrivilegeCount;
  if ( (struct _PRIVILEGE_SET *)p_Privileges->Privilege[0].Luid != &Privileges
    || *(struct _PRIVILEGE_SET **)(v11 + 8) != p_Privileges )
  {
    __fastfail(3u);
  }
  while ( 1 )
  {
    *(_QWORD *)&Privileges.PrivilegeCount = v11;
    *(_QWORD *)(v11 + 8) = &Privileges;
    result = &Privileges;
    if ( p_Privileges == &Privileges )
      break;
    v12 = *(void **)&p_Privileges[2].Privilege[0].Attributes;
    if ( v12 )
      CmSiUnmapViewOfSection((__int64)&Privileges, *(HANDLE **)(a1 + 24), v12);
    CmSiFreeMemory(p_Privileges);
    p_Privileges = *(struct _PRIVILEGE_SET **)&Privileges.PrivilegeCount;
    if ( *(struct _PRIVILEGE_SET **)(*(_QWORD *)&Privileges.PrivilegeCount + 8LL) == &Privileges )
    {
      v11 = **(_QWORD **)&Privileges.PrivilegeCount;
      if ( *(_QWORD *)(**(_QWORD **)&Privileges.PrivilegeCount + 8LL) == *(_QWORD *)&Privileges.PrivilegeCount )
        continue;
    }
    __fastfail(3u);
  }
  return result;
}
