/*
 * XREFs of ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x1800C4770
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetNextValue@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAAEAVCStreamResource@Sarm@@AEAPEAU__POSITION@@@Z @ 0x1800C2C3C (-GetNextValue@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudi.c)
 *     ?GetNextValue@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAAEAVCEndpointResourcePool@Sarm@@AEAPEAU__POSITION@@@Z @ 0x1800C2C90 (-GetNextValue@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUI.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C3EF8 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800C3FE0 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x1800C498C (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::Shutdown(Sarm::CSpatialAudioResourceManager *this)
{
  __int64 *v2; // rbx
  unsigned int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rdx
  struct Sarm::CStreamResource *NextValue; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 *v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  std::_Ref_count_base *v22; // rcx
  struct _RTL_CRITICAL_SECTION *v23; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 24, (__int64)&lpCriticalSection);
  CWorkFifo::Shutdown((Sarm::CSpatialAudioResourceManager *)((char *)this + 304));
  v2 = (__int64 *)((char *)this + 192);
  if ( *((_QWORD *)this + 25) && (v3 = 0, *((_DWORD *)this + 52)) )
  {
    v4 = *v2;
    while ( !*(_QWORD *)(v4 + 8LL * v3) )
    {
      if ( ++v3 >= *((_DWORD *)this + 52) )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(v4 + 8LL * v3);
  }
  else
  {
LABEL_6:
    v5 = 0LL;
  }
  *((_QWORD *)this + 33) = v5;
  NextValue = 0LL;
  if ( v5 )
    NextValue = (struct Sarm::CStreamResource *)ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNextValue(
                                                  (__int64)this + 192,
                                                  (__int64 *)this + 33);
  while ( NextValue )
  {
    Sarm::CSpatialAudioResourceManager::RemoveStream(this, NextValue);
    if ( *((_QWORD *)this + 25) && (v7 = 0, *((_DWORD *)this + 52)) )
    {
      v8 = *v2;
      while ( !*(_QWORD *)(v8 + 8LL * v7) )
      {
        if ( ++v7 >= *((_DWORD *)this + 52) )
          goto LABEL_15;
      }
      v9 = *(_QWORD *)(v8 + 8LL * v7);
    }
    else
    {
LABEL_15:
      v9 = 0LL;
    }
    *((_QWORD *)this + 33) = v9;
    NextValue = 0LL;
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 104);
      if ( !v10 )
      {
        v10 = 0LL;
        v11 = (unsigned int)(*(_DWORD *)(v9 + 112) % *((_DWORD *)this + 52) + 1);
        do
        {
          if ( (unsigned int)v11 >= *((_DWORD *)this + 52) )
            break;
          if ( *(_QWORD *)(*v2 + 8 * v11) )
            v10 = *(_QWORD *)(*v2 + 8 * v11);
          v11 = (unsigned int)(v11 + 1);
        }
        while ( !v10 );
      }
      *((_QWORD *)this + 33) = v10;
      NextValue = (struct Sarm::CStreamResource *)(v9 + 8);
    }
  }
  v12 = (__int64 *)((char *)this + 112);
  if ( *((_QWORD *)this + 15) && (v13 = 0, *((_DWORD *)this + 32)) )
  {
    v14 = *v12;
    while ( !*(_QWORD *)(v14 + 8LL * v13) )
    {
      if ( ++v13 >= *((_DWORD *)this + 32) )
        goto LABEL_30;
    }
    v15 = *(_QWORD *)(v14 + 8LL * v13);
  }
  else
  {
LABEL_30:
    v15 = 0LL;
  }
  v16 = 0LL;
  *((_QWORD *)this + 23) = v15;
  if ( v15 )
    v16 = (__int64 *)ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNextValue(
                       (__int64)this + 112,
                       (__int64 *)this + 23);
  while ( v16 )
  {
    if ( *v16 )
      ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
        (__int64)this + 112,
        *v16);
    if ( *((_QWORD *)this + 15) && (v17 = 0, *((_DWORD *)this + 32)) )
    {
      v18 = *v12;
      while ( !*(_QWORD *)(v18 + 8LL * v17) )
      {
        if ( ++v17 >= *((_DWORD *)this + 32) )
          goto LABEL_42;
      }
      v19 = *(_QWORD *)(v18 + 8LL * v17);
    }
    else
    {
LABEL_42:
      v19 = 0LL;
    }
    *((_QWORD *)this + 23) = v19;
    v16 = 0LL;
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 40);
      if ( !v20 )
      {
        v20 = 0LL;
        v21 = (unsigned int)(*(_DWORD *)(v19 + 48) % *((_DWORD *)this + 32) + 1);
        do
        {
          if ( (unsigned int)v21 >= *((_DWORD *)this + 32) )
            break;
          if ( *(_QWORD *)(*v12 + 8 * v21) )
            v20 = *(_QWORD *)(*v12 + 8 * v21);
          v21 = (unsigned int)(v21 + 1);
        }
        while ( !v20 );
      }
      *((_QWORD *)this + 23) = v20;
      v16 = (__int64 *)(v19 + 8);
    }
  }
  v22 = qword_18012C538;
  qword_18012C538 = 0LL;
  Sarm::CEndpointResourcePool::s_sharedPool = 0LL;
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  v23 = lpCriticalSection;
  *((_BYTE *)this + 104) = 0;
  if ( v23 )
    LeaveCriticalSection(v23);
}
