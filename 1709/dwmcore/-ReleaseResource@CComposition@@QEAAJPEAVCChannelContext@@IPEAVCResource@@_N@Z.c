/*
 * XREFs of ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x1800AAAD8
 * Callers:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1800AA44C (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180084C90 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800A9760 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800AA4CC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ReleaseResource(
        CComposition *this,
        CAnimationLoggingManager **a2,
        __int64 a3,
        struct CResource *a4,
        bool a5)
{
  unsigned int v5; // edi
  void (__fastcall *v7)(CResource *, CAnimationLoggingManager **); // rax
  signed int v8; // eax
  unsigned int v9; // ebx

  v5 = a3;
  LOBYTE(a3) = a5;
  v7 = *(void (__fastcall **)(CResource *, CAnimationLoggingManager **))(*(_QWORD *)a4 + 128LL);
  if ( v7 == CNotificationResource::DetachFromChannel )
  {
    CNotificationResource::DetachFromChannel(a4, a2);
  }
  else if ( v7 == CResource::DetachFromChannel )
  {
    CResource::DetachFromChannel(a4, a2);
  }
  else
  {
    ((void (__fastcall *)(struct CResource *, CAnimationLoggingManager **, __int64))v7)(a4, a2, a3);
  }
  v8 = CResourceTable::DeleteHandle(a2[3], v5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xD35u);
  return v9;
}
