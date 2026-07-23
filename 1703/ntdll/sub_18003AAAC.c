/*
 * XREFs of sub_18003AAAC @ 0x18003AAAC
 * Callers:
 *     sub_18003AB88 @ 0x18003AB88 (sub_18003AB88.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitString @ 0x18003AB50 (RtlInitString.c)
 *     sub_1800846A8 @ 0x1800846A8 (sub_1800846A8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sprintf_s @ 0x1800A1010 (sprintf_s.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     sub_1800D5EE4 @ 0x1800D5EE4 (sub_1800D5EE4.c)
 *     sub_1800D5F44 @ 0x1800D5F44 (sub_1800D5F44.c)
 */

int __fastcall sub_18003AAAC(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct _PEB *Heap; // rax
  __int64 v12; // rcx
  USHORT *v13; // rcx
  char *v14; // rdx
  __int64 v15; // r13
  unsigned int v16; // esi
  unsigned int v17; // r15d
  struct _PEB *v18; // r14
  unsigned int v19; // esi
  __int64 v20; // rbx
  unsigned int v21; // esi
  __int64 v22; // rbx
  unsigned int v24; // [rsp+30h] [rbp-39h] BYREF
  int v25; // [rsp+34h] [rbp-35h] BYREF
  CHAR *v26; // [rsp+38h] [rbp-31h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  _STRING v28; // [rsp+50h] [rbp-19h] BYREF
  char Buffer[16]; // [rsp+60h] [rbp-9h] BYREF

  v8 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 )
  {
    v13 = RtlGetCurrentServiceSessionId()
        ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
        : (USHORT *)2147353477;
    if ( (*(_BYTE *)v13 & 0x10) != 0 )
      goto LABEL_19;
  }
  LODWORD(Heap) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)Heap )
  {
    Heap = NtCurrentPeb();
    v12 = (__int64)&Heap->SharedData->UserModeGlobalLogger[2];
  }
  else
  {
    v12 = 2147353476LL;
  }
  if ( *(_BYTE *)v12 )
  {
    Heap = NtCurrentPeb();
    if ( (Heap->TracingFlags & 4) != 0 )
    {
      LODWORD(Heap) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)Heap )
      {
        Heap = NtCurrentPeb();
        v10 = (__int64)&Heap->SharedData->UserModeGlobalLogger[2] + 1;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
      {
LABEL_19:
        v26 = (CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
        RtlInitString(&DestinationString, v26);
        sub_1800846A8(a1, a2, a4, (unsigned int)&v26, (__int64)&v25);
        v14 = v26;
        if ( !v26 )
        {
          sprintf_s(Buffer, 0xCuLL, "#%u", v25);
          v14 = Buffer;
        }
        RtlInitString(&v28, v14);
        v15 = a1 + 72;
        v16 = *(unsigned __int16 *)(a3 + 72)
            + *(unsigned __int16 *)(a1 + 72)
            + 2 * (DestinationString.Length + v28.Length + 4);
        v17 = v16 + 36;
        Heap = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1572864, v16 + 36);
        v18 = Heap;
        if ( Heap )
        {
          LODWORD(Heap->ProcessParameters) = 3;
          *(_WORD *)(&Heap->3 + 3) = 5334;
          sub_1800D5F44(v15, (char *)&Heap->ProcessParameters + 4, v16, &v24);
          v19 = v16 - v24;
          v20 = (__int64)&v18->ProcessParameters + v24 + 4;
          sub_1800D5F44(a3 + 72, v20, v19, &v24);
          v21 = v19 - v24;
          v22 = v24 + v20;
          sub_1800D5EE4(&DestinationString, v22, v21, &v24);
          sub_1800D5EE4(&v28, v22 + v24, v21 - v24, &v24);
          if ( RtlGetCurrentServiceSessionId() )
            v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
          ZwTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x402u, v17 - 32, v18);
          LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        }
      }
    }
  }
  return (int)Heap;
}
