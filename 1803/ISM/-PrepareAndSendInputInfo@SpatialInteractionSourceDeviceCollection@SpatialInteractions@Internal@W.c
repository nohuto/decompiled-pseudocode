/*
 * XREFs of ?PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEADK_JPEAUISpatialGraphNodeReference@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A6CDC
 * Callers:
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A6930 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUIPerceptionTimestamp@Perception@4@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A6B10 (-OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A8308 (-SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::PrepareAndSendInputInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a6,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a7)
{
  __int64 v7; // rax
  __int64 (__fastcall *v9)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, char *, _QWORD, struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, char *, char *, int *, unsigned int *, char *, char *); // rax
  int v11; // eax
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v12; // rcx
  unsigned int v13; // edi
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *v15; // rsi
  bool v16; // cl
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // [rsp+20h] [rbp-50h]
  int v20; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v21[3]; // [rsp+64h] [rbp-Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  char v23; // [rsp+90h] [rbp+20h] BYREF
  char v24; // [rsp+98h] [rbp+28h] BYREF

  v7 = *(_QWORD *)a2;
  v21[0] = 0;
  LOBYTE(v20) = 0;
  v24 = 0;
  v9 = *(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, char *, _QWORD, struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, char *, char *, int *, unsigned int *, char *, char *))(v7 + 120);
  v23 = 0;
  v11 = v9(a2, a3, a4, a6, a5, (char *)this + 164, (char *)this + 228, &v20, v21, &v24, &v23);
  v13 = v11;
  if ( v11 >= 0 )
  {
    v15 = a7;
    if ( v23 )
      Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SendDeviceUpdate(v12, a2, a7);
    v16 = v21[0] != 3 && v21[0] != 6;
    if ( !*((_BYTE *)a2 + 103) || !v24 && a3 && !v16 )
      return 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)a2 + 48LL))(a2) )
    {
      v21[0] = 1;
      *((_BYTE *)a2 + 104) = 1;
    }
    LOBYTE(v19) = v20;
    v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, _QWORD, _QWORD, _QWORD, int, char *, char *))(*(_QWORD *)v15 + 16LL))(
            v15,
            v21[0],
            *((unsigned int *)a2 + 2),
            *((unsigned int *)a2 + 3),
            v19,
            (char *)a2 + 288,
            (char *)a2 + 224);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27F,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v17);
      return v18;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25E,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v11);
    return v13;
  }
}
