/*
 * XREFs of ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00E0A6C
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 * Callees:
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00D99E4 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00DB780 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00DC53C (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DF6CC (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
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
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rax
  struct CCD_TOPOLOGY *v16; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int16 v17; // [rsp+28h] [rbp-58h]
  _DWORD *v18[3]; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int16 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+78h] [rbp-8h]

  CCD_TOPOLOGY::Clear(a4);
  v16 = a4;
  v17 = 0;
  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v16, a3);
  LODWORD(v9) = result;
  if ( (int)result >= 0 )
  {
    v10 = *((_QWORD *)a4 + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( v17 > v11 )
      LODWORD(v9) = -1073741789;
    if ( a5 )
      *a5 = v17;
    if ( (int)v9 >= 0 && !a2 )
    {
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v18[0] = &v19;
      v18[1] = 0LL;
      v18[2] = 0LL;
      v22 = 0LL;
      v23 = 0;
      v12 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v18);
      v9 = v12;
      if ( v12 < 0
        || (v14 = CCD_TOPOLOGY::SetConnectivityHash(a4, (const struct CCD_SET_STRING_ID *)&v19), v9 = v14, v14 < 0) )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v15[3] = v9;
        v15[4] = &v19;
        v15[5] = a4;
        v15[6] = *((_QWORD *)a4 + 8);
        WdLogEvent5_WdError(v15);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v19);
    }
    return (unsigned int)v9;
  }
  return result;
}
