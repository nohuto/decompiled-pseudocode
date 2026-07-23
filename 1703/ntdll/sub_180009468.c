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

char *__fastcall sub_180009468(_DWORD *HeapHandle, size_t a2, int a3, __int16 a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v10; // r15d
  unsigned int v11; // esi
  unsigned __int64 v12; // r12
  char *v13; // rbx
  __int64 UserModeGlobalLogger; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // r8d
  int v19; // eax
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0;
  v6 = (a3 | HeapHandle[5]) & 0x93000F0B;
  v22 = 0;
  v10 = 0;
  if ( (v6 & 0x1000000) == 0 )
  {
    v10 = HeapHandle[8];
    if ( v10 )
    {
      v6 |= 8u;
      if ( (int)sub_180095A28(v10, (_DWORD)HeapHandle, 0, 1, (__int64)&v22) < 0 )
      {
        v12 = 0LL;
LABEL_15:
        v13 = 0LL;
        LODWORD(v21) = 0;
        goto LABEL_8;
      }
      v5 = v22;
    }
  }
  v11 = v6 | 8;
  if ( !a4 )
    v11 = v6;
  v12 = sub_18000975C(a2 + v5, v11);
  if ( v12 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_15;
  v13 = (char *)sub_1800096A8(HeapHandle, a2, (__int64)&v21);
  if ( v13 && (v11 & 0x30000F08) != 0 )
  {
    v16 = v22;
    if ( (v11 & 0x10000000) != 0 )
    {
      *(_QWORD *)&v13[a2] = 0xABABABABABABABABuLL;
      *(_QWORD *)&v13[a2 + 8] = 0xABABABABABABABABuLL;
    }
    if ( (v11 & 0x20000F08) != 0 )
    {
      v17 = (__int64)&v13[a2 + 16];
      if ( (v11 & 0x10000000) == 0 )
        v17 = (__int64)&v13[a2];
      v4 = (v17 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_BYTE *)(v4 + 2) &= 0xFu;
      *(_WORD *)v4 = a4;
      *(_BYTE *)(v4 + 2) |= 16 * (BYTE1(v11) & 0xFE);
      *(_BYTE *)(v4 + 3) = v16 >> 4;
      _InterlockedOr(v20, 0);
      sub_1801006CC(HeapHandle, v13, v11);
    }
    if ( v10 )
    {
      *(_BYTE *)(v4 + 2) &= 0xF0u;
      *(_BYTE *)(v4 + 2) |= v10 & 0xF;
      if ( (dword_180158684 & 2) != 0 )
      {
        if ( (_WORD)v13 )
          v19 = 0;
        else
          v19 = sub_1800588D4(&stru_180159600);
        v18 = (int)v13;
        if ( !v19 )
          v18 = (_DWORD)v13 + 16;
      }
      else
      {
        v18 = (int)v13;
      }
      if ( (int)sub_180095A28(v10, (_DWORD)HeapHandle, v18, 2, v4 + 16) < 0 )
      {
        RtlFreeHeap(HeapHandle, 0, v13);
        v13 = 0LL;
      }
    }
  }
LABEL_8:
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FF7B0(HeapHandle, v13, v12, (unsigned int)v21);
  return v13;
}
