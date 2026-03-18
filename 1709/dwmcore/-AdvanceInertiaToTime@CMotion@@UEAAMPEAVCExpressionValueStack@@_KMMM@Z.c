/*
 * XREFs of ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x18018CBD0
 * Callers:
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x18018D500 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180189154 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x18018CDF8 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
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
  CMotion *v22; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v23[32]; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  CMotion **v25; // [rsp+80h] [rbp-29h]
  int v26; // [rsp+88h] [rbp-21h]
  int v27; // [rsp+8Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  float *v29; // [rsp+A0h] [rbp-9h]
  int v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+ACh] [rbp+3h]
  char *v32; // [rsp+B0h] [rbp+7h]
  int v33; // [rsp+B8h] [rbp+Fh]
  int v34; // [rsp+BCh] [rbp+13h]
  float *v35; // [rsp+C0h] [rbp+17h]
  int v36; // [rsp+C8h] [rbp+1Fh]
  int v37; // [rsp+CCh] [rbp+23h]

  v6 = *((_QWORD *)this + 17) == 0LL;
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
  if ( *((_QWORD *)this + 17) )
  {
    v13 = CMotion::AdvanceInertiaToTimeInertiaModifier(this, a2, a3);
    v14 = *((_QWORD *)this + 17);
    v21 = v13;
    *((_DWORD *)this + 7) = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 32LL))(v14, v23)
                                      + 8);
  }
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v15 = *((_DWORD *)this + 3);
    v27 = 0;
    v25 = &v22;
    v22 = this;
    v26 = 8;
    v16 = ScrollAxisToString(v15);
    TlgCreateWsz(&pDesc, v16);
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v32 = (char *)this + 28;
    v35 = &a6;
    v29 = &v21;
    v30 = v17;
    v33 = v17;
    v36 = v17;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021484E, v18, v19, 7u, &pData);
  }
  return v21;
}
