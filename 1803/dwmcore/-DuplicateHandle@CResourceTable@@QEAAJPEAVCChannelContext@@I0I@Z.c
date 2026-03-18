/*
 * XREFs of ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x18002D304
 * Callers:
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18002DCC4 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x18002DD44 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D06C (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18002D094 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z @ 0x18002D0C0 (-AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x180051070 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceTable::DuplicateHandle(
        CResourceTable *this,
        CResourceTable **a2,
        unsigned int a3,
        struct CChannelContext *a4,
        unsigned int a5)
{
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  __int64 v7; // r10
  struct CResourceTable::HANDLE_ENTRY *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  CResource *v11; // rcx
  void (*v12)(void); // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  Entry = CResourceTable::GetEntry(a2[3], a3);
  v8 = Entry;
  if ( Entry )
  {
    if ( *((_QWORD *)Entry + 1) )
    {
      v9 = CResourceTable::AllocateEntryAtHandle(*(_QWORD *)(v7 + 24), a5, *(_DWORD *)Entry, &v14);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x163u);
      }
      else
      {
        v11 = (CResource *)*((_QWORD *)v8 + 1);
        *(_QWORD *)(v14 + 8) = v11;
        v12 = *(void (**)(void))(*(_QWORD *)v11 + 8LL);
        if ( (char *)v12 == (char *)CResource::AddRef )
        {
          CResource::AddRef(v11);
        }
        else if ( (char *)v12 == (char *)CMILCOMBase::InternalAddRef )
        {
          CMILCOMBase::InternalAddRef(v11);
        }
        else
        {
          v12();
        }
        CResourceTable::CountResource((__int64)this, *(unsigned int *)v8);
      }
    }
    else
    {
      v10 = -2147467261;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467261, 0x158u);
    }
  }
  else
  {
    v10 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467261, 0x157u);
  }
  return v10;
}
