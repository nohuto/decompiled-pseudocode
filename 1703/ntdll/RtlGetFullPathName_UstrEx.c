/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x18003CCD0
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 *     sub_18003DF20 @ 0x18003DF20 (sub_18003DF20.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
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
  __int64 v14; // r14
  unsigned __int16 v15; // bx
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned __int64 v18; // rbx
  unsigned int v19; // ebx
  unsigned __int64 i; // rax
  unsigned __int16 v22; // bx
  unsigned __int16 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v30 = 0LL;
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
    v31 = v15;
LABEL_11:
    LODWORD(a8) = v15;
    v17 = sub_18003E520(a1, v15, v16, &v30, a6, &a5);
    LOWORD(v18) = v17;
    if ( v17 )
    {
      if ( a2 && v17 < (unsigned int)a8 )
      {
        *(_WORD *)a2 = v17;
        if ( v13 )
        {
          if ( v30 )
            v25 = (v30 - *(_QWORD *)(a2 + 8)) >> 1;
          else
            v25 = 0LL;
          *v13 = v25;
        }
        if ( a4 )
          *a4 = a2;
        v19 = 0;
      }
      else if ( a3 )
      {
        if ( v11 && v17 < (unsigned int)a8 )
        {
          *(_WORD *)(a3 + 2) = v31;
          *(_WORD *)a3 = v17;
          *(_WORD *)(v11 + 2 * ((unsigned __int64)v17 >> 1)) = 0;
          if ( v13 )
          {
            if ( v30 )
              v27 = (v30 - v11) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          if ( a4 )
            *a4 = a3;
          *(_QWORD *)(a3 + 8) = v11;
          v19 = 0;
          goto LABEL_22;
        }
        for ( i = v17 + 2LL; ; i = v18 + 2 )
        {
          if ( i > 0xFFFE )
          {
            v19 = -1073741562;
            goto LABEL_18;
          }
          v22 = v18 + 2;
          v23 = v22;
          v14 = sub_180043FE0(v22);
          if ( !v14 )
          {
            v19 = -1073741801;
            goto LABEL_18;
          }
          v24 = sub_18003E520(a1, (unsigned int)v22 - 2, v14, &v30, a6, &a5);
          v18 = v24;
          if ( !v24 )
          {
            v19 = -1073741773;
            goto LABEL_18;
          }
          if ( v24 <= (unsigned __int64)v23 - 2 )
            break;
          RtlDeleteBoundaryDescriptor();
          v14 = 0LL;
        }
        if ( v13 )
        {
          if ( v30 )
            v28 = (v30 - v14) >> 1;
          else
            v28 = 0LL;
          *v13 = v28;
        }
        *(_WORD *)(v14 + 2 * (v18 >> 1)) = 0;
        *(_QWORD *)(a3 + 8) = v14;
        *(_WORD *)a3 = v18;
        *(_WORD *)(a3 + 2) = v23;
        if ( a4 )
          *a4 = a3;
        v14 = 0LL;
        v19 = 0;
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
      v19 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      RtlDeleteBoundaryDescriptor();
    if ( v14 )
      RtlDeleteBoundaryDescriptor();
LABEL_22:
    *a7 = (_DWORD)a5;
    return v19;
  }
  v15 = 520;
  v31 = 520LL;
  v26 = sub_180043FE0(520LL);
  v11 = v26;
  if ( v26 )
  {
    v16 = v26;
    goto LABEL_11;
  }
  return 3221225495LL;
}
