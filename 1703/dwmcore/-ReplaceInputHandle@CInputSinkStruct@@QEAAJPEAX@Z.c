/*
 * XREFs of ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800B1C20
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18004B300 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800B1DEC (-InitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800B1E4C (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
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
  if ( *((_QWORD *)this + 8) )
  {
    CInputSinkStruct::UninitializeQueues(this);
    CloseHandle(*((HANDLE *)this + 8));
  }
  v5 = *(_OWORD *)v12;
  *((_QWORD *)this + 8) = a2;
  v6 = *(_QWORD *)&v12[16];
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *(_OWORD *)((char *)this + 72) = v5;
  *((_QWORD *)this + 11) = v6;
  if ( a2 )
  {
    CompositionInputSink = NtQueryCompositionInputSink(a2, v12);
    if ( CompositionInputSink < 0 )
    {
      v11 = 64;
    }
    else
    {
      v8 = *((_QWORD *)this + 8);
      v9 = *(_QWORD *)&v12[16];
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v12;
      *((_QWORD *)this + 11) = v9;
      CompositionInputSink = NtQueryCompositionInputSinkLuid(v8, (char *)this + 96);
      if ( CompositionInputSink >= 0 )
      {
        CInputSinkStruct::InitializeQueues(this);
        return v2;
      }
      v11 = 67;
    }
    v2 = CompositionInputSink | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CompositionInputSink | 0x10000000, v11);
  }
  return v2;
}
