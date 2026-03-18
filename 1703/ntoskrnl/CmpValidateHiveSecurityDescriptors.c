/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4
 * Callers:
 *     CmCheckRegistry @ 0x1404B6EBC (CmCheckRegistry.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     CmpInitSecurityCache @ 0x14043A5B8 (CmpInitSecurityCache.c)
 *     CmpAdjustSecurityCacheSize @ 0x1404580D8 (CmpAdjustSecurityCacheSize.c)
 *     CmpCheckSecurityCellAccess @ 0x14045860C (CmpCheckSecurityCellAccess.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14048E4D4 (CmpFindSecurityCellCacheIndex.c)
 *     CmpAddSecurityCellToCache @ 0x1404BFB50 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1404BFE50 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     HvIsCellAllocated @ 0x1405153D0 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter2,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r13d
  int v11; // edi
  __int64 v12; // rax
  _DWORD *v13; // r15
  unsigned int v14; // eax
  ULONG v15; // edx
  __int64 v16; // r8
  int v17; // ebx
  int v18; // eax
  void (__fastcall *v19)(ULONG_PTR, char *); // rax
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned int v24; // edi
  ULONG v25; // edx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  int v30; // [rsp+20h] [rbp-30h]
  int v31; // [rsp+20h] [rbp-30h]
  int v32; // [rsp+20h] [rbp-30h]
  unsigned int v33; // [rsp+30h] [rbp-20h] BYREF
  int v34; // [rsp+34h] [rbp-1Ch]
  char v35[8]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v36; // [rsp+40h] [rbp-10h]
  char v37[8]; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v38; // [rsp+90h] [rbp+40h]

  v6 = a4;
  HvpGetCellContextReinitialize((__int64)v37);
  HvpGetCellContextReinitialize((__int64)v35);
  v34 = *(_DWORD *)(BugCheckParameter2 + 3040);
  if ( !(unsigned __int8)HvIsCellAllocated(
                           BugCheckParameter2,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
                           0LL) )
  {
    v7 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v30 = 0;
LABEL_5:
    v8 = -1073741492;
    SetFailureLocation(v7, 0, 9, -1073741492, v30);
    return v8;
  }
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
         v37);
  v36 = v9;
  if ( !v9 )
  {
    v7 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v30 = 16;
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(v9 + 44);
  v11 = -4;
  v33 = 0;
  v38 = v10;
  while ( 1 )
  {
    if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v10, v6) )
    {
      if ( v38 != v10 )
        goto LABEL_39;
      v32 = 128;
      goto LABEL_62;
    }
    v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(BugCheckParameter2, v10, v35);
    v13 = (_DWORD *)v12;
    if ( !v12 )
    {
      v31 = 144;
      goto LABEL_50;
    }
    v14 = v11 - *(_DWORD *)(v12 - 4);
    if ( v14 < 0x14 || (v15 = v13[4], v15 + 20 < v15) || v15 + 20 > v14 )
    {
      (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v35);
      SetFailureLocation(a5, 1, 9, -1073741492, 152);
      goto LABEL_39;
    }
    if ( v10 != v38 && v13[2] != v33 )
    {
      v31 = 160;
LABEL_50:
      v8 = -1073741492;
      SetFailureLocation(a5, 0, 9, -1073741492, v31);
      goto LABEL_63;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v13 + 5, v15, 0) )
      break;
    v17 = v34;
    if ( v34 )
    {
      if ( !CmpFindSecurityCellCacheIndex(BugCheckParameter2, v10, &v33) )
      {
        v31 = 192;
        goto LABEL_50;
      }
    }
    else
    {
      LOBYTE(v16) = 1;
      v18 = CmpAddSecurityCellToCache(BugCheckParameter2, v10, v16);
      v8 = v18;
      if ( v18 < 0 )
      {
        SetFailureLocation(a5, 0, 9, v18, 176);
        goto LABEL_63;
      }
      v11 = v17 - 4;
    }
    v19 = *(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16);
    v33 = v10;
    v10 = v13[1];
    v19(BugCheckParameter2, v35);
    v13 = 0LL;
    if ( v10 == v38 )
    {
      if ( !v17 )
        CmpAdjustSecurityCacheSize(BugCheckParameter2);
      if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 3040) > 1u )
      {
        v20 = 0;
        while ( 1 )
        {
          v21 = CmpCheckSecurityCellAccess(
                  BugCheckParameter2,
                  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v20),
                  1,
                  0x20019u,
                  0);
          v8 = v21;
          if ( v21 < 0 )
            break;
          if ( ++v20 >= *(_DWORD *)(BugCheckParameter2 + 3040) )
            goto LABEL_34;
        }
        SetFailureLocation(a5, 0, 9, v21, 208);
        if ( v8 != -1073741670 )
          v8 = -1073741492;
      }
      else
      {
LABEL_34:
        v8 = 0;
      }
      goto LABEL_63;
    }
    v6 = a4;
  }
  (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v35);
  SetFailureLocation(a5, 1, 9, -1073741492, 168);
LABEL_39:
  if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
  {
    v32 = 112;
    goto LABEL_62;
  }
  v22 = v36;
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v36 + 44), 0LL) )
  {
    v32 = 32;
LABEL_62:
    v8 = -1073741492;
    SetFailureLocation(a5, 0, 9, -1073741492, v32);
    v13 = 0LL;
    goto LABEL_63;
  }
  v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v22 + 44),
          v35);
  v13 = (_DWORD *)v23;
  if ( !v23 )
  {
    v31 = 48;
    goto LABEL_50;
  }
  v24 = v11 - *(_DWORD *)(v23 - 4);
  if ( v24 < 0x14 || (v25 = *(_DWORD *)(v23 + 16), v25 + 20 < v25) || v25 + 20 > v24 )
  {
    v31 = 80;
    goto LABEL_50;
  }
  if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v23 + 20), v25, 0) )
  {
    v31 = 64;
    goto LABEL_50;
  }
  v26 = v36;
  if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v36 + 44)) )
  {
    v27 = *(_DWORD *)(v26 + 44);
    v13[2] = v27;
    v13[1] = v27;
    CmpDestroySecurityCache(BugCheckParameter2);
    CmpInitSecurityCache(BugCheckParameter2);
    v8 = -1073741267;
    v28 = *(_QWORD *)(BugCheckParameter2 + 64);
    *a3 = 1;
    *(_DWORD *)(v28 + 4088) |= 4u;
  }
  else
  {
    v8 = -1073741443;
    SetFailureLocation(a5, 0, 9, -1073741443, 96);
  }
LABEL_63:
  (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v37);
  if ( v13 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v35);
  return v8;
}
