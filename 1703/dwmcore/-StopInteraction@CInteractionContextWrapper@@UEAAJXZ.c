/*
 * XREFs of ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x180190AE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionContextWrapper::StopInteraction(CInteractionContextWrapper *this)
{
  const GUID *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  UINT32 cData; // r10d
  int v9; // [rsp+30h] [rbp-19h] BYREF
  CInteractionContextWrapper *v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  CInteractionContextWrapper **v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  int *v15; // [rsp+70h] [rbp+27h]
  UINT32 v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]

  if ( *((_QWORD *)this + 3) )
  {
    v9 = StopInteractionContext();
    LODWORD(v2) = v9;
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(CInteractionContextWrapper *, __int64, __int64, _QWORD))(*(_QWORD *)this + 64LL))(
        this,
        v3,
        v4,
        (unsigned int)v9);
      LODWORD(v2) = v9;
    }
  }
  else
  {
    LODWORD(v2) = -2147019873;
    v9 = -2147019873;
  }
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v10;
    v15 = &v9;
    v10 = this;
    v13 = 8;
    v16 = cData;
    TlgWrite(v5, &unk_1801F9423, v6, v2, cData, &pData);
    LODWORD(v2) = v9;
  }
  return (unsigned int)v2;
}
