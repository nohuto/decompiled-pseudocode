/*
 * XREFs of ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180007C00
 * Callers:
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005BC4 (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180006840 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

void __fastcall RmpActivityHostPopulateRunnabilitySettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  struct _RM_ENFORCEMENT_SETTINGS *v2; // r11
  _QWORD *v3; // rdx
  int v5; // eax
  __int64 v6; // r9
  unsigned __int64 v7; // r14
  int v8; // ebp
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 First; // r10
  int v14; // r8d
  __int64 v15; // r12
  __int64 v16; // rcx
  char v17; // r15
  int v18; // esi
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // r8d
  char v23; // al
  int v24; // eax
  __int64 v25; // rcx
  char v26; // al
  char v27; // cl
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r13
  __int64 v31; // rcx
  _QWORD *v32; // rdx

  v2 = a2;
  v3 = (_QWORD *)((char *)a1 + 816);
  v5 = 0;
  while ( 1 )
  {
    if ( v5 == 1 && (_QWORD *)*v3 != v3 )
    {
      v6 = *v3 - 1416LL;
      if ( *v3 != 1416LL )
        break;
    }
    ++v5;
    v3 += 3;
    if ( v5 >= 2 )
    {
      v6 = 0LL;
      break;
    }
  }
  v7 = 0LL;
  v8 = 0;
  if ( *((_DWORD *)a1 + 14) || *((_DWORD *)a1 + 156) != 2 )
    v9 = 1;
  else
    v9 = -1;
  if ( !v6 )
  {
LABEL_55:
    v18 = v7;
    goto LABEL_37;
  }
  v10 = *(_QWORD *)(v6 + 1416);
  v11 = *(int *)(v6 + 1448);
  v12 = *(_QWORD *)(v6 + 1440);
  First = 0LL;
  if ( v10 != v12 + 24 * (v11 + 34) )
    First = v10 - 1416;
  if ( !First )
  {
    v14 = v11 + 1;
    if ( v14 < 2 )
    {
      v32 = (_QWORD *)(v12 + 24 * (v14 + 34LL));
      while ( 1 )
      {
        if ( v14 == 1 && (_QWORD *)*v32 != v32 )
        {
          First = *v32 - 1416LL;
          if ( *v32 != 1416LL )
            break;
        }
        ++v14;
        v32 += 3;
        if ( v14 >= 2 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      First = 0LL;
    }
  }
  v15 = *((_QWORD *)v2 + 4);
  v16 = 0xBE0883BCFD008LL;
  v17 = *((_BYTE *)v2 + 52);
  v18 = 100;
  do
  {
    v19 = *(_QWORD *)(v6 + 1552);
    if ( v19 )
    {
      if ( v19 < 0x64 )
        goto LABEL_20;
LABEL_19:
      v19 = 100LL;
      goto LABEL_20;
    }
    v28 = *(int *)(v6 + 1456);
    if ( (unsigned int)v28 > 0x33 || !_bittest64(&v16, v28) )
      goto LABEL_19;
    v19 = 1LL;
LABEL_20:
    v7 += v19;
    v20 = v8 + 1;
    if ( !*(_DWORD *)(v6 + 1504) )
      v20 = v8;
    v8 = v20;
    if ( *((_DWORD *)a1 + 14) == 1 )
      *((_DWORD *)v2 + 11) = *(_DWORD *)(v6 + 1468);
    v15 |= *(_QWORD *)(v6 + 1512);
    *((_QWORD *)v2 + 4) = v15;
    v21 = *(_DWORD *)(v6 + 1472);
    v22 = *(_DWORD *)(v6 + 1500) & 3;
    if ( (v21 & 0x40) != 0 && (*(_DWORD *)(v6 + 1500) & 3) != 3 )
      v22 = 2;
    if ( (v21 & 0xEu) >= 8 && (v21 & 0x30u) >= 0x20 && (unsigned int)v22 <= 1 )
      v22 = 1;
    if ( v9 <= v22 )
    {
      v9 = *(_DWORD *)(v6 + 1500) & 3;
      if ( (v21 & 0x40) != 0 && (*(_DWORD *)(v6 + 1500) & 3) != 3 )
        v9 = 2;
      if ( (v21 & 0xEu) >= 8 && (v21 & 0x30u) >= 0x20 && (unsigned int)v9 <= 1 )
        v9 = 1;
    }
    if ( (*(_BYTE *)(v6 + 1500) & 8) != 0 )
      v23 = 2;
    else
      v23 = 0;
    v6 = First;
    v17 |= v23 & 2;
    *((_BYTE *)v2 + 52) = v17;
    if ( First )
    {
      v29 = *(_QWORD *)(First + 1416);
      v30 = *(int *)(First + 1448);
      v31 = *(_QWORD *)(First + 1440);
      First = 0LL;
      if ( v29 != v31 + 24 * (v30 + 34) )
        First = v29 - 1416;
      if ( !First )
        First = RmpActivityHostEnumerateResourceSetGetFirst(v31, 2, (int)v30 + 1);
    }
    v16 = 0xBE0883BCFD008LL;
  }
  while ( v6 );
  if ( v7 < 0x64 )
    goto LABEL_55;
LABEL_37:
  *((_DWORD *)v2 + 12) = v18;
  if ( v8 && v8 == (unsigned int)RmpActivityHostGetResourceSetCount(a1, 2) )
    *((_BYTE *)v2 + 52) |= 1u;
  v24 = *((_DWORD *)a1 + 330);
  v25 = *((_QWORD *)a1 + 5);
  if ( v9 == -1 )
    v9 = 1;
  *((_DWORD *)v2 + 10) = v9;
  if ( (v24 & 0x80u) != 0 || (*(_BYTE *)(v25 + 508) & 8) != 0 )
    v26 = 4;
  else
    v26 = 0;
  *((_BYTE *)v2 + 52) &= ~4u;
  *((_BYTE *)v2 + 52) |= v26;
  v27 = *((_BYTE *)v2 + 52);
  if ( (*((_WORD *)a1 + 660) & 0x400) != 0
    && (*((_BYTE *)a1 + 1008) & 4) == 0
    && *(_BYTE *)(*((_QWORD *)a1 + 5) + 208LL) )
  {
    *((_BYTE *)v2 + 52) = v27 & 0xF7 | 8;
  }
  else
  {
    *((_BYTE *)v2 + 52) = v27 & 0xF7;
  }
}
