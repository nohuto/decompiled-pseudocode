/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18000E75C
 * Callers:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001144C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800116B8 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18000DBE8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000EEE4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180075400 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
        CSecondaryWindowRepresentation *this,
        struct CWindowData *a2,
        char a3)
{
  unsigned int v3; // edi
  unsigned int v6; // r8d
  __int64 v7; // rdx
  int inserted; // eax
  int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-18h]
  CBaseObject *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0LL;
  if ( !*((_QWORD *)this + 4) )
    return v3;
  if ( !a3 )
  {
    v6 = *((_DWORD *)this + 38);
    v7 = 0LL;
    if ( !v6 )
      return v3;
    while ( *(struct CWindowData **)(*(_QWORD *)(*((_QWORD *)this + 16) + 8 * v7) + 32LL) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        return v3;
    }
    CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, v7);
    goto LABEL_27;
  }
  inserted = CSecondaryWindowRepresentation::Create(1LL, (__int64)this + 16, (__int64)a2, 0, 100, &v16);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v15 = 609;
LABEL_7:
    v10 = inserted;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v15);
    goto LABEL_27;
  }
  v11 = 1;
  v12 = *((unsigned int *)this + 38);
  v13 = v12 + 1;
  if ( (int)v12 + 1 >= (unsigned int)v12 )
    v11 = v12 + 1;
  v3 = v13 < (unsigned int)v12 ? 0x80070216 : 0;
  if ( v13 >= (unsigned int)v12 )
  {
    if ( v11 > *((_DWORD *)this + 37) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 128, 8LL, 1LL, &v16);
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 16) + 8 * v12) = v16;
      *((_DWORD *)this + 38) = v11;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    v15 = 611;
    v10 = v3;
    goto LABEL_9;
  }
  _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
  inserted = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v15 = 614;
    goto LABEL_7;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
               *((struct CVisual **)v16 + 6),
               0LL,
               0,
               1);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v15 = 617;
    goto LABEL_7;
  }
LABEL_27:
  if ( v16 )
    CBaseObject::Release(v16);
  return v3;
}
