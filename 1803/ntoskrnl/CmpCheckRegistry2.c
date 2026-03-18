/*
 * XREFs of CmpCheckRegistry2 @ 0x1405A07D0
 * Callers:
 *     CmCheckRegistry @ 0x140499094 (CmCheckRegistry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     CmpCheckLexicographicalOrder @ 0x1405504B0 (CmpCheckLexicographicalOrder.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140574E9C (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCheckKey @ 0x14059FAB0 (CmpCheckKey.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407002C0 (CmpRemoveSubKeyCellNoCellRef.c)
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
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64); // rax
  __int64 v11; // rax
  __int64 v12; // r14
  int *v13; // rcx
  unsigned int *v14; // r12
  unsigned int v15; // esi
  int v16; // r13d
  __int64 v17; // rbp
  unsigned int *v18; // r15
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // edx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // ebx
  int v26; // eax
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(ULONG_PTR, __int64, _DWORD *); // rax
  __int16 *v29; // rax
  __int16 *v30; // r14
  __int16 v31; // ax
  _WORD *v32; // rax
  unsigned int v33; // ecx
  int v34; // ebx
  __int64 v35; // rsi
  int v37; // eax
  int v38; // ebp
  int v39; // eax
  int v40; // [rsp+20h] [rbp-78h]
  _DWORD v41[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v42; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v43[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+8h]
  char v46; // [rsp+B8h] [rbp+20h]

  v46 = 0;
  v42 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24);
  LODWORD(v42) = -1;
  v11 = v10(10240LL, 0LL, 1935887683LL);
  v44 = v11;
  if ( !v11 )
  {
    v21 = -1073741670;
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
    return v21;
  }
  v12 = a7;
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v11;
  v13 = a8;
  v14 = (unsigned int *)(v11 - 20);
  v15 = 0;
  *(_DWORD *)v11 = a3;
  *(_QWORD *)(v11 + 4) = -1LL;
  v16 = 0;
  *(_DWORD *)(v11 + 12) = 0;
  v17 = 0LL;
  *a8 = 0;
  v18 = (unsigned int *)v11;
  *(_BYTE *)(v11 + 16) = 0;
  while ( 1 )
  {
    if ( !*((_BYTE *)v18 + 16) )
    {
      v19 = *v13;
      *((_BYTE *)v18 + 16) = 1;
      if ( v19 != -1 )
        *v13 = v19 + 1;
      v20 = CmpCheckKey(BugCheckParameter2, a2, *v18, v18[1], a5, BitMapHeader, v12);
      v21 = v20;
      if ( v20 == -2147483606 )
      {
        v46 = 1;
      }
      else if ( v20 < 0 )
      {
        if ( v20 != -1073741492 )
          goto LABEL_38;
        v38 = a2 & 0x20000;
        if ( (a2 & 0x20000) == 0 )
        {
          if ( CmpSelfHeal )
            v15 = v38 + 1;
          else
            v15 = (CmpBootType & 6) != 0;
        }
        v37 = 16;
        goto LABEL_56;
      }
      if ( v17 > 0 )
        break;
    }
LABEL_14:
    v24 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *v18,
            &v42);
    if ( !v24 )
    {
      v40 = 64;
      goto LABEL_71;
    }
    v25 = v18[3];
    if ( v25 >= *(_DWORD *)(v24 + 20) )
    {
      --v17;
      v14 -= 5;
      v18 -= 5;
      v26 = -1;
      goto LABEL_17;
    }
    v27 = *(unsigned int *)(v24 + 28);
    v28 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
    v43[1] = 0;
    v43[0] = -1;
    v29 = (__int16 *)v28(BugCheckParameter2, v27, v43);
    v30 = v29;
    if ( !v29 )
    {
      v39 = 80;
LABEL_67:
      v21 = -1073741670;
LABEL_68:
      SetFailureLocation(a7, 0, 13, v21, v39);
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
      goto LABEL_38;
    }
    v41[0] = -1;
    v41[1] = 0;
    v31 = *v29;
    if ( v31 != 26994 )
    {
LABEL_32:
      if ( ((v31 - 26220) & 0xFDFF) == 0 )
      {
        v34 = *(_DWORD *)&v30[4 * v25 + 2];
        goto LABEL_29;
      }
LABEL_46:
      v34 = *(_DWORD *)&v30[2 * v25 + 2];
      goto LABEL_29;
    }
    if ( !v30[1] )
      goto LABEL_46;
    while ( 1 )
    {
      v32 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       *(unsigned int *)&v30[2 * v15 + 2],
                       v41);
      if ( !v32 )
      {
        v34 = -1;
        goto LABEL_29;
      }
      v33 = (unsigned __int16)v32[1];
      if ( v25 < v33 )
        break;
      v25 -= v33;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v41);
      if ( ++v15 >= (unsigned __int16)v30[1] )
      {
        v31 = *v30;
        goto LABEL_32;
      }
    }
    if ( ((*v32 - 26220) & 0xFDFF) != 0 )
      v34 = *(_DWORD *)&v32[2 * v25 + 2];
    else
      v34 = *(_DWORD *)&v32[4 * v25 + 2];
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v41);
LABEL_29:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v43);
    if ( v34 == -1 )
    {
      v39 = 88;
      goto LABEL_67;
    }
    ++v18[3];
    ++v17;
    v18 += 5;
    v14 += 5;
    if ( v17 == 512 )
    {
      v21 = -1073741492;
      v39 = 96;
      goto LABEL_68;
    }
    v15 = 0;
    v12 = a7;
    v18[1] = *v14;
    *v18 = v34;
    v26 = 1;
    v18[2] = -1;
    v18[3] = 0;
    *((_BYTE *)v18 + 16) = 0;
LABEL_17:
    v16 += v26;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v42);
    if ( v17 < 0 )
    {
      if ( (a2 & 0x20000) != 0 || CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter2) )
      {
        if ( v46 )
          v21 = -2147483606;
        else
          v21 = 0;
        goto LABEL_38;
      }
      v40 = 112;
      goto LABEL_71;
    }
    v13 = a8;
  }
  v22 = v14[2];
  if ( v22 == -1 || (v23 = CmpCheckLexicographicalOrder(BugCheckParameter2, v22, *v18), v21 = v23, v23 >= 0) )
  {
    v14[2] = *v18;
    goto LABEL_14;
  }
  if ( v23 != -1073741492 )
  {
    SetFailureLocation(v12, 0, 13, v23, 37);
LABEL_38:
    v35 = v44;
    goto LABEL_39;
  }
  v37 = 48;
  v38 = a2 & 0x20000;
LABEL_56:
  SetFailureLocation(v12, v15, 13, v21, v37);
  if ( v38 || !CmpSelfHeal && (CmpBootType & 6) == 0 || !v16 )
  {
    v40 = 24;
LABEL_71:
    v21 = -1073741492;
    SetFailureLocation(v12, 0, 13, -1073741492, v40);
    goto LABEL_38;
  }
  v35 = v44;
  if ( (unsigned __int8)CmpRemoveSubKeyCellNoCellRef(BugCheckParameter2, *(unsigned int *)(v44 + 20LL * v16 + 4)) )
  {
    v21 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  else
  {
    v21 = -1073741492;
    SetFailureLocation(v12, 0, 13, -1073741492, 32);
  }
LABEL_39:
  (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v35, 10240LL);
  return v21;
}
