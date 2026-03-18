/*
 * XREFs of ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801407A8
 * Callers:
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18008906C (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800C6690 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x1800D82A0 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD3DDeviceManager::DeleteUnusedDevice(CD3DDeviceManager *this, unsigned int a2)
{
  int v2; // r8d
  __int64 *v3; // r10
  char v4; // bp
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  CSurfaceManager *v16; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 38);
  v3 = (__int64 *)((char *)this + 128);
  v4 = 0;
  v7 = 3LL * a2;
  v8 = *(_QWORD *)(*((_QWORD *)this + 16) + 24LL * a2);
  if ( !*(_DWORD *)(v8 + 480)
    && (*(int *)(v8 + 888) < 0
     || !*(_DWORD *)(*(_QWORD *)(v8 + 144) + 16LL)
     && !*(_DWORD *)(v8 + 968)
     && GetCurrentFrameId() >= *(_QWORD *)(v8 + 1032)) )
  {
    v9 = *((_DWORD *)this + 52);
    v10 = (unsigned int)(v2 - 1);
    v11 = *v3;
    v4 = 1;
    if ( a2 >= v9 )
    {
      *(_OWORD *)(v11 + 8 * v7) = *(_OWORD *)(v11 + 24 * v10);
      *(_QWORD *)(v11 + 8 * v7 + 16) = *(_QWORD *)(v11 + 24 * v10 + 16);
    }
    else
    {
      v12 = v9 - 1;
      *((_DWORD *)this + 52) = v12;
      *(_OWORD *)(v11 + 8 * v7) = *(_OWORD *)(v11 + 24 * v12);
      *(_QWORD *)(v11 + 8 * v7 + 16) = *(_QWORD *)(v11 + 24 * v12 + 16);
      v13 = *v3;
      v14 = 3LL * *((unsigned int *)this + 52);
      *(_OWORD *)(v13 + 8 * v14) = *(_OWORD *)(*v3 + 24 * v10);
      *(_QWORD *)(v13 + 8 * v14 + 16) = *(_QWORD *)(v13 + 24 * v10 + 16);
    }
    *((_DWORD *)this + 38) = v10;
    if ( !(_DWORD)v10 )
      DynArrayImpl<0>::ShrinkToSize((__int64)v3, 0x18u);
    v15 = *(_QWORD *)(v8 + 648);
    if ( v15 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*(_QWORD *)(v8 + 648));
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v8, 1);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15) )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v16 = (CSurfaceManager *)*((_QWORD *)this + 8);
    if ( v16 )
      CSurfaceManager::ResetTokenThread(v16);
  }
  return v4;
}
