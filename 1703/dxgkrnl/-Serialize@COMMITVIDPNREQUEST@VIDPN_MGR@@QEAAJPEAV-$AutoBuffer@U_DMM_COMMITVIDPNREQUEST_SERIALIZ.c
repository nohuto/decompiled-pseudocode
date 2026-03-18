/*
 * XREFs of ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C0044D10
 * Callers:
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01D402C (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0043D18 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A68 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCF34 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  void **v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+28h] [rbp-40h]
  void **v19; // [rsp+38h] [rbp-30h]
  void *Src; // [rsp+40h] [rbp-28h]
  size_t Size; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+50h] [rbp-18h]

  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *(_QWORD *)(a1 + 48);
  Src = 0LL;
  Size = 0LL;
  v17 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v19 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v18 = 0LL;
  v22 = 3;
  v8 = DMMVIDPN::Serialize(v7, &v17);
  v13 = v8;
  if ( v8 >= 0 )
  {
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, Size + 16, v11, v12);
    memmove((void *)(*(_QWORD *)(a2 + 32) + 16LL), Src, Size);
    LODWORD(v13) = 0;
    **(_DWORD **)(a2 + 32) = *(_DWORD *)(a1 + 56);
    v15 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v15 + 4) = *(_QWORD *)(a1 + 60);
    *(_DWORD *)(v15 + 12) = *(_DWORD *)(a1 + 68);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdError(v14);
  }
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v17);
  return (unsigned int)v13;
}
