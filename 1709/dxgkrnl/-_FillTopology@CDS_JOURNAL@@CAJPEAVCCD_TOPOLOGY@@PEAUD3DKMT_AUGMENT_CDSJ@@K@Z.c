/*
 * XREFs of ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00E5360
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00E12AC (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DF6CC (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00E5108 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 */

__int64 __fastcall CDS_JOURNAL::_FillTopology(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2, int a3)
{
  unsigned __int16 v6; // di
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int16 v12; // dx
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  unsigned __int16 v18; // [rsp+68h] [rbp+20h] BYREF

  CCD_TOPOLOGY::Clear(this);
  v6 = 0;
  while ( 1 )
  {
    v7 = v6 + 1;
    v18 = v7;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(this, v7) < v7 )
      break;
    if ( a3 == 15 )
    {
      v9 = CCD_TOPOLOGY::RetrievePersisted(this, 0xFu, &v18);
    }
    else
    {
      if ( a3 != 64 )
      {
        LODWORD(v10) = -1073741811;
        goto LABEL_25;
      }
      v9 = CCD_TOPOLOGY::RetrieveActive(this, 0, 0, 0, &v18);
    }
    LODWORD(v10) = v9;
    if ( v9 >= 0
      && a2
      && ((v11 = *((_QWORD *)this + 8)) == 0 ? (v12 = 0) : (v12 = *(_WORD *)(v11 + 20)),
          !v11 ? (v8 = 0LL) : (v8 = *(unsigned __int16 *)(v11 + 22)),
          v12 >= (unsigned __int16)v8) )
    {
      LODWORD(v10) = -1073741789;
      v6 = v18 + 1;
    }
    else
    {
      v6 = v18;
    }
    if ( (_DWORD)v10 != -1073741789 )
    {
      if ( (int)v10 >= 0 )
      {
        if ( !a2 )
          return (unsigned int)v10;
        if ( a3 != 64 )
          return (unsigned int)v10;
        v13 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 1);
        v10 = v13;
        if ( v13 >= 0 )
          return (unsigned int)v10;
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v16[3] = v10;
LABEL_27:
        v16[4] = this;
        v16[5] = *((_QWORD *)this + 8);
        v16[6] = a2;
        WdLogEvent5_WdError(v16);
        return (unsigned int)v10;
      }
LABEL_25:
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v16[3] = (int)v10;
      goto LABEL_27;
    }
  }
  v17 = WdLogNewEntry5_WdLowResource(v8);
  *(_QWORD *)(v17 + 24) = v7;
  WdLogEvent5_WdLowResource(v17);
  return 3221225495LL;
}
