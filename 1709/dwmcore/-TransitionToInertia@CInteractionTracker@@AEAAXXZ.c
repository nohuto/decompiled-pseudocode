/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EE90
 * Callers:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016AE08 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18016AF3C (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18016B3C0 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18016C330 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18016CA44 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x180169D2C (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016B5C0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18016BF8C (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18016C270 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E588 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016EAF0 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::TransitionToInertia(CInteractionTracker *this)
{
  char v2; // di
  int v3; // ecx
  char v4; // si
  int v5; // ecx
  int v6; // ecx
  CInteractionTracker *v7; // rcx
  unsigned int v8; // ecx
  __int64 *v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // kr00_8
  CInteractionTracker *v13; // rcx
  CInteractionTracker *v14; // rcx
  __int64 v15; // [rsp+D8h] [rbp+37h] BYREF
  __int64 v16; // [rsp+E0h] [rbp+3Fh] BYREF
  __int64 v17; // [rsp+E8h] [rbp+47h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 38);
  v4 = 0;
  if ( !v3 )
    goto LABEL_5;
  v5 = v3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
        && (CInteractionTracker::IsOutOfBounds(v13) || CInteractionTracker::HasImpulse(v14)) )
      {
        v2 = 1;
      }
      v4 = v2;
LABEL_8:
      if ( !v2 )
        return;
      goto LABEL_9;
    }
    if ( v6 != 1 )
      return;
LABEL_5:
    if ( !CInteractionTracker::IsOutOfBounds(this) && !CInteractionTracker::HasImpulse(v7) )
      return;
    v2 = 1;
    goto LABEL_8;
  }
LABEL_9:
  CInteractionTracker::StopCustomAnimations(this);
  CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)this);
  if ( v4 )
  {
    v15 = *((_QWORD *)this + 49);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v15);
    v16 = *((_QWORD *)this + 50);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v16);
    v17 = *((_QWORD *)this + 48);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v17);
    v8 = 0;
    v9 = &v15;
    do
    {
      v10 = *v9;
      ++v8;
      ++v9;
      *(_BYTE *)(v10 + 296) |= 4u;
    }
    while ( v8 < 3 );
    `vector destructor iterator'(
      (char *)&v15,
      8LL,
      3LL,
      (void (__fastcall *)(CDrawListBitmap *))Microsoft::WRL::ComPtr<ID3D11InputLayout>::~ComPtr<ID3D11InputLayout>);
  }
  v11 = *((_QWORD *)this + 69);
  if ( v11 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 68) + 372LL);
    if ( COERCE_FLOAT(*(_OWORD *)(*((_QWORD *)this + 68) + 372LL)) != 0.0 || *((float *)&v12 + 1) != 0.0 )
      CInteraction::ReportInertiaStart(
        v11,
        HIDWORD(*(_QWORD *)(*((_QWORD *)this + 68) + 404LL)),
        *(float *)&v12,
        *((float *)&v12 + 1));
  }
  CInteractionTracker::SetState((__int64)this, 2);
}
