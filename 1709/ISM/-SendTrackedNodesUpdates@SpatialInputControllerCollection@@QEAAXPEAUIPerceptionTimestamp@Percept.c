/*
 * XREFs of ?SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800946C8
 * Callers:
 *     _lambda_4a72313d4a7b8def72ed26018d805a27_::_lambda_invoker_cdecl_ @ 0x180091CC0 (_lambda_4a72313d4a7b8def72ed26018d805a27_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?UpdateRigTransforms@SpatialInputControllerCollection@@AEAAXPEAUIPerceptionTimestamp@Perception@Windows@@PEA_J@Z @ 0x180091444 (-UpdateRigTransforms@SpatialInputControllerCollection@@AEAAXPEAUIPerceptionTimestamp@Perception@.c)
 *     ?PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKK_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@@Z @ 0x180091680 (-PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SpatialInputControllerCollection::SendTrackedNodesUpdates(
        SpatialInputControllerCollection *this,
        struct Windows::Perception::IPerceptionTimestamp *a2)
{
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // rcx
  struct SpatialInteractionDevices::SpatialInteractionController *v8; // rdx
  __int64 *v9; // rax
  __int64 *i; // rax
  struct Windows::Internal::Holographic::ISpatialGraphNodeReference *v11; // [rsp+80h] [rbp+8h]
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  char *v13; // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  v11 = 0LL;
  SpatialInputControllerCollection::UpdateRigTransforms(this, a2, (LARGE_INTEGER *)&v12);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  v4 = *((_QWORD *)this + 401);
  if ( v4 )
  {
    v3 = (struct Windows::Internal::Holographic::ISpatialGraphNodeReference *)*((_QWORD *)this + 401);
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *))(*(_QWORD *)v4 + 8LL))(v3);
    v11 = v3;
  }
  if ( this != (SpatialInputControllerCollection *)-3136LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2816));
  v13 = (char *)this + 2816;
  v5 = (__int64 *)*((_QWORD *)this + 357);
  v6 = (__int64 *)*v5;
  while ( v6 != v5 )
  {
    v7 = v6[5];
    if ( *(_BYTE *)(v7 + 1064)
      && !*(_BYTE *)(v7 + 1088)
      && ((v8 = (struct SpatialInteractionDevices::SpatialInteractionController *)v6[5], !*((_BYTE *)v8 + 352))
       || *((_BYTE *)v8 + 800)
       || *((_BYTE *)v8 + 401)) )
    {
      v3 = v11;
      SpatialInputControllerCollection::PrepareAndSendInputInfo(this, v8, 0LL, 0, *((_DWORD *)v6 + 8), v12, v11);
    }
    else
    {
      v3 = v11;
    }
    if ( !*((_BYTE *)v6 + 25) )
    {
      v9 = (__int64 *)v6[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        do
        {
          v6 = v9;
          v9 = (__int64 *)*v9;
        }
        while ( !*((_BYTE *)v9 + 25) );
      }
    }
  }
  if ( this != (SpatialInputControllerCollection *)-2816LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 2816));
  if ( v3 )
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *))(*(_QWORD *)v3 + 16LL))(v3);
}
