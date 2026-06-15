/*
 * XREFs of ?RemoveStream@CTrackedEndpoint@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002D024
 * Callers:
 *     ?StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002BB20 (-StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x18002D230 (-GetNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEBAPEAVCNode@12@_KA.c)
 *     ?FreeNode@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18002D3B8 (-FreeNode@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@AEAAXPEAVCNode@12@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTrackedEndpoint::RemoveStream(CTrackedEndpoint *this, struct IAudioStreamInfo *a2)
{
  struct IAudioStreamInfo *v2; // rdi
  CTrackedEndpoint *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // r14
  signed int v5; // ebx
  int v6; // eax
  __int64 Node; // rax
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rax
  ATL::CAtlException *v12; // rbx
  _QWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  ATL::CAtlException *v14; // [rsp+40h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+48h] [rbp-40h]
  char v16; // [rsp+50h] [rbp-38h]
  signed int v19; // [rsp+A0h] [rbp+18h] BYREF
  char v20; // [rsp+A8h] [rbp+20h] BYREF

  v13[1] = -2LL;
  v2 = a2;
  v3 = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v16 = 1;
  v5 = v2 == 0LL ? 0x80004003 : 0;
  if ( v2 )
  {
    try
    {
      v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v2 + 40LL))(v2);
      v13[0] = 0LL;
      Node = ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::GetNode(
               (int)v3 + 112,
               v6,
               (unsigned int)&v20,
               (unsigned int)&v19,
               (__int64)v13);
      v8 = Node;
      if ( Node )
      {
        v9 = (unsigned int)(*(_DWORD *)(Node + 24) % *((_DWORD *)v3 + 32));
        v10 = *(_QWORD *)(Node + 16);
        if ( v13[0] )
          *(_QWORD *)(v13[0] + 16LL) = v10;
        else
          *(_QWORD *)(*((_QWORD *)v3 + 14) + 8 * v9) = v10;
        ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::FreeNode(
          (char *)v3 + 112,
          v8);
      }
    }
    catch ( ATL::CAtlException *v14 )
    {
      v12 = v14;
      if ( *(_DWORD *)v14 == -1073741571 )
        _o__resetstkoflw();
      v19 = *(_DWORD *)v12;
      v3 = this;
      v2 = a2;
      v4 = v15;
      v5 = v19;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
LABEL_8:
  if ( v5 >= 0 )
LABEL_9:
    v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, unsigned __int64))(*(_QWORD *)v2 + 104LL))(
           v2,
           ((unsigned __int64)v3 + 8) & -(__int64)(v3 != 0LL));
  LeaveCriticalSection(v4);
  v16 = 0;
  return (unsigned int)v5;
}
