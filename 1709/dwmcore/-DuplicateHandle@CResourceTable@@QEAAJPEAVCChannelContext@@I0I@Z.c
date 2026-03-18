/*
 * XREFs of ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x1800AA384
 * Callers:
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x1800AB1D0 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x1800AB244 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800AA1B4 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z @ 0x1800AA1E0 (-AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800BB6E4 (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceTable::DuplicateHandle(
        CResourceTable *this,
        struct CChannelContext *a2,
        unsigned int a3,
        struct CChannelContext *a4,
        unsigned int a5)
{
  CResourceTable *v5; // rcx
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  struct CResourceTable::HANDLE_ENTRY *v8; // rdi
  __int64 v9; // rsi
  signed int v10; // eax
  unsigned int v11; // ebx
  CMILCOMBase *v12; // rcx
  void (*v13)(void); // rax
  CResourceTable *v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = this;
  v5 = (CResourceTable *)*((_QWORD *)a2 + 3);
  v15 = 0LL;
  Entry = CResourceTable::GetEntry(v5, a3);
  v8 = Entry;
  if ( Entry )
  {
    if ( *((_QWORD *)Entry + 1) )
    {
      v9 = *((_QWORD *)a4 + 3);
      v10 = CResourceTable::AllocateEntryAtHandle(v9, a5, *(_DWORD *)Entry, &v15);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x160u);
      }
      else
      {
        v12 = (CMILCOMBase *)*((_QWORD *)v8 + 1);
        *((_QWORD *)v15 + 1) = v12;
        v13 = *(void (**)(void))(*(_QWORD *)v12 + 8LL);
        if ( (char *)v13 == (char *)CMILCOMBase::InternalAddRef )
          CMILCOMBase::InternalAddRef(v12);
        else
          v13();
        AddToResourceCount(*(_QWORD *)(v9 + 56) + 44LL, *(unsigned int *)v8, 1LL);
      }
    }
    else
    {
      v11 = -2147467261;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004003, 0x155u);
    }
  }
  else
  {
    v11 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004003, 0x154u);
  }
  return v11;
}
