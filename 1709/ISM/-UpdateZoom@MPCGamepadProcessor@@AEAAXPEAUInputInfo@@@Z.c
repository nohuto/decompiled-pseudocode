/*
 * XREFs of ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180038998
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
void __fastcall MPCGamepadProcessor::UpdateZoom(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  float v3; // xmm0_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  char *v6; // rdi
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  float v11; // xmm3_4
  char v12; // al
  float v13; // xmm0_4
  char v14; // cl
  unsigned __int64 v15; // rcx
  MPCGestureHandlerManager *Instance; // rcx
  unsigned __int64 v17; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v19; // [rsp+38h] [rbp-D0h]
  _OWORD v20[178]; // [rsp+40h] [rbp-C8h] BYREF

  v18 = -2LL;
  v3 = *((double *)this + 434);
  v4 = (float)*((double *)this + 435) - v3;
  v5 = (float)*((double *)this + 443) - (float)*((double *)this + 442);
  v6 = (char *)a2 + 776;
  memset(v20, 0, sizeof(v20));
  *((_QWORD *)&v20[80] + 1) = *(_QWORD *)(v6 + 4);
  v20[81] = *(_OWORD *)(v6 + 12);
  LODWORD(v20[82]) = *((_DWORD *)v6 + 8);
  v7 = v6;
  v8 = (_OWORD *)((char *)&v20[48] + 8);
  v9 = 2LL;
  v10 = 128LL;
  do
  {
    *v8 = *v7;
    v8[1] = v7[1];
    v8[2] = v7[2];
    v8[3] = v7[3];
    v8[4] = v7[4];
    v8[5] = v7[5];
    v8[6] = v7[6];
    v8 += 8;
    *(v8 - 1) = v7[7];
    v7 += 8;
    --v9;
  }
  while ( v9 );
  *v8 = *v7;
  v8[1] = v7[1];
  v8[2] = v7[2];
  v8[3] = v7[3];
  v11 = *((float *)this + 978);
  v12 = 1;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm) <= v11 || (LOBYTE(v9) = 1, !*v6) )
    LOBYTE(v9) = 0;
  if ( *v6 && v6[2] || (v14 = 0, *((_DWORD *)this + 976) == 2) )
    v14 = 1;
  if ( !(_BYTE)v9
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm), v13 > v11)
    || (LOBYTE(v10) = 1, *((_DWORD *)this + 976)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( *((_DWORD *)this + 976) != 2 )
  {
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  if ( (_BYTE)v9 )
  {
    if ( !v14 )
      goto LABEL_21;
    goto LABEL_17;
  }
LABEL_18:
  if ( v14 && (_BYTE)v10 )
    *((_DWORD *)this + 976) = 2;
LABEL_21:
  if ( v12 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( *((_DWORD *)this + 976) == 2 )
  {
    *((float *)&v20[80] + 1) = (float)((float)(v4 * *((float *)this + 981)) * *((float *)this + 1002)) + 1.0;
    DWORD2(v20[79]) = 6;
    v19 = &v17;
    v15 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
    v17 = v15;
    if ( v15 )
      (*(void (__fastcall **)(unsigned __int64, __int64, __int64, _QWORD, unsigned __int64, __int64, unsigned __int64 *))(*(_QWORD *)v15 + 8LL))(
        v15,
        v9,
        v10,
        0LL,
        v17,
        v18,
        v19);
    Instance = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(Instance);
  }
}
