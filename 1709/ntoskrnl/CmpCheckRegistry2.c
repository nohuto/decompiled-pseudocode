/*
 * XREFs of CmpCheckRegistry2 @ 0x1404AB5E0
 * Callers:
 *     CmCheckRegistry @ 0x140471AFC (CmCheckRegistry.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     CmpCheckKey @ 0x1404AA8A0 (CmpCheckKey.c)
 *     CmpCheckLexicographicalOrder @ 0x140564F40 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1405877FC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14069B6B0 (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter2,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7,
        int *a8)
{
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int *v13; // r15
  unsigned int v14; // ebp
  int v15; // r14d
  __int64 v16; // r12
  unsigned int *v17; // rbx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // esi
  int v25; // eax
  __int64 v26; // rdx
  __int64 (__fastcall *v27)(ULONG_PTR, __int64, _DWORD *); // rax
  _WORD *v28; // r14
  _WORD *v29; // rax
  unsigned int v30; // ecx
  int v31; // esi
  __int64 v32; // r14
  __int64 v34; // rbx
  int v35; // r15d
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-78h]
  int v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+40h] [rbp-58h]
  _DWORD v40[2]; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v41[2]; // [rsp+50h] [rbp-48h] BYREF
  char v42[8]; // [rsp+58h] [rbp-40h] BYREF
  int v43; // [rsp+A0h] [rbp+8h]
  char v45; // [rsp+B8h] [rbp+20h]

  v45 = 0;
  v10 = a2;
  HvpGetCellContextReinitialize((__int64)v42);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(10240LL, 0LL, 1935887683LL);
  v12 = a7;
  v39 = v11;
  if ( !v11 )
  {
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v11;
  v13 = (unsigned int *)(v11 - 20);
  v14 = 0;
  *(_DWORD *)v11 = a3;
  *(_QWORD *)(v11 + 4) = -1LL;
  v15 = 0;
  *(_DWORD *)(v11 + 12) = 0;
  v16 = 0LL;
  *a8 = 0;
  v17 = (unsigned int *)v11;
  *(_BYTE *)(v11 + 16) = 0;
  v43 = 0;
  while ( 1 )
  {
    if ( !*((_BYTE *)v17 + 16) )
    {
      v18 = *a8;
      *((_BYTE *)v17 + 16) = 1;
      if ( v18 != -1 )
        *a8 = v18 + 1;
      v19 = CmpCheckKey(BugCheckParameter2, v10, *v17, v17[1], a5, BitMapHeader, v12);
      v20 = v19;
      if ( v19 == -2147483606 )
      {
        v45 = 1;
      }
      else if ( v19 < 0 )
      {
        if ( v19 != -1073741492 )
          goto LABEL_70;
        v35 = a2;
        if ( (a2 & 0x20000) == 0 )
        {
          if ( CmpSelfHeal )
            v14 = 1;
          else
            v14 = (CmpBootType & 6) != 0;
        }
        v34 = a7;
        SetFailureLocation(a7, v14, 13, -1073741492, 16);
        goto LABEL_53;
      }
      if ( v16 > 0 )
        break;
    }
LABEL_14:
    v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(BugCheckParameter2, *v17, v42);
    if ( !v23 )
    {
      v38 = 64;
      goto LABEL_68;
    }
    v24 = v17[3];
    if ( v24 < *(_DWORD *)(v23 + 20) )
    {
      v26 = *(unsigned int *)(v23 + 28);
      v27 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
      v41[1] = 0;
      v41[0] = -1;
      v28 = (_WORD *)v27(BugCheckParameter2, v26, v41);
      if ( !v28 )
      {
        v37 = 80;
LABEL_64:
        v20 = -1073741670;
        SetFailureLocation(a7, 0, 13, -1073741670, v37);
LABEL_65:
        (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v42);
LABEL_70:
        v32 = v39;
        goto LABEL_37;
      }
      v40[0] = -1;
      v40[1] = 0;
      if ( *v28 == 26994 && v28[1] )
      {
        while ( 1 )
        {
          v29 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                           BugCheckParameter2,
                           *(unsigned int *)&v28[2 * v14 + 2],
                           v40);
          if ( !v29 )
          {
            v31 = -1;
            goto LABEL_30;
          }
          v30 = (unsigned __int16)v29[1];
          if ( v24 < v30 )
            break;
          v24 -= v30;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v40);
          if ( ++v14 >= (unsigned __int16)v28[1] )
            goto LABEL_25;
        }
        if ( ((*v29 - 26220) & 0xFDFF) != 0 )
          v31 = *(_DWORD *)&v29[2 * v24 + 2];
        else
          v31 = *(_DWORD *)&v29[4 * v24 + 2];
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v40);
      }
      else
      {
LABEL_25:
        if ( ((*v28 - 26220) & 0xFDFF) != 0 )
          v31 = *(_DWORD *)&v28[2 * v24 + 2];
        else
          v31 = *(_DWORD *)&v28[4 * v24 + 2];
      }
LABEL_30:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v41);
      if ( v31 == -1 )
      {
        v37 = 88;
        goto LABEL_64;
      }
      ++v17[3];
      ++v16;
      v17 += 5;
      v13 += 5;
      if ( v16 == 512 )
      {
        v20 = -1073741492;
        SetFailureLocation(a7, 0, 13, -1073741492, 96);
        goto LABEL_65;
      }
      v14 = 0;
      v15 = v43;
      v17[1] = *v13;
      *v17 = v31;
      v25 = 1;
      v17[2] = -1;
      v17[3] = 0;
      *((_BYTE *)v17 + 16) = 0;
    }
    else
    {
      --v16;
      v13 -= 5;
      v17 -= 5;
      v25 = -1;
    }
    v15 += v25;
    v43 = v15;
    (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, v42);
    if ( v16 < 0 )
    {
      if ( (a2 & 0x20000) != 0 || (unsigned __int8)CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter2) )
      {
        v32 = v39;
        if ( v45 )
          v20 = -2147483606;
        else
          v20 = 0;
        goto LABEL_37;
      }
      v38 = 112;
LABEL_68:
      v20 = -1073741492;
      SetFailureLocation(a7, 0, 13, -1073741492, v38);
      goto LABEL_70;
    }
    v12 = a7;
    v10 = a2;
  }
  v21 = v13[2];
  if ( (_DWORD)v21 == -1 || (v22 = CmpCheckLexicographicalOrder(BugCheckParameter2, v21, *v17), v20 = v22, v22 >= 0) )
  {
    v13[2] = *v17;
    goto LABEL_14;
  }
  if ( v22 != -1073741492 )
  {
    SetFailureLocation(a7, 0, 13, v22, 37);
    goto LABEL_70;
  }
  v34 = a7;
  SetFailureLocation(a7, 0, 13, -1073741492, 48);
  v35 = a2;
LABEL_53:
  if ( (v35 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 || !v15 )
  {
    v20 = -1073741492;
    SetFailureLocation(v34, 0, 13, -1073741492, 24);
    goto LABEL_70;
  }
  v36 = v15;
  v32 = v39;
  if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(BugCheckParameter2, *(unsigned int *)(v39 + 20 * v36 + 4)) )
  {
    v20 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v20 = -1073741492;
    SetFailureLocation(v34, 0, 13, -1073741492, 32);
  }
LABEL_37:
  (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v32, 10240LL);
  return v20;
}
