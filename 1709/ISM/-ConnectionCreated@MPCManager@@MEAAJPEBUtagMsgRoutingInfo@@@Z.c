/*
 * XREFs of ?ConnectionCreated@MPCManager@@MEAAJPEBUtagMsgRoutingInfo@@@Z @ 0x18005D880
 * Callers:
 *     ?Thunk_ConnectClient_0@?$IMPCManager_Receive@VMPCManager@@@@SAJPEAXPEAPEAX@Z @ 0x18005E670 (-Thunk_ConnectClient_0@-$IMPCManager_Receive@VMPCManager@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??A?$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@QEAAAEA_KAEBUtagMsgRoutingInfo@@@Z @ 0x18005E28C (--A-$map@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V-$allocator@U-$pair@$$.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManager::ConnectionCreated(MPCManager *this, const struct tagMsgRoutingInfo *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 *v6; // r8
  unsigned int v7; // r10d
  bool v8; // cf
  unsigned int v9; // ecx
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rax
  _OWORD *v15; // rax
  __int64 v16; // rcx
  _OWORD *v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rbx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  _BYTE v33[2624]; // [rsp+40h] [rbp-A48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A88h] [rbp+0h]
  __int64 v35; // [rsp+A98h] [rbp+10h] BYREF
  __int64 v36; // [rsp+AA0h] [rbp+18h] BYREF

  v35 = 0LL;
  if ( a2 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 14);
    v5 = v4;
    v6 = (__int64 *)v4[1];
    if ( !*((_BYTE *)v6 + 25) )
    {
      v7 = *(_DWORD *)a2;
      do
      {
        v8 = *((_DWORD *)v6 + 8) < v7;
        if ( *((_DWORD *)v6 + 8) == v7 )
          v8 = *((_DWORD *)v6 + 9) < *((_DWORD *)a2 + 1);
        if ( v8 )
        {
          v6 = (__int64 *)v6[2];
        }
        else
        {
          v5 = v6;
          v6 = (__int64 *)*v6;
        }
      }
      while ( !*((_BYTE *)v6 + 25) );
    }
    if ( v5 == v4 )
      goto LABEL_14;
    v9 = *((_DWORD *)v5 + 8);
    v10 = *(_DWORD *)a2 < v9;
    if ( *(_DWORD *)a2 == v9 )
      v10 = *((_DWORD *)a2 + 1) < *((_DWORD *)v5 + 9);
    if ( v10 )
LABEL_14:
      v5 = v4;
    if ( v5 == v4
      && (*(int (__fastcall **)(_QWORD, const struct tagMsgRoutingInfo *, __int64 *))(**((_QWORD **)this + 5) + 96LL))(
           *((_QWORD *)this + 5),
           a2,
           &v35) >= 0 )
    {
      *(_QWORD *)std::map<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>>::operator[]((int)this + 112) = v35;
      MPCHolographicInputManager::GetInstance();
      if ( *(_QWORD *)(v11 + 3120) )
      {
        MPCHolographicInputManager::GetInstance();
        v13 = **(__int64 ***)(v12 + 3336);
        MPCHolographicInputManager::GetInstance();
        v15 = (_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(v14 + 3336) + 96LL))(**(_QWORD **)(v14 + 3336));
        v16 = 20LL;
        v17 = v33;
        do
        {
          v18 = v15[1];
          *v17 = *v15;
          v19 = v15[2];
          v17[1] = v18;
          v20 = v15[3];
          v17[2] = v19;
          v21 = v15[4];
          v17[3] = v20;
          v22 = v15[5];
          v17[4] = v21;
          v23 = v15[6];
          v17[5] = v22;
          v24 = v15[7];
          v15 += 8;
          v17[6] = v23;
          v17 += 8;
          *(v17 - 1) = v24;
          --v16;
        }
        while ( v16 );
        v25 = *((_QWORD *)this + 2);
        v26 = v15[1];
        *v17 = *v15;
        v27 = v15[2];
        v17[1] = v26;
        v28 = v15[3];
        v29 = *v13;
        v17[2] = v27;
        v17[3] = v28;
        v30 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *, __int64))(v29 + 112))(v13, v17, 128LL);
        v36 = v35;
        v31 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int16, void *, _BYTE *, int))CoreUICallSend)(
                v25,
                &v36,
                1LL,
                1LL,
                2,
                &unk_1800E53E5,
                v33,
                v30);
        if ( v31 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x74,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
            (const char *)(unsigned int)v31);
      }
    }
  }
  return 0LL;
}
