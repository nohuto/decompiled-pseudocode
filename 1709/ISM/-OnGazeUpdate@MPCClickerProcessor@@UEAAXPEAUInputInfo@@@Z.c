/*
 * XREFs of ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800551F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A3B0 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A574 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A6D8 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall MPCClickerProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  _OWORD *v4; // rbx
  _OWORD *v5; // rax
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  struct MPCGestureHandlerManager *v8; // rcx
  __int64 v9; // r14
  struct MPCGestureHandlerManager *v10; // rcx
  _OWORD *v11; // rax
  MPCGestureHandlerManager *Instance; // rcx
  struct MPCGestureHandlerManager *v13; // rcx
  unsigned __int64 v14; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 *v15; // [rsp+30h] [rbp-D8h]
  __int64 v16; // [rsp+38h] [rbp-D0h]
  _OWORD v17[178]; // [rsp+40h] [rbp-C8h] BYREF

  v16 = -2LL;
  v4 = (_OWORD *)((char *)a2 + 776);
  if ( *((_BYTE *)a2 + 776) )
  {
    memset(v17, 0, sizeof(v17));
    *((_QWORD *)&v17[80] + 1) = *(_QWORD *)((char *)a2 + 780);
    v17[81] = *(_OWORD *)((char *)a2 + 788);
    LODWORD(v17[82]) = *((_DWORD *)a2 + 202);
    v5 = (_OWORD *)((char *)&v17[48] + 8);
    v6 = 2LL;
    do
    {
      *v5 = *v4;
      v5[1] = v4[1];
      v5[2] = v4[2];
      v5[3] = v4[3];
      v5[4] = v4[4];
      v5[5] = v4[5];
      v5[6] = v4[6];
      v5 += 8;
      *(v5 - 1) = v4[7];
      v4 += 8;
      --v6;
    }
    while ( v6 );
    *v5 = *v4;
    v5[1] = v4[1];
    v5[2] = v4[2];
    v5[3] = v4[3];
    DWORD2(v17[79]) = 4;
    v15 = &v14;
    v14 = this & -(__int64)(this != 24);
    if ( v14 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 24)) + 8LL))(this & -(__int64)(this != 24));
LABEL_17:
    Instance = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(Instance);
    goto LABEL_18;
  }
  if ( !*(_QWORD *)(this + 504) )
  {
    v15 = &v14;
    v7 = this & -(__int64)(this != 24);
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 8LL))(this & -(__int64)(this != 24));
    v8 = MPCGestureHandlerManager::GetInstance();
    if ( (unsigned __int8)MPCGestureHandlerManager::IsInjecting(v8, &v14) )
    {
      memset(v17, 0, sizeof(v17));
      v9 = 2LL;
      DWORD2(v17[79]) = 2;
      v15 = &v14;
      v14 = v7;
      if ( v7 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 8LL))(v7);
      v10 = MPCGestureHandlerManager::GetInstance();
      LODWORD(v17[82]) = MPCGestureHandlerManager::GetWorkspaceId(v10, &v14);
      v11 = (_OWORD *)((char *)&v17[48] + 8);
      do
      {
        *v11 = *v4;
        v11[1] = v4[1];
        v11[2] = v4[2];
        v11[3] = v4[3];
        v11[4] = v4[4];
        v11[5] = v4[5];
        v11[6] = v4[6];
        v11 += 8;
        *(v11 - 1) = v4[7];
        v4 += 8;
        --v9;
      }
      while ( v9 );
      *v11 = *v4;
      v11[1] = v4[1];
      v11[2] = v4[2];
      v11[3] = v4[3];
      v15 = &v14;
      v14 = v7;
      if ( v7 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 8LL))(v7);
      goto LABEL_17;
    }
  }
LABEL_18:
  v15 = &v14;
  v14 = this & -(__int64)(this != 24);
  if ( v14 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)(this & -(__int64)(this != 24)) + 8LL))(this & -(__int64)(this != 24));
  v13 = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::OnGazeUpdate(v13, &v14);
}
