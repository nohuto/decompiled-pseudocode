/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01D42F4
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01D1550 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A68 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  _QWORD *v17; // rax
  char v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v9 = *(_QWORD *)(a1 + 40);
    v10 = 96 * v9 + 8;
    v11 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v10, a3, a4);
    v16 = v11;
    if ( v11 >= 0 )
    {
      v18 = 0;
      **(_BYTE **)(a2 + 32) = *(_BYTE *)(a1 + 40);
      v19 = *(_QWORD *)(a1 + 24);
      v20 = *(_QWORD *)(a2 + 32) + 8LL;
      if ( v19 != a1 + 24 )
      {
        v19 -= 8LL;
        if ( v19 )
        {
          v21 = a1 + 24;
          do
          {
            *(_DWORD *)v20 = *(_DWORD *)(v19 + 48);
            *(_OWORD *)(v20 + 4) = *(_OWORD *)(v19 + 52);
            *(_OWORD *)(v20 + 20) = *(_OWORD *)(v19 + 68);
            *(_QWORD *)(v20 + 36) = *(_QWORD *)(v19 + 84);
            *(_DWORD *)(v20 + 44) = *(_DWORD *)(v19 + 92);
            *(_DWORD *)(v20 + 48) = *(_DWORD *)(v19 + 96);
            *(_DWORD *)(v20 + 52) = *(_DWORD *)(v19 + 100);
            *(_DWORD *)(v20 + 56) = *(_DWORD *)(v19 + 104);
            *(_QWORD *)(v20 + 64) = *(_QWORD *)(v19 + 112);
            *(_DWORD *)(v20 + 92) = *(_DWORD *)(v19 + 140);
            *(_OWORD *)(v20 + 72) = *(_OWORD *)(v19 + 120);
            *(_DWORD *)(v20 + 88) = *(_DWORD *)(v19 + 136);
            v20 += 96LL;
            v22 = *(_QWORD *)(v19 + 8);
            v19 = v22 - 8;
            if ( v22 == v21 )
              v19 = 0LL;
            ++v18;
          }
          while ( v19 );
        }
      }
      if ( v18 != **(_BYTE **)(a2 + 32) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v19, v12, v14, v15);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( v18 )
      {
        if ( v10 != v20 - *(_QWORD *)(a2 + 32) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v19, v12, v14, v15);
          WdLogEvent5_WdAssertion(v24);
        }
      }
      return 0LL;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v17[3] = v10;
      v17[4] = a1;
      v17[5] = v16;
      WdLogEvent5_WdError(v17);
      return (unsigned int)v16;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
