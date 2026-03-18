/*
 * XREFs of ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x180128B60
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_Synchronize(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SYNCHRONIZE *a4)
{
  LPVOID v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax

  v6 = operator new(0x38uLL);
  if ( v6 )
  {
    v7 = *(_QWORD *)((char *)a4 + 4);
    v8 = *((_QWORD *)this + 10);
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v6 = &CResponseItem::`vftable';
    *((_DWORD *)v6 + 2) = 0;
    *((_DWORD *)v6 + 4) = 1;
    *((_QWORD *)v6 + 3) = v8;
    *((_WORD *)v6 + 16) = 0;
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    *((_QWORD *)v6 + 5) = v7;
    *(_QWORD *)v6 = &CEventResponse::`vftable';
    *((_BYTE *)v6 + 48) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( *((_DWORD *)a4 + 3) )
      (*(void (__fastcall **)(_QWORD, LPVOID, _QWORD))(**((_QWORD **)this + 66) + 120LL))(
        *((_QWORD *)this + 66),
        v6,
        0LL);
    CResponseItem::ReleaseResponseRef((CResponseItem *)v6);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x5BCu);
    SetEvent(*(HANDLE *)((char *)a4 + 4));
    CloseHandle(*(HANDLE *)((char *)a4 + 4));
  }
  return 0LL;
}
