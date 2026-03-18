/*
 * XREFs of HvpViewMapCreateViewsForRegion @ 0x140496F3C
 * Callers:
 *     HvpViewMapStart @ 0x140496E94 (HvpViewMapStart.c)
 *     HvpViewMapExtendStorage @ 0x140566FA8 (HvpViewMapExtendStorage.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x140006D10 (CmSiGetMemoryAllocationGranularity.c)
 *     CmSiUnmapViewOfSection @ 0x1400CC138 (CmSiUnmapViewOfSection.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140497274 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x1404973B0 (HvpViewMapCreateView.c)
 */

__int64 __fastcall HvpViewMapCreateViewsForRegion(__int64 a1, __int64 a2, __int64 a3)
{
  PPRIVILEGE_SET v3; // rdi
  PPRIVILEGE_SET *v4; // rbx
  __int64 MemoryAllocationGranularity; // rax
  __int64 v8; // r11
  PPRIVILEGE_SET *v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 i; // r8
  __int64 j; // rdx
  __int64 v20; // rbx
  int ViewRangeValid; // esi
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r12
  PPRIVILEGE_SET *v25; // rax
  PPRIVILEGE_SET v26; // rax
  PPRIVILEGE_SET v27; // r8
  PPRIVILEGE_SET v28; // rbx
  unsigned __int64 *v29; // rbx
  unsigned __int64 v30; // rdx
  bool v31; // al
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // r8
  PPRIVILEGE_SET v35; // rax
  void *v36; // r8
  PPRIVILEGE_SET v38; // [rsp+20h] [rbp-10h] BYREF
  PPRIVILEGE_SET *v39; // [rsp+28h] [rbp-8h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp+48h] BYREF
  PPRIVILEGE_SET *v42; // [rsp+80h] [rbp+50h]

  v3 = 0LL;
  v4 = &v38;
  Privileges = 0LL;
  v39 = &v38;
  v38 = (PPRIVILEGE_SET)&v38;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v42 = (PPRIVILEGE_SET *)MemoryAllocationGranularity;
  v9 = (PPRIVILEGE_SET *)MemoryAllocationGranularity;
  v10 = 0x200000LL;
  if ( v11 < v12 )
  {
    v13 = ~(MemoryAllocationGranularity - 1);
    while ( 1 )
    {
      v14 = a2 & v13;
      v15 = a3 - (a2 & v13);
      if ( v10 > v15 )
      {
        for ( i = (__int64)v9; i < v15; i *= 2LL )
          ;
        for ( j = 2 * i; v14 + j - a3 <= a3 / 8; j *= 2LL )
          i = j;
        v20 = v10;
        if ( i < v10 )
          v20 = i;
        v16 = v14 + v20;
        if ( (*(_BYTE *)(v8 + 32) & 1) != 0 && v16 >= *(_QWORD *)(v8 + 16) )
          v16 = *(_QWORD *)(v8 + 16);
        v17 = a3;
      }
      else
      {
        v16 = v14 + v10;
        v17 = v14 + v10;
      }
      ViewRangeValid = HvpViewMapCreateView(v8, a2 & v13, v16, &Privileges);
      if ( ViewRangeValid >= 0 )
      {
        v22 = v17;
        v23 = a2;
        v3 = Privileges;
        v24 = a1;
        ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, Privileges, v23, v22);
        if ( ViewRangeValid < 0 )
        {
          v28 = v38;
          goto LABEL_53;
        }
        v25 = v39;
        if ( *v39 != (PPRIVILEGE_SET)&v38 )
          __fastfail(3u);
        v3->Privilege[0].Luid = (LUID)v39;
        *(_QWORD *)&v3->PrivilegeCount = &v38;
        a2 = v16;
        v9 = v42;
        *v25 = v3;
        v39 = (PPRIVILEGE_SET *)v3;
        v3 = 0LL;
        Privileges = 0LL;
      }
      else
      {
        v9 = v42;
        v3 = Privileges;
        if ( v10 <= (__int64)v42 )
        {
          v28 = v38;
          goto LABEL_52;
        }
        v10 /= 2LL;
      }
      v8 = a1;
      if ( a2 >= a3 )
      {
        v4 = (PPRIVILEGE_SET *)v38;
        break;
      }
    }
  }
  v26 = *v4;
  v27 = (PPRIVILEGE_SET)v4;
  if ( v4[1] != (PPRIVILEGE_SET)&v38 || (PPRIVILEGE_SET *)v26->Privilege[0].Luid != v4 )
    __fastfail(3u);
  v38 = *v4;
  v9 = &v38;
  v26->Privilege[0].Luid = (LUID)&v38;
  v28 = v38;
  if ( v27 != (PPRIVILEGE_SET)&v38 )
  {
    v29 = (unsigned __int64 *)(v8 + 40);
    v3 = 0LL;
    do
    {
      v30 = *v29;
      if ( (v29[1] & 1) != 0 && v30 )
        v30 ^= (unsigned __int64)v29;
      v31 = 0;
      if ( v30 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)&v27[2].PrivilegeCount < *(_QWORD *)(v30 + 40) )
          {
            v32 = *(_QWORD *)v30;
            if ( (v29[1] & 1) != 0 )
            {
              if ( !v32 )
                goto LABEL_46;
              v32 ^= v30;
            }
            if ( !v32 )
            {
LABEL_46:
              v31 = 0;
              break;
            }
          }
          else
          {
            v32 = *(_QWORD *)(v30 + 8);
            if ( (v29[1] & 1) != 0 )
            {
              if ( !v32 )
                goto LABEL_40;
              v32 ^= v30;
            }
            if ( !v32 )
            {
LABEL_40:
              v31 = 1;
              break;
            }
          }
          v30 = v32;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64)v29, v30, v31, v27);
      v27 = v38;
      if ( (PPRIVILEGE_SET *)v38->Privilege[0].Luid != &v38
        || (v33 = *(_QWORD *)&v38->PrivilegeCount, *(PPRIVILEGE_SET *)(*(_QWORD *)&v38->PrivilegeCount + 8LL) != v38) )
      {
        __fastfail(3u);
      }
      v38 = *(PPRIVILEGE_SET *)&v38->PrivilegeCount;
      v9 = &v38;
      *(_QWORD *)(v33 + 8) = &v38;
    }
    while ( v27 != (PPRIVILEGE_SET)&v38 );
    v28 = v38;
  }
  ViewRangeValid = 0;
