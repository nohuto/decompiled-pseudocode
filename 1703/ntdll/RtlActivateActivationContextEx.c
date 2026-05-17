/*
 * XREFs of RtlActivateActivationContextEx @ 0x180055590
 * Callers:
 *     RtlActivateActivationContext @ 0x180055540 (RtlActivateActivationContext.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x1800184D0 (RtlAddRefActivationContext.c)
 *     RtlCaptureStackBackTrace @ 0x1800312D0 (RtlCaptureStackBackTrace.c)
 *     sub_1800556B4 @ 0x1800556B4 (sub_1800556B4.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlActivateActivationContextEx(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        unsigned __int64 *a4)
{
  char v5; // di
  volatile signed __int32 *v6; // rsi
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  ULONG BackTraceHash; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v5 = a1;
  if ( a4 )
    *a4 = 0LL;
  v6 = (volatile signed __int32 *)&unk_180110408;
  if ( a3 != (volatile signed __int32 *)-3LL )
    v6 = a3;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 || v6 == (volatile signed __int32 *)-1LL || !a4 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a2 + 712);
  result = sub_1800556B4(a1, v7, &v14);
  if ( (int)result >= 0 )
  {
    v9 = v14;
    *(_DWORD *)(v14 + 16) = 40;
    if ( (v5 & 1) != 0 )
    {
      *(_DWORD *)(v9 + 16) = 43;
      RtlAddRefActivationContext(v6);
    }
    if ( dword_18015C724 )
      v10 = RtlCaptureStackBackTrace(2u, 8u, (PVOID *)(v9 + 32), &BackTraceHash);
    else
      v10 = 0;
    if ( v10 < 8 )
      memset((void *)(v9 + 8 * (v10 + 4LL)), 0, 8LL * (8 - v10));
    *(_QWORD *)v9 = *(_QWORD *)v7;
    *(_QWORD *)(v9 + 8) = v6;
    v11 = *(unsigned int *)(v7 + 28);
    v12 = v11 | ((unsigned __int64)(*(_DWORD *)(v7 + 32) & 0xFFFFFFF) << 32) | 0x1000000000000000LL;
    *(_DWORD *)(v7 + 28) = v11 + 1;
    result = 0LL;
    *(_QWORD *)(v9 + 24) = v12;
    *a4 = v12;
    *(_QWORD *)v7 = v9;
  }
  return result;
}
