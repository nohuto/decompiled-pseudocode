/*
 * XREFs of ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180023B80
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180006D54 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180020220 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023E40 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180023FF0 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeDigestForCategory@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180053FC8 (-RmpActivityHostComputeDigestForCategory@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_R.c)
 */

void __fastcall RmpActivityHostUpdateDigests(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  struct _RM_ACTIVITY_HOST *v3; // rdi
  __int16 v4; // bx
  struct _RM_ACTIVITY_HOST *v5; // rdx
  __int16 v6; // r11
  char *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r13
  char v10; // r10
  unsigned __int64 v11; // rdx
  __int16 v12; // r9
  __int16 v13; // r8
  unsigned __int64 v14; // rax
  char v15; // r9
  __int16 v16; // r10
  __int16 v17; // r11
  __int16 v18; // ax
  __int16 v19; // r11
  __int16 v20; // ax
  __int16 v21; // r11
  __int16 v22; // r11
  __int16 v23; // ax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __int16 v27; // r11
  __int64 v28; // rax

  v3 = a1;
  if ( (a2 & 1) != 0 )
    *((_WORD *)a1 + 528) = RmpActivityHostComputeDigestForCategory(a1, 0LL);
  if ( (a2 & 2) != 0 )
  {
    v4 = *((_WORD *)v3 + 529);
    v5 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v3 + 129);
    v6 = 102;
    v7 = 0LL;
    if ( v5 != (struct _RM_ACTIVITY_HOST *)((char *)v3 + 1032) )
      v7 = (char *)v5 - 1416;
    if ( v7 )
    {
      v8 = 0x11000002000LL;
      v9 = 0x8800001000LL;
      do
      {
        if ( *((_DWORD *)v7 + 350) == 2 || (v7[1452] & 0x10) != 0 )
        {
          v10 = v7[1498];
          if ( (v10 & 8) != 0 || (v11 = *((int *)v7 + 364), (unsigned int)v11 <= 0x27) && _bittest64(&v9, v11) )
          {
            v12 = *((_WORD *)v7 + 748);
            v13 = 2;
          }
          else
          {
            v12 = *((_WORD *)v7 + 748);
            if ( (v12 & 0x10) != 0 || (unsigned int)v11 <= 0x28 && _bittest64(&v8, v11) )
              v13 = 4;
            else
              v13 = 1;
          }
          if ( (v12 & 0x10) == 0 && ((v14 = *((int *)v7 + 364), (unsigned int)v14 > 0x28) || !_bittest64(&v8, v14))
            || (v10 & 0x40) != 0 )
          {
            v13 |= 8u;
          }
          v15 = v6 & (v13 | (8
                           * (v7[1496] & 8 | (2 * (v7[1496] & 3 | (8 * (((*((_DWORD *)v7 + 363) & 0x80) != 0) | 2)))))));
          v16 = v6 | v13 | (8
                          * (*((_WORD *)v7 + 748) & 8 | (2
                                                       * (*((_WORD *)v7 + 748) & 3 | (8
                                                                                    * ((*((_DWORD *)v7 + 363) >> 7) & 1 | 2))))));
          v17 = 0;
          if ( (v16 & 0x100) != 0 )
            v17 = 256;
          v18 = 0;
          if ( (v16 & 0x80) != 0 )
            v18 = 128;
          v19 = ((v15 & 4) != 0 ? 4 : 0) | ((v15 & 0x20) != 0 ? 0x20 : 0) | ((v15 & 0x40) != 0 ? 0x40 : 0) | v18 | v17;
          v20 = 0;
          v21 = ((v15 & 2) != 0 ? 2 : 0) | v19;
          if ( (v16 & 0x10) != 0 )
            v20 = 16;
          v22 = v20 | v21;
          v23 = 0;
          if ( (v16 & 8) != 0 )
            v23 = 8;
          v6 = ((v16 & 1) != 0) | v23 | v22;
        }
        v24 = *((_QWORD *)v7 + 177);
        v25 = 3 * (*((int *)v7 + 362) + 42LL);
        v26 = *((_QWORD *)v7 + 180);
        v7 = 0LL;
        if ( v24 != v26 + 8 * v25 )
          v7 = (char *)(v24 - 1416);
      }
      while ( v7 );
      v3 = a1;
    }
    *((_WORD *)v3 + 529) = v6;
    v27 = v6 & 0x80;
    v28 = *((_QWORD *)v3 + 7);
    if ( (v4 & 0x80u) == 0 )
    {
      if ( v27 )
        ++*(_DWORD *)(v28 + 196);
    }
    else if ( !v27 )
    {
      --*(_DWORD *)(v28 + 196);
    }
  }
}
