/*
 * XREFs of ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180046880
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
 *     ?IsPopulatingCursorData@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800555C8 (-IsPopulatingCursorData@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uer.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall MPCProcessor::OnGazeUpdate(MPCProcessor *this, struct InputInfo *a2)
{
  _OWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  struct MPCGestureHandlerManager *Instance; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct MPCGestureHandlerManager *v10; // rcx
  struct MPCGestureHandlerManager *v11; // rcx
  struct MPCGestureHandlerManager *v12; // rcx
  MPCGestureHandlerManager *v13; // rcx
  unsigned __int64 v14; // rbx
  struct MPCGestureHandlerManager *v15; // rcx
  struct MPCGestureHandlerManager *v16; // rcx
  struct MPCGestureHandlerManager *v17; // rcx
  unsigned __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 *v19; // [rsp+30h] [rbp-D8h]
  __int64 v20; // [rsp+38h] [rbp-D0h]
  _BYTE v21[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+60h] [rbp-A8h]
  _BYTE v23[496]; // [rsp+2A0h] [rbp+198h] BYREF
  int v24; // [rsp+490h] [rbp+388h]
  int v25; // [rsp+4A0h] [rbp+398h]
  int v26; // [rsp+4A4h] [rbp+39Ch]
  __int128 v27; // [rsp+4A8h] [rbp+3A0h]
  int WorkspaceId; // [rsp+4B8h] [rbp+3B0h]

  v20 = -2LL;
  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v4 = (_OWORD *)((char *)a2 + 600);
    if ( *((_BYTE *)a2 + 600) )
    {
      v19 = &v18;
      v5 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
      v18 = v5;
      if ( v5 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
      Instance = MPCGestureHandlerManager::GetInstance();
      if ( !(unsigned __int8)MPCGestureHandlerManager::IsInjecting(Instance, &v18) )
      {
        memset_0(v21, 0, 0x6C8uLL);
        v22 = 1736;
        v24 = 4;
        v25 = *((_DWORD *)a2 + 151);
        v26 = *((_DWORD *)a2 + 152);
        v27 = *(_OWORD *)((char *)a2 + 612);
        WorkspaceId = *((_DWORD *)a2 + 158);
        v7 = v23;
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
        v19 = &v18;
        v18 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
        if ( v5 )
          (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 8LL))(
            (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24),
            128LL);
        goto LABEL_22;
      }
    }
  }
  if ( !*((_QWORD *)this + 279) )
  {
    v19 = &v18;
    v9 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    v18 = v9;
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
    v10 = MPCGestureHandlerManager::GetInstance();
    if ( !(unsigned __int8)MPCGestureHandlerManager::IsInjecting(v10, &v18) )
    {
      v19 = &v18;
      v18 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
      if ( v9 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
      v11 = MPCGestureHandlerManager::GetInstance();
      if ( !(unsigned __int8)MPCGestureHandlerManager::IsHovering(v11, &v18) )
      {
LABEL_23:
        if ( !*((_QWORD *)this + 279) )
          goto LABEL_30;
        goto LABEL_24;
      }
    }
    memset_0(v21, 0, 0x6C8uLL);
    v22 = 1736;
    v24 = 2;
    v19 = &v18;
    v18 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
    v12 = MPCGestureHandlerManager::GetInstance();
    WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId(v12, &v18);
    v23[0] = 1;
    v23[312] = 1;
    v19 = &v18;
    v18 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    if ( v9 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
LABEL_22:
    v13 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v13);
    goto LABEL_23;
  }
LABEL_24:
  v19 = &v18;
  v14 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
  v18 = v14;
  if ( v14 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
  v15 = MPCGestureHandlerManager::GetInstance();
  if ( (unsigned __int8)MPCGestureHandlerManager::IsInjecting(v15, &v18) )
  {
    v19 = &v18;
    v18 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
    if ( v14 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
    v16 = MPCGestureHandlerManager::GetInstance();
    *((_BYTE *)a2 + 1720) = MPCGestureHandlerManager::IsPopulatingCursorData(v16, &v18);
  }
LABEL_30:
  v19 = &v18;
  v18 = (unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24);
  if ( v18 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24))
                                             + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCProcessor *)24));
  v17 = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::OnGazeUpdate(v17, &v18);
}