LABEL_52:
  v24 = a1;
LABEL_53:
  if ( v3 )
  {
    v34 = *(void **)&v3[2].Privilege[0].Attributes;
    if ( v34 )
      CmSiUnmapViewOfSection((__int64)v9, *(HANDLE **)(v24 + 24), v34);
    CmSiFreeMemory(v3);
    v28 = v38;
  }
  if ( v28 != (PPRIVILEGE_SET)&v38 )
  {
    v35 = *(PPRIVILEGE_SET *)&v28->PrivilegeCount;
    if ( (PPRIVILEGE_SET *)v28->Privilege[0].Luid != &v38 || (PPRIVILEGE_SET)v35->Privilege[0].Luid != v28 )
      __fastfail(3u);
    while ( 1 )
    {
      v38 = v35;
      v35->Privilege[0].Luid = (LUID)&v38;
      if ( v28 == (PPRIVILEGE_SET)&v38 )
        break;
      v36 = *(void **)&v28[2].Privilege[0].Attributes;
      if ( v36 )
        CmSiUnmapViewOfSection((__int64)&v38, *(HANDLE **)(v24 + 24), v36);
      CmSiFreeMemory(v28);
      v28 = v38;
      if ( (PPRIVILEGE_SET *)v38->Privilege[0].Luid == &v38 )
      {
        v35 = *(PPRIVILEGE_SET *)&v38->PrivilegeCount;
        if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&v38->PrivilegeCount + 8LL) == v38 )
          continue;
      }
      __fastfail(3u);
    }
  }
  return (unsigned int)ViewRangeValid;
}
