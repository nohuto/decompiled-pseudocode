/*
 * XREFs of ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00EC32C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EA924 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00EC238 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this)
{
  unsigned __int16 v2; // bx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  struct _D3DKMT_GETPATHSMODALITY *v15[13]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 i; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v15, 8u, 0);
  for ( i = 8; ; v2 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v15, v2, v3, v4) < v2 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v5);
      v14[3] = v2;
      v14[4] = this;
      v14[5] = *((_QWORD *)this + 8);
      WdLogEvent5_WdLowResource(v14);
      LODWORD(v11) = -1073741801;
      goto LABEL_6;
    }
    LOBYTE(v7) = 1;
    LOBYTE(v6) = 1;
    v8 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v15, 0LL, v6, v7, &i);
    v11 = v8;
    if ( v8 != -1073741789 )
      break;
  }
  if ( v8 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v13[3] = v11;
    v13[4] = this;
    v13[5] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v13);
  }
  else
  {
    CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)v15, v3, v4);
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v15);
  return (unsigned int)v11;
}
