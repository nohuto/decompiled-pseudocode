/*
 * XREFs of ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00DC70C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00DC618 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this)
{
  unsigned __int16 v2; // bx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  struct D3DKMT_GETPATHSMODALITY *v10[13]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 i; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v10, 8u, 0);
  for ( i = 8; ; v2 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v10, v2) < v2 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdLowResource(v3);
      v9[3] = v2;
      v9[4] = this;
      v9[5] = *((_QWORD *)this + 8);
      WdLogEvent5_WdLowResource(v9);
      LODWORD(v6) = -1073741801;
      goto LABEL_6;
    }
    v4 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v10, 0, 1, 1, &i);
    v6 = v4;
    if ( v4 != -1073741789 )
      break;
  }
  if ( v4 < 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v8[3] = v6;
    v8[4] = this;
    v8[5] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v8);
  }
  else
  {
    CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)v10);
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v10);
  return (unsigned int)v6;
}
