/*
 * XREFs of ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x180131458
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800B01C4 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
    v8 = *((_QWORD *)this + 5);
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
      (*(void (__fastcall **)(_QWORD, LPVOID, _QWORD))(**((_QWORD **)this + 70) + 128LL))(
        *((_QWORD *)this + 70),
        v6,
        0LL);
    CResponseItem::ReleaseResponseRef((CResponseItem *)v6);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x624u);
    SetEvent(*(HANDLE *)((char *)a4 + 4));
    CloseHandle(*(HANDLE *)((char *)a4 + 4));
  }
  return 0LL;
}
