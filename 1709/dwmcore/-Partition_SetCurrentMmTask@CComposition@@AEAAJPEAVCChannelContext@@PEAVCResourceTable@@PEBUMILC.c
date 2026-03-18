/*
 * XREFs of ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800AB5E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180075BC8 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1800ABA7C (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CComposition::Partition_SetCurrentMmTask(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SETCURRENTMMTASK *a4)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  signed int v12; // eax
  unsigned int v13; // ebx
  _OWORD v15[9]; // [rsp+30h] [rbp-A8h] BYREF

  v5 = *(_OWORD *)((char *)a4 + 20);
  v15[0] = *(_OWORD *)((char *)a4 + 4);
  v6 = *(_OWORD *)((char *)a4 + 36);
  v15[1] = v5;
  v7 = *(_OWORD *)((char *)a4 + 52);
  v15[2] = v6;
  v8 = *(_OWORD *)((char *)a4 + 68);
  v15[3] = v7;
  v9 = *(_OWORD *)((char *)a4 + 84);
  v15[4] = v8;
  v10 = *(_OWORD *)((char *)a4 + 100);
  v15[5] = v9;
  v11 = *(_OWORD *)((char *)a4 + 132);
  v15[6] = v10;
  v15[7] = *(_OWORD *)((char *)a4 + 116);
  v15[8] = v11;
  v12 = CMmcssTask::Set((CComposition *)((char *)this + 136), (const struct DWM_MMTASK *)v15, 1);
  v13 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x53Eu);
  else
    CComposition::UpdateMmcssPartners(this);
  return v13;
}
