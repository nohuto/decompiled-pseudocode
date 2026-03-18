/*
 * XREFs of RtlpQuerySecurityDescriptor @ 0x140572D44
 * Callers:
 *     RtlSelfRelativeToAbsoluteSD @ 0x140572A50 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x140572C1C (RtlMakeSelfRelativeSD.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x1406E8490 (RtlSelfRelativeToAbsoluteSD2.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpQuerySecurityDescriptor(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        _QWORD *a6,
        unsigned int *a7,
        _QWORD *a8,
        unsigned int *a9)
{
  __int16 v9; // r11
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int *result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v9 = *(_WORD *)(a1 + 2);
  if ( v9 < 0 )
  {
    v16 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v16 )
      v11 = a1 + v16;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
  }
  *a2 = v11;
  if ( v11 )
    *a3 = (4 * *(unsigned __int8 *)(v11 + 1) + 11) & 0xFFFFFFFC;
  else
    *a3 = 0;
  if ( (~(_BYTE)v9 & 4) != 0 )
    goto LABEL_28;
  if ( v9 >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 32);
    goto LABEL_8;
  }
  v17 = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)v17 )
LABEL_28:
    v12 = 0LL;
  else
    v12 = v17 + a1;
LABEL_8:
  *a6 = v12;
  if ( v12 )
    *a7 = (*(unsigned __int16 *)(v12 + 2) + 3) & 0xFFFFFFFC;
  else
    *a7 = 0;
  if ( v9 < 0 )
  {
    v18 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v18 )
      v13 = a1 + v18;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 16);
  }
  *a4 = v13;
  if ( v13 )
    *a5 = (4 * *(unsigned __int8 *)(v13 + 1) + 11) & 0xFFFFFFFC;
  else
    *a5 = 0;
  if ( (~(_BYTE)v9 & 0x10) != 0 )
    goto LABEL_15;
  if ( v9 >= 0 )
  {
    v14 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v19 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v19 )
    {
LABEL_15:
      v14 = 0LL;
      goto LABEL_16;
    }
    v14 = a1 + v19;
  }
LABEL_16:
  *a8 = v14;
  result = a9;
  if ( v14 )
    *a9 = (*(unsigned __int16 *)(v14 + 2) + 3) & 0xFFFFFFFC;
  else
    *a9 = 0;
  return result;
}
