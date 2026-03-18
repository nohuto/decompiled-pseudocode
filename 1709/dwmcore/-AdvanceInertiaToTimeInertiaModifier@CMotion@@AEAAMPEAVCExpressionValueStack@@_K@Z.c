/*
 * XREFs of ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x18018CDF8
 * Callers:
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x18018CBD0 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180189154 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
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
  const wchar_t *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  float v18; // [rsp+30h] [rbp-99h] BYREF
  CMotion *v19; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v21[24]; // [rsp+58h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-59h] BYREF
  CMotion **v23; // [rsp+90h] [rbp-39h]
  int v24; // [rsp+98h] [rbp-31h]
  int v25; // [rsp+9Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-29h] BYREF
  float *v27; // [rsp+B0h] [rbp-19h]
  int v28; // [rsp+B8h] [rbp-11h]
  int v29; // [rsp+BCh] [rbp-Dh]
  char *v30; // [rsp+C0h] [rbp-9h]
  int v31; // [rsp+C8h] [rbp-1h]
  int v32; // [rsp+CCh] [rbp+3h]
  __int64 v33; // [rsp+D0h] [rbp+7h]
  int v34; // [rsp+D8h] [rbp+Fh]
  int v35; // [rsp+DCh] [rbp+13h]
  __int64 v36; // [rsp+E0h] [rbp+17h]
  int v37; // [rsp+E8h] [rbp+1Fh]
  int v38; // [rsp+ECh] [rbp+23h]

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
  v18 = result;
  if ( dword_18026D7B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
    {
      v10 = *((_DWORD *)this + 3);
      v25 = 0;
      v23 = &v19;
      v19 = this;
      v24 = 8;
      v11 = ScrollAxisToString(v10);
      TlgCreateWsz(&pDesc, v11);
      v29 = 0;
      v32 = 0;
      v27 = &v18;
      v12 = *((_QWORD *)this + 17);
      v28 = 4;
      v30 = (char *)this + 24;
      v31 = 4;
      v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 32LL))(v12, v20);
      v14 = *((_QWORD *)this + 17);
      v35 = 0;
      v33 = v13 + 8;
      v34 = 4;
      v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 32LL))(v14, v21);
      v38 = 0;
      v36 = v15;
      v37 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802147D5, v16, v17, 8u, &pData);
      return v18;
    }
  }
  return result;
}
