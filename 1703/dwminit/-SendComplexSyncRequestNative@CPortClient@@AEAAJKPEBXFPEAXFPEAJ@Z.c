/*
 * XREFs of ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003D74 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180004100 (-AssertW@@YAXPEBG000K@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x180004CD8 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     memcpy_0 @ 0x1800072D2 (memcpy_0.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequestNative(
        HANDLE *this,
        ULONG a2,
        const void *a3,
        __int16 a4,
        void *a5,
        __int16 a6,
        int *a7)
{
  __int16 v7; // ax
  unsigned __int16 v11; // ax
  signed int v13; // ebx
  struct _PORT_MESSAGE *v14; // rax
  struct _PORT_MESSAGE *v15; // rdi
  NTSTATUS v16; // eax
  int v17; // eax

  v7 = a6;
  if ( a4 > a6 )
    v7 = a4;
  v11 = v7 + 48;
  v13 = 0;
  if ( v11 < 0x2B0u )
    v11 = 688;
  v14 = (struct _PORT_MESSAGE *)HeapAlloc(this[10], 8u, v11);
  v15 = v14;
  if ( v14 )
  {
    v14[1].u1.Length = a2;
    v14->u1.s1.DataLength = a4 + 8;
    v14->u1.s1.TotalLength = a4 + 48;
    if ( (__int16)(a4 + 48) > 512 )
      AssertW(
        0LL,
        L"pMsg->u1.s1.TotalLength <= 512",
        L"LpcVerifyOutgoingPayloadSize",
        L"onecoreuap\\windows\\dwm\\common\\shared\\lpcshared.h",
        0x136u);
    memcpy_0(&v15[1].DoNotUseThisField, a3, a4);
    v16 = NtRequestWaitReplyPort(this[6], v15, v15);
    v17 = CPortClient::CheckStatus((CPortClient *)this, v16);
    if ( v17 >= 0 )
    {
      if ( (v15[1].u2.ZeroInit & 0x80000000) == 0 && a5 && a6 )
      {
        v13 = a6 + 8 != v15->u1.s1.DataLength ? 0x80070018 : 0;
        if ( a6 + 8 != v15->u1.s1.DataLength )
          MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v13, 0xBAu);
        if ( v13 >= 0 )
          memcpy_0(a5, &v15[1].DoNotUseThisField, a6);
      }
      *a7 = v15[1].u2.ZeroInit;
    }
    else
    {
      v13 = v17 | 0x10000000;
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v17 | 0x10000000, 0xB2u);
    }
    HeapFree(this[10], 0, v15);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, -2147024882, 0xA8u);
  }
  return (unsigned int)v13;
}
