/*
 * XREFs of ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x180004B90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180003B0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x180004A2C (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     memset_0 @ 0x180007A10 (memset_0.c)
 */

__int64 __fastcall CPortClient::SendSimpleAsyncRequestWow64(CPortClient *this, int a2)
{
  unsigned int v4; // esi
  void *v5; // rcx
  NTSTATUS v6; // eax
  int v7; // eax
  _PORT_MESSAGE LpcMessage; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+58h] [rbp-10h]

  v4 = 0;
  memset_0((char *)&LpcMessage.u1.Length + 2, 0, 0x2EuLL);
  v5 = (void *)*((_QWORD *)this + 6);
  v10 = a2;
  LpcMessage.u1.Length = 3145736;
  v6 = NtRequestPort(v5, &LpcMessage);
  v7 = CPortClient::CheckStatus(this, v6);
  if ( v7 < 0 )
  {
    v4 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      1u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      8LL,
      v7 | 0x10000000,
      0x31u);
  }
  return v4;
}
