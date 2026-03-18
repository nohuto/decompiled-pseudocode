/*
 * XREFs of ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x180192AE8
 * Callers:
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801944C4 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x18018A1FC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x180193B0C (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 */

void __fastcall CManipulationContext::CleanStaleFork(
        CManipulationContext *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  struct CInteraction *v3; // rbx
  struct CInteraction *v6; // rdi
  const GUID *v7; // r8
  const GUID *v8; // r9
  CManipulationContext *v9; // [rsp+30h] [rbp-59h] BYREF
  struct CInteraction *v10; // [rsp+38h] [rbp-51h] BYREF
  struct CInteraction *v11; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  CManipulationContext **v13; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  int v15; // [rsp+7Ch] [rbp-Dh]
  struct CInteraction **v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+88h] [rbp-1h]
  int v18; // [rsp+8Ch] [rbp+3h]
  struct CInteraction **v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  char *v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]

  if ( a3 )
  {
    v3 = a3;
    do
    {
      if ( (*((_BYTE *)v3 + 200) & 0x40) != 0 )
        break;
      v6 = (struct CInteraction *)*((_QWORD *)v3 + 27);
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v13 = &v9;
        v16 = &v10;
        v19 = &v11;
        v22 = (char *)v3 + 4 * a2 + 252;
        v9 = this;
        v14 = 8;
        v10 = v3;
        v17 = 8;
        v11 = v6;
        v20 = 8;
        v23 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F98B8, v7, v8, 6u, &pData);
      }
      (*(void (__fastcall **)(struct CInteraction *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, a2);
      --*((_DWORD *)v3 + a2 + 63);
      if ( !(unsigned int)CInteraction::GetTotalNumContacts(v3) )
        CManipulationContext::RemoveInteractionLeafFromTree(v3);
      *((_BYTE *)v3 + 200) &= ~0x80u;
      v3 = v6;
    }
    while ( v6 );
  }
}
