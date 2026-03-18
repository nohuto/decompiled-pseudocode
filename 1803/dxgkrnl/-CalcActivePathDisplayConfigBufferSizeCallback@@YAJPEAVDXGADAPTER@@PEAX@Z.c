/*
 * XREFs of ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DB2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z @ 0x1C00DB3D4 (-GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z.c)
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
  const struct DMMVIDPN **v13; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v20[8]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v21[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v22[72]; // [rsp+68h] [rbp+Fh] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v25; // [rsp+D0h] [rbp+77h] BYREF
  struct DMMVIDPN *v26; // [rsp+D8h] [rbp+7Fh] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, a1, 0LL);
  if ( *((_QWORD *)a1 + 307) == v4 )
    goto LABEL_5;
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20);
  v10 = v5;
  if ( v5 >= 0 )
  {
    v13 = *(const struct DMMVIDPN ***)(*((_QWORD *)a1 + 307) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, (__int64)v13);
    v26 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v13,
                                               (__int64 *)&v26);
    v10 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = ClientVidPnFromLastClientCommitedVidPn;
    }
    else
    {
      GetVidPnPathsSourcesTargetsCount(a1, v26, &v23, &v25, &v24);
      a2[1] += v23;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v26, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
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
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  return v10;
}
