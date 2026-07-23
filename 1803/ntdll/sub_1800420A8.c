/*
 * XREFs of sub_1800420A8 @ 0x1800420A8
 * Callers:
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlInitString @ 0x1800404B0 (RtlInitString.c)
 *     sub_18007FDB8 @ 0x18007FDB8 (sub_18007FDB8.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sprintf_s @ 0x180096350 (sprintf_s.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     sub_1800CB6A4 @ 0x1800CB6A4 (sub_1800CB6A4.c)
 *     sub_1800CB704 @ 0x1800CB704 (sub_1800CB704.c)
 */

int __fastcall sub_1800420A8(__int64 a1, __int64 a2, __int64 a3, int a4)
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
        sub_18007FDB8(a1, a2, a4, (unsigned int)&v26, (__int64)&v25);
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
        Heap = (struct _PEB *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1572864, v16 + 36);
        v18 = Heap;
        if ( Heap )
        {
          LODWORD(Heap->ProcessParameters) = 3;
          *(_WORD *)(&Heap->3 + 3) = 5334;
          sub_1800CB704(v15, (char *)&Heap->ProcessParameters + 4, v16, &v24);
          v19 = v16 - v24;
          v20 = (__int64)&v18->ProcessParameters + v24 + 4;
          sub_1800CB704(a3 + 72, v20, v19, &v24);
          v21 = v19 - v24;
          v22 = v24 + v20;
          sub_1800CB6A4(&DestinationString, v22, v21, &v24);
          sub_1800CB6A4(&v28, v22 + v24, v21 - v24, &v24);
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
