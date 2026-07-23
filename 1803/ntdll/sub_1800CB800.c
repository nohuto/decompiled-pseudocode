/*
 * XREFs of sub_1800CB800 @ 0x1800CB800
 * Callers:
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     sub_1800CB704 @ 0x1800CB704 (sub_1800CB704.c)
 *     sub_1800CC418 @ 0x1800CC418 (sub_1800CC418.c)
 */

void __fastcall sub_1800CB800(int a1, __int64 a2)
{
  PVOID ProcessHeap; // rcx
  _WORD *Heap; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rsi
  USHORT *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r12d
  int v12; // r13d
  char *v13; // rax
  char *v14; // r14
  char *v15; // rbx
  unsigned int v16; // edi
  unsigned int v17; // r15d
  char *v18; // rbx
  unsigned int v19; // edi
  unsigned int v20; // r15d
  char *v21; // rbx
  unsigned int v22; // r15d
  ULONG v23; // r15d
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING v25; // [rsp+30h] [rbp-30h] BYREF
  _UNICODE_STRING v26; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING v27; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+50h] BYREF
  int v29; // [rsp+B8h] [rbp+58h]

  *(_QWORD *)&v25.Length = 0LL;
  v25.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v27.Length = 0LL;
  v27.Buffer = 0LL;
  *(_QWORD *)&v26.Length = 0LL;
  v26.Buffer = 0LL;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x248uLL);
  if ( Heap )
  {
    Heap[3] = 5332;
    *((_DWORD *)Heap + 8) = *(_DWORD *)(a2 + 32);
    *((_DWORD *)Heap + 9) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    *((_DWORD *)Heap + 10) = a1;
    *((_DWORD *)Heap + 11) = *(_DWORD *)(a2 + 36);
    sub_1800CB704(a2, Heap + 24, 0x214u, (int *)&v28);
    v6 = v28;
    v7 = 2147353476LL;
    v8 = RtlGetCurrentServiceSessionId() ? &NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] : (USHORT *)2147353476;
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x402u, v6 + 16, Heap);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( (a1 & 0x100) != 0 && (int)sub_1800CC418(*(_QWORD *)(a2 + 16), 4LL, &UnicodeString) >= 0 )
    {
      v9 = sub_1800CC418(*(_QWORD *)(a2 + 16), 1LL, &v25);
      v10 = *(_QWORD *)(a2 + 16);
      v29 = v9;
      v11 = sub_1800CC418(v10, 0LL, &v27);
      v12 = sub_1800CC418(*(_QWORD *)(a2 + 16), 5LL, &v26);
      v13 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xCA0uLL);
      v14 = v13;
      if ( v13 )
      {
        v28 = 0;
        v15 = v13 + 36;
        *((_DWORD *)v13 + 8) = a1;
        *((_WORD *)v13 + 3) = 5333;
        sub_1800CB704((__int64)&UnicodeString, (_WORD *)v13 + 18, 0xC78u, (int *)&v28);
        v16 = 3192 - v28;
        v17 = v28 + 4;
        v18 = &v15[2 * ((unsigned __int64)v28 >> 1)];
        sub_1800CB704((__int64)&v25, v18, 3192 - v28, (int *)&v28);
        v19 = v16 - v28;
        v20 = v28 + v17;
        v21 = &v18[2 * ((unsigned __int64)v28 >> 1)];
        sub_1800CB704((__int64)&v27, v21, v19, (int *)&v28);
        v22 = v28 + v20;
        sub_1800CB704((__int64)&v26, &v21[2 * ((unsigned __int64)v28 >> 1)], v19 - v28, (int *)&v28);
        v23 = v28 + v22;
        if ( RtlGetCurrentServiceSessionId() )
          v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
        ZwTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x402u, v23, v14);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      }
      RtlFreeUnicodeString(&UnicodeString);
      if ( v29 >= 0 )
        RtlFreeUnicodeString(&v25);
      if ( v12 >= 0 )
        RtlFreeUnicodeString(&v26);
      if ( v11 >= 0 )
        RtlFreeUnicodeString(&v27);
    }
  }
}
