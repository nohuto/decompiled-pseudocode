/*
 * XREFs of ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x180193B0C
 * Callers:
 *     ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x180192AE8 (-CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z @ 0x180192C48 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NK@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CManipulationContext::RemoveInteractionLeafFromTree(struct CInteraction *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct CInteraction *v8; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  struct CInteraction **v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+64h] [rbp-24h]

  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v12 = 0;
    v10 = &v8;
    v8 = a1;
    v11 = 8;
    TlgWrite(v2, &unk_1801F9B16, v3, v4, 3u, &pData);
  }
  (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)a1 + 48LL))(a1);
  v5 = *((_QWORD *)a1 + 28);
  if ( v5 )
  {
    if ( *(struct CInteraction **)(v5 + 248) == a1 )
      *(_QWORD *)(v5 + 248) = *((_QWORD *)a1 + 29);
    *((_QWORD *)a1 + 28) = 0LL;
  }
  v6 = *((_QWORD *)a1 + 30);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 232) = *((_QWORD *)a1 + 29);
    *((_QWORD *)a1 + 30) = 0LL;
  }
  v7 = *((_QWORD *)a1 + 29);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 240) = *((_QWORD *)a1 + 30);
    *((_QWORD *)a1 + 29) = 0LL;
  }
  *((_QWORD *)a1 + 27) = 0LL;
}
