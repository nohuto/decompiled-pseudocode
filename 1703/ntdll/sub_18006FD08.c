/*
 * XREFs of sub_18006FD08 @ 0x18006FD08
 * Callers:
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     sub_18006FC38 @ 0x18006FC38 (sub_18006FC38.c)
 * Callees:
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 */

__int64 __fastcall sub_18006FD08(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r8
  __int64 **v3; // rax
  __int64 *v4; // rdx
  unsigned int v5; // r15d
  __int64 i; // r14
  __int64 v7; // rbx
  __int64 v8; // r13
  char v9; // r12
  char v10; // al
  __int64 v12; // [rsp+48h] [rbp-D0h]
  __int64 v13; // [rsp+90h] [rbp-88h] BYREF
  int v14; // [rsp+98h] [rbp-80h]
  _BYTE v15[56]; // [rsp+A0h] [rbp-78h] BYREF

  v1 = a1;
  *(_DWORD *)(a1 + 56) = 8;
  v2 = qword_18015AE50;
  v3 = (__int64 **)qword_18015B378;
  while ( 1 )
  {
    a1 = *(_QWORD *)(a1 + 8);
    if ( a1 == v1 )
      break;
    if ( a1 - 160 != v2 )
    {
      v4 = (__int64 *)(a1 - 160 + 32);
      if ( *v3 != &qword_18015B370 )
        __fastfail(3u);
      *v4 = (__int64)&qword_18015B370;
      *(_QWORD *)(a1 - 160 + 40) = v3;
      *v3 = v4;
      v3 = (__int64 **)(a1 - 160 + 32);
      qword_18015B378 = (__int64)v3;
    }
  }
  v5 = 0;
  for ( i = *(_QWORD *)(v1 + 8); i != v1; i = *(_QWORD *)(i + 8) )
  {
    v7 = i - 160;
    if ( i - 160 != v2 )
    {
      v8 = qword_18015BA48;
      qword_18015BA48 = i - 160;
      v12 = *(_QWORD *)(v7 + 56);
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          826,
          (unsigned int)"LdrpInitializeNode",
          2,
          "Calling init routine %p for DLL \"%wZ\"\n",
          *(_QWORD *)(v7 + 56),
          v7 + 72);
      v9 = 1;
      v13 = 72LL;
      v14 = 1;
      memset(v15, 0, sizeof(v15));
      RtlActivateActivationContextUnsafeFast((__int64)&v13, *(_QWORD *)(v7 + 136));
      if ( *(_WORD *)(v7 + 110) )
        sub_18006FF7C(1LL, i - 160);
      if ( v12 )
        v9 = sub_180043C64(v12, *(_QWORD *)(v7 + 48), 1);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v13);
      v10 = dword_180155A10;
      qword_18015BA48 = v8;
      *(_DWORD *)(v7 + 104) |= 0x80000u;
      if ( !v9 )
      {
        if ( (v10 & 3) != 0 )
        {
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            878,
            (unsigned int)"LdrpInitializeNode",
            0,
            "Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
            v12,
            v7 + 72);
          v10 = dword_180155A10;
        }
        if ( (v10 & 0x10) != 0 )
          __debugbreak();
        v5 = -1073741502;
        *(_DWORD *)(v7 + 104) |= 0x100000u;
        break;
      }
      sub_18003CA5C(*(_QWORD *)(v7 + 48), v7 + 72, 0x14AEu);
      v2 = qword_18015AE50;
    }
  }
  *(_DWORD *)(v1 + 56) = v5 != 0 ? -4 : 9;
  return v5;
}
