/*
 * XREFs of ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x180004220 (-GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z.c)
 *     ?IsStale@CEndpointCharacteristics@@QEAAHXZ @ 0x18000DBD0 (-IsStale@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x180024EC0 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEn.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@QEAAAEAV?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@PEBG@Z @ 0x180024FC0 (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCEndpoint.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x18002C540 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002C5C0 (--4-$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800455E8 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     Template_zq @ 0x1800467E4 (Template_zq.c)
 *     Template_z @ 0x18004687C (Template_z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x1800BEACC (-RemoveNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@V.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
        CEndpointCharacteristicsCache *this,
        const unsigned __int16 *a2,
        int a3,
        struct CEndpointCharacteristics **a4)
{
  const wchar_t *v4; // r14
  CEndpointCharacteristicsCache *v5; // r13
  int v6; // esi
  CEndpointCharacteristics *v7; // rbx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdi
  unsigned __int16 *Node; // rax
  int v13; // eax
  __int64 v14; // rcx
  volatile signed __int32 **v15; // rax
  struct CEndpointCharacteristics *v16; // rax
  ATL::CAtlException *v18; // rbx
  int v19; // [rsp+30h] [rbp-68h] BYREF
  CEndpointCharacteristics *v20; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int16 *v21; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int16 *v22[2]; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v23; // [rsp+58h] [rbp-40h] BYREF
  volatile signed __int32 *v25; // [rsp+A8h] [rbp+10h] BYREF
  int v26; // [rsp+B0h] [rbp+18h]
  struct CEndpointCharacteristics **v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v22[1] = (unsigned __int16 *)-2LL;
  v4 = a2;
  v5 = this;
  v6 = 0;
  v7 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *a4 = 0LL;
  if ( (int)GetAliasedEndpointId(a2, &v21, 0LL) >= 0 )
    v4 = v21;
  AcquireSRWLockShared((PSRWLOCK)v5 + 2);
  if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
         (__int64 *)v5 + 3,
         (__int64)v4,
         &v19,
         (unsigned int *)&v25,
         v22) )
  {
    v8 = *(volatile signed __int32 **)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                                        (__int64 *)v5 + 3,
                                        (__int64)v4);
    v25 = v8;
    if ( v8 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( !CEndpointCharacteristics::IsStale((CEndpointCharacteristics *)v8) )
    {
      Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=((volatile signed __int32 **)&v20, &v25);
      v7 = v20;
    }
    if ( v8 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  ReleaseSRWLockShared((PSRWLOCK)v5 + 2);
  if ( v7 )
  {
LABEL_31:
    v16 = v7;
    v7 = 0LL;
    *v27 = v16;
    goto LABEL_32;
  }
  AcquireSRWLockExclusive((PSRWLOCK)v5 + 2);
  if ( !ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
          (__int64 *)v5 + 3,
          (__int64)v4,
          &v19,
          (unsigned int *)&v25,
          v22) )
    goto LABEL_21;
  v11 = *(volatile signed __int32 **)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                                       (__int64 *)v5 + 3,
                                       (__int64)v4);
  v25 = v11;
  if ( v11 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  if ( CEndpointCharacteristics::IsStale((CEndpointCharacteristics *)v11) )
  {
    v22[0] = 0LL;
    Node = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::GetNode(
             (__int64 *)v5 + 3,
             (__int64)v4,
             &v19,
             (unsigned int *)&v25,
             v22);
    if ( Node )
      ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::RemoveNode(
        (char *)v5 + 24,
        Node,
        v22[0]);
  }
  else
  {
    Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=((volatile signed __int32 **)&v20, &v25);
    v7 = v20;
  }
  if ( v11 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( !v7 )
  {
LABEL_21:
    if ( !v26 )
    {
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        Template_z(v10, v9, v4);
      LODWORD(v25) = 1;
      v22[0] = (unsigned __int16 *)v4;
      v13 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
              &v20,
              (const unsigned __int16 **)v22,
              (int *)&v25);
      v6 = v13;
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        Template_zq(v14, (__int64)&EndpointCharacteristics_CreateInstance_Task_Stop, v4, v13);
      v7 = v20;
      if ( v20 )
      {
        v6 = 0;
        try
        {
          v15 = (volatile signed __int32 **)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::operator[](
                                              (__int64 *)v5 + 3,
                                              (__int64)v4);
          Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(v15, (volatile signed __int32 **)&v20);
        }
        catch ( ATL::CAtlException *v23 )
        {
          v18 = v23;
          if ( *(_DWORD *)v23 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v25) = *(_DWORD *)v18;
          v5 = this;
          v6 = (int)v25;
          v7 = v20;
        }
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)v5 + 2);
  if ( v6 >= 0 )
  {
    if ( !v7 )
    {
      v6 = -2147023728;
      goto LABEL_32;
    }
    goto LABEL_31;
  }
LABEL_32:
  LogEPCError("CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics", 4701, v6);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v21);
  if ( v7 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v6;
}
