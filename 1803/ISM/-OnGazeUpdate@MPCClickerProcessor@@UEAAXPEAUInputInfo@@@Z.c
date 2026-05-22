/*
 * XREFs of ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180048F80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800499D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054C5C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054E2C (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054FA0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005506C (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCClickerProcessor::OnGazeUpdate(MPCClickerProcessor *this, struct InputInfo *a2)
{
  _OWORD *v4; // rbx
  unsigned __int64 v5; // rdi
  struct MPCGestureHandlerManager *Instance; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct MPCGestureHandlerManager *v10; // rcx
  struct MPCGestureHandlerManager *v11; // rcx
  struct MPCGestureHandlerManager *v12; // rcx
  MPCGestureHandlerManager *v13; // rcx
  struct MPCGestureHandlerManager *v14; // rcx
  unsigned __int64 v15; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 *v16; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+38h] [rbp-D0h]
  _BYTE v18[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+60h] [rbp-A8h]
  _BYTE v20[496]; // [rsp+2A0h] [rbp+198h] BYREF
  int v21; // [rsp+490h] [rbp+388h]
  int v22; // [rsp+4A0h] [rbp+398h]
  int v23; // [rsp+4A4h] [rbp+39Ch]
  __int128 v24; // [rsp+4A8h] [rbp+3A0h]
  int WorkspaceId; // [rsp+4B8h] [rbp+3B0h]

  v17 = -2LL;
  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v4 = (_OWORD *)((char *)a2 + 600);
    if ( *((_BYTE *)a2 + 600) )
    {
      v16 = &v15;
      v5 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
      v15 = v5;
      if ( v5 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
      Instance = MPCGestureHandlerManager::GetInstance();
      if ( !(unsigned __int8)MPCGestureHandlerManager::IsInjecting(Instance, &v15) )
      {
        memset_0(v18, 0, 0x6C8uLL);
        v19 = 1736;
        v22 = *((_DWORD *)a2 + 151);
        v23 = *((_DWORD *)a2 + 152);
        v24 = *(_OWORD *)((char *)a2 + 612);
        WorkspaceId = *((_DWORD *)a2 + 158);
        v7 = v20;
        v8 = 2LL;
        do
        {
          *v7 = *v4;
          v7[1] = v4[1];
          v7[2] = v4[2];
          v7[3] = v4[3];
          v7[4] = v4[4];
          v7[5] = v4[5];
          v7[6] = v4[6];
          v7 += 8;
          *(v7 - 1) = v4[7];
          v4 += 8;
          --v8;
        }
        while ( v8 );
        *v7 = *v4;
        v7[1] = v4[1];
        v7[2] = v4[2];
        v7[3] = v4[3];
        v21 = 4;
        v16 = &v15;
        v15 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
        if ( v5 )
          (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 8LL))(
            (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24),
            128LL);
LABEL_22:
        v13 = MPCGestureHandlerManager::GetInstance();
        MPCGestureHandlerManager::DownLevelTo2D(v13);
        goto LABEL_23;
      }
    }
  }
  if ( !*((_QWORD *)this + 279) )
  {
    v16 = &v15;
    v9 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
    v15 = v9;
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
    v10 = MPCGestureHandlerManager::GetInstance();
    if ( (unsigned __int8)MPCGestureHandlerManager::IsInjecting(v10, &v15) )
      goto LABEL_18;
    v16 = &v15;
    v15 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
    v11 = MPCGestureHandlerManager::GetInstance();
    if ( (unsigned __int8)MPCGestureHandlerManager::IsHovering(v11, &v15) )
    {
LABEL_18:
      memset_0(v18, 0, 0x6C8uLL);
      v19 = 1736;
      v21 = 2;
      v16 = &v15;
      v15 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
      if ( v9 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
      v12 = MPCGestureHandlerManager::GetInstance();
      WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId(v12, &v15);
      v20[0] = 1;
      v20[312] = 1;
      v16 = &v15;
      v15 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
      if ( v9 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
      goto LABEL_22;
    }
  }
LABEL_23:
  v16 = &v15;
  v15 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
  if ( v15 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24))
                                             + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
  v14 = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::OnGazeUpdate(v14, &v15);
}
