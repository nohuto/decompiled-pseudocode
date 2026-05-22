/*
 * XREFs of ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x18009501C
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094A18 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094CB0 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGamepadProcessor::EndGesture(MPCGamepadProcessor *this)
{
  _OWORD *v2; // rax
  char *v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  MPCGestureHandlerManager *v6; // rax
  const char *v7; // r9
  unsigned __int64 v8[3]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v9[16]; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+60h] [rbp-A8h]
  char v11; // [rsp+2A0h] [rbp+198h] BYREF
  int v12; // [rsp+490h] [rbp+388h]
  int v13; // [rsp+4A0h] [rbp+398h]
  int v14; // [rsp+4A4h] [rbp+39Ch]
  __int128 v15; // [rsp+4A8h] [rbp+3A0h]
  int v16; // [rsp+4B8h] [rbp+3B0h]

  v8[1] = -2LL;
  memset_0(v9, 0, 0x6C8uLL);
  v10 = 1736;
  v13 = *((_DWORD *)this + 1051);
  v14 = *((_DWORD *)this + 1052);
  v15 = *(_OWORD *)((char *)this + 4212);
  v16 = *((_DWORD *)this + 1058);
  v2 = (_OWORD *)((char *)this + 4200);
  v3 = &v11;
  v4 = 2LL;
  do
  {
    *(_OWORD *)v3 = *v2;
    *((_OWORD *)v3 + 1) = v2[1];
    *((_OWORD *)v3 + 2) = v2[2];
    *((_OWORD *)v3 + 3) = v2[3];
    *((_OWORD *)v3 + 4) = v2[4];
    *((_OWORD *)v3 + 5) = v2[5];
    *((_OWORD *)v3 + 6) = v2[6];
    v3 += 128;
    *((_OWORD *)v3 - 1) = v2[7];
    v2 += 8;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)v3 = *v2;
  *((_OWORD *)v3 + 1) = v2[1];
  *((_OWORD *)v3 + 2) = v2[2];
  *((_OWORD *)v3 + 3) = v2[3];
  v12 = 2;
  v8[2] = (unsigned __int64)v8;
  v8[0] = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
  if ( v8[0] )
  {
    v5 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::DownLevelTo2D(v6, (__int64)v9, v8, v7);
  *((_DWORD *)this + 1130) = 0;
}
