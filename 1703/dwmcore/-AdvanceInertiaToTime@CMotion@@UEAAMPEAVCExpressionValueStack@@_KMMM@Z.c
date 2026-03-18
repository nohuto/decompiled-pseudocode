/*
 * XREFs of ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x180184AE0
 * Callers:
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x1801853F8 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180181E10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x180184D34 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTime(
        CMotion *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float a5,
        float a6)
{
  bool v6; // zf
  float v8; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm0_4
  __int64 v14; // rcx
  int v15; // ecx
  const wchar_t *v16; // rax
  int v17; // r10d
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  float v21; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp-39h]
  int v25; // [rsp+78h] [rbp-31h]
  int v26; // [rsp+7Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  float *v28; // [rsp+90h] [rbp-19h]
  int v29; // [rsp+98h] [rbp-11h]
  int v30; // [rsp+9Ch] [rbp-Dh]
  char *v31; // [rsp+A0h] [rbp-9h]
  int v32; // [rsp+A8h] [rbp-1h]
  int v33; // [rsp+ACh] [rbp+3h]
  float *v34; // [rsp+B0h] [rbp+7h]
  int v35; // [rsp+B8h] [rbp+Fh]
  int v36; // [rsp+BCh] [rbp+13h]

  v6 = *((_QWORD *)this + 23) == 0LL;
  v8 = fmaxf(a6, *((float *)this + 6));
  v21 = 0.0;
  *((float *)this + 16) = a4;
  *((float *)this + 9) = a5;
  *((float *)this + 6) = v8;
  if ( v6 )
  {
    v11 = (*(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 16LL))(this);
    v12 = *(_QWORD *)this;
    v21 = v11;
    *((float *)this + 7) = (*(float (__fastcall **)(CMotion *))(v12 + 32))(this);
  }
  if ( *((_QWORD *)this + 23) )
  {
    v13 = CMotion::AdvanceInertiaToTimeInertiaModifier(this, a2, a3);
    v14 = *((_QWORD *)this + 23);
    v21 = v13;
    *((_DWORD *)this + 7) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 40LL))(v14, v22)
                                      + 8);
  }
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v15 = *((_DWORD *)this + 3);
    v26 = 0;
    v24 = v22;
    v22[0] = this;
    v25 = 8;
    v16 = ScrollAxisToString(v15);
    TlgCreateWsz(&pDesc, v16);
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v31 = (char *)this + 28;
    v34 = &a6;
    v28 = &v21;
    v29 = v17;
    v32 = v17;
    v35 = v17;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7EDC, v18, v19, 7u, &pData);
  }
  return v21;
}
