/*
 * XREFs of ?AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z @ 0x180023E10
 * Callers:
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x180022340 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x18002412C (-GetNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KA.c)
 *     ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180024178 (-InitHashTable@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z.c)
 *     ?NewNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x180024400 (-NewNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KI.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTrackedEndpoint::AddStream(CTrackedEndpoint *this, struct IAudioStreamInfo *a2, float a3)
{
  struct IAudioStreamInfo *v3; // rsi
  CTrackedEndpoint *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 Node; // rax
  __int64 v9; // r8
  __int64 result; // rax
  ATL::CAtlException *v11; // rbx
  unsigned int v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]
  _BYTE v14[8]; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v15; // [rsp+48h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp-48h]
  char v17; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+B8h] [rbp+20h] BYREF

  v13 = -2LL;
  v3 = a2;
  v4 = this;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v17 = 1;
  if ( !v3 )
  {
    v6 = -2147467261;
    goto LABEL_12;
  }
  try
  {
    v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v3 + 40LL))(v3);
    Node = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::GetNode(
             (int)v4 + 112,
             v7,
             (unsigned int)&v12,
             (unsigned int)&v20,
             (__int64)v14);
    if ( !Node )
    {
      if ( !*((_QWORD *)v4 + 14) )
      {
        LOBYTE(v9) = 1;
        if ( !(unsigned __int8)ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::InitHashTable(
                                 (char *)v4 + 112,
                                 *((unsigned int *)v4 + 32),
                                 v9) )
          ATL::AtlThrowImpl(-2147024882);
      }
      Node = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::NewNode(
               (char *)v4 + 112,
               v7,
               v12,
               (unsigned int)v20);
    }
    *(float *)(Node + 8) = a3;
  }
  catch ( ATL::CAtlException *v15 )
  {
    v11 = v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      _o__resetstkoflw();
    v20 = *(_DWORD *)v11;
    v6 = v20;
    v5 = v16;
    if ( v20 >= 0 )
    {
      v4 = this;
      v3 = a2;
      goto LABEL_11;
    }
LABEL_12:
    LeaveCriticalSection(v5);
    v17 = 0;
    result = v6;
  }
LABEL_11:
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, unsigned __int64))(*(_QWORD *)v3 + 96LL))(
         v3,
         ((unsigned __int64)v4 + 8) & -(__int64)(v4 != 0LL));
  goto LABEL_12;
}
