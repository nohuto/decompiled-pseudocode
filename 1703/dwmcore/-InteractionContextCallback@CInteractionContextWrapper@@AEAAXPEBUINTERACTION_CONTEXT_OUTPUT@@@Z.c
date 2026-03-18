/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x180132328
 * Callers:
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1800D2920 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18019002C (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180190CC8 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // eax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  CInteractionContextWrapper *v11; // [rsp+38h] [rbp-C8h] BYREF
  CInteractionContextWrapper *v12; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  CInteractionContextWrapper **v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  char *v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  char *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  CInteractionContextWrapper **v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  char *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  char *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  char *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]

  *((_BYTE *)this + 88) |= 1u;
  CInteractionContextWrapper::_UpdateInteractionOutput(this, a2, (CInteractionContextWrapper *)((char *)this + 32));
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 80LL))(this) )
    CInteractionContextWrapper::AddBufferedOutput(
      this,
      *((_DWORD *)this + 55),
      *((_DWORD *)this + 56),
      *((_QWORD *)this + 29),
      a2);
  if ( *(_DWORD *)a2 == 1 )
  {
    *((_BYTE *)this + 92) = 1;
    *((_BYTE *)this + 156) = 1;
    if ( dword_18023D7F0 <= 4u )
      return;
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v11 = this;
      v14 = &v11;
      v16 = (char *)a2 + 20;
      v18 = (char *)a2 + 24;
      v20 = (CInteractionContextWrapper **)((char *)a2 + 28);
      v22 = (char *)a2 + 40;
      v24 = (char *)a2 + 44;
      v26 = (char *)a2 + 48;
      v9 = *((_DWORD *)a2 + 19);
      v28 = &v9;
      v10 = *((_DWORD *)this + 13);
      v30 = &v10;
      v15 = 8LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F9075, v4, v5, 0xBu, &pData);
    }
  }
  if ( dword_18023D7F0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v12 = this;
      v14 = &v12;
      v10 = *(_DWORD *)a2;
      v16 = (char *)&v10;
      v9 = *((_DWORD *)a2 + 1);
      v18 = (char *)&v9;
      v8 = *((_BYTE *)this + 88) & 1;
      v15 = 8LL;
      LODWORD(v11) = v8;
      v20 = &v11;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F8FEF, v6, v7, 6u, &pData);
    }
  }
}
