/*
 * XREFs of ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800AB560
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqq @ 0x1801252C0 (McTemplateU0qqq.c)
 */

__int64 __fastcall CComposition::Partition_SwitchRemotingMode(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SWITCHREMOTINGMODE *a4)
{
  int v4; // eax
  __int64 v7; // rsi
  int v8; // ebx
  unsigned int v9; // r14d
  __int64 v11; // rcx

  v4 = *((_DWORD *)a4 + 1);
  if ( v4 != *((_DWORD *)this + 290) )
    *((_DWORD *)this + 290) = v4;
  v7 = *((_QWORD *)this + 9);
  v8 = 0;
  v9 = 0;
  for ( *(_BYTE *)(v7 + 146) = *((_DWORD *)a4 + 2) != 0; v9 < *(_DWORD *)(v7 + 136); ++v9 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 112) + 8LL * v9);
    (*(void (__fastcall **)(__int64, struct CChannelContext *, struct CResourceTable *))(*(_QWORD *)v11 + 216LL))(
      v11,
      a2,
      a3);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v8) = *((_DWORD *)a4 + 2) != 0;
    McTemplateU0qqq(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_DETECT_REMOTEAPPMODE_SWITCH,
      v8,
      *((_DWORD *)this + 290) == 3,
      *((_DWORD *)this + 290) == 1);
  }
  return 0LL;
}
