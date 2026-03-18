/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800AAF98
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800AA580 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180128560 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180009F80 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18007E3DC (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18007E70C (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1800AA44C (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800AAF50 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x180128FF4 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // rbp
  signed int AttachedChannel; // eax
  unsigned int v5; // esi
  CResourceTable **v6; // rdi
  struct CComposition *v7; // rdx
  __int64 *v8; // rdi
  char v9; // dl
  int v10; // ecx
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v16; // rdx
  CMILRefCountBase *v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v17);
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, AttachedChannel, 0x946u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 66) + 64LL))(*((_QWORD *)this + 66), (unsigned int)v2);
    v6 = (CResourceTable **)v17;
    if ( *((_BYTE *)v17 + 64) )
    {
      *((_BYTE *)v17 + 64) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)this + 51, (__int64 *)&v17) )
      CMILRefCountBase::Release((CMILRefCountBase *)v6);
    CResourceTable::ReleaseHandleTableEntries(v6[3], v7, (struct CChannelContext *)v6);
    CMILRefCountBase::Release((CMILRefCountBase *)v6);
    ReleaseInterface<CConnection>(&v17);
    v8 = (__int64 *)((char *)this + 304);
    v9 = 0;
    *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v2) = 0LL;
    v10 = *((_DWORD *)this + 82);
    if ( v10 )
    {
      do
      {
        v11 = *((_DWORD *)this + 82);
        v12 = *v8;
        v13 = v11 - 1;
        if ( *(_QWORD *)(*v8 + 8 * v13) )
          break;
        v14 = (unsigned int)(v10 - 1);
        if ( (unsigned int)v14 >= v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
        }
        else
        {
          if ( (unsigned int)v14 < (unsigned int)v13 )
          {
            do
            {
              v16 = (unsigned int)(v14 + 1);
              *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(v12 + 8 * v16);
              v14 = v16;
            }
            while ( (unsigned int)v16 < *((_DWORD *)this + 82) - 1 );
          }
          --*((_DWORD *)this + 82);
        }
        v10 = *((_DWORD *)this + 82);
        v9 = 1;
      }
      while ( v10 );
      if ( v9 )
        DynArrayImpl<1>::ShrinkToSize((__int64)this + 304, 8u);
    }
  }
  return v5;
}
