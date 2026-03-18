/*
 * XREFs of ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800BA55C
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x180091734 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800BA448 (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800BA4B4 (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::ReplaceInputHandle(CInputSinkStruct *this, void *a2)
{
  unsigned int v2; // edi
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  int CompositionInputSink; // eax
  __int64 v8; // rcx
  __int64 v9; // xmm1_8
  unsigned int v11; // [rsp+20h] [rbp-38h]
  _BYTE v12[24]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)v12 = 24;
  v2 = 0;
  memset(&v12[4], 0, 20);
  if ( *((_QWORD *)this + 12) )
  {
    CInputSinkStruct::UninitializeQueues(this);
    CloseHandle(*((HANDLE *)this + 12));
  }
  v5 = *(_OWORD *)v12;
  v6 = *(_QWORD *)&v12[16];
  *((_QWORD *)this + 12) = a2;
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 136) = 0;
  *(_OWORD *)((char *)this + 104) = v5;
  *((_QWORD *)this + 15) = v6;
  if ( a2 )
  {
    CompositionInputSink = NtQueryCompositionInputSink(a2, v12);
    if ( CompositionInputSink < 0 )
    {
      v11 = 64;
    }
    else
    {
      v8 = *((_QWORD *)this + 12);
      v9 = *(_QWORD *)&v12[16];
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)v12;
      *((_QWORD *)this + 15) = v9;
      CompositionInputSink = NtQueryCompositionInputSinkLuid(v8, (char *)this + 128);
      if ( CompositionInputSink >= 0 )
      {
        CInputSinkStruct::InitializeQueues(this);
        return v2;
      }
      v11 = 67;
    }
    v2 = CompositionInputSink | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CompositionInputSink | 0x10000000, v11);
  }
  return v2;
}
