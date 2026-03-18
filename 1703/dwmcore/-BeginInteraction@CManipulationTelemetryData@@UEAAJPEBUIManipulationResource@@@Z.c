/*
 * XREFs of ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x180191050
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18005BF68 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  int v21; // r10d
  unsigned int cData; // [rsp+28h] [rbp-E0h]
  struct CChannelContext *v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  CManipulationTelemetryData *v26; // [rsp+48h] [rbp-C0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  _WORD *v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  const GUID *v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  char *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  char *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  __int64 *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  struct CChannelContext **v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  char *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  char *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]

  v2 = 0LL;
  v26 = this;
  v24 = 0LL;
  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x56u);
    goto LABEL_27;
  }
  AttachedChannel = CComposition::GetAttachedChannel(*((CComposition **)this + 18), *((_DWORD *)this + 38), &v24);
  v7 = v24;
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    cData = 89;
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
        if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
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
          TlgWrite(v18, &unk_1801F9653, v19, v20, 0xAu, &pData);
        }
        (*(void (__fastcall **)(_QWORD, _WORD *, __int64, _WORD *))(**(_QWORD **)(*((_QWORD *)v26 + 18) + 560LL) + 8LL))(
          *(_QWORD *)(*((_QWORD *)v26 + 18) + 560LL),
          v4,
          2LL * (unsigned __int16)v4[13],
          v4 + 16);
        goto LABEL_25;
      }
      v5 = -2147024882;
      cData = 113;
      goto LABEL_9;
    }
    cData = 111;
LABEL_23:
    v12 = AttachedChannel;
    goto LABEL_24;
  }
  v5 = -2147024362;
  cData = 106;
LABEL_9:
  v12 = v5;
LABEL_24:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, cData);
LABEL_25:
  if ( v7 )
    CMILRefCountBase::Release(v7);
LABEL_27:
  WPF::ProcessHeapImpl::Free(v4);
  return v5;
}
