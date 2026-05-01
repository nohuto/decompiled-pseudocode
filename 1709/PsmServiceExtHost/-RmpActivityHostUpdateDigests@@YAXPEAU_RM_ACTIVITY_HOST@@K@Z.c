/*
 * XREFs of ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014730
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016998 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x1800148C0 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800149C0 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 */

void __fastcall RmpActivityHostUpdateDigests(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  unsigned __int16 v4; // si
  __int16 v5; // r11
  __int64 v6; // rbp
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int16 v12; // bx
  struct _RM_ACTIVITY_HOST *v13; // r11
  char *v14; // r11
  unsigned __int16 v15; // ax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax

  v4 = 102;
  if ( (a2 & 1) != 0 )
  {
    v5 = 102;
    if ( *((struct _RM_ACTIVITY_HOST **)a1 + 102) != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 816) )
    {
      v6 = *((_QWORD *)a1 + 102) - 1416LL;
      if ( *((_QWORD *)a1 + 102) != 1416LL )
      {
        do
        {
          if ( *(_DWORD *)(v6 + 1400) == 2 || (*(_BYTE *)(v6 + 1452) & 0x10) != 0 )
          {
            v7 = RmpPolicyDigestCompute(v6);
            v5 = RmpPolicyDigestMerge(v8, v7);
          }
          v9 = *(_QWORD *)(v6 + 1416);
          v10 = 3 * (*(int *)(v6 + 1448) + 34LL);
          v11 = *(_QWORD *)(v6 + 1440);
          v6 = 0LL;
          if ( v9 != v11 + 8 * v10 )
            v6 = v9 - 1416;
        }
        while ( v6 );
      }
    }
    *((_WORD *)a1 + 432) = v5;
  }
  if ( (a2 & 2) != 0 )
  {
    v12 = *((_WORD *)a1 + 433);
    v13 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 105);
    if ( v13 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 840) )
    {
      v14 = (char *)v13 - 1416;
      while ( v14 )
      {
        if ( *((_DWORD *)v14 + 350) == 2 || (v14[1452] & 0x10) != 0 )
        {
          v15 = RmpPolicyDigestCompute(v14);
          v4 = RmpPolicyDigestMerge(v4, v15);
        }
        v16 = *((_QWORD *)v14 + 177);
        v17 = 3 * (*((int *)v14 + 362) + 34LL);
        v18 = *((_QWORD *)v14 + 180);
        v14 = 0LL;
        if ( v16 != v18 + 8 * v17 )
          v14 = (char *)(v16 - 1416);
      }
    }
    *((_WORD *)a1 + 433) = v4;
    v19 = *((_QWORD *)a1 + 6);
    if ( (v12 & 0x80u) != 0 )
    {
      if ( (v4 & 0x80u) == 0 )
        --*(_DWORD *)(v19 + 196);
    }
    else if ( (v4 & 0x80u) != 0 )
    {
      ++*(_DWORD *)(v19 + 196);
    }
  }
}
