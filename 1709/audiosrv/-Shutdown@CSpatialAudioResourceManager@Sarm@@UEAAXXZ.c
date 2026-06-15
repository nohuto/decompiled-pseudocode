/*
 * XREFs of ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x1800C24A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x1800C0600 (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 *     ?GetNextValue@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAAEAVCEndpointResourcePool@Sarm@@AEAPEAU__POSITION@@@Z @ 0x1800C0654 (-GetNextValue@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUI.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C1BE4 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800C1CCC (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1800C26CC (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C334C (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::Shutdown(Sarm::CSpatialAudioResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  __int64 *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct Sarm::CStreamResource *NextValue; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  std::_Ref_count_base *v23; // rcx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset((char *)this + 576);
  CWorkFifo::Shutdown((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
  v3 = (__int64 *)((char *)this + 232);
  if ( *((_QWORD *)this + 30) && (v4 = 0, *((_DWORD *)this + 62)) )
  {
    v5 = *v3;
    while ( !*(_QWORD *)(v5 + 8LL * v4) )
    {
      if ( ++v4 >= *((_DWORD *)this + 62) )
        goto LABEL_6;
    }
    v6 = *(_QWORD *)(v5 + 8LL * v4);
  }
  else
  {
LABEL_6:
    v6 = 0LL;
  }
  NextValue = 0LL;
  *((_QWORD *)this + 38) = v6;
  if ( v6 )
    NextValue = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(
                                                  (__int64)this + 232,
                                                  (__int64 *)this + 38);
  while ( NextValue )
  {
    Sarm::CSpatialAudioResourceManager::RemoveStream(this, NextValue);
    if ( *((_QWORD *)this + 30) && (v8 = 0, *((_DWORD *)this + 62)) )
    {
      v9 = *v3;
      while ( !*(_QWORD *)(v9 + 8LL * v8) )
      {
        if ( ++v8 >= *((_DWORD *)this + 62) )
          goto LABEL_15;
      }
      v10 = *(_QWORD *)(v9 + 8LL * v8);
    }
    else
    {
LABEL_15:
      v10 = 0LL;
    }
    *((_QWORD *)this + 38) = v10;
    NextValue = 0LL;
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 104);
      if ( !v11 )
      {
        v11 = 0LL;
        v12 = (unsigned int)(*(_DWORD *)(v10 + 112) % *((_DWORD *)this + 62) + 1);
        do
        {
          if ( (unsigned int)v12 >= *((_DWORD *)this + 62) )
            break;
          if ( *(_QWORD *)(*v3 + 8 * v12) )
            v11 = *(_QWORD *)(*v3 + 8 * v12);
          v12 = (unsigned int)(v12 + 1);
        }
        while ( !v11 );
      }
      *((_QWORD *)this + 38) = v11;
      NextValue = (struct Sarm::CStreamResource *)(v10 + 8);
    }
  }
  v13 = (__int64 *)((char *)this + 152);
  if ( *((_QWORD *)this + 20) && (v14 = 0, *((_DWORD *)this + 42)) )
  {
    v15 = *v13;
    while ( !*(_QWORD *)(v15 + 8LL * v14) )
    {
      if ( ++v14 >= *((_DWORD *)this + 42) )
        goto LABEL_30;
    }
    v16 = *(_QWORD *)(v15 + 8LL * v14);
  }
  else
  {
LABEL_30:
    v16 = 0LL;
  }
  v17 = 0LL;
  *((_QWORD *)this + 28) = v16;
  if ( v16 )
    v17 = (__int64 *)ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNextValue(
                       (__int64)this + 152,
                       (__int64 *)this + 28);
  while ( v17 )
  {
    if ( *v17 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
        (__int64)this + 152,
        *v17);
    if ( *((_QWORD *)this + 20) && (v18 = 0, *((_DWORD *)this + 42)) )
    {
      v19 = *v13;
      while ( !*(_QWORD *)(v19 + 8LL * v18) )
      {
        if ( ++v18 >= *((_DWORD *)this + 42) )
          goto LABEL_42;
      }
      v20 = *(_QWORD *)(v19 + 8LL * v18);
    }
    else
    {
LABEL_42:
      v20 = 0LL;
    }
    *((_QWORD *)this + 28) = v20;
    v17 = 0LL;
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 40);
      if ( !v21 )
      {
        v21 = 0LL;
        v22 = (unsigned int)(*(_DWORD *)(v20 + 48) % *((_DWORD *)this + 42) + 1);
        do
        {
          if ( (unsigned int)v22 >= *((_DWORD *)this + 42) )
            break;
          if ( *(_QWORD *)(*v13 + 8 * v22) )
            v21 = *(_QWORD *)(*v13 + 8 * v22);
          v22 = (unsigned int)(v22 + 1);
        }
        while ( !v21 );
      }
      *((_QWORD *)this + 28) = v21;
      v17 = (__int64 *)(v20 + 8);
    }
  }
  v23 = qword_18014C460;
  qword_18014C460 = 0LL;
  Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  *((_BYTE *)this + 144) = 0;
  if ( v1 )
    LeaveCriticalSection(v1);
}
