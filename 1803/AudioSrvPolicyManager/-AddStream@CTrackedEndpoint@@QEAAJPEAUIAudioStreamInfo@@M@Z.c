/*
 * XREFs of ?AddStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@M@Z @ 0x18002CEE4
 * Callers:
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002B8C0 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180017DB8 (-InitHashTable@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z.c)
 *     ?GetNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x18002D230 (-GetNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KA.c)
 *     ?NewNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x18002D27C (-NewNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAPEAVCNode@12@_KI.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTrackedEndpoint::AddStream(CTrackedEndpoint *this, struct IAudioStreamInfo *a2, float a3)
{
  struct IAudioStreamInfo *v3; // rdi
  CTrackedEndpoint *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // r14
  signed int v6; // ebx
  __int64 v7; // r15
  __int64 Node; // rax
  ATL::CAtlException *v10; // rbx
  unsigned int v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h]
  _BYTE v13[8]; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v14; // [rsp+48h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp-48h]
  char v16; // [rsp+58h] [rbp-40h]
  unsigned int v19; // [rsp+B8h] [rbp+20h] BYREF

  v12 = -2LL;
  v3 = a2;
  v4 = this;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v16 = 1;
  v6 = v3 == 0LL ? 0x80004003 : 0;
  if ( v3 )
  {
    try
    {
      v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v3 + 40LL))(v3);
      Node = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::GetNode(
               (int)v4 + 112,
               v7,
               (unsigned int)&v11,
               (unsigned int)&v19,
               (__int64)v13);
      if ( !Node )
      {
        if ( !*((_QWORD *)v4 + 14)
          && !ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::InitHashTable(
                (void **)v4 + 14,
                *((_DWORD *)v4 + 32),
                1) )
        {
          ATL::AtlThrowImpl(-2147024882);
        }
        Node = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::NewNode(
                 (char *)v4 + 112,
                 v7,
                 v11,
                 v19);
      }
      *(float *)(Node + 8) = a3;
    }
    catch ( ATL::CAtlException *v14 )
    {
      v10 = v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _o__resetstkoflw();
      v19 = *(_DWORD *)v10;
      v4 = this;
      v3 = a2;
      v5 = v15;
      v6 = v19;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
LABEL_8:
  if ( v6 >= 0 )
LABEL_9:
    v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, unsigned __int64))(*(_QWORD *)v3 + 96LL))(
           v3,
           ((unsigned __int64)v4 + 8) & -(__int64)(v4 != 0LL));
  LeaveCriticalSection(v5);
  v16 = 0;
  return (unsigned int)v6;
}
