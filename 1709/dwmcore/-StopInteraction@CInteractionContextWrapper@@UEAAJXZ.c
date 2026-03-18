/*
 * XREFs of ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x18019F1F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionContextWrapper::StopInteraction(CInteractionContextWrapper *this)
{
  const GUID *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  UINT32 cData; // r10d
  int v9; // [rsp+30h] [rbp-9h] BYREF
  CInteractionContextWrapper *v10; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  CInteractionContextWrapper **v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  int *v15; // [rsp+70h] [rbp+37h]
  UINT32 v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

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
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v10;
    v15 = &v9;
    v10 = this;
    v13 = 8;
    v16 = cData;
    TlgWrite(v5, &unk_180215D99, v6, v2, cData, &pData);
    LODWORD(v2) = v9;
  }
  return (unsigned int)v2;
}
