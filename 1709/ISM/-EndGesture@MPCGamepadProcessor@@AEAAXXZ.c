/*
 * XREFs of ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180038C24
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180038768 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180038998 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGamepadProcessor::EndGesture(MPCGamepadProcessor *this)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  MPCGestureHandlerManager *Instance; // rcx
  _QWORD v7[359]; // [rsp+28h] [rbp-E0h] BYREF

  v7[1] = -2LL;
  memset(&v7[3], 0, 0xB20uLL);
  v7[164] = *(_QWORD *)((char *)this + 3588);
  *(_OWORD *)&v7[165] = *(_OWORD *)((char *)this + 3596);
  LODWORD(v7[167]) = *((_DWORD *)this + 904);
  v2 = (_OWORD *)((char *)this + 3584);
  v3 = &v7[100];
  v4 = 2LL;
  do
  {
    *v3 = *v2;
    v3[1] = v2[1];
    v3[2] = v2[2];
    v3[3] = v2[3];
    v3[4] = v2[4];
    v3[5] = v2[5];
    v3[6] = v2[6];
    v3 += 8;
    *(v3 - 1) = v2[7];
    v2 += 8;
    --v4;
  }
  while ( v4 );
  *v3 = *v2;
  v3[1] = v2[1];
  v3[2] = v2[2];
  v3[3] = v2[3];
  LODWORD(v7[162]) = 2;
  v7[2] = v7;
  v7[0] = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
  if ( v7[0] )
  {
    v5 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Instance = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::DownLevelTo2D(Instance);
  *((_DWORD *)this + 976) = 0;
}
