/*
 * XREFs of ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0223B4C
 * Callers:
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C021F108 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0024340 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0045A8C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  _QWORD *v12; // rax
  const struct DMMVIDPNSOURCEMODE *NextMode; // r9
  unsigned __int8 v14; // si
  DMMVIDPNSOURCEMODESET *v15; // rcx
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
    if ( *((_QWORD *)this + 8) > 1uLL )
      v7 = *((_QWORD *)this + 8);
    v8 = 80 * v7;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, 80 * v7);
    v11 = v9;
    if ( v9 >= 0 )
    {
      NextMode = 0LL;
      v14 = 0;
      **(_BYTE **)(a2 + 32) = *((_BYTE *)this + 64);
      v15 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
      if ( v15 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
        NextMode = (DMMVIDPNSOURCEMODESET *)((char *)v15 - 8);
      for ( ; NextMode; NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode) )
      {
        v16 = *(_QWORD *)(a2 + 32);
        v17 = 9LL * v14;
        *(_DWORD *)(v16 + 8 * v17 + 8) = *((_DWORD *)NextMode + 6);
        *(_OWORD *)(v16 + 8 * v17 + 16) = *(_OWORD *)((char *)NextMode + 72);
        *(_OWORD *)(v16 + 8 * v17 + 32) = *(_OWORD *)((char *)NextMode + 88);
        *(_OWORD *)(v16 + 8 * v17 + 48) = *(_OWORD *)((char *)NextMode + 104);
        *(_QWORD *)(v16 + 8 * v17 + 64) = *((_QWORD *)NextMode + 15);
        *(_DWORD *)(v16 + 8 * v17 + 72) = *((_DWORD *)NextMode + 32);
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
