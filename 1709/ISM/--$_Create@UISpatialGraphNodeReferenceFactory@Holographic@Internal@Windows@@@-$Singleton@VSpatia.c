/*
 * XREFs of ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x1800BCAF4
 * Callers:
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 * Callees:
 *     ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@012@@Z @ 0x1800BD4C4 (--$MakeAndInitialize@V-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x1800BD5B4 (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(
        _QWORD *a1)
{
  int (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v3; // edi
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rcx
  int (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  signed __int32 v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int128 v15; // [rsp+38h] [rbp-18h]
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  RTL_SRWLOCK *v18; // [rsp+A8h] [rbp+58h]

  *a1 = 0LL;
  v16 = 0LL;
  AcquireSRWLockShared(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
  v2 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v2)[2])(v2);
  }
  v16 = 0LL;
  if ( Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton )
    v3 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton
                                                            + 24LL))(
           Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v16);
  else
    v3 = 0;
  ReleaseSRWLockShared(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v16;
  if ( v3 >= 0 )
  {
    if ( v16 )
    {
LABEL_47:
      if ( v3 >= 0 && v4 )
      {
        v3 = (**v4)(v4, &GUID_537f320e_1d62_448c_aa6c_a47a3cf3285a, a1);
        v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v16;
      }
      goto LABEL_50;
    }
    AcquireSRWLockExclusive(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
    v18 = &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton;
    v5 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v5)[2])(v5);
    }
    v16 = 0LL;
    if ( Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton
                                                              + 24LL))(
             Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v16);
      if ( v3 < 0 || v16 )
      {
LABEL_46:
        ReleaseSRWLockExclusive(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
        v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v16;
        goto LABEL_47;
      }
    }
    v15 = 0LL;
    v6 = qword_180110680;
    v7 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent;
    if ( qword_180110680 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v6 + 8);
        if ( !v8 )
          break;
        if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v8 + 1, v8) )
        {
          *((_QWORD *)&v15 + 1) = v6;
          goto LABEL_20;
        }
      }
    }
    v7 = 0LL;
LABEL_20:
    if ( v7 )
    {
      WaitForSingleObject(*(HANDLE *)(v7 + 8), 0xFFFFFFFF);
      v9 = qword_180110680;
      if ( qword_180110680 && !_InterlockedDecrement((volatile signed __int32 *)(qword_180110680 + 12)) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      qword_180110680 = 0LL;
      Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent = 0LL;
    }
    v3 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>,IInspectable,>(&v16);
    v10 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton;
    Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton = 0LL;
    if ( v3 < 0 )
    {
      if ( !v10 )
      {
LABEL_42:
        if ( *((_QWORD *)&v15 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 12LL), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
          }
        }
        goto LABEL_46;
      }
    }
    else
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v3 = Microsoft::WRL::AsWeak<IInspectable>(
             v16,
             &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton);
      v17 = 0LL;
      if ( (**v16)(v16, &GUID_9082dcb1_33fd_45f0_93e1_9152c2118ee8, &v17) >= 0 )
      {
        v11 = *(volatile signed __int32 **)(v17 + 16);
        v12 = *(_QWORD *)(v17 + 8);
        if ( v11 )
        {
          _InterlockedIncrement(v11 + 2);
          _InterlockedIncrement(v11 + 3);
        }
        v13 = qword_180110680;
        if ( qword_180110680
          && _InterlockedExchangeAdd((volatile signed __int32 *)(qword_180110680 + 12), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        }
        qword_180110680 = (__int64)v11;
        Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent = v12;
        if ( v11 )
        {
          if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
      }
      v10 = v17;
      if ( !v17 )
        goto LABEL_42;
      v17 = 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_42;
  }
LABEL_50:
  if ( v4 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  }
  return (unsigned int)v3;
}
