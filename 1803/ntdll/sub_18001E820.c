/*
 * XREFs of sub_18001E820 @ 0x18001E820
 * Callers:
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 * Callees:
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800FE934 @ 0x1800FE934 (sub_1800FE934.c)
 *     sub_1801028AC @ 0x1801028AC (sub_1801028AC.c)
 */

struct _PEB *__fastcall sub_18001E820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  signed __int32 v6; // ebx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rsi
  int v15; // r15d
  unsigned int v16; // edi
  unsigned __int64 i; // rax
  int v18; // ecx
  int v19; // edx
  signed __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  struct _TEB *v23; // rdx
  __int64 HeapData_high; // r8
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int16 v27; // bx
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _PEB *result; // rax
  _DWORD *p_ServiceSessionId; // rcx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // [rsp+48h] [rbp-30h]
  __int64 v39; // [rsp+88h] [rbp+10h]
  int v40; // [rsp+A8h] [rbp+30h]
  signed __int64 v41; // [rsp+A8h] [rbp+30h]
  unsigned __int32 v42; // [rsp+A8h] [rbp+30h]

  v6 = *(_DWORD *)(a2 + 32);
  v11 = *(unsigned __int8 *)(a6 + 2);
  if ( *(_BYTE *)(a2 + 43) )
    v12 = 192LL * *(unsigned __int8 *)(a2 + 43) + *(_QWORD *)(a1 + 8 * v11 + 2224) - 192LL;
  else
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1192);
  v39 = v12;
  v13 = (*(_BYTE *)(a6 + 3) >> 1) & 3;
  if ( v13 )
  {
    result = (struct _PEB *)sub_1801028AC(a1, a2, a3, v13, a4, a5, a6);
    if ( (_DWORD)result )
      return result;
  }
  v14 = a4 + 16;
  *(_QWORD *)a3 = a2;
  v15 = qword_18015D458;
  v16 = 0;
  v38 = (((((unsigned __int64)(unsigned int)((a5 - 64) / v14) + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  for ( i = a3 + v38; i + v14 + 8 <= a3 + a5; i += v14 )
  {
    v18 = (unsigned __int16)v16;
    v19 = *(_DWORD *)(a1 + 24) ^ (i >> 4) ^ (((_DWORD)i - (_DWORD)a3) << 12);
    ++v16;
    *(_DWORD *)(i + 12) &= 0xFF0000FF;
    *(_DWORD *)(i + 12) |= v18 << 8;
    *(_DWORD *)(i + 8) = v15 ^ v19;
    *(_BYTE *)(i + 15) = 0x80;
  }
  *(_QWORD *)(a3 + 32) = v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  memset((void *)(a3 + 48), 0, ((unsigned __int64)v16 + 7) >> 3);
  if ( (v16 & 0x3F) != 0 )
    *(_QWORD *)(a3 + 48 + 8 * ((unsigned __int64)v16 >> 6)) |= ~((1LL << (v16 & 0x3F)) - 1);
  *(_WORD *)(a2 + 36) = v14 >> 4;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v39;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  LOWORD(v40) = (((((unsigned __int64)(unsigned int)((a5 - 64) / v14) + 31) >> 3) & 0xFFFC) + 64) & 0xFFF0;
  HIWORD(v40) = 16 * (v14 >> 4);
  *(_DWORD *)(a3 + 24) = v40 ^ v15 ^ a3 ^ a1;
  if ( !*(_DWORD *)(v39 + 164) )
  {
    v34 = *(_QWORD *)v39;
    v35 = *(_DWORD *)(*(_QWORD *)v39 + 36LL);
    if ( v35 >= 0x20 )
    {
LABEL_22:
      *(_WORD *)(v39 + 176) = 0;
      goto LABEL_11;
    }
    v36 = v35 + 4;
LABEL_24:
    *(_DWORD *)(v34 + 36) = v36;
    goto LABEL_22;
  }
  if ( ++*(_WORD *)(v39 + 176) > 0x1Cu )
  {
    v34 = *(_QWORD *)v39;
    v37 = *(_DWORD *)(*(_QWORD *)v39 + 36LL);
    if ( !v37 )
      goto LABEL_22;
    v36 = v37 - 4;
    goto LABEL_24;
  }
  do
  {
LABEL_11:
    v20 = *(_QWORD *)(v39 + 160);
    v21 = HIDWORD(v20) - 1;
    if ( (int)v16 > 0 )
      v21 = HIDWORD(*(_QWORD *)(v39 + 160)) + 1;
    HIDWORD(v41) = v21;
    LODWORD(v41) = v20 + v16;
  }
  while ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 160), v41, v20) );
  v22 = *(_QWORD *)v39;
  *(_DWORD *)(v39 + 168) = ++*(_DWORD *)(v22 + 32);
  v23 = NtCurrentTeb();
  HeapData_high = HIWORD(v23->HeapData);
  HIWORD(v23->HeapData) = (unsigned __int8)(HeapData_high + 2);
  v25 = byte_18015A460[HeapData_high];
  *(_DWORD *)(a2 + 44) = 1;
  v26 = (unsigned int)((v25 | (unsigned __int64)(byte_18015A460[(unsigned __int8)(HeapData_high + 1)] << 7)) % v16) << 16;
  HIWORD(v42) = (v25 | (unsigned __int64)(byte_18015A460[(unsigned __int8)(HeapData_high + 1)] << 7)) % v16;
  LOWORD(v42) = v16;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v42, v6);
  if ( (dword_18015D040 & 2) == 0 )
  {
    v27 = HIWORD(NtCurrentTeb()->HeapData);
    v28 = (unsigned __int64)(unsigned int)sub_18001EBF0(v42, v26) << 32;
    *(_QWORD *)&byte_18015A460[8 * ((unsigned __int8)v27 >> 3)] = (v28 | (unsigned int)sub_18001EBF0(v30, v29)) & 0x7F7F7F7F7F7F7F7FLL;
  }
  result = NtCurrentPeb();
  p_ServiceSessionId = &result->SharedData->ServiceSessionId;
  if ( p_ServiceSessionId && *p_ServiceSessionId )
  {
    result = NtCurrentPeb();
    UserModeGlobalLogger = (__int64)result->SharedData->UserModeGlobalLogger;
  }
  else
  {
    UserModeGlobalLogger = 2147353472LL;
  }
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
      return (struct _PEB *)sub_1800FE934(
                              *(_QWORD *)(a1 + 24),
                              *(_QWORD *)(a2 + 8),
                              *(unsigned __int16 *)(a2 + 36),
                              *(unsigned __int16 *)(a2 + 40),
                              *(unsigned __int8 *)(a2 + 43));
  }
  return result;
}
