/*
 * XREFs of ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18005C0BC
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x1800B01A4 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1800B1ADC (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800C67CC (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CComposition::OpenChannel(CComposition *this, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  struct CChannelContext *v9; // rax
  __int64 v10; // rcx
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]
  struct CChannelContext *v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  v4 = a2;
  if ( a2 >= 0x10000 || a2 < *((_DWORD *)this + 92) && *(_QWORD *)(*((_QWORD *)this + 43) + 8LL * a2) )
  {
    v7 = -2147024809;
    v13 = 2700;
    v12 = -2147024809;
    goto LABEL_14;
  }
  v6 = CChannelContext::Create(a2, a3, a4, *((struct CConnection **)this + 72), &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v13 = 2710;
    goto LABEL_12;
  }
  v8 = *((_DWORD *)this + 92);
  if ( (unsigned int)v4 >= v8 )
  {
    v15 = 0LL;
    v6 = DynArray<CChannelContext *,1>::AddAndSet((char *)this + 344, (unsigned int)v4 - v8 + 1, &v15);
    v7 = v6;
    if ( v6 < 0 )
    {
      v13 = 2720;
LABEL_12:
      v12 = v6;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v13);
      goto LABEL_7;
    }
  }
  v9 = v14;
  v10 = *((_QWORD *)this + 43);
  v14 = 0LL;
  *(_QWORD *)(v10 + 8 * v4) = v9;
LABEL_7:
  ReleaseInterface<CConnection>(&v14);
  return v7;
}
