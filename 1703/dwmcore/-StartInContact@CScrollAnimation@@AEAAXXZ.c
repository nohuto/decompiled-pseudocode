/*
 * XREFs of ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x180182130
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180181508 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollAnimation::StartInContact(CScrollAnimation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  void (*v4)(void); // rax
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  CScrollAnimation *v8; // [rsp+30h] [rbp-9h] BYREF
  __int128 v9; // [rsp+38h] [rbp-1h]
  __int64 v10; // [rsp+48h] [rbp+Fh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+17h] BYREF
  CScrollAnimation **v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 520LL);
  v9 = 0uLL;
  v10 = 0LL;
  v3 = *(_QWORD *)this;
  *(_OWORD *)((char *)this + 312) = 0uLL;
  *((_QWORD *)this + 30) = v2;
  v4 = *(void (**)(void))(v3 + 232);
  *((_QWORD *)this + 41) = 0LL;
  v4();
  *((_DWORD *)this + 56) = 1;
  if ( dword_18023D7F0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v14 = 0;
      v12 = &v8;
      v8 = this;
      v13 = 8;
      TlgWrite(v5, &unk_1801F7D79, v6, v7, 3u, &pData);
    }
  }
}
