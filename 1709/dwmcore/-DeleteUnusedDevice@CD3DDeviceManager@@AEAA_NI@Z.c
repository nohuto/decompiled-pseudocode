/*
 * XREFs of ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18011DBD8
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18011DD58 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 * Callees:
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180021D00 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800BE2A8 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD3DDeviceManager::DeleteUnusedDevice(CD3DDeviceManager *this, unsigned int a2)
{
  int v2; // r9d
  char v3; // si
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r9
  bool v7; // cf
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = dword_18026EF78;
  v3 = 0;
  v4 = 3LL * a2;
  v5 = *(_QWORD *)(qword_18026EF60 + 24LL * a2);
  if ( !*(_DWORD *)(v5 + 480)
    && (*(int *)(v5 + 888) < 0
     || !*(_DWORD *)(*(_QWORD *)(v5 + 144) + 16LL)
     && !*(_DWORD *)(v5 + 968)
     && GetCurrentFrameId() >= *(_QWORD *)(v5 + 1032)) )
  {
    v6 = (unsigned int)(v2 - 1);
    v7 = a2 < (unsigned int)qword_18026EFB0;
    v3 = 1;
    v8 = qword_18026EF60;
    if ( v7 )
    {
      v9 = qword_18026EFB0 - 1;
      LODWORD(qword_18026EFB0) = v9;
      *(_OWORD *)(qword_18026EF60 + 8 * v4) = *(_OWORD *)(qword_18026EF60 + 24LL * v9);
      *(_QWORD *)(v8 + 8 * v4 + 16) = *(_QWORD *)(v8 + 24LL * v9 + 16);
      v10 = qword_18026EF60;
      v11 = 3LL * (unsigned int)qword_18026EFB0;
      *(_OWORD *)(qword_18026EF60 + 8 * v11) = *(_OWORD *)(qword_18026EF60 + 24 * v6);
      *(_QWORD *)(v10 + 8 * v11 + 16) = *(_QWORD *)(v10 + 24 * v6 + 16);
    }
    else
    {
      *(_OWORD *)(qword_18026EF60 + 8 * v4) = *(_OWORD *)(qword_18026EF60 + 24 * v6);
      *(_QWORD *)(v8 + 8 * v4 + 16) = *(_QWORD *)(v8 + 24 * v6 + 16);
    }
    dword_18026EF78 = v6;
    if ( !(_DWORD)v6 )
      DynArrayImpl<0>::ShrinkToSize((__int64)&qword_18026EF60, 0x18u);
    v12 = *(_QWORD *)(v5 + 648);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*(_QWORD *)(v5 + 648));
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v5, 1);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12) )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    if ( qword_18026EF20 )
      CSurfaceManager::ResetTokenThread(qword_18026EF20);
  }
  return v3;
}
