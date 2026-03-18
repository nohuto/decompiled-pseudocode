/*
 * XREFs of ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x180184D34
 * Callers:
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x180184AE0 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180181E10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeInertiaModifier(
        CMotion *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  int v7; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm0_4
  float result; // xmm0_4
  int v11; // ecx
  const wchar_t *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  float v19; // [rsp+30h] [rbp-99h] BYREF
  CMotion *v20; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  CMotion **v24; // [rsp+80h] [rbp-49h]
  int v25; // [rsp+88h] [rbp-41h]
  int v26; // [rsp+8Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-39h] BYREF
  float *v28; // [rsp+A0h] [rbp-29h]
  int v29; // [rsp+A8h] [rbp-21h]
  int v30; // [rsp+ACh] [rbp-1Dh]
  char *v31; // [rsp+B0h] [rbp-19h]
  int v32; // [rsp+B8h] [rbp-11h]
  int v33; // [rsp+BCh] [rbp-Dh]
  __int64 v34; // [rsp+C0h] [rbp-9h]
  int v35; // [rsp+C8h] [rbp-1h]
  int v36; // [rsp+CCh] [rbp+3h]
  __int64 v37; // [rsp+D0h] [rbp+7h]
  int v38; // [rsp+D8h] [rbp+Fh]
  int v39; // [rsp+DCh] [rbp+13h]

  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 10) + 32LL))((char *)this + 80) )
    goto LABEL_8;
  v7 = 0;
  if ( *((_DWORD *)this + 18) == 1 )
  {
LABEL_5:
    v7 = *((_DWORD *)this + 16);
    goto LABEL_6;
  }
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v7 = *((_DWORD *)this + 9);
LABEL_6:
  v8 = *(_QWORD *)this;
  *((_DWORD *)this + 45) = v7;
  v9 = (*(float (__fastcall **)(CMotion *))(v8 + 8))(this);
  if ( v9 != 0.0 )
    *((float *)this + 30) = v9 + *((float *)this + 30);
LABEL_8:
  result = (*(float (__fastcall **)(_QWORD, __int64, struct CExpressionValueStack *, __int64))(**((_QWORD **)this + 23)
                                                                                             + 24LL))(
             *((_QWORD *)this + 23),
             v6,
             a2,
             a3);
  v19 = result;
  if ( dword_18023D7F0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v11 = *((_DWORD *)this + 3);
      v26 = 0;
      v24 = &v20;
      v20 = this;
      v25 = 8;
      v12 = ScrollAxisToString(v11);
      TlgCreateWsz(&pDesc, v12);
      v30 = 0;
      v33 = 0;
      v28 = &v19;
      v13 = *((_QWORD *)this + 23);
      v29 = 4;
      v31 = (char *)this + 24;
      v32 = 4;
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v21);
      v15 = *((_QWORD *)this + 23);
      v36 = 0;
      v34 = v14 + 8;
      v35 = 4;
      v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 40LL))(v15, v22);
      v39 = 0;
      v37 = v16;
      v38 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7E63, v17, v18, 8u, &pData);
      return v19;
    }
  }
  return result;
}
