/*
 * XREFs of ?OnMaxChannelVolumeChanged@CTrackedEndpoint@@UEAAJ_KM@Z @ 0x18002CD40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180017DB8 (-InitHashTable@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z.c)
 *     ?GetNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x18002D230 (-GetNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KA.c)
 *     ?NewNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x18002D27C (-NewNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KI.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTrackedEndpoint::OnMaxChannelVolumeChanged(CTrackedEndpoint *this, __int64 a2, float a3)
{
  float v3; // xmm6_4
  __int64 v4; // rsi
  CTrackedEndpoint *v5; // rbx
  __int64 Node; // rax
  __int64 v7; // rax
  int v8; // r11d
  __int64 result; // rax
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // rbx
  unsigned int v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]
  __int64 v14; // [rsp+40h] [rbp-58h]
  _BYTE v15[8]; // [rsp+48h] [rbp-50h] BYREF
  ATL::CAtlException *v16; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v17; // [rsp+58h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-38h]
  char v19; // [rsp+68h] [rbp-30h]
  int v22; // [rsp+B8h] [rbp+20h] BYREF

  v14 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v19 = 1;
  v13 = 0LL;
  try
  {
    Node = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::GetNode(
             (int)v5 + 104,
             v4,
             (unsigned int)&v12,
             (unsigned int)&v22,
             (__int64)v15);
    v13 = Node;
  }
  catch ( ATL::CAtlException *v16 )
  {
    v10 = v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      _o__resetstkoflw();
    v22 = *(_DWORD *)v10;
    v5 = this;
    v3 = a3;
    v4 = a2;
    v8 = v22;
    Node = v13;
  }
  if ( !Node )
  {
LABEL_12:
    if ( v8 >= 0 )
      goto LABEL_17;
    goto LABEL_13;
  }
  try
  {
    v7 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::GetNode(
           (int)v5 + 104,
           v4,
           (unsigned int)&v12,
           (unsigned int)&v22,
           (__int64)v15);
    if ( !v7 )
    {
      if ( !*((_QWORD *)v5 + 13)
        && !ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::InitHashTable(
              (void **)v5 + 13,
              *((_DWORD *)v5 + 30),
              1) )
      {
        ATL::AtlThrowImpl(-2147024882);
      }
      v7 = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::NewNode(
             (char *)v5 + 104,
             v4,
             v12,
             (unsigned int)v22);
    }
    *(float *)(v7 + 8) = v3;
  }
  catch ( ATL::CAtlException *v17 )
  {
    v11 = v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      _o__resetstkoflw();
    v22 = *(_DWORD *)v11;
    v8 = v22;
    if ( v22 >= 0 )
    {
      v5 = this;
      goto LABEL_11;
    }
LABEL_13:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_d9181ac15dcd385ff9d00998d88c8ec9_Traceguids, v8);
    }
LABEL_17:
    LeaveCriticalSection(lpCriticalSection);
    v19 = 0;
    result = 0LL;
  }
LABEL_11:
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 9) + 48LL))(*((_QWORD *)v5 + 9));
  goto LABEL_12;
}
