/*
 * XREFs of ?VmBusSendSignalSyncObject@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N@Z @ 0x1C00318AC
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B51E8 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendSignalSyncObject(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        const unsigned int *a4,
        struct _D3DDDICB_SIGNALFLAGS a5,
        unsigned int a6,
        const unsigned int *a7,
        const unsigned __int64 *a8,
        unsigned __int64 a9,
        void *const *a10,
        bool a11)
{
  __int64 v11; // rsi
  int v15; // r15d
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 i; // rbx
  unsigned int v29; // r11d
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // r11d
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 j; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  struct _MDL *v46; // r9
  __int64 v47; // rax
  _DWORD *v48; // [rsp+28h] [rbp-60h]
  _BYTE v49[88]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v52; // [rsp+B0h] [rbp+28h]
  void *const *v53; // [rsp+D8h] [rbp+50h]

  v11 = a3;
  if ( (*(_BYTE *)&a5.0 & 2) != 0 )
    return 3221225474LL;
  if ( a8 )
    v15 = 8 * a3;
  else
    v15 = 0;
  v52 = 4 * a3 + 48 + v15 + 4 * a6;
  v16 = operator new(v52, (unsigned int)a2, 1, (enum _POOL_TYPE)512);
  v21 = v16;
  if ( v16 )
  {
    v16[2] = 30;
    v16[3] = DXGPROCESS::GetHostProcess(a2);
    v21[6] = a6;
    v21[5] = a5.0;
    v21[4] = v11;
    *((_QWORD *)v21 + 4) = a9;
    v48 = &v21[v11 + 12];
    v53 = (void *const *)&v48[v11];
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v49, a2, v23, v24);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v11; i = (unsigned int)(i + 1) )
    {
      v29 = a4[i];
      v30 = (v29 >> 6) & 0xFFFFFF;
      v26 = v29 >> 30;
      if ( (unsigned int)v30 < *((_DWORD *)a2 + 52)
        && (v27 = *((_QWORD *)a2 + 24),
            v25 = *(unsigned int *)(v27 + 16LL * (unsigned int)v30 + 8),
            (_DWORD)v26 == ((*(_DWORD *)(v27 + 16LL * (unsigned int)v30 + 8) >> 4) & 3))
        && (v25 & 0x1000) == 0
        && (v25 & 0xF) != 0
        && (v31 = 2 * v30, (*(_BYTE *)(v27 + 8 * v31 + 8) & 0xF) == 8) )
      {
        v32 = *(_QWORD *)(v27 + 8 * v31);
      }
      else
      {
        v32 = 0LL;
      }
      if ( v32 )
      {
        v21[i + 12] = *(_DWORD *)(v32 + 76);
      }
      else
      {
        v33 = (v29 >> 6) & 0xFFFFFF;
        v34 = v29 >> 30;
        if ( (unsigned int)v33 >= *((_DWORD *)a2 + 52)
          || (v26 = *((_QWORD *)a2 + 24),
              v25 = *(unsigned int *)(v26 + 16LL * (unsigned int)v33 + 8),
              v34 != ((*(_DWORD *)(v26 + 16LL * (unsigned int)v33 + 8) >> 4) & 3))
          || (v25 & 0x1000) != 0
          || (v25 & 0xF) == 0
          || (v33 *= 2LL, (*(_BYTE *)(v26 + 8 * v33 + 8) & 0xF) != 0xB)
          || (v25 = *(_QWORD *)(v26 + 8 * v33)) == 0 )
        {
          v35 = WdLogNewEntry5_WdAssertion(v33, v25, v26, v27);
          v36 = a4[i];
LABEL_35:
          *(_QWORD *)(v35 + 24) = v36;
          WdLogEvent5_WdAssertion(v35);
          v37 = -1073741811;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
          goto LABEL_47;
        }
        v21[i + 12] = *(_DWORD *)(*(_QWORD *)(v25 + 32) + 76LL);
        v32 = *(_QWORD *)(v25 + 32);
      }
      if ( v15 && *(_DWORD *)(v32 + 144) == 5 )
      {
        if ( a11 )
        {
          v25 = (ULONG64)&a8[i];
          if ( v25 >= MmUserProbeAddress )
            v25 = MmUserProbeAddress;
          v53[i] = *(void *const *)v25;
        }
        else
        {
          v53[i] = (void *const)a8[i];
        }
      }
    }
    for ( j = 0LL; (unsigned int)j < a6; j = (unsigned int)(j + 1) )
    {
      v43 = a7[j];
      v44 = (a7[j] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v44 >= *((_DWORD *)a2 + 52)
        || (v27 = *((_QWORD *)a2 + 24),
            v26 = *(unsigned int *)(v27 + 16LL * (unsigned int)v44 + 8),
            v43 = ((unsigned int)v43 >> 26) & 0x30,
            (_BYTE)v43 != (*(_BYTE *)(v27 + 16LL * (unsigned int)v44 + 8) & 0x30))
        || (v26 & 0x1000) != 0
        || (v26 & 0xF) == 0
        || (v43 = 2LL * (unsigned int)v44, (*(_BYTE *)(v27 + 16LL * (unsigned int)v44 + 8) & 0xF) != 7)
        || (v45 = *(_QWORD *)(v27 + 16LL * (unsigned int)v44)) == 0 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v44, v43, v26, v27);
        v36 = a7[j];
        goto LABEL_35;
      }
      v48[j] = *(_DWORD *)(v45 + 28);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
    v37 = VmBusSendSyncMessageStatusReturn(this[484], (struct DXGKVMB_COMMAND *)v21, v52, v46);
LABEL_47:
    if ( v37 < 0 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
      *(_QWORD *)(v47 + 24) = v37;
      WdLogEvent5_WdAssertion(v47);
    }
    operator delete[](v21);
    return (unsigned int)v37;
  }
  else
  {
    v22 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v22 + 24) = 2551LL;
    WdLogEvent5_WdAssertion(v22);
    return 3221225495LL;
  }
}
