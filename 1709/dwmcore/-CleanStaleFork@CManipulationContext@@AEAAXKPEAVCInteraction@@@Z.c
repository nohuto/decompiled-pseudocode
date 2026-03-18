/*
 * XREFs of ?CleanStaleFork@CManipulationContext@@AEAAXKPEAVCInteraction@@@Z @ 0x1801A16D0
 * Callers:
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A33EC (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x180195ECC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1801A2A2C (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
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
  CManipulationContext *v9; // [rsp+30h] [rbp-49h] BYREF
  struct CInteraction *v10; // [rsp+38h] [rbp-41h] BYREF
  struct CInteraction *v11; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  CManipulationContext **v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  struct CInteraction **v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  struct CInteraction **v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]
  char *v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+ACh] [rbp+33h]

  if ( a3 )
  {
    v3 = a3;
    do
    {
      if ( (*((_BYTE *)v3 + 216) & 0x40) != 0 )
        break;
      v6 = (struct CInteraction *)*((_QWORD *)v3 + 29);
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v13 = &v9;
        v16 = &v10;
        v19 = &v11;
        v22 = (char *)v3 + 4 * a2 + 268;
        v9 = this;
        v14 = 8;
        v10 = v3;
        v17 = 8;
        v11 = v6;
        v20 = 8;
        v23 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021622E, v7, v8, 6u, &pData);
      }
      (*(void (__fastcall **)(struct CInteraction *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, a2);
      --*((_DWORD *)v3 + a2 + 67);
      if ( !(unsigned int)CInteraction::GetTotalNumContacts(v3) )
        CManipulationContext::RemoveInteractionLeafFromTree(v3);
      *((_BYTE *)v3 + 216) &= ~0x80u;
      v3 = v6;
    }
    while ( v6 );
  }
}
