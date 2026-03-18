/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x140516F4C
 * Callers:
 *     CmCheckRegistry @ 0x140499094 (CmCheckRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     CmpInitSecurityCache @ 0x140497FCC (CmpInitSecurityCache.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404A9B50 (CmpFindSecurityCellCacheIndex.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x140516230 (HvIsCellAllocated.c)
 *     CmpAddSecurityCellToCache @ 0x140516D50 (CmpAddSecurityCellToCache.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140517160 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpDestroySecurityCache @ 0x14054DD80 (CmpDestroySecurityCache.c)
 *     CmpCheckSecurityCellAccess @ 0x14056251C (CmpCheckSecurityCellAccess.c)
 *     CmpAdjustSecurityCacheSize @ 0x14057F024 (CmpAdjustSecurityCacheSize.c)
 */

__int64 __fastcall CmpValidateHiveSecurityDescriptors(
        ULONG_PTR BugCheckParameter2,
        int a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // r13d
  int v10; // edi
  __int64 v11; // rax
  _DWORD *v12; // r15
  unsigned int v13; // eax
  ULONG v14; // edx
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // edi
  void (__fastcall *v18)(ULONG_PTR, __int64 *); // rax
  __int64 v19; // r8
  unsigned int v21; // ebx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rax
  int v26; // r9d
  unsigned int v27; // edi
  ULONG v28; // edx
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // [rsp+20h] [rbp-30h]
  int v33; // [rsp+20h] [rbp-30h]
  int v34; // [rsp+20h] [rbp-30h]
  int v35; // [rsp+20h] [rbp-30h]
  unsigned int v36; // [rsp+30h] [rbp-20h] BYREF
  int v37; // [rsp+34h] [rbp-1Ch]
  __int64 v38; // [rsp+38h] [rbp-18h] BYREF
  __int64 v39; // [rsp+40h] [rbp-10h] BYREF
  __int64 v40; // [rsp+48h] [rbp-8h]
  unsigned int v41; // [rsp+90h] [rbp+40h]

  v39 = 0LL;
  v38 = 0LL;
  v6 = a4;
  v7 = *(_DWORD *)(BugCheckParameter2 + 1864);
  LODWORD(v39) = -1;
  LODWORD(v38) = -1;
  v37 = v7;
  if ( !HvIsCellAllocated(BugCheckParameter2, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL), 0LL) )
  {
    v23 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v33 = 0;
    goto LABEL_33;
  }
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
         &v39);
  v40 = v8;
  if ( !v8 )
  {
    v23 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v33 = 16;
LABEL_33:
    v17 = -1073741492;
    SetFailureLocation(v23, 0, 9, -1073741492, v33);
    return v17;
  }
  v9 = *(_DWORD *)(v8 + 44);
  v10 = -4;
  v36 = 0;
  v41 = v9;
  while ( 1 )
  {
    if ( !HvIsCellAllocated(BugCheckParameter2, v9, v6) )
    {
      if ( v41 != v9 )
        goto LABEL_44;
      v35 = 128;
      goto LABEL_66;
    }
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v9,
            &v38);
    v12 = (_DWORD *)v11;
    if ( !v11 )
    {
      v34 = 144;
      goto LABEL_55;
    }
    v13 = v10 - *(_DWORD *)(v11 - 4);
    if ( v13 < 0x14 || (v14 = v12[4], v14 + 20 < v14) || v14 + 20 > v13 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v38);
      SetFailureLocation(a5, 1, 9, -1073741492, 152);
      goto LABEL_44;
    }
    if ( v9 != v41 && v12[2] != v36 )
    {
      v34 = 160;
      goto LABEL_55;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v12 + 5, v14, 0) )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v38);
      SetFailureLocation(a5, 1, 9, -1073741492, 168);
LABEL_44:
      if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        v35 = 112;
        goto LABEL_66;
      }
      v24 = v40;
      if ( !HvIsCellAllocated(BugCheckParameter2, *(_DWORD *)(v40 + 44), 0LL) )
      {
        v35 = 32;
LABEL_66:
        v17 = -1073741492;
        SetFailureLocation(a5, 0, 9, -1073741492, v35);
        v12 = 0LL;
        goto LABEL_22;
      }
      v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              *(unsigned int *)(v24 + 44),
              &v38);
      v12 = (_DWORD *)v25;
      if ( v25 )
      {
        v27 = v10 - *(_DWORD *)(v25 - 4);
        if ( v27 < 0x14 || (v28 = *(_DWORD *)(v25 + 16), v28 + 20 < v28) || v28 + 20 > v27 )
        {
          v34 = 80;
        }
        else
        {
          if ( RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v25 + 20), v28, 0) )
          {
            v29 = v40;
            if ( HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v40 + 44), 0) )
            {
              v30 = *(_DWORD *)(v29 + 44);
              v12[2] = v30;
              v12[1] = v30;
              CmpDestroySecurityCache(BugCheckParameter2);
              CmpInitSecurityCache(BugCheckParameter2);
              v17 = -1073741267;
              v31 = *(_QWORD *)(BugCheckParameter2 + 64);
              *a3 = 1;
              *(_DWORD *)(v31 + 4088) |= 4u;
              goto LABEL_22;
            }
            v17 = -1073741443;
            v34 = 96;
            v26 = -1073741443;
LABEL_57:
            SetFailureLocation(a5, 0, 9, v26, v34);
            goto LABEL_22;
          }
          v34 = 64;
        }
      }
      else
      {
        v34 = 48;
      }
LABEL_55:
      v17 = -1073741492;
      v26 = -1073741492;
      goto LABEL_57;
    }
    v15 = v37;
    if ( v37 )
    {
      if ( !CmpFindSecurityCellCacheIndex(BugCheckParameter2, v9, &v36) )
      {
        v34 = 192;
        goto LABEL_55;
      }
    }
    else
    {
      v16 = CmpAddSecurityCellToCache(BugCheckParameter2, v9, 1);
      v17 = v16;
      if ( v16 < 0 )
      {
        SetFailureLocation(a5, 0, 9, v16, 176);
        goto LABEL_22;
      }
      v10 = v15 - 4;
    }
    v18 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16);
    v36 = v9;
    v9 = v12[1];
    v18(BugCheckParameter2, &v38);
    v12 = 0LL;
    if ( v9 == v41 )
      break;
    v6 = a4;
  }
  if ( !v15 )
    CmpAdjustSecurityCacheSize(BugCheckParameter2);
  if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 1864) > 1u )
  {
    v21 = 0;
    while ( 1 )
    {
      LOBYTE(v19) = 1;
      LOBYTE(v32) = 0;
      v22 = CmpCheckSecurityCellAccess(
              BugCheckParameter2,
              *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v21),
              v19,
              131097LL,
              v32);
      v17 = v22;
      if ( v22 < 0 )
        break;
      if ( ++v21 >= *(_DWORD *)(BugCheckParameter2 + 1864) )
        goto LABEL_21;
    }
    SetFailureLocation(a5, 0, 9, v22, 208);
    if ( v17 != -1073741670 )
      v17 = -1073741492;
  }
  else
  {
LABEL_21:
    v17 = 0;
  }
LABEL_22:
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v39);
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v38);
  return v17;
}
