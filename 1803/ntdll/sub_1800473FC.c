/*
 * XREFs of sub_1800473FC @ 0x1800473FC
 * Callers:
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     sub_180047530 @ 0x180047530 (sub_180047530.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 */

void __fastcall sub_1800473FC(_QWORD **a1)
{
  _QWORD *i; // rdi
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // rdx
  __int64 v7; // r15
  __int64 v8; // [rsp+60h] [rbp-68h] BYREF
  int v9; // [rsp+68h] [rbp-60h]
  _BYTE v10[56]; // [rsp+70h] [rbp-58h] BYREF

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v3 = i - 20;
    *((_WORD *)i - 26) = 0;
    sub_180047530(i - 20);
    v4 = i - 16;
    v5 = *v4;
    if ( *v4 )
    {
      v6 = (__int64 **)v3[5];
      if ( *(__int64 **)(v5 + 8) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      *v4 = 1LL;
    }
    v7 = v3[7];
    if ( v7 && (v3[13] & 0x80000) != 0 )
    {
      if ( (dword_180156A70 & 5) != 0 )
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1988,
          (unsigned int)"LdrpProcessDetachNode",
          2,
          "Uninitializing DLL \"%wZ\" (Init routine: %p)\n",
          v3 + 9,
          v3[7]);
      v8 = 72LL;
      v9 = 1;
      memset(v10, 0, sizeof(v10));
      RtlActivateActivationContextUnsafeFast((__int64)&v8, v3[17]);
      if ( *((_WORD *)v3 + 55) )
        sub_18003B5F8(0, (__int64)(i - 20));
      sub_18003B518(v7, v3[6], 0);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v8);
    }
  }
}
