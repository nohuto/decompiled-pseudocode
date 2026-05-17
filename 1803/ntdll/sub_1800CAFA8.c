/*
 * XREFs of sub_1800CAFA8 @ 0x1800CAFA8
 * Callers:
 *     sub_18002C0DC @ 0x18002C0DC (sub_18002C0DC.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800CAFA8(unsigned __int64 a1)
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
  int v11; // [rsp+90h] [rbp+50h] BYREF
  __int64 v12; // [rsp+98h] [rbp+58h]

  v1 = RtlImageNtHeader(a1);
  v2 = sub_18001014C(a1, 1, 0xEu, &v11, &v9);
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
  v12 = 4096LL;
  if ( v5 - a1 + 16 > 0x1000 )
    return 3221225595LL;
  result = ZwProtectVirtualMemory();
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
    ZwProtectVirtualMemory();
    return v7;
  }
  return result;
}
