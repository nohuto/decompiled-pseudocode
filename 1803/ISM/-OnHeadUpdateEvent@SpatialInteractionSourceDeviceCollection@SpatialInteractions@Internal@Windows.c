/*
 * XREFs of ?OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUIPerceptionTimestamp@Perception@4@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A6B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEADK_JPEAUISpatialGraphNodeReference@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A6CDC (-PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@W.c)
 *     ?SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A8308 (-SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800A8760 (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnHeadUpdateEvent(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Perception::IPerceptionTimestamp *a2,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a3)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v3; // r15
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v6; // rdi
  __int64 v7; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  __int64 *v9; // rsi
  __int64 *j; // rbx
  int v11; // eax
  __int64 v12; // rdx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v13; // rcx
  char v14; // al
  __int64 **v15; // rax
  __int64 *v16; // rcx
  __int64 *i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v3 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)((char *)this - 8);
  v6 = 0LL;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::UpdateRigTransforms(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)((char *)this - 8),
    a2,
    &v20);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  v7 = *((_QWORD *)this + 51);
  if ( v7 )
  {
    v6 = (struct Windows::Internal::Holographic::ISpatialGraphNodeReference *)*((_QWORD *)this + 51);
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *))(*(_QWORD *)v7 + 8LL))(v6);
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-336LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 416);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  v9 = (__int64 *)*((_QWORD *)this + 57);
  j = (__int64 *)*v9;
  while ( j != v9 )
  {
    if ( (!(**(unsigned __int8 (__fastcall ***)(__int64))j[5])(j[5]) || !*(_BYTE *)(j[5] + 103))
      && (!(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)j[5] + 40LL))(j[5])
       || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)j[5] + 48LL))(j[5])) )
    {
      v13 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)j[5];
      v14 = *((_BYTE *)v13 + 101);
      *((_BYTE *)v13 + 101) = 0;
      if ( !v14 )
        goto LABEL_16;
      v11 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SendDeviceUpdate(
              v13,
              (struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)j[5],
              a3);
      if ( v11 >= 0 )
        goto LABEL_16;
      v12 = 576LL;
      goto LABEL_15;
    }
    v11 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::PrepareAndSendInputInfo(
            v3,
            (struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)j[5],
            0LL,
            0,
            v20,
            v6,
            a3);
    if ( v11 < 0 )
    {
      v12 = 570LL;
LABEL_15:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v11);
    }
LABEL_16:
    if ( !*((_BYTE *)j + 25) )
    {
      v15 = (__int64 **)j[2];
      if ( *((_BYTE *)v15 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v16 = *v15;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v16 + 25); v16 = (__int64 *)*v16 )
          j = v16;
      }
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
