/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DC918
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01D0C74 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01D1550 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A68 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::Serialize(
        DMMVIDEOPRESENTTARGETSET *this,
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
  __int64 v16; // rbp
  _QWORD *v17; // rax
  unsigned __int8 v18; // si
  _BYTE *v19; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = 1LL;
    if ( *((_QWORD *)this + 5) > 1uLL )
      v9 = *((_QWORD *)this + 5);
    v10 = 28 * v9 + 4;
    v11 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v10, a3, a4);
    v16 = v11;
    if ( v11 >= 0 )
    {
      v18 = 0;
      v19 = *(_BYTE **)(a2 + 32);
      *v19 = *((_BYTE *)this + 40);
      i = (const struct DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 3);
      if ( i != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)((char *)i - 8);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i, v22, v15) )
        {
          v21 = *(_QWORD *)(a2 + 32);
          v22 = 28LL * v18;
          *(_DWORD *)(v22 + v21 + 4) = *((_DWORD *)i + 6);
          *(_DWORD *)(v22 + v21 + 8) = *((_DWORD *)i + 20);
          *(_DWORD *)(v22 + v21 + 12) = *((_DWORD *)i + 22);
          *(_DWORD *)(v22 + v21 + 16) = *((_DWORD *)i + 23);
          *(_BYTE *)(v22 + v21 + 20) = *((_BYTE *)i + 96);
          *(_DWORD *)(v22 + v21 + 24) = *((_DWORD *)i + 28);
          *(_DWORD *)(v22 + v21 + 28) = *((_DWORD *)i + 21);
          ++v18;
        }
      }
      if ( v18 != **(_BYTE **)(a2 + 32) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v19, i, v14, v15);
        WdLogEvent5_WdAssertion(v23);
      }
      return 0LL;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v17[3] = v10;
      v17[4] = this;
      v17[5] = v16;
      WdLogEvent5_WdError(v17);
      return (unsigned int)v16;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(this, 0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
