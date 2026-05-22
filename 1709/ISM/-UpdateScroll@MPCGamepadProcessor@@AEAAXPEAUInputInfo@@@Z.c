/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180038768
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180038C24 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  int v6; // r14d
  int v7; // esi
  bool v8; // cl
  char *v9; // rbx
  bool v10; // al
  float v11; // xmm2_4
  _OWORD *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  MPCGestureHandlerManager *Instance; // rcx
  _QWORD v16[359]; // [rsp+28h] [rbp-E0h] BYREF

  v16[1] = -2LL;
  v4 = *((_DWORD *)this + 866);
  v5 = v4 >> 9;
  v6 = ((v4 & 0x80) == 0) - 1;
  if ( (v4 & 0x40) != 0 )
    v6 = (v4 & 0x80) == 0;
  v7 = (v4 >> 8) & 1;
  if ( (v5 & 1) != 0 )
    --v7;
  v8 = v6 || v7;
  v9 = (char *)a2 + 776;
  v10 = *v9 && v9[2] || *((_DWORD *)this + 976) == 1;
  if ( v8 && v10 )
  {
    *((_DWORD *)this + 976) = 1;
    memset(&v16[3], 0, 0xB20uLL);
    v16[164] = *(_QWORD *)(v9 + 4);
    *(_OWORD *)&v16[165] = *(_OWORD *)(v9 + 12);
    LODWORD(v16[167]) = *((_DWORD *)v9 + 8);
    v11 = *((float *)this + 980);
    *((float *)&v16[162] + 1) = (float)v7 * v11;
    *(float *)&v16[163] = (float)v6 * v11;
    LODWORD(v16[162]) = 5;
    v12 = &v16[100];
    v13 = 2LL;
    do
    {
      *v12 = *(_OWORD *)v9;
      v12[1] = *((_OWORD *)v9 + 1);
      v12[2] = *((_OWORD *)v9 + 2);
      v12[3] = *((_OWORD *)v9 + 3);
      v12[4] = *((_OWORD *)v9 + 4);
      v12[5] = *((_OWORD *)v9 + 5);
      v12[6] = *((_OWORD *)v9 + 6);
      v12 += 8;
      *(v12 - 1) = *((_OWORD *)v9 + 7);
      v9 += 128;
      --v13;
    }
    while ( v13 );
    *v12 = *(_OWORD *)v9;
    v12[1] = *((_OWORD *)v9 + 1);
    v12[2] = *((_OWORD *)v9 + 2);
    v12[3] = *((_OWORD *)v9 + 3);
    v16[2] = v16;
    v14 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
    v16[0] = v14;
    if ( v14 )
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, 128LL);
    Instance = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(Instance);
  }
  else if ( *((_DWORD *)this + 976) == 1 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
}
