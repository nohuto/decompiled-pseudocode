/*
 * XREFs of ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800CD360
 * Callers:
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800CD414 (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CInputSinkStruct::InitializeQueueInfo(
        CInputSinkStruct *this,
        struct CInputSinkStruct::InputQueueInfo *a2)
{
  unsigned int v4; // edi
  int v5; // eax
  int v7; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8; // [rsp+38h] [rbp-90h]
  _BYTE v9[64]; // [rsp+70h] [rbp-58h] BYREF

  v4 = -2147467259;
  memset_0(&v7, 0, 0x38uLL);
  v5 = NtQueryCompositionInputQueueAndTransform(*((_QWORD *)this + 8), *(unsigned int *)a2, &v7, v9);
  if ( v5 < 0 )
  {
    v4 = v5 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5 | 0x10000000, 0xF8u);
  }
  else if ( (unsigned int)(v7 - 2) <= 1 )
  {
    *((_QWORD *)a2 + 1) = v8;
  }
  return v4;
}
