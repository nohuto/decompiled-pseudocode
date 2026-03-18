/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromGpu@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAPEAVDXGSYNCOBJECT@@PEB_K_KI@Z @ 0x1C0032B80
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendWaitForSyncObjectFromGpu(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        struct DXGSYNCOBJECT **a4,
        char *a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  __int64 v11; // rsi
  unsigned int v12; // r14d
  char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rbx
  __int64 v18; // rax
  char *v20; // rsi
  __int64 v21; // rdx
  signed __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  struct _MDL *v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  struct _MDL *v31; // r9
  _BYTE v32[32]; // [rsp+20h] [rbp-48h] BYREF

  v11 = 8 * a7 + 32;
  v12 = v11 + 4 * a7;
  v13 = (char *)operator new(v12, (unsigned int)a2, 1, (enum _POOL_TYPE)512);
  v17 = v13;
  if ( v13 )
  {
    v20 = &v13[v11];
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, a2, v15, v16);
    if ( a7 )
    {
      v21 = v17 - (char *)a4;
      v22 = a5 - (char *)a4;
      v23 = a7;
      do
      {
        *(_DWORD *)v20 = *((_DWORD *)*a4 + 19);
        v24 = *((_DWORD *)*a4 + 36);
        if ( (unsigned int)(v24 - 5) <= 1 )
        {
          *(struct DXGSYNCOBJECT **)((char *)a4 + v21 + 32) = *(struct DXGSYNCOBJECT **)((char *)a4 + v22);
        }
        else if ( v24 == 3 )
        {
          *((_QWORD *)v17 + 4) = a6;
          v17[24] = 1;
        }
        v20 += 4;
        ++a4;
        --v23;
      }
      while ( v23 );
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
    *((_DWORD *)v17 + 4) = *((_DWORD *)a3 + 7);
    *((_DWORD *)v17 + 3) = DXGPROCESS::GetHostProcess(a2);
    *((_DWORD *)v17 + 2) = 29;
    *((_DWORD *)v17 + 5) = a7;
    v26 = VmBusSendSyncMessageStatusReturn(this[484], (struct DXGKVMB_COMMAND *)v17, v12, v25);
    v29 = v26;
    if ( v26 < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v30 + 24) = v29;
      WdLogEvent5_WdError(v30);
      LODWORD(v29) = VmBusSendSyncMessageStatusReturn(this[484], (struct DXGKVMB_COMMAND *)v17, v12, v31);
    }
    operator delete[](v17);
    return (unsigned int)v29;
  }
  else
  {
    v18 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v18 + 24) = 2796LL;
    WdLogEvent5_WdLowResource(v18);
    return 3221225495LL;
  }
}
