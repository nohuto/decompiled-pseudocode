/*
 * XREFs of sub_18005F118 @ 0x18005F118
 * Callers:
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18005F208 @ 0x18005F208 (sub_18005F208.c)
 *     sub_18005F2A8 @ 0x18005F2A8 (sub_18005F2A8.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800FE020 @ 0x1800FE020 (sub_1800FE020.c)
 *     sub_18010486C @ 0x18010486C (sub_18010486C.c)
 */

void *__fastcall sub_18005F118(_DWORD *HeapHandle, unsigned __int64 a2, int a3, __int16 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v9; // esi
  unsigned int v10; // ebp
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  int v13; // r9d
  void *v14; // rbx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v17; // rax
  unsigned int v18; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (a3 | HeapHandle[5]) & 0x93000F0B;
  v19 = 0;
  v9 = 0;
  if ( (v5 & 0x1000000) == 0 )
  {
    v9 = HeapHandle[14];
    if ( v9 )
    {
      v5 |= 8u;
      if ( (int)sub_1800EBFF8(v9, (_DWORD)HeapHandle, 0, 1, (__int64)&v19) < 0 )
      {
        v11 = 0LL;
LABEL_12:
        v18 = 0;
        goto LABEL_20;
      }
      v4 = v19;
    }
  }
  v10 = v5 | 8;
  if ( !a4 )
    v10 = v5;
  v11 = sub_18005F2A8(a2 + v4, v10);
  if ( v11 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_12;
  v12 = sub_18005F208((__int64)HeapHandle, (__int64)&v18);
  v14 = (void *)v12;
  if ( !v12 )
    goto LABEL_8;
  if ( (v10 & 0x30000F08) == 0 )
    goto LABEL_8;
  v17 = sub_18010486C((_DWORD)HeapHandle, v12, a2, v13, v19, v10, a4);
  if ( !v9 )
    goto LABEL_8;
  *(_BYTE *)(v17 + 2) &= 0xF0u;
  *(_BYTE *)(v17 + 2) |= v9 & 0xF;
  if ( (int)sub_1800EBFF8(v9, (_DWORD)HeapHandle, (_DWORD)v14, 2, v17 + 16) >= 0 )
    goto LABEL_8;
  RtlFreeHeap(HeapHandle, 0, v14);
LABEL_20:
  v14 = 0LL;
LABEL_8:
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FE020(HeapHandle, v14, v11, v18);
  return v14;
}
