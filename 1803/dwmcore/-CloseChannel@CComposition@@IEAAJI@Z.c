/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18002DA70
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180034520 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014A4C0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x18001F744 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18002D3C0 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18002DA28 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800CCE98 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800CD160 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18014ABE4 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // rbp
  int AttachedChannel; // eax
  unsigned int v5; // esi
  CResourceTable **v6; // rdi
  struct CComposition *v7; // rdx
  __int64 *v8; // rdi
  char v9; // r8
  int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v15; // rcx
  struct CChannelContext *v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v16);
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AttachedChannel, 0x938u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 69) + 64LL))(*((_QWORD *)this + 69), (unsigned int)v2);
    v6 = (CResourceTable **)v16;
    if ( *((_BYTE *)v16 + 64) )
    {
      *((_BYTE *)v16 + 64) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((char *)this + 432, &v16) )
      CMILRefCountBase::Release((CMILRefCountBase *)v6);
    CResourceTable::ReleaseHandleTableEntries(v6[3], v7, (struct CChannelContext *)v6);
    CMILRefCountBase::Release((CMILRefCountBase *)v6);
    ReleaseInterface<CConnection>(&v16);
    v8 = (__int64 *)((char *)this + 328);
    v9 = 0;
    *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v2) = 0LL;
    v10 = *((_DWORD *)this + 88);
    if ( v10 )
    {
      do
      {
        v11 = *((_DWORD *)this + 88);
        v12 = *v8;
        v13 = v11 - 1;
        if ( *(_QWORD *)(*v8 + 8 * v13) )
          break;
        v15 = (unsigned int)(v10 - 1);
        if ( (unsigned int)v15 >= v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
        }
        else
        {
          if ( (unsigned int)v15 < (unsigned int)v13 )
          {
            do
            {
              *(_QWORD *)(v12 + 8 * v15) = *(_QWORD *)(v12 + 8LL * (unsigned int)(v15 + 1));
              v15 = (unsigned int)(v15 + 1);
              v11 = *((_DWORD *)this + 88);
            }
            while ( (unsigned int)v15 < v11 - 1 );
          }
          *((_DWORD *)this + 88) = v11 - 1;
        }
        v10 = *((_DWORD *)this + 88);
        v9 = 1;
      }
      while ( v10 );
      if ( v9 )
        DynArrayImpl<1>::ShrinkToSize((char *)this + 328, 8LL);
    }
  }
  return v5;
}
