/*
 * XREFs of ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1801DB55C
 * Callers:
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x1801DA1F8 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801DA378 (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CManipulationContext::RemoveInteractionLeafFromTree(struct CInteraction *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct CInteraction *v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  struct CInteraction **v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = a1;
    v9 = 8;
    TlgWrite(v2, &unk_1802AB949, 0LL, 0LL, 3u, &pData);
  }
  (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)a1 + 48LL))(a1);
  v3 = *((_QWORD *)a1 + 26);
  if ( v3 )
  {
    if ( *(struct CInteraction **)(v3 + 232) == a1 )
      *(_QWORD *)(v3 + 232) = *((_QWORD *)a1 + 27);
    *((_QWORD *)a1 + 26) = 0LL;
  }
  v4 = *((_QWORD *)a1 + 28);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 216) = *((_QWORD *)a1 + 27);
    *((_QWORD *)a1 + 28) = 0LL;
    v4 = 0LL;
  }
  v5 = *((_QWORD *)a1 + 27);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 224) = v4;
    *((_QWORD *)a1 + 27) = 0LL;
  }
  *((_QWORD *)a1 + 25) = 0LL;
}
