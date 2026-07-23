/*
 * XREFs of sub_180054DE8 @ 0x180054DE8
 * Callers:
 *     sub_180054D18 @ 0x180054D18 (sub_180054D18.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 */

__int64 __fastcall sub_180054DE8(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 **v3; // rax
  __int64 *v4; // rdx
  unsigned int v5; // r15d
  __int64 i; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  char v9; // r12
  char v10; // al
  __int64 v12; // [rsp+48h] [rbp-E0h]
  __int64 v13; // [rsp+68h] [rbp-C0h]
  __int64 v14; // [rsp+A0h] [rbp-88h] BYREF
  int v15; // [rsp+A8h] [rbp-80h]
  _BYTE v16[56]; // [rsp+B0h] [rbp-78h] BYREF

  v1 = a1;
  v13 = a1;
  *(_DWORD *)(a1 + 56) = 8;
  v2 = qword_18015BF88;
  v3 = (__int64 **)qword_18015C398;
  while ( 1 )
  {
    a1 = *(_QWORD *)(a1 + 8);
    if ( a1 == v1 )
      break;
    if ( a1 - 160 != v2 )
    {
      v4 = (__int64 *)(a1 - 160 + 32);
      if ( *v3 != &qword_18015C390 )
        __fastfail(3u);
      *v4 = (__int64)&qword_18015C390;
      *(_QWORD *)(a1 - 160 + 40) = v3;
      *v3 = v4;
      v3 = (__int64 **)(a1 - 160 + 32);
      qword_18015C398 = (__int64)v3;
    }
  }
  v5 = 0;
  for ( i = *(_QWORD *)(v1 + 8); i != v1; i = *(_QWORD *)(i + 8) )
  {
    v7 = i - 160;
    if ( i - 160 != v2 )
    {
      v8 = qword_18015CA68;
      qword_18015CA68 = i - 160;
      v12 = *(_QWORD *)(v7 + 56);
      if ( (dword_180156A70 & 5) != 0 )
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          913,
          (unsigned int)"LdrpInitializeNode",
          2,
          "Calling init routine %p for DLL \"%wZ\"\n",
          *(_QWORD *)(v7 + 56),
          v7 + 72);
      v9 = 1;
      v14 = 72LL;
      v15 = 1;
      memset(v16, 0, sizeof(v16));
      RtlActivateActivationContextUnsafeFast((__int64)&v14, *(_QWORD *)(v7 + 136));
      if ( *(_WORD *)(v7 + 110) )
        sub_18003B5F8(1, i - 160);
      if ( v12 )
        v9 = sub_18003B518(v12, *(_QWORD *)(v7 + 48), 1);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v14);
      v10 = dword_180156A70;
      qword_18015CA68 = v8;
      *(_DWORD *)(v7 + 104) |= 0x80000u;
      if ( !v9 )
      {
        if ( (v10 & 3) != 0 )
        {
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            965,
            (unsigned int)"LdrpInitializeNode",
            0,
            "Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
            v12,
            v7 + 72);
          v10 = dword_180156A70;
        }
        if ( (v10 & 0x10) != 0 )
          __debugbreak();
        v5 = -1073741502;
        *(_DWORD *)(v7 + 104) |= 0x100000u;
        break;
      }
      sub_18003BC9C(*(_QWORD *)(v7 + 48), v7 + 72, 0x14AEu);
      v2 = qword_18015BF88;
    }
  }
  *(_DWORD *)(v13 + 56) = v5 != 0 ? -4 : 9;
  return v5;
}
