/*
 * XREFs of ?CalcActivePathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B6000
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z @ 0x1C00B68B0 (-GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z.c)
 */

__int64 __fastcall CalcActivePathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // esi
  _QWORD *v8; // rax
  const struct DMMVIDPN **v10; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v17; // [rsp+50h] [rbp-9h]
  struct DXGADAPTER *v18; // [rsp+58h] [rbp-1h]
  char v19; // [rsp+60h] [rbp+7h]
  _BYTE v20[8]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+70h] [rbp+17h]
  struct DXGADAPTER *v22; // [rsp+78h] [rbp+1Fh]
  char v23; // [rsp+80h] [rbp+27h]
  unsigned int v24; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v25; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v26; // [rsp+D0h] [rbp+77h] BYREF
  struct DMMVIDPN *v27; // [rsp+D8h] [rbp+7Fh] BYREF

  v18 = a1;
  v19 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v17 = -1LL;
  }
  v22 = a1;
  v23 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v21 = -1LL;
  }
  if ( !*((_QWORD *)a1 + 288) )
    goto LABEL_9;
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15);
  v7 = v4;
  if ( v4 >= 0 )
  {
    v10 = *(const struct DMMVIDPN ***)(*((_QWORD *)a1 + 288) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v14, (__int64)v10);
    v27 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v10,
                                               (__int64 *)&v27);
    v7 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = ClientVidPnFromLastClientCommitedVidPn;
    }
    else
    {
      GetVidPnPathsSourcesTargetsCount(a1, v27, &v24, &v26, &v25);
      a2[1] += v24;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v27, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 40));
  }
  else if ( v4 == -1073741130 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v8[3] = a1;
    v8[4] = *((int *)a1 + 68);
    v8[5] = *((unsigned int *)a1 + 67);
LABEL_9:
    v7 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  return v7;
}
