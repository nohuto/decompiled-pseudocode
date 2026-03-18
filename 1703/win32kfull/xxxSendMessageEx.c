/*
 * XREFs of xxxSendMessageEx @ 0x1C004E330
 * Callers:
 *     xxxSendMessageFF @ 0x1C0139E00 (xxxSendMessageFF.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendMessageEx(int a1, int a2, int a3, int a4, unsigned __int64 a5)
{
  _BYTE *v6; // rdx
  __int64 v7; // rax
  ULONG_PTR v8; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+58h] [rbp-50h] BYREF
  int v11[4]; // [rsp+70h] [rbp-38h] BYREF
  ULONG_PTR v12; // [rsp+80h] [rbp-28h]

  if ( !a5 )
    return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 0, 1);
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( !KeGetCurrentThread() )
    return 0LL;
  if ( (a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (_BYTE *)a5;
  if ( a5 >= W32UserProbeAddress )
    v6 = (_BYTE *)W32UserProbeAddress;
  *v6 = *v6;
  v6[23] = v6[23];
  *(_OWORD *)v11 = *(_OWORD *)a5;
  v12 = *(_QWORD *)(a5 + 16);
  v7 = xxxSendTransformableMessageTimeout(a1, a2, a3, a4, v11[0], v11[1], (ULONG_PTR)BugCheckParameter3, 0, 1);
  v8 = BugCheckParameter3[0];
  v12 = BugCheckParameter3[0];
  *(_QWORD *)&v11[2] = v7;
  *(_OWORD *)a5 = *(_OWORD *)v11;
  *(_QWORD *)(a5 + 16) = v12;
  return v8;
}
