/*
 * XREFs of ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x1800AB0A0
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800AA580 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180009EA0 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180009F80 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x18007E40C (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::OpenChannel(CComposition *this, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  struct CChannelContext *v9; // rax
  __int64 v10; // rcx
  DWORD v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]
  struct CChannelContext *v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-10h] BYREF

  v14 = 0LL;
  v4 = a2;
  if ( a2 >= 0x10000 || a2 < *((_DWORD *)this + 82) && *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * a2) )
  {
    v7 = -2147024809;
    v13 = 2335;
    v12 = -2147024809;
    goto LABEL_13;
  }
  v6 = CChannelContext::Create(a2, a3, a4, *((struct CConnection **)this + 68), &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v13 = 2345;
    goto LABEL_11;
  }
  v8 = *((_DWORD *)this + 82);
  if ( (unsigned int)v4 >= v8 )
  {
    v15 = 0LL;
    v6 = DynArray<CChannelContext *,1>::AddAndSet((__int64)this + 304, (unsigned int)v4 - v8 + 1, &v15);
    v7 = v6;
    if ( v6 < 0 )
    {
      v13 = 2355;
LABEL_11:
      v12 = v6;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, v13);
      goto LABEL_7;
    }
  }
  v9 = v14;
  v10 = *((_QWORD *)this + 38);
  v14 = 0LL;
  *(_QWORD *)(v10 + 8 * v4) = v9;
LABEL_7:
  ReleaseInterface<CConnection>(&v14);
  return v7;
}
