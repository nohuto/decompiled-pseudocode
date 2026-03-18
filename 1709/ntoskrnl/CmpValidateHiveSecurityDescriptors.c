/*
 * XREFs of CmpValidateHiveSecurityDescriptors @ 0x1404746C0
 * Callers:
 *     CmCheckRegistry @ 0x140471AFC (CmCheckRegistry.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     CmpDestroySecurityCache @ 0x140470024 (CmpDestroySecurityCache.c)
 *     CmpInitSecurityCache @ 0x14047115C (CmpInitSecurityCache.c)
 *     CmpAdjustSecurityCacheSize @ 0x140471EF0 (CmpAdjustSecurityCacheSize.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140474530 (RtlValidRelativeSecurityDescriptor.c)
 *     CmpAddSecurityCellToCache @ 0x140475744 (CmpAddSecurityCellToCache.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x14047D4B0 (HvIsCellAllocated.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404813C0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpCheckSecurityCellAccess @ 0x1405977F4 (CmpCheckSecurityCellAccess.c)
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
  __int64 v20; // r8
  unsigned int v21; // ebx
  int v22; // eax
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned int v25; // edi
  ULONG v26; // edx
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rdx
  int v31; // [rsp+20h] [rbp-30h]
  int v32; // [rsp+20h] [rbp-30h]
  int v33; // [rsp+20h] [rbp-30h]
  int v34; // [rsp+20h] [rbp-30h]
  unsigned int v35; // [rsp+30h] [rbp-20h] BYREF
  int v36; // [rsp+34h] [rbp-1Ch]
  char v37[8]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v38; // [rsp+40h] [rbp-10h]
  char v39[8]; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v40; // [rsp+90h] [rbp+40h]

  v6 = a4;
  HvpGetCellContextReinitialize((__int64)v39);
  HvpGetCellContextReinitialize((__int64)v37);
  v36 = *(_DWORD *)(BugCheckParameter2 + 3040);
  if ( !(unsigned __int8)HvIsCellAllocated(
                           BugCheckParameter2,
                           *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
                           0LL) )
  {
    v7 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v32 = 0;
LABEL_5:
    v8 = -1073741492;
    SetFailureLocation(v7, 0, 9, -1073741492, v32);
    return v8;
  }
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
         v39);
  v38 = v9;
  if ( !v9 )
  {
    v7 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 240) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    v32 = 16;
    goto LABEL_5;
  }
  v10 = *(_DWORD *)(v9 + 44);
  v11 = -4;
  v35 = 0;
  v40 = v10;
  while ( 1 )
  {
    if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v10, v6) )
    {
      if ( v40 != v10 )
        goto LABEL_39;
      v34 = 128;
      goto LABEL_62;
    }
    v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(BugCheckParameter2, v10, v37);
    v13 = (_DWORD *)v12;
    if ( !v12 )
    {
      v33 = 144;
      goto LABEL_50;
    }
    v14 = v11 - *(_DWORD *)(v12 - 4);
    if ( v14 < 0x14 || (v15 = v13[4], v15 + 20 < v15) || v15 + 20 > v14 )
    {
      (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v37);
      SetFailureLocation(a5, 1, 9, -1073741492, 152);
      goto LABEL_39;
    }
    if ( v10 != v40 && v13[2] != v35 )
    {
      v33 = 160;
LABEL_50:
      v8 = -1073741492;
      SetFailureLocation(a5, 0, 9, -1073741492, v33);
      goto LABEL_63;
    }
    if ( !RtlValidRelativeSecurityDescriptor(v13 + 5, v15, 0) )
      break;
    v17 = v36;
    if ( v36 )
    {
      if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(BugCheckParameter2, v10, &v35) )
      {
        v33 = 192;
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
    v35 = v10;
    v10 = v13[1];
    v19(BugCheckParameter2, v37);
    v13 = 0LL;
    if ( v10 == v40 )
    {
      if ( !v17 )
        CmpAdjustSecurityCacheSize(BugCheckParameter2);
      if ( (a2 & 0x2000000) != 0 && *(_DWORD *)(BugCheckParameter2 + 3040) > 1u )
      {
        v21 = 0;
        while ( 1 )
        {
          LOBYTE(v20) = 1;
          LOBYTE(v31) = 0;
          v22 = CmpCheckSecurityCellAccess(
                  BugCheckParameter2,
                  *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 3056) + 16LL * v21),
                  v20,
                  131097LL,
                  v31);
          v8 = v22;
          if ( v22 < 0 )
            break;
          if ( ++v21 >= *(_DWORD *)(BugCheckParameter2 + 3040) )
            goto LABEL_34;
        }
        SetFailureLocation(a5, 0, 9, v22, 208);
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
  (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v37);
  SetFailureLocation(a5, 1, 9, -1073741492, 168);
LABEL_39:
  if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
  {
    v34 = 112;
    goto LABEL_62;
  }
  v23 = v38;
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v38 + 44), 0LL) )
  {
    v34 = 32;
LABEL_62:
    v8 = -1073741492;
    SetFailureLocation(a5, 0, 9, -1073741492, v34);
    v13 = 0LL;
    goto LABEL_63;
  }
  v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v23 + 44),
          v37);
  v13 = (_DWORD *)v24;
  if ( !v24 )
  {
    v33 = 48;
    goto LABEL_50;
  }
  v25 = v11 - *(_DWORD *)(v24 - 4);
  if ( v25 < 0x14 || (v26 = *(_DWORD *)(v24 + 16), v26 + 20 < v26) || v26 + 20 > v25 )
  {
    v33 = 80;
    goto LABEL_50;
  }
  if ( !RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v24 + 20), v26, 0) )
  {
    v33 = 64;
    goto LABEL_50;
  }
  v27 = v38;
  if ( (unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v38 + 44)) )
  {
    v28 = *(_DWORD *)(v27 + 44);
    v13[2] = v28;
    v13[1] = v28;
    CmpDestroySecurityCache(BugCheckParameter2);
    CmpInitSecurityCache(BugCheckParameter2);
    v8 = -1073741267;
    v29 = *(_QWORD *)(BugCheckParameter2 + 64);
    *a3 = 1;
    *(_DWORD *)(v29 + 4088) |= 4u;
  }
  else
  {
    v8 = -1073741443;
    SetFailureLocation(a5, 0, 9, -1073741443, 96);
  }
LABEL_63:
  (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v39);
  if ( v13 )
    (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v37);
  return v8;
}
