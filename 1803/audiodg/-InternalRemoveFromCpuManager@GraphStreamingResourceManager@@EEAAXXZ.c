/*
 * XREFs of ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140035B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?GetStartPosition@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x140035434 (-GetStartPosition@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CE.c)
 */

void __fastcall GraphStreamingResourceManager::InternalRemoveFromCpuManager(GraphStreamingResourceManager *this)
{
  __int64 StartPosition; // rbx
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rdx

  StartPosition = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64 *)this + 8);
  while ( StartPosition )
  {
    v3 = StartPosition;
    v4 = *(_QWORD *)(StartPosition + 32);
    if ( !v4 )
    {
      v5 = (unsigned int)(*(_DWORD *)(StartPosition + 40) % *((_DWORD *)this + 20) + 1);
      do
      {
        if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
          break;
        v6 = *((_QWORD *)this + 8);
        if ( *(_QWORD *)(v6 + 8 * v5) )
          v4 = *(_QWORD *)(v6 + 8 * v5);
        v5 = (unsigned int)(v5 + 1);
      }
      while ( !v4 );
    }
    StartPosition = v4;
    if ( *(_QWORD *)(v3 + 24) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 40LL))(*((_QWORD *)this + 35));
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  v7 = (_QWORD *)((char *)this + 136);
  v8 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64 *)this + 17);
  while ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)(v8 + 32);
    if ( !v10 )
    {
      v11 = (unsigned int)(*(_DWORD *)(v8 + 40) % *((_DWORD *)this + 38) + 1);
      do
      {
        if ( (unsigned int)v11 >= *((_DWORD *)this + 38) )
          break;
        if ( *(_QWORD *)(*v7 + 8 * v11) )
          v10 = *(_QWORD *)(*v7 + 8 * v11);
        v11 = (unsigned int)(v11 + 1);
      }
      while ( !v10 );
    }
    v8 = v10;
    if ( *(_QWORD *)(v9 + 24) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 56LL))(*((_QWORD *)this + 35));
      *(_QWORD *)(v9 + 24) = 0LL;
    }
  }
  v12 = (_QWORD *)((char *)this + 208);
  v13 = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::GetStartPosition((__int64 *)this + 26);
  while ( v13 )
  {
    v14 = v13;
    v15 = *(_QWORD *)(v13 + 32);
    if ( !v15 )
    {
      v16 = (unsigned int)(*(_DWORD *)(v13 + 40) % *((_DWORD *)this + 56) + 1);
      do
      {
        if ( (unsigned int)v16 >= *((_DWORD *)this + 56) )
          break;
        if ( *(_QWORD *)(*v12 + 8 * v16) )
          v15 = *(_QWORD *)(*v12 + 8 * v16);
        v16 = (unsigned int)(v16 + 1);
      }
      while ( !v15 );
    }
    v13 = v15;
    if ( *(_QWORD *)(v14 + 24) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 72LL))(*((_QWORD *)this + 35));
      *(_QWORD *)(v14 + 24) = 0LL;
    }
  }
  Microsoft::WRL::ComPtr<CpuManager>::InternalRelease((__int64 *)this + 35);
}
