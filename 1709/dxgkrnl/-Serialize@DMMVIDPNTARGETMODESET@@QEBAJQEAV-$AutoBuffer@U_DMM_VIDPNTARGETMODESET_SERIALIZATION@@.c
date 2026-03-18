/*
 * XREFs of ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F6670
 * Callers:
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01F3158 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00051A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00356D0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rax
  unsigned __int8 v13; // si
  _BYTE *v14; // rcx
  DMMVIDPNSOURCEMODESET *v15; // rdx
  struct DMMVIDPNSOURCEMODE *i; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax

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
      v13 = 0;
      v14 = *(_BYTE **)(a2 + 32);
      *v14 = *((_BYTE *)this + 64);
      v15 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
      if ( v15 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (DMMVIDPNSOURCEMODESET *)((char *)v15 - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
        {
          v17 = *(_QWORD *)(a2 + 32);
          v18 = 9LL * v13;
          *(_DWORD *)(v17 + 8 * v18 + 8) = *((_DWORD *)i + 6);
          *(_OWORD *)(v17 + 8 * v18 + 16) = *(_OWORD *)((char *)i + 72);
          *(_OWORD *)(v17 + 8 * v18 + 32) = *(_OWORD *)((char *)i + 88);
          *(_OWORD *)(v17 + 8 * v18 + 48) = *(_OWORD *)((char *)i + 104);
          *(_QWORD *)(v17 + 8 * v18 + 64) = *((_QWORD *)i + 15);
          *(_DWORD *)(v17 + 8 * v18 + 72) = *((_DWORD *)i + 32);
          ++v13;
        }
      }
      if ( v13 != **(_BYTE **)(a2 + 32) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v19);
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
