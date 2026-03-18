/*
 * XREFs of IopLiveDumpTraceBufferAllocation @ 0x1401F5EA4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14068E734 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401F5E08 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceBufferAllocation()
{
  char result; // al
  __int64 v1; // rcx
  __int64 v2; // [rsp+40h] [rbp-9h] BYREF
  __int64 v3; // [rsp+48h] [rbp-1h] BYREF
  __int64 v4; // [rsp+50h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+Fh] BYREF
  __int64 *v6; // [rsp+68h] [rbp+1Fh]
  __int64 v7; // [rsp+70h] [rbp+27h]
  __int64 *v8; // [rsp+78h] [rbp+2Fh]
  __int64 v9; // [rsp+80h] [rbp+37h]

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = *(_QWORD *)(v1 + 496) << 12;
    v3 = *(_QWORD *)(v1 + 504) << 12;
    v4 = *(unsigned int *)(v1 + 136);
    UserData.Ptr = (ULONGLONG)&v2;
    v6 = &v3;
    v8 = &v4;
    *(_QWORD *)&UserData.Size = 8LL;
    v7 = 8LL;
    v9 = 8LL;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ALLOCATION,
             0LL,
             0,
             0LL,
             0LL,
             3u,
             &UserData);
  }
  return result;
}
