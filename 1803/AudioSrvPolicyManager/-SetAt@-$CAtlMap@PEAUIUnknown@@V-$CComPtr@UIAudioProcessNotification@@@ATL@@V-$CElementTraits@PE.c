/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$CComPtr@UIAudioProcessNotification@@@2@@Z @ 0x1800175F0
 * Callers:
 *     ?RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x180016720 (-RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x180017CA0 (-GetNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     ?InitHashTable@?$CAtlMap@_KMV?$CElementTraits@_K@ATL@@V?$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z @ 0x180017DB8 (-InitHashTable@-$CAtlMap@_KMV-$CElementTraits@_K@ATL@@V-$CElementTraits@M@2@@ATL@@QEAA_NI_N@Z.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180018048 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::SetAt(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 Node; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v16 = -2LL;
  Node = ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::GetNode(
           a1,
           a2,
           (unsigned int)&v15,
           (unsigned int)&v19,
           (__int64)&v17);
  v8 = Node;
  if ( Node )
  {
    v12 = *(_QWORD *)(Node + 8);
    v13 = *a3;
    if ( v12 != *a3 )
    {
      if ( v13 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*a3);
        v12 = *(_QWORD *)(v8 + 8);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      *(_QWORD *)(v8 + 8) = v13;
    }
  }
  else
  {
    if ( !*(_QWORD *)a1 )
    {
      LOBYTE(v7) = 1;
      if ( !(unsigned __int8)ATL::CAtlMap<unsigned __int64,float,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<float>>::InitHashTable(
                               a1,
                               *(unsigned int *)(a1 + 16),
                               v7) )
        ATL::AtlThrowImpl(-2147024882);
    }
    v9 = ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::NewNode(
           a1,
           a2,
           v15,
           (unsigned int)v19);
    v8 = v9;
    v19 = v9;
    try
    {
      v10 = *a3;
      v11 = *(_QWORD *)(v9 + 8);
      if ( v11 != *a3 )
      {
        if ( v10 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*a3);
          v11 = *(_QWORD *)(v8 + 8);
        }
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        *(_QWORD *)(v8 + 8) = v10;
      }
    }
    catch ( ... )
    {
      ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::RemoveAtPos(
        a1,
        v19);
      throw;
    }
  }
  return v8;
}
