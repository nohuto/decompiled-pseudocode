/*
 * XREFs of ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18002D55C
 * Callers:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18002D3C0 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18002BD10 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18002D440 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180051170 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ReleaseResource(
        CComposition *this,
        CResourceTable **a2,
        __int64 a3,
        struct CResource *a4,
        bool a5)
{
  unsigned int v5; // edi
  void (__fastcall *v7)(CNotificationResource *, struct CChannelContext *); // rax
  int v8; // eax
  unsigned int v9; // ebx

  v5 = a3;
  LOBYTE(a3) = a5;
  v7 = *(void (__fastcall **)(CNotificationResource *, struct CChannelContext *))(*(_QWORD *)a4 + 128LL);
  if ( v7 == CNotificationResource::DetachFromChannel )
  {
    CNotificationResource::DetachFromChannel(a4, (struct CChannelContext *)a2);
  }
  else if ( (char *)v7 == (char *)CResource::DetachFromChannel )
  {
    CResource::DetachFromChannel(a4, (struct CChannelContext *)a2, a5);
  }
  else
  {
    ((void (__fastcall *)(struct CResource *, CResourceTable **, __int64))v7)(a4, a2, a3);
  }
  v8 = CResourceTable::DeleteHandle(a2[3], v5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xD65u);
  return v9;
}
