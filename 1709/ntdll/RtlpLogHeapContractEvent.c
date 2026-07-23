/*
 * XREFs of RtlpLogHeapContractEvent @ 0x18010148C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpDecommitBlock @ 0x18004A4B4 (RtlpDecommitBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x1800133A8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800FF528 (GetUCBytes.c)
 */

NTSTATUS __fastcall RtlpLogHeapContractEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        HANDLE TraceHandle)
{
  __int64 v8; // r8
  char v9; // r9
  __int64 UCBytes; // rax
  _BYTE Fields[6]; // [rsp+20h] [rbp-41h] BYREF
  __int16 v13; // [rsp+26h] [rbp-3Bh]
  __int64 v14; // [rsp+40h] [rbp-21h]
  __int64 v15; // [rsp+48h] [rbp-19h]
  __int64 v16; // [rsp+50h] [rbp-11h]
  __int64 v17; // [rsp+58h] [rbp-9h]
  __int64 v18; // [rsp+60h] [rbp-1h]
  __int64 v19; // [rsp+68h] [rbp+7h] BYREF
  int v20; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+74h] [rbp+13h]

  v17 = a4;
  v19 = 0LL;
  v18 = 0LL;
  v20 = 0;
  v14 = a1;
  v16 = a2;
  v21 = RtlpEstimateAllocatedSize(a1);
  if ( a5 != v9 )
    v8 -= a6;
  v15 = v8;
  UCBytes = GetUCBytes(a1, &v19, &v20);
  v18 = v19 - *(_QWORD *)(a1 + 632) - UCBytes;
  v13 = 4138;
  return NtTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
