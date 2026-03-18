/*
 * XREFs of ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18002DB80
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180034520 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x18001F744 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180020E94 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1800CCEC8 (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::OpenChannel(CComposition *this, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  _QWORD *v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // eax
  struct CChannelContext *v10; // rax
  __int64 v11; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  struct CChannelContext *v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  if ( a2 >= 0x10000
    || (v6 = (_QWORD *)((char *)this + 328), a2 < *((_DWORD *)this + 88)) && *(_QWORD *)(*v6 + 8LL * a2) )
  {
    v8 = -2147024809;
    v14 = 2321;
    v13 = -2147024809;
    goto LABEL_13;
  }
  v7 = CChannelContext::Create(a2, a3, a4, *((struct CConnection **)this + 71), &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 2331;
    goto LABEL_11;
  }
  v9 = *((_DWORD *)this + 88);
  if ( a2 >= v9 )
  {
    v16 = 0LL;
    v7 = DynArray<CChannelContext *,1>::AddAndSet(v6, a2 - v9 + 1, &v16);
    v8 = v7;
    if ( v7 < 0 )
    {
      v14 = 2341;
LABEL_11:
      v13 = v7;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v14);
      goto LABEL_7;
    }
  }
  v10 = v15;
  v11 = *((_QWORD *)this + 41);
  v15 = 0LL;
  *(_QWORD *)(v11 + 8LL * a2) = v10;
LABEL_7:
  ReleaseInterface<CConnection>(&v15);
  return v8;
}
