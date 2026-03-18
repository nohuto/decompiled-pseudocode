/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x1401A1520
 * Callers:
 *     FsRtlTruncateSmallMcb @ 0x1402C1180 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     sub_1402E8270 @ 0x1402E8270 (sub_1402E8270.c)
 *     KeGuardDispatchICall @ 0x1402E97D0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, signed __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int i; // eax
  int v5; // r9d
  _QWORD *v6; // rax
  signed __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  for ( i = 0; i < 0x19; ++i )
    *a2++ ^= a3;
  *(_DWORD *)v3 ^= a3;
  v5 = *((_DWORD *)v3 + 49);
  if ( a3 && v5 )
  {
    v6 = &a2[v5 - 1];
    while ( 1 )
    {
      *v6-- ^= a3;
      v8 = __ROR8__(a3, v5);
      _bittestandcomplement64(&v8, v8 & 0x3F);
      if ( !--v5 )
        break;
      a3 = v8;
    }
  }
  sub_1402E8270(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[34])(v3 + 199, 1LL);
}
