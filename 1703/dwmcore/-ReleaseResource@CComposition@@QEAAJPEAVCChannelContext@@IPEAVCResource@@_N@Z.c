/*
 * XREFs of ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18005BAA0
 * Callers:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18005B46C (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180034F10 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18005A080 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18005B4EC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ReleaseResource(
        CComposition *this,
        CResourceTable **a2,
        __int64 a3,
        struct CResource *a4,
        bool a5)
{
  unsigned int v5; // edi
  void (__fastcall *v7)(CResource *, struct CChannelContext *); // rax
  int v8; // eax
  unsigned int v9; // ebx

  v5 = a3;
  LOBYTE(a3) = a5;
  v7 = *(void (__fastcall **)(CResource *, struct CChannelContext *))(*(_QWORD *)a4 + 112LL);
  if ( v7 == CNotificationResource::DetachFromChannel )
  {
    CNotificationResource::DetachFromChannel(a4, (struct CChannelContext *)a2);
  }
  else if ( v7 == CResource::DetachFromChannel )
  {
    CResource::DetachFromChannel(a4, (struct CChannelContext *)a2);
  }
  else
  {
    ((void (__fastcall *)(struct CResource *, CResourceTable **, __int64))v7)(a4, a2, a3);
  }
  v8 = CResourceTable::DeleteHandle(a2[4], v5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xE73u);
  return v9;
}
