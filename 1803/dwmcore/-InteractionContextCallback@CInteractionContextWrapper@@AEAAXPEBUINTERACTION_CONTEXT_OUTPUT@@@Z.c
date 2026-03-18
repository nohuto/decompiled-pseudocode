/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D7710
 * Callers:
 *     ?ProcessMouseWheelPointer@CInteractionContextWrapper@@AEAAJPEBUtagPOINTER_INFO@@@Z @ 0x1801D7EB8 (-ProcessMouseWheelPointer@CInteractionContextWrapper@@AEAAJPEBUtagPOINTER_INFO@@@Z.c)
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D8710 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D6938 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801D8498 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  int v4; // eax
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  CInteractionContextWrapper *v7; // [rsp+38h] [rbp-C8h] BYREF
  CInteractionContextWrapper *v8; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  CInteractionContextWrapper **v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  char *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  char *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  CInteractionContextWrapper **v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  char *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  char *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  char *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  int *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  int *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]

  *((_BYTE *)this + 88) |= 1u;
  CInteractionContextWrapper::_UpdateInteractionOutput(this, a2, (CInteractionContextWrapper *)((char *)this + 32));
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 88LL))(this) )
    CInteractionContextWrapper::AddBufferedOutput(
      (char **)this,
      *((_DWORD *)this + 55),
      *((_DWORD *)this + 57),
      *((_QWORD *)this + 29),
      a2);
  if ( *(_DWORD *)a2 == 1 )
  {
    *((_BYTE *)this + 92) = 1;
    *((_BYTE *)this + 156) = 1;
    if ( dword_1802D3FE0 <= 4u )
      return;
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v7 = this;
      v10 = &v7;
      v12 = (char *)a2 + 20;
      v14 = (char *)a2 + 24;
      v16 = (CInteractionContextWrapper **)((char *)a2 + 28);
      v18 = (char *)a2 + 40;
      v20 = (char *)a2 + 44;
      v22 = (char *)a2 + 48;
      v5 = *((_DWORD *)a2 + 19);
      v24 = &v5;
      v6 = *((_DWORD *)this + 13);
      v26 = &v6;
      v11 = 8LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AA95B, 0LL, 0LL, 0xBu, &pData);
    }
  }
  if ( dword_1802D3FE0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v8 = this;
      v10 = &v8;
      v6 = *(_DWORD *)a2;
      v12 = (char *)&v6;
      v5 = *((_DWORD *)a2 + 1);
      v14 = (char *)&v5;
      v4 = *((_BYTE *)this + 88) & 1;
      v11 = 8LL;
      LODWORD(v7) = v4;
      v16 = &v7;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AAA0E, 0LL, 0LL, 6u, &pData);
    }
  }
}
