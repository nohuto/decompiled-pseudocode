/*
 * XREFs of sub_18003DF20 @ 0x18003DF20
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003DA60 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     RtlGetFullPathName_UstrEx @ 0x18003CCD0 (RtlGetFullPathName_UstrEx.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 */

__int64 __fastcall sub_18003DF20(__int64 a1, __int64 a2, _QWORD *a3)
{
  bool v3; // r14
  int v7; // r11d
  int FullPathName_Ustr; // ebx
  _QWORD *v9; // rcx
  __int128 v10; // xmm0
  unsigned __int16 v11; // ax
  __int64 v13; // rax
  __int128 v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+70h] [rbp+20h] BYREF
  _OWORD *v16; // [rsp+88h] [rbp+38h] BYREF

  v16 = 0LL;
  v3 = 0;
  if ( !a1 || a3 && a3[1] )
  {
    FullPathName_Ustr = -1073741811;
  }
  else
  {
    v7 = sub_18003F2C4(a1);
    v15 = v7;
    if ( ((v7 - 1) & 0xFFFFFFFA) != 0 || v7 == 5 )
      goto LABEL_11;
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(a1, a2, (__int64)a3, &v16, 0LL, 0LL, &v15, 0LL);
    if ( FullPathName_Ustr >= 0 )
    {
      v9 = v16;
      v10 = *v16;
      v14 = *v16;
      if ( v15 == 6 && (v13 = *(_QWORD *)(a1 + 8), *(_WORD *)(v13 + 10) == 58) && *(_WORD *)(v13 + 12) == 92 )
      {
        *((_QWORD *)&v14 + 1) += 8LL;
        *(_QWORD *)(a1 + 8) = v13 + 8;
        *(_WORD *)a1 -= 8;
        v11 = v14 - 8;
        *(_WORD *)(a1 + 2) -= 8;
        WORD1(v14) -= 8;
        LOWORD(v14) = v14 - 8;
        v10 = v14;
      }
      else
      {
        v11 = *v16;
      }
      if ( *(_WORD *)a1 > v11 )
      {
        v3 = v9 == a3;
        *(_OWORD *)a1 = v10;
      }
LABEL_11:
      FullPathName_Ustr = 0;
      if ( v3 )
        return (unsigned int)FullPathName_Ustr;
    }
  }
  if ( a3[1] )
  {
    RtlDeleteBoundaryDescriptor();
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  return (unsigned int)FullPathName_Ustr;
}
