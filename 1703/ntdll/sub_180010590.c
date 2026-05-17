/*
 * XREFs of sub_180010590 @ 0x180010590
 * Callers:
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 * Callees:
 *     sub_1800106C4 @ 0x1800106C4 (sub_1800106C4.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 */

void __fastcall sub_180010590(_QWORD **a1)
{
  _QWORD *i; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r15
  __int64 v8; // [rsp+60h] [rbp-68h] BYREF
  int v9; // [rsp+68h] [rbp-60h]
  _BYTE v10[56]; // [rsp+70h] [rbp-58h] BYREF

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v3 = i - 20;
    *((_WORD *)i - 26) = 0;
    sub_1800106C4(i - 20);
    v4 = (__int64)(i - 16);
    if ( *(_QWORD *)v4 )
    {
      v5 = *(_QWORD *)v4;
      v6 = (_QWORD *)v3[5];
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *(_QWORD *)v4 = 1LL;
    }
    v7 = v3[7];
    if ( v7 && (v3[13] & 0x80000) != 0 )
    {
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1870,
          (unsigned int)"LdrpProcessDetachNode",
          2,
          "Uninitializing DLL \"%wZ\" (Init routine: %p)\n",
          v3 + 9,
          v3[7]);
      v8 = 72LL;
      v9 = 1;
      memset(v10, 0, sizeof(v10));
      RtlActivateActivationContextUnsafeFast(&v8, v3[17]);
      if ( *((_WORD *)v3 + 55) )
        sub_18006FF7C(0LL, i - 20);
      sub_180043C64(v7, v3[6], 0LL, 0LL);
      RtlDeactivateActivationContextUnsafeFast(&v8);
    }
  }
}
