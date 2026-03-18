/*
 * XREFs of ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x1801891C0
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801888C8 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollAnimation::StartInContact(CScrollAnimation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  void (*v4)(void); // rax
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  CScrollAnimation *v8; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  CScrollAnimation **v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  pData.Ptr = 0LL;
  *(_QWORD *)&pData.Size = 0LL;
  v10 = 0LL;
  v3 = *(_QWORD *)this;
  *((_OWORD *)this + 23) = 0u;
  *((_QWORD *)this + 36) = v2;
  v4 = *(void (**)(void))(v3 + 288);
  *((_QWORD *)this + 48) = 0LL;
  v4();
  *((_DWORD *)this + 68) = 1;
  if ( dword_18026D7B0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
    {
      v13 = 0;
      v11 = &v8;
      v8 = this;
      v12 = 8;
      TlgWrite(v5, &unk_1802146EB, v6, v7, 3u, &pData);
    }
  }
}
