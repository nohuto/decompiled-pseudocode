/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005BFB0
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18013F8A0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18005B46C (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18005BF68 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x1800B01A4 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800B1AAC (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800B32D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18013FBA4 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // rbp
  int AttachedChannel; // eax
  unsigned int v5; // esi
  CResourceTable **v6; // rbx
  struct CComposition *v7; // rdx
  __int64 *v8; // rbx
  char v9; // r8
  int v10; // edx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  struct CChannelContext *v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v16);
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AttachedChannel, 0xAB3u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 70) + 64LL))(*((_QWORD *)this + 70), (unsigned int)v2);
    v6 = (CResourceTable **)v16;
    if ( *((_BYTE *)v16 + 56) )
    {
      *((_BYTE *)v16 + 56) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((char *)this + 456, &v16) )
      CMILRefCountBase::Release((CMILRefCountBase *)v6);
    CResourceTable::ReleaseHandleTableEntries(v6[4], v7, (struct CChannelContext *)v6);
    CMILRefCountBase::Release((CMILRefCountBase *)v6);
    ReleaseInterface<CConnection>(&v16);
    v8 = (__int64 *)((char *)this + 344);
    v9 = 0;
    *(_QWORD *)(*((_QWORD *)this + 43) + 8 * v2) = 0LL;
    v10 = *((_DWORD *)this + 92);
    if ( v10 )
    {
      do
      {
        if ( *(_QWORD *)(*v8 + 8LL * (unsigned int)(*((_DWORD *)this + 92) - 1)) )
          break;
        v12 = *((_DWORD *)this + 92);
        v13 = (unsigned int)(v10 - 1);
        if ( (unsigned int)v13 >= v12 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
        }
        else
        {
          v14 = *v8;
          if ( (unsigned int)v13 < v12 - 1 )
          {
            do
            {
              v15 = (unsigned int)(v13 + 1);
              *(_QWORD *)(v14 + 8 * v13) = *(_QWORD *)(v14 + 8 * v15);
              v13 = v15;
            }
            while ( (unsigned int)v15 < *((_DWORD *)this + 92) - 1 );
          }
          --*((_DWORD *)this + 92);
        }
        v10 = *((_DWORD *)this + 92);
        v9 = 1;
      }
      while ( v10 );
      if ( v9 )
        DynArrayImpl<1>::ShrinkToSize((char *)this + 344);
    }
  }
  return v5;
}
