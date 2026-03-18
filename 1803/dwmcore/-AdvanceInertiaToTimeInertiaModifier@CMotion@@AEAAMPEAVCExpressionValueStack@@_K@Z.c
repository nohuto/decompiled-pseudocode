/*
 * XREFs of ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x1801C4A8C
 * Callers:
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x1801C4850 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1801BE594 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeInertiaModifier(
        CMotion *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  float v8; // xmm0_4
  float result; // xmm0_4
  int v10; // ecx
  const WCHAR *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  float v16; // [rsp+30h] [rbp-99h] BYREF
  CMotion *v17; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-59h] BYREF
  CMotion **v21; // [rsp+90h] [rbp-39h]
  int v22; // [rsp+98h] [rbp-31h]
  int v23; // [rsp+9Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-29h] BYREF
  float *v25; // [rsp+B0h] [rbp-19h]
  int v26; // [rsp+B8h] [rbp-11h]
  int v27; // [rsp+BCh] [rbp-Dh]
  char *v28; // [rsp+C0h] [rbp-9h]
  int v29; // [rsp+C8h] [rbp-1h]
  int v30; // [rsp+CCh] [rbp+3h]
  __int64 v31; // [rsp+D0h] [rbp+7h]
  int v32; // [rsp+D8h] [rbp+Fh]
  int v33; // [rsp+DCh] [rbp+13h]
  __int64 v34; // [rsp+E0h] [rbp+17h]
  int v35; // [rsp+E8h] [rbp+1Fh]
  int v36; // [rsp+ECh] [rbp+23h]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10)) )
  {
    if ( *((_DWORD *)this + 18) )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 11) + 32LL))((char *)this + 88);
    if ( *((float *)this + 6) > *(float *)(*((_QWORD *)this + 10) + 104LL) )
    {
      v8 = (*(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 8LL))(this);
      if ( v8 != 0.0 )
        *(float *)(*((_QWORD *)this + 10) + 40LL) = v8 + *(float *)(*((_QWORD *)this + 10) + 40LL);
    }
  }
  result = (*(float (__fastcall **)(_QWORD, __int64, struct CExpressionValueStack *, __int64))(**((_QWORD **)this + 17)
                                                                                             + 16LL))(
             *((_QWORD *)this + 17),
             v6,
             a2,
             a3);
  v16 = result;
  if ( dword_1802D3FE0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v10 = *((_DWORD *)this + 3);
      v23 = 0;
      v21 = &v17;
      v17 = this;
      v22 = 8;
      v11 = ScrollAxisToString(v10);
      TlgCreateWsz(&pDesc, v11);
      v27 = 0;
      v30 = 0;
      v25 = &v16;
      v12 = *((_QWORD *)this + 17);
      v26 = 4;
      v28 = (char *)this + 24;
      v29 = 4;
      v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 32LL))(v12, v18);
      v14 = *((_QWORD *)this + 17);
      v33 = 0;
      v31 = v13 + 8;
      v32 = 4;
      v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 32LL))(v14, v19);
      v36 = 0;
      v34 = v15;
      v35 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A9770, 0LL, 0LL, 8u, &pData);
      return v16;
    }
  }
  return result;
}
