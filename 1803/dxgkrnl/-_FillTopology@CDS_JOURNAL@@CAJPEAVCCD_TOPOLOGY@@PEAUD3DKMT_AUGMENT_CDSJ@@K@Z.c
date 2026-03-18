/*
 * XREFs of ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00D78B0
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00D8140 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B358C (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00B3948 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D7B0C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 */

__int64 __fastcall CDS_JOURNAL::_FillTopology(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // si
  unsigned __int16 v9; // si
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int16 v14; // dx
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // [rsp+68h] [rbp+20h] BYREF

  CCD_TOPOLOGY::Clear(this);
  v8 = 0;
  while ( 1 )
  {
    v9 = v8 + 1;
    v20 = v9;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(this, v9, v6, v7) < v9 )
      break;
    if ( a3 == 15 )
    {
      v11 = CCD_TOPOLOGY::RetrievePersisted(this, 0xFu, &v20);
    }
    else
    {
      if ( a3 != 64 )
      {
        LODWORD(v12) = -1073741811;
        goto LABEL_25;
      }
      v11 = CCD_TOPOLOGY::RetrieveActive(this, 0, 0, 0, &v20);
    }
    LODWORD(v12) = v11;
    if ( v11 >= 0
      && a2
      && ((v13 = *((_QWORD *)this + 8)) == 0 ? (v14 = 0) : (v14 = *(_WORD *)(v13 + 20)),
          !v13 ? (v10 = 0LL) : (v10 = *(unsigned __int16 *)(v13 + 22)),
          v14 >= (unsigned __int16)v10) )
    {
      LODWORD(v12) = -1073741789;
      v8 = v20 + 1;
    }
    else
    {
      v8 = v20;
    }
    if ( (_DWORD)v12 != -1073741789 )
    {
      if ( (int)v12 >= 0 )
      {
        if ( !a2 )
          return (unsigned int)v12;
        if ( a3 != 64 )
          return (unsigned int)v12;
        v15 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 1);
        v12 = v15;
        if ( v15 >= 0 )
          return (unsigned int)v12;
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v18[3] = v12;
LABEL_27:
        v18[4] = this;
        v18[5] = *((_QWORD *)this + 8);
        v18[6] = a2;
        WdLogEvent5_WdError(v18);
        return (unsigned int)v12;
      }
LABEL_25:
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v18[3] = (int)v12;
      goto LABEL_27;
    }
  }
  v19 = WdLogNewEntry5_WdLowResource(v10);
  *(_QWORD *)(v19 + 24) = v9;
  WdLogEvent5_WdLowResource(v19);
  return 3221225495LL;
}
