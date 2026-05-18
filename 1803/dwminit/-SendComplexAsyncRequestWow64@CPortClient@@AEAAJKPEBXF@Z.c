/*
 * XREFs of ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x180004C20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180003B0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180003E34 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x180004A2C (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     memcpy_0 @ 0x180008731 (memcpy_0.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequestWow64(HANDLE *this, ULONG a2, const void *a3, __int16 a4)
{
  unsigned int v4; // ebx
  DWORD v9; // r9d
  struct _PORT_MESSAGE *v10; // rax
  struct _PORT_MESSAGE *v11; // rsi
  NTSTATUS v12; // eax
  int v13; // eax
  DWORD v15; // [rsp+20h] [rbp-28h]

  v4 = 0;
  if ( !a3 )
  {
    v9 = -2147024890;
    v15 = 92;
LABEL_3:
    v4 = v9;
    MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v9, v15);
    return v4;
  }
  v10 = (struct _PORT_MESSAGE *)HeapAlloc(this[10], 8u, (unsigned __int16)(a4 + 48));
  v11 = v10;
  if ( !v10 )
  {
    v9 = -2147024882;
    v15 = 95;
    goto LABEL_3;
  }
  v10[1].u1.Length = a2;
  v10->u1.s1.DataLength = a4 + 8;
  v10->u1.s1.TotalLength = a4 + 48;
  if ( (__int16)(a4 + 48) > 512 )
    AssertW(
      0LL,
      L"pMsg->u1.s1.TotalLength <= 512",
      L"LpcVerifyOutgoingPayloadSize",
      L"onecoreuap\\windows\\dwm\\common\\shared\\lpcshared.h",
      0x136u);
  memcpy_0(&v11[1].DoNotUseThisField, a3, a4);
  v12 = NtRequestPort(this[6], v11);
  v13 = CPortClient::CheckStatus((CPortClient *)this, v12);
  if ( v13 < 0 )
  {
    v4 = v13 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      1u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      8LL,
      v13 | 0x10000000,
      0x69u);
  }
  HeapFree(this[10], 0, v11);
  return v4;
}
