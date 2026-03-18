/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0222014
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C020FEC4 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02107F0 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0045A8C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::Serialize(DMMVIDEOPRESENTTARGETSET *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  SIZE_T v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  _QWORD *v12; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r9
  unsigned __int8 v14; // si
  DMMVIDEOPRESENTTARGETSET *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = 1LL;
    if ( *((_QWORD *)this + 5) > 1uLL )
      v7 = *((_QWORD *)this + 5);
    v8 = 28 * v7 + 4;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v8);
    v11 = v9;
    if ( v9 >= 0 )
    {
      NextTarget = 0LL;
      v14 = 0;
      **(_BYTE **)(a2 + 32) = *((_BYTE *)this + 40);
      v15 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
      if ( v15 != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
        NextTarget = (DMMVIDEOPRESENTTARGETSET *)((char *)v15 - 8);
      for ( ; NextTarget; NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, NextTarget) )
      {
        v16 = *(_QWORD *)(a2 + 32);
        v17 = 28LL * v14;
        *(_DWORD *)(v17 + v16 + 4) = *((_DWORD *)NextTarget + 6);
        *(_DWORD *)(v17 + v16 + 8) = *((_DWORD *)NextTarget + 20);
        *(_DWORD *)(v17 + v16 + 12) = *((_DWORD *)NextTarget + 23);
        *(_DWORD *)(v17 + v16 + 16) = *((_DWORD *)NextTarget + 24);
        *(_BYTE *)(v17 + v16 + 20) = *((_BYTE *)NextTarget + 100);
        *(_DWORD *)(v17 + v16 + 24) = *((_DWORD *)NextTarget + 28);
        *(_DWORD *)(v17 + v16 + 28) = *((_DWORD *)NextTarget + 21);
        ++v14;
      }
      if ( v14 != **(_BYTE **)(a2 + 32) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v18);
      }
      return 0LL;
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v12[3] = v8;
      v12[4] = this;
      v12[5] = v11;
      WdLogEvent5_WdError(v12);
      return (unsigned int)v11;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
