/*
 * XREFs of sub_180009468 @ 0x180009468
 * Callers:
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 * Callees:
 *     sub_1800096A8 @ 0x1800096A8 (sub_1800096A8.c)
 *     sub_18000975C @ 0x18000975C (sub_18000975C.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     sub_1800FF7B0 @ 0x1800FF7B0 (sub_1800FF7B0.c)
 *     sub_1801006CC @ 0x1801006CC (sub_1801006CC.c)
 */

unsigned __int64 __fastcall sub_180009468(__int64 a1, unsigned __int64 a2, int a3, __int16 a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v10; // r15d
  unsigned int v11; // esi
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v20; // rdi
  int v21; // r8d
  int v22; // eax
  signed __int32 v23[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0;
  v6 = (a3 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  v25 = 0;
  v10 = 0;
  if ( (v6 & 0x1000000) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 32);
    if ( v10 )
    {
      v6 |= 8u;
      if ( (int)sub_180095A28(v10, a1, 0, 1, (__int64)&v25) < 0 )
      {
        v16 = 0LL;
LABEL_15:
        v17 = 0LL;
        v24 = 0;
        goto LABEL_8;
      }
      v5 = v25;
    }
  }
  v11 = v6 | 8;
  if ( !a4 )
    v11 = v6;
  v16 = sub_18000975C(a2 + v5, v11);
  if ( v16 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_15;
  v17 = sub_1800096A8(a1, a2, v16, v11 & 0x13000003, (__int64)&v24);
  if ( v17 && (v11 & 0x30000F08) != 0 )
  {
    v12 = v25;
    v13 = v11 & 0x10000000;
    if ( (v11 & 0x10000000) != 0 )
    {
      *(_QWORD *)(v17 + a2) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v17 + a2 + 8) = 0xABABABABABABABABuLL;
    }
    if ( (v11 & 0x20000F08) != 0 )
    {
      v20 = v17 + a2 + 16;
      if ( !(_DWORD)v13 )
        v20 = v17 + a2;
      v4 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_BYTE *)(v4 + 2) &= 0xFu;
      *(_WORD *)v4 = a4;
      *(_BYTE *)(v4 + 2) |= 16 * (BYTE1(v11) & 0xFE);
      *(_BYTE *)(v4 + 3) = v12 >> 4;
      _InterlockedOr(v23, 0);
      sub_1801006CC(a1, v17, v11);
    }
    if ( v10 )
    {
      *(_BYTE *)(v4 + 2) &= 0xF0u;
      *(_BYTE *)(v4 + 2) |= v10 & 0xF;
      if ( (dword_180158684 & 2) != 0 )
      {
        if ( (_WORD)v17 )
          v22 = 0;
        else
          v22 = sub_1800588D4(&qword_180159600, v17 >> 16, 1LL);
        v21 = v17;
        if ( !v22 )
          v21 = v17 + 16;
      }
      else
      {
        v21 = v17;
      }
      if ( (int)sub_180095A28(v10, a1, v21, 2, v4 + 16) < 0 )
      {
        RtlFreeHeap(a1, 0LL);
        v17 = 0LL;
      }
    }
  }
LABEL_8:
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v12, v14, v15) )
    v18 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v18 = 2147353472LL;
  if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FF7B0(a1, v17, v16, v24);
  return v17;
}
