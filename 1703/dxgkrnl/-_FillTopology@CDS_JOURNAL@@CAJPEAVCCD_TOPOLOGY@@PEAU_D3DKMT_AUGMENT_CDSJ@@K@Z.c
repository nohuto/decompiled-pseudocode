/*
 * XREFs of ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00A8930
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADC20 (-Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00A8CB8 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EA544 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EA924 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_FillTopology(struct CCD_TOPOLOGY *this, struct _D3DKMT_AUGMENT_CDSJ *a2, int a3)
{
  unsigned __int16 v6; // di
  unsigned __int16 v7; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // [rsp+68h] [rbp+20h] BYREF

  CCD_TOPOLOGY::Clear(this);
  v6 = 0;
  while ( 1 )
  {
    v7 = v6 + 1;
    v19 = v7;
    if ( CCD_TOPOLOGY::Reserve(this, v7) < v7 )
      break;
    if ( a3 == 15 )
    {
      v10 = CCD_TOPOLOGY::RetrievePersisted(this, 0xFu, &v19);
    }
    else
    {
      if ( a3 != 64 )
      {
        LODWORD(v11) = -1073741811;
        goto LABEL_25;
      }
      v10 = CCD_TOPOLOGY::RetrieveActive(this, 0, 0, 0, &v19);
    }
    LODWORD(v11) = v10;
    if ( v10 >= 0
      && a2
      && ((v12 = *((_QWORD *)this + 8)) == 0 ? (v8 = 0LL) : (v8 = *(unsigned __int16 *)(v12 + 20)),
          !v12 ? (v9 = 0LL) : (v9 = *(unsigned __int16 *)(v12 + 22)),
          (unsigned __int16)v8 >= (unsigned __int16)v9) )
    {
      LODWORD(v11) = -1073741789;
      v6 = v19 + 1;
    }
    else
    {
      v6 = v19;
    }
    if ( (_DWORD)v11 != -1073741789 )
    {
      if ( (int)v11 >= 0 )
      {
        if ( !a2 )
          return (unsigned int)v11;
        if ( a3 != 64 )
          return (unsigned int)v11;
        v13 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 1);
        v11 = v13;
        if ( v13 >= 0 )
          return (unsigned int)v11;
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
        v17[3] = v11;
LABEL_27:
        v17[4] = this;
        v17[5] = *((_QWORD *)this + 8);
        v17[6] = a2;
        WdLogEvent5_WdError(v17);
        return (unsigned int)v11;
      }
LABEL_25:
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v17[3] = (int)v11;
      goto LABEL_27;
    }
  }
  v18 = WdLogNewEntry5_WdLowResource(v9);
  *(_QWORD *)(v18 + 24) = v7;
  WdLogEvent5_WdLowResource(v18);
  return 3221225495LL;
}
