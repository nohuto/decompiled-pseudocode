/*
 * XREFs of ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x1801D87C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18002DA28 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationTelemetryData::BeginInteraction(
        CManipulationTelemetryData *this,
        const struct IManipulationResource *a2)
{
  __int64 v2; // rsi
  _WORD *v4; // rdi
  unsigned int v5; // ebx
  signed int AttachedChannel; // eax
  struct CChannelContext *v7; // r13
  _WORD *v8; // r15
  SIZE_T v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  int v12; // r9d
  unsigned __int64 v13; // rcx
  bool v14; // cf
  _WORD *v15; // rax
  unsigned __int16 v16; // si
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned int cData; // [rsp+28h] [rbp-A9h]
  struct CChannelContext *v22; // [rsp+38h] [rbp-99h] BYREF
  __int64 v23; // [rsp+40h] [rbp-91h] BYREF
  CManipulationTelemetryData *v24; // [rsp+48h] [rbp-89h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-79h] BYREF
  _WORD *v26; // [rsp+78h] [rbp-59h]
  __int64 v27; // [rsp+80h] [rbp-51h]
  __int64 v28; // [rsp+88h] [rbp-49h]
  __int64 v29; // [rsp+90h] [rbp-41h]
  char *v30; // [rsp+98h] [rbp-39h]
  __int64 v31; // [rsp+A0h] [rbp-31h]
  char *v32; // [rsp+A8h] [rbp-29h]
  __int64 v33; // [rsp+B0h] [rbp-21h]
  __int64 *v34; // [rsp+B8h] [rbp-19h]
  __int64 v35; // [rsp+C0h] [rbp-11h]
  struct CChannelContext **v36; // [rsp+C8h] [rbp-9h]
  __int64 v37; // [rsp+D0h] [rbp-1h]
  char *v38; // [rsp+D8h] [rbp+7h]
  __int64 v39; // [rsp+E0h] [rbp+Fh]
  __int64 v40; // [rsp+E8h] [rbp+17h]
  __int64 v41; // [rsp+F0h] [rbp+1Fh]

  v2 = 0LL;
  v24 = this;
  v22 = 0LL;
  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x58u);
    goto LABEL_27;
  }
  AttachedChannel = CComposition::GetAttachedChannel(*((CComposition **)this + 18), *((_DWORD *)this + 38), &v22);
  v7 = v22;
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    cData = 91;
    goto LABEL_23;
  }
  v8 = (_WORD *)*((_QWORD *)v22 + 6);
  v9 = -1LL;
  if ( v8 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( v8[v2] );
  }
  v10 = v2 + 1;
  v11 = 2 * v10;
  if ( is_mul_ok(v10, 2uLL) )
  {
    v13 = v11 + 32;
    v14 = v11 >= 0xFFFFFFFFFFFFFFE0uLL;
    if ( v11 < 0xFFFFFFFFFFFFFFE0uLL )
      v9 = v11 + 32;
    AttachedChannel = v11 >= 0xFFFFFFFFFFFFFFE0uLL ? 0x80070216 : 0;
    v5 = v14 ? 0x80070216 : 0;
    if ( v13 >= 0x20 )
    {
      v15 = operator new(v9);
      v4 = v15;
      if ( v15 )
      {
        memset_0(v15, 0, v9);
        v16 = v10 - 1;
        v4[4] = v9;
        v4[13] = v16;
        if ( v8 )
        {
          v4[12] = 32;
          memcpy_0(v4 + 16, v8, 2LL * v16);
        }
        *(_QWORD *)v4 = a2;
        *((_DWORD *)v4 + 4) = 2;
        *((_DWORD *)v4 + 5) = 2;
        if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
        {
          v26 = v4;
          v30 = (char *)(v4 + 5);
          v32 = (char *)(v4 + 6);
          v34 = &v23;
          v36 = &v22;
          v38 = (char *)(v4 + 12);
          v27 = 8LL;
          v28 = v19;
          v29 = v17;
          v31 = v17;
          v33 = v17;
          LODWORD(v23) = v17;
          v35 = 4LL;
          LODWORD(v22) = v17;
          v37 = 4LL;
          v39 = v17;
          v40 = v18;
          v41 = v17;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AAFCC, 0LL, 0LL, 0xAu, &pData);
        }
        (*(void (__fastcall **)(_QWORD, _WORD *, __int64, _WORD *))(**(_QWORD **)(*((_QWORD *)v24 + 18) + 552LL) + 8LL))(
          *(_QWORD *)(*((_QWORD *)v24 + 18) + 552LL),
          v4,
          2LL * (unsigned __int16)v4[13],
          v4 + 16);
        goto LABEL_25;
      }
      v5 = -2147024882;
      cData = 115;
      goto LABEL_9;
    }
    cData = 113;
LABEL_23:
    v12 = AttachedChannel;
    goto LABEL_24;
  }
  v5 = -2147024362;
  cData = 108;
LABEL_9:
  v12 = v5;
LABEL_24:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, cData);
LABEL_25:
  if ( v7 )
    CMILRefCountBase::Release(v7);
LABEL_27:
  operator delete(v4);
  return v5;
}
