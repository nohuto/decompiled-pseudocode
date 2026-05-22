/*
 * XREFs of _lambda_d8cf32afb77b790db641381db8dab81f_::operator() @ 0x1800B5100
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18007809C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

signed int *__fastcall lambda_d8cf32afb77b790db641381db8dab81f_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  signed int v3; // ebx
  signed int LastError; // eax
  signed int *result; // rax
  char *v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD v8; // [rsp+40h] [rbp+8h] BYREF
  LPOVERLAPPED v9; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v1 = *a1;
  v8 = 0;
  v10 = 0LL;
  v9 = 0LL;
  if ( GetQueuedCompletionStatus(*(HANDLE *)(v1 + 8), &v8, &v10, &v9, 0) )
  {
    v3 = 0;
LABEL_6:
    if ( v8 < 0xC )
      v3 = -2147024883;
    goto LABEL_8;
  }
  LastError = GetLastError();
  v3 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v3 = LastError;
  if ( v3 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( v9 == (LPOVERLAPPED)a1[1] )
  {
    if ( v3 >= 0 )
    {
      *(_QWORD *)(a1[2] + 16) = *(_QWORD *)(a1[3] + 4);
      *(_DWORD *)a1[4] |= 2u;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x116,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v3);
    }
    result = (signed int *)a1[5];
  }
  else
  {
    if ( v9 != (LPOVERLAPPED)a1[6] )
    {
      LODWORD(v6) = v3;
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x12A,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        "GetQueuedCompletionStatus() didn't return an overlapped pointer, hr = %u",
        v6);
      JUMPOUT(0x1800B521ELL);
    }
    if ( v3 >= 0 )
    {
      *(_QWORD *)(a1[7] + 16) = *(_QWORD *)(a1[8] + 4);
      *(_DWORD *)a1[4] |= 1u;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x120,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v3);
    }
    result = (signed int *)a1[9];
  }
  *result = v3;
  return result;
}
