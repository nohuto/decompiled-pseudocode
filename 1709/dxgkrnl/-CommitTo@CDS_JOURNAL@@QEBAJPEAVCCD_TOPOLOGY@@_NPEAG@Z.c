/*
 * XREFs of ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00E1168
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x1C000BE1C (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C00DC11C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00E1628 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::CommitTo(CDS_JOURNAL *this, struct CCD_TOPOLOGY *a2, __int64 a3, unsigned __int16 *a4)
{
  const struct CDS_JOURNAL::_ENTRY **v4; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  const struct CDS_JOURNAL::_ENTRY *v13; // r15
  unsigned __int16 v14; // di
  const struct CDS_JOURNAL::_ENTRY *i; // r15
  const struct CDS_JOURNAL::_ENTRY *v16; // rcx
  bool v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  const struct CDS_JOURNAL::_ENTRY *v22; // rcx
  bool v23; // r8
  _QWORD *v24; // rax
  int v25; // eax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int16 v28; // si
  const struct CDS_JOURNAL::_ENTRY *v29; // r9
  __int16 v30; // r10
  bool IsUnextend; // al
  int v32; // r10d
  const struct CDS_JOURNAL::_ENTRY **v33; // r9
  unsigned __int16 v34; // si
  _QWORD *v35; // rdx
  __int64 v36; // rax
  unsigned __int16 v37; // ax
  __int64 v38; // rax

  v4 = (const struct CDS_JOURNAL::_ENTRY **)((char *)this + 24);
  if ( *v4 == (const struct CDS_JOURNAL::_ENTRY *)v4 )
    return 0LL;
  LODWORD(v9) = -1073741823;
  if ( *(_DWORD *)this == 1 )
  {
    LODWORD(v9) = CCD_TOPOLOGY::VerifyConnectivityHash(a2, this, a3);
    if ( (_DWORD)v9 == -1073741266 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
      v24[3] = this;
      v24[4] = a2;
      v24[5] = *((_QWORD *)a2 + 8);
      WdLogEvent5_WdWarning(v24);
      return 0LL;
    }
  }
  v13 = *v4;
  v14 = 0;
  while ( v13 != (const struct CDS_JOURNAL::_ENTRY *)v4 )
  {
    if ( CDS_JOURNAL::_IsUnextend(v13) )
    {
      v25 = CDS_JOURNAL::_CommitEntry(v22, a2, v23);
      v9 = v25;
      if ( v25 < 0 )
      {
LABEL_18:
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v26[3] = v9;
        v26[4] = v26;
        v26[5] = a2;
        v26[6] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v26);
        return (unsigned int)v9;
      }
    }
    v13 = *(const struct CDS_JOURNAL::_ENTRY **)v13;
  }
  for ( i = *v4; i != (const struct CDS_JOURNAL::_ENTRY *)v4; i = *(const struct CDS_JOURNAL::_ENTRY **)i )
  {
    if ( !CDS_JOURNAL::_IsUnextend(i) )
    {
      v18 = CDS_JOURNAL::_CommitEntry(v16, a2, v17);
      v9 = v18;
      if ( v18 == -1073741789 )
      {
        v27 = *((_QWORD *)a2 + 8);
        if ( v27 )
          v28 = *(_WORD *)(v27 + 20);
        else
          v28 = 0;
        v29 = *v4;
        v30 = 0;
        while ( v29 != (const struct CDS_JOURNAL::_ENTRY *)v4 )
        {
          IsUnextend = CDS_JOURNAL::_IsUnextend(v29);
          v29 = *v33;
          v20 = (unsigned int)(v32 + 1);
          if ( IsUnextend )
            LOWORD(v20) = v32;
          v30 = v20;
        }
        v34 = v30 + v28;
        if ( a4 )
          *a4 = v34;
        v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
        v35[3] = a2;
        v35[4] = *((_QWORD *)a2 + 8);
        v36 = *((_QWORD *)a2 + 8);
        if ( v36 )
          v37 = *(_WORD *)(v36 + 20);
        else
          v37 = 0;
        v35[5] = v37;
        v38 = *((_QWORD *)a2 + 8);
        if ( v38 )
          v14 = *(_WORD *)(v38 + 22);
        v35[6] = v14;
        v35[7] = v34;
        WdLogEvent5_WdWarning(v35);
        return 3221225507LL;
      }
      if ( v18 < 0 )
        goto LABEL_18;
    }
  }
  return (unsigned int)v9;
}
