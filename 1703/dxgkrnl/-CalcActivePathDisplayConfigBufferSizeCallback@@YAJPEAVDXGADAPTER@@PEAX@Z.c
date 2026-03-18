/*
 * XREFs of ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A0E40
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z @ 0x1C00A0F5C (-GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall CalcActivePathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  _QWORD *v11; // rax
  struct VIDPN_MGR *v13; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v25[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v26[72]; // [rsp+68h] [rbp+Fh] BYREF
  unsigned int v27; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v29; // [rsp+D0h] [rbp+77h] BYREF
  struct DMMVIDPN *v30; // [rsp+D8h] [rbp+7Fh] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, a1, 0LL);
  if ( *((_QWORD *)a1 + 285) == v4 )
    goto LABEL_5;
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
  v10 = v5;
  if ( v5 >= 0 )
  {
    v13 = *(struct VIDPN_MGR **)(*((_QWORD *)a1 + 285) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, (__int64)v13, v8, v9);
    v30 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
    v10 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = ClientVidPnFromLastClientCommitedVidPn;
    }
    else
    {
      GetVidPnPathsSourcesTargetsCount(a1, v30, &v27, &v29, &v28);
      v19 = v27;
      a2[1] += v27;
      if ( (*a2 & 0x18) != 0 )
        a2[2] += 3 * v19;
      else
        a2[2] += v29 + v28;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40), v20, v21, v22);
  }
  else if ( v5 == -1073741130 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v11[3] = a1;
    v11[4] = *((int *)a1 + 68);
    v11[5] = *((unsigned int *)a1 + 67);
LABEL_5:
    v10 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v26);
  COREACCESS::~COREACCESS((COREACCESS *)v25);
  return v10;
}
