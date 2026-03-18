/*
 * XREFs of ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DDC48
 * Callers:
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01DA204 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0008600 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0044A68 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  _QWORD *v17; // rax
  unsigned __int8 v18; // si
  _BYTE *v19; // rcx
  struct DMMVIDPNSOURCEMODE *i; // rdx
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
    if ( *((_QWORD *)this + 8) > 1uLL )
      v9 = *((_QWORD *)this + 8);
    v10 = 80 * v9;
    v11 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, 80 * v9, a3, a4);
    v16 = v11;
    if ( v11 >= 0 )
    {
      v18 = 0;
      v19 = *(_BYTE **)(a2 + 32);
      *v19 = *((_BYTE *)this + 64);
      i = (struct DMMVIDPNSOURCEMODE *)*((_QWORD *)this + 6);
      if ( i != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (struct DMMVIDPNSOURCEMODE *)((char *)i - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(
                                                                         this,
                                                                         i,
                                                                         v22,
                                                                         v15) )
        {
          v21 = *(_QWORD *)(a2 + 32);
          v22 = 9LL * v18;
          *(_DWORD *)(v21 + 8 * v22 + 8) = *((_DWORD *)i + 6);
          *(_OWORD *)(v21 + 8 * v22 + 16) = *(_OWORD *)((char *)i + 72);
          *(_OWORD *)(v21 + 8 * v22 + 32) = *(_OWORD *)((char *)i + 88);
          *(_OWORD *)(v21 + 8 * v22 + 48) = *(_OWORD *)((char *)i + 104);
          *(_QWORD *)(v21 + 8 * v22 + 64) = *((_QWORD *)i + 15);
          *(_DWORD *)(v21 + 8 * v22 + 72) = *((_DWORD *)i + 32);
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
