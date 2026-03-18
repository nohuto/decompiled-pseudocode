/*
 * XREFs of ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFE94
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EA924 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 * Callees:
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00AFFC8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EA544 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00ED2FC (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00EFC44 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopology(
        CCD_BTL *this,
        char a2,
        char a3,
        struct CCD_TOPOLOGY *a4,
        unsigned __int16 *a5)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  _QWORD *v18; // rax
  struct CCD_TOPOLOGY *v19; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int16 v20; // [rsp+28h] [rbp-58h]
  _DWORD *v21[3]; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int16 v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]

  CCD_TOPOLOGY::Clear(a4);
  v19 = a4;
  v20 = 0;
  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v19, a3);
  LODWORD(v9) = result;
  if ( (int)result >= 0 )
  {
    v10 = *((_QWORD *)a4 + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( v20 > v11 )
      LODWORD(v9) = -1073741789;
    if ( a5 )
      *a5 = v20;
    if ( (int)v9 >= 0 && !a2 )
    {
      v22 = 0;
      v23 = 0LL;
      v24 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v21[0] = &v22;
      v21[1] = 0LL;
      v21[2] = 0LL;
      v25 = 0LL;
      v26 = 0;
      v12 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v21);
      v9 = v12;
      if ( v12 < 0
        || (v17 = CCD_TOPOLOGY::SetConnectivityHash(a4, (const struct CCD_SET_STRING_ID *)&v22, v15, v16),
            v9 = v17,
            v17 < 0) )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
        v18[3] = v9;
        v18[4] = &v22;
        v18[5] = a4;
        v18[6] = *((_QWORD *)a4 + 8);
        WdLogEvent5_WdError(v18);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v22);
    }
    return (unsigned int)v9;
  }
  return result;
}
