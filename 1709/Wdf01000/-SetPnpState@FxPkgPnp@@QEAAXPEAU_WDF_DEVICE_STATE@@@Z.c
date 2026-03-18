/*
 * XREFs of ?SetPnpState@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_STATE@@@Z @ 0x1C009E314
 * Callers:
 *     imp_WdfDeviceSetDeviceState @ 0x1C0077240 (imp_WdfDeviceSetDeviceState.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxPkgPnp::SetPnpState(FxPkgPnp *this, _WDF_DEVICE_STATE *State)
{
  _WDF_TRI_STATE Disabled; // r8d
  int v4; // r9d
  int v5; // r10d
  int v6; // r8d
  _WDF_TRI_STATE DontDisplayInUI; // ecx
  int v8; // ebp
  int v9; // esi
  int v10; // r11d
  _WDF_TRI_STATE Failed; // ecx
  _WDF_TRI_STATE NotDisableable; // ecx
  int v13; // r9d
  int v14; // ecx
  int v15; // ebx
  int v16; // r10d
  _WDF_TRI_STATE Removed; // r11d
  _WDF_TRI_STATE ResourcesChanged; // ecx
  int v19; // r9d
  int v20; // ebx
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  Disabled = State->Disabled;
  if ( Disabled )
  {
    if ( Disabled == WdfTrue )
    {
      v4 = 1;
      v5 = 17;
      v6 = 33;
    }
    else
    {
      v4 = 2;
      v5 = 18;
      v6 = 34;
    }
  }
  else
  {
    v4 = 0;
    v5 = 16;
    v6 = 32;
  }
  DontDisplayInUI = State->DontDisplayInUI;
  if ( DontDisplayInUI )
  {
    if ( DontDisplayInUI == WdfTrue )
    {
      v8 = 1028;
      v9 = 2052;
      v10 = 4;
    }
    else
    {
      v8 = 1032;
      v9 = 2056;
      v10 = 8;
    }
  }
  else
  {
    v10 = 0;
    v8 = 1024;
    v9 = 2048;
  }
  Failed = State->Failed;
  if ( Failed )
  {
    if ( Failed == WdfTrue )
      v6 = v5;
  }
  else
  {
    v6 = v4;
  }
  NotDisableable = State->NotDisableable;
  v13 = v10 | v6;
  if ( NotDisableable )
  {
    if ( NotDisableable == WdfTrue )
    {
      v14 = 64;
      v15 = 576;
      v16 = 320;
    }
    else
    {
      v14 = 128;
      v15 = 640;
      v16 = 384;
    }
  }
  else
  {
    v14 = 0;
    v15 = 512;
    v16 = 256;
  }
  Removed = State->Removed;
  if ( Removed )
  {
    if ( Removed == WdfTrue )
      v15 = v16;
  }
  else
  {
    v15 = v14;
  }
  ResourcesChanged = State->ResourcesChanged;
  v19 = v15 | v13;
  if ( ResourcesChanged )
  {
    if ( ResourcesChanged == WdfTrue )
    {
      v6 |= v8;
      v20 = v6 | v15;
    }
    else
    {
      v20 = v9 | v6 | v15;
    }
  }
  else
  {
    v20 = v19;
  }
  FxNonPagedObject::Lock(this, &irql, v6);
  v21 = irql;
  this->m_PnpStateAndCaps.Value = v20 | this->m_PnpStateAndCaps.Value & 0x3FFFF000;
  FxNonPagedObject::Unlock(this, v21, v22);
}
