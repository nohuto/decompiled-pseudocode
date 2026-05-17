/*
 * XREFs of sub_1800900A4 @ 0x1800900A4
 * Callers:
 *     sub_1800389A8 @ 0x1800389A8 (sub_1800389A8.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_1800900A4(unsigned __int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rcx
  _QWORD *v4; // r14
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int v7; // edi
  unsigned __int16 v8; // ax
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+48h] BYREF
  int v12; // [rsp+90h] [rbp+50h] BYREF
  __int64 v13; // [rsp+98h] [rbp+58h] BYREF

  v10 = a1;
  v1 = RtlImageNtHeader(a1);
  v2 = sub_180032C0C(v10, 1, 0xEu, &v12, &v9);
  v3 = v9;
  if ( v2 < 0 )
    v3 = 0LL;
  if ( *(_WORD *)(v1 + 24) != 267 || *(_WORD *)(v1 + 4) != 332 || (*(_BYTE *)(v3 + 16) & 2) != 0 )
  {
    v8 = *(_WORD *)(v1 + 4);
    if ( v8 < MEMORY[0x7FFE002C] )
      return (unsigned int)-1073741701;
    v7 = 0;
    if ( v8 > MEMORY[0x7FFE002E] )
      return (unsigned int)-1073741701;
    return v7;
  }
  v4 = (_QWORD *)(v1 + 120);
  v5 = v1
     + *(unsigned __int16 *)(v1 + 20)
     + 8 * (*(unsigned __int16 *)(v1 + 6) + 4LL * *(unsigned __int16 *)(v1 + 6) + 3);
  v13 = 4096LL;
  if ( v5 - v10 + 16 > 0x1000 )
    return 3221225595LL;
  result = ZwProtectVirtualMemory(-1LL, &v10, &v13, 4LL, &v11);
  v7 = result;
  if ( (int)result >= 0 )
  {
    memmove((void *)(v1 + 136), (const void *)(v1 + 120), v5 - (_QWORD)v4);
    *(_DWORD *)(v1 + 132) = *(_DWORD *)(v1 + 116);
    *(_DWORD *)(v1 + 128) = *(_DWORD *)(v1 + 112);
    *v4 = *(unsigned int *)(v1 + 108);
    *(_QWORD *)(v1 + 112) = *(unsigned int *)(v1 + 104);
    *(_QWORD *)(v1 + 104) = *(unsigned int *)(v1 + 100);
    *(_QWORD *)(v1 + 96) = *(unsigned int *)(v1 + 96);
    *(_QWORD *)(v1 + 48) = *(unsigned int *)(v1 + 52);
    *(_WORD *)(v1 + 20) += 16;
    *(_WORD *)(v1 + 24) = 523;
    ZwProtectVirtualMemory(-1LL, &v10, &v13, v11, &v11);
    return v7;
  }
  return result;
}
