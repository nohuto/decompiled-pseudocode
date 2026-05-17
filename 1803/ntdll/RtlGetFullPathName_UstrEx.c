/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x18003BF10
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 */

__int64 __fastcall RtlGetFullPathName_UstrEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v11; // r12
  _QWORD *v12; // r13
  __int64 *v13; // r15
  __int64 v14; // rsi
  unsigned __int16 v15; // bx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // ebx
  unsigned __int16 v21; // bx
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v29 = 0LL;
  v11 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v12 = a8;
  if ( a8 )
    *a8 = 0LL;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = 0LL;
  LODWORD(a5) = *a7;
  if ( a2 )
  {
    if ( a3 && !a4 )
    {
      v19 = -1073741811;
      goto LABEL_22;
    }
    v15 = *(_WORD *)(a2 + 2);
    v16 = *(_QWORD *)(a2 + 8);
    v30 = v15;
LABEL_11:
    LODWORD(a8) = v15;
    v17 = sub_18003D640(a1, v15, v16, &v29, a6, &a5);
    LOWORD(v18) = v17;
    if ( v17 )
    {
      if ( a2 && v17 < (unsigned int)a8 )
      {
        *(_WORD *)a2 = v17;
        if ( v13 )
        {
          if ( v29 )
            v24 = (v29 - *(_QWORD *)(a2 + 8)) >> 1;
          else
            v24 = 0LL;
          *v13 = v24;
        }
        if ( a4 )
          *a4 = a2;
        v19 = 0;
      }
      else if ( a3 )
      {
        if ( v11 && v17 < (unsigned int)a8 )
        {
          *(_WORD *)(a3 + 2) = v30;
          *(_WORD *)a3 = v17;
          *(_WORD *)(v11 + 2 * ((unsigned __int64)v17 >> 1)) = 0;
          if ( v13 )
          {
            if ( v29 )
              v26 = (v29 - v11) >> 1;
            else
              v26 = 0LL;
            *v13 = v26;
          }
          if ( a4 )
            *a4 = a3;
          *(_QWORD *)(a3 + 8) = v11;
          v19 = 0;
          goto LABEL_22;
        }
        if ( (unsigned __int64)v17 + 2 > 0xFFFE )
        {
LABEL_56:
          v19 = -1073741562;
        }
        else
        {
          while ( 1 )
          {
            v21 = v18 + 2;
            v22 = v21;
            v14 = sub_18003B5E0(v21);
            if ( !v14 )
            {
              v19 = -1073741801;
              goto LABEL_18;
            }
            v23 = sub_18003D640(a1, (unsigned int)v21 - 2, v14, &v29, a6, &a5);
            v18 = v23;
            if ( !v23 )
              goto LABEL_47;
            if ( v23 <= (unsigned __int64)(v22 - 2) )
              break;
            RtlDeleteBoundaryDescriptor(v14);
            if ( (unsigned __int64)(v18 + 2) > 0xFFFE )
              goto LABEL_56;
          }
          if ( v13 )
          {
            if ( v29 )
              v27 = (v29 - v14) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          *(_WORD *)(v14 + 2 * ((unsigned __int64)(unsigned int)v18 >> 1)) = 0;
          *(_QWORD *)(a3 + 8) = v14;
          *(_WORD *)a3 = v18;
          *(_WORD *)(a3 + 2) = v22;
          if ( a4 )
            *a4 = a3;
          v19 = 0;
        }
        v14 = 0LL;
      }
      else
      {
        if ( v12 )
          *v12 = v17;
        v19 = -1073741789;
      }
    }
    else
    {
LABEL_47:
      v19 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      RtlDeleteBoundaryDescriptor(v11);
    if ( v14 )
      RtlDeleteBoundaryDescriptor(v14);
LABEL_22:
    *a7 = (_DWORD)a5;
    return v19;
  }
  v15 = 520;
  v30 = 520LL;
  v25 = sub_18003B5E0(520LL);
  v11 = v25;
  if ( v25 )
  {
    v16 = v25;
    goto LABEL_11;
  }
  return 3221225495LL;
}
