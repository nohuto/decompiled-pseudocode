/*
 * XREFs of ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x18019F720
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800AAF50 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  DWORD v12; // r9d
  unsigned __int64 v13; // rcx
  bool v14; // cf
  _WORD *v15; // rax
  unsigned __int16 v16; // si
  __int64 v17; // rdx
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  int v21; // r10d
  unsigned int cData; // [rsp+28h] [rbp-A9h]
  struct CChannelContext *v24; // [rsp+38h] [rbp-99h] BYREF
  __int64 v25; // [rsp+40h] [rbp-91h] BYREF
  CManipulationTelemetryData *v26; // [rsp+48h] [rbp-89h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-79h] BYREF
  _WORD *v28; // [rsp+78h] [rbp-59h]
  __int64 v29; // [rsp+80h] [rbp-51h]
  const GUID *v30; // [rsp+88h] [rbp-49h]
  __int64 v31; // [rsp+90h] [rbp-41h]
  char *v32; // [rsp+98h] [rbp-39h]
  __int64 v33; // [rsp+A0h] [rbp-31h]
  char *v34; // [rsp+A8h] [rbp-29h]
  __int64 v35; // [rsp+B0h] [rbp-21h]
  __int64 *v36; // [rsp+B8h] [rbp-19h]
  __int64 v37; // [rsp+C0h] [rbp-11h]
  struct CChannelContext **v38; // [rsp+C8h] [rbp-9h]
  __int64 v39; // [rsp+D0h] [rbp-1h]
  char *v40; // [rsp+D8h] [rbp+7h]
  __int64 v41; // [rsp+E0h] [rbp+Fh]
  char *v42; // [rsp+E8h] [rbp+17h]
  __int64 v43; // [rsp+F0h] [rbp+1Fh]

  v2 = 0LL;
  v26 = this;
  v24 = 0LL;
  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x58u);
    goto LABEL_27;
  }
  AttachedChannel = CComposition::GetAttachedChannel(*((CComposition **)this + 18), *((_DWORD *)this + 38), &v24);
  v7 = v24;
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    cData = 91;
    goto LABEL_23;
  }
  v8 = (_WORD *)*((_QWORD *)v24 + 6);
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
        if ( dword_18026D7B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
        {
          v28 = v4;
          v32 = (char *)(v4 + 5);
          v34 = (char *)(v4 + 6);
          v36 = &v25;
          v38 = &v24;
          v40 = (char *)(v4 + 12);
          v29 = 8LL;
          v30 = v20;
          v31 = v17;
          v33 = v17;
          v35 = v17;
          LODWORD(v25) = v21;
          v37 = 4LL;
          LODWORD(v24) = v21;
          v39 = 4LL;
          v41 = v17;
          v42 = (char *)(v4 + 13);
          v43 = v17;
          TlgWrite(v18, &unk_180215DE1, v19, v20, 0xAu, &pData);
        }
        (*(void (__fastcall **)(_QWORD, _WORD *, __int64, _WORD *))(**(_QWORD **)(*((_QWORD *)v26 + 18) + 528LL) + 8LL))(
          *(_QWORD *)(*((_QWORD *)v26 + 18) + 528LL),
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
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, cData);
LABEL_25:
  if ( v7 )
    CMILRefCountBase::Release(v7);
LABEL_27:
  WPF::ProcessHeapImpl::Free(v4);
  return v5;
}
