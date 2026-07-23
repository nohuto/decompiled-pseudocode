/*
 * XREFs of sub_1800D62F0 @ 0x1800D62F0
 * Callers:
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     sub_1800389A8 @ 0x1800389A8 (sub_1800389A8.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 *     sub_18004CE2C @ 0x18004CE2C (sub_18004CE2C.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 *     LdrProcessInitializationComplete @ 0x180088C50 (LdrProcessInitializationComplete.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     sub_1800D5F44 @ 0x1800D5F44 (sub_1800D5F44.c)
 */

int __fastcall sub_1800D62F0(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // ebx
  _BYTE *Heap; // rax
  __int64 v12; // rcx
  char v14; // [rsp+20h] [rbp-288h]
  _DWORD v15[3]; // [rsp+24h] [rbp-284h] BYREF
  _BYTE Fields[576]; // [rsp+30h] [rbp-278h] BYREF

  v6 = Fields;
  v7 = 0;
  v14 = a3;
  if ( a5 )
  {
    v7 = *a5 + 2;
    if ( a6 )
      v7 += *a6 + 2;
  }
  if ( v7 > 0x214 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7 + 42);
    v6 = Heap;
    if ( !Heap )
      return (int)Heap;
    a3 = v14;
  }
  *((_WORD *)v6 + 3) = a1;
  if ( a2 != -1 )
  {
    *((_QWORD *)v6 + 4) = a2;
    v6[40] = a3;
    v6[41] = a4;
    if ( v7 )
    {
      sub_1800D5F44((__int64)a5, (_WORD *)v6 + 21, v7, v15);
      if ( a6 )
        sub_1800D5F44((__int64)a6, &v6[v15[0] + 42], v7 - v15[0], v15);
      if ( RtlGetCurrentServiceSessionId() )
        v12 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      else
        v12 = 2147353476LL;
      ZwTraceEvent((HANDLE)*(unsigned __int8 *)v12, 0x402u, v7 + 10, v6);
    }
  }
  Heap = Fields;
  if ( Fields != v6 )
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return (int)Heap;
}
