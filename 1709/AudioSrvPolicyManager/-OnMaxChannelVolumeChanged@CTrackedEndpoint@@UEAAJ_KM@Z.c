/*
 * XREFs of ?OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z @ 0x180023C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x18002412C (-GetNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KA.c)
 *     ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180024178 (-InitHashTable@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z.c)
 *     ?NewNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x180024400 (-NewNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KI.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTrackedEndpoint::OnMaxChannelVolumeChanged(CTrackedEndpoint *this, __int64 a2, float a3)
{
  float v3; // xmm6_4
  __int64 v4; // rsi
  CTrackedEndpoint *v5; // rbx
  __int64 Node; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // r11d
  __int64 result; // rax
  ATL::CAtlException *v11; // rbx
  ATL::CAtlException *v12; // rbx
  unsigned int v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-58h]
  _BYTE v16[8]; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v17; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v18; // [rsp+58h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-38h]
  char v20; // [rsp+68h] [rbp-30h]
  int v23; // [rsp+B8h] [rbp+20h] BYREF

  v15 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v20 = 1;
  v14 = 0LL;
  try
  {
    Node = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::GetNode(
             (int)v5 + 104,
             v4,
             (unsigned int)&v13,
             (unsigned int)&v23,
             (__int64)v16);
    v14 = Node;
  }
  catch ( ATL::CAtlException *v17 )
  {
    v11 = v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      _o__resetstkoflw();
    v23 = *(_DWORD *)v11;
    v5 = this;
    v3 = a3;
    v4 = a2;
    v9 = v23;
    Node = v14;
  }
  if ( !Node )
  {
LABEL_13:
    if ( v9 >= 0 )
      goto LABEL_18;
    goto LABEL_14;
  }
  try
  {
    v7 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::GetNode(
           (int)v5 + 104,
           v4,
           (unsigned int)&v13,
           (unsigned int)&v23,
           (__int64)v16);
    if ( !v7 )
    {
      if ( !*((_QWORD *)v5 + 13) )
      {
        LOBYTE(v8) = 1;
        if ( !(unsigned __int8)ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::InitHashTable(
                                 (char *)v5 + 104,
                                 *((unsigned int *)v5 + 30),
                                 v8) )
          ATL::AtlThrowImpl(-2147024882);
      }
      v7 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::NewNode(
             (char *)v5 + 104,
             v4,
             v13,
             (unsigned int)v23);
    }
    *(float *)(v7 + 8) = v3;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v12 = v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v23 = *(_DWORD *)v12;
    v9 = v23;
    if ( v23 >= 0 )
    {
      v5 = this;
      goto LABEL_12;
    }
LABEL_14:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_740b5a4498f73e754c5dcce8dd3bcbc7_Traceguids, v9);
    }
LABEL_18:
    LeaveCriticalSection(lpCriticalSection);
    v20 = 0;
    result = 0LL;
  }
LABEL_12:
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 9) + 56LL))(*((_QWORD *)v5 + 9));
  goto LABEL_13;
}
