/*
 * XREFs of ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N@Z @ 0x1C0184B20
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5738 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C01C098C (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        const unsigned int *a4,
        struct _D3DDDICB_SIGNALFLAGS a5,
        unsigned int a6,
        const unsigned int *a7,
        const unsigned __int64 *a8,
        unsigned __int64 a9,
        HANDLE *a10,
        bool a11)
{
  __int64 v11; // r12
  int v13; // ecx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  __int64 v17; // rax
  PVOID v19; // r15
  __int64 i; // r8
  __int64 v21; // r14
  __int64 v22; // rax
  struct DXGPROCESS *v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  NTSTATUS v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  struct _MDL *v34; // r9
  __int64 v35; // rax
  __int64 j; // r14
  unsigned int v37; // ecx
  unsigned int v38; // r9d
  unsigned int v39; // r11d
  __int64 v40; // r10
  unsigned int v41; // edx
  DXGSYNCOBJECT *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  unsigned int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  const unsigned __int64 *v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // [rsp+30h] [rbp-78h]
  char *v51; // [rsp+38h] [rbp-70h]
  PVOID Object[3]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v53[80]; // [rsp+58h] [rbp-50h] BYREF
  int v56; // [rsp+C0h] [rbp+18h]

  v11 = a3;
  if ( a3 >= 0x4000 || a6 >= 0x4000 )
  {
    v49 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v49 + 24) = 4820LL;
    WdLogEvent5_WdAssertion(v49);
    return 3221225485LL;
  }
  else
  {
    if ( a8 )
      v13 = 8 * a3;
    else
      v13 = 0;
    v56 = v13;
    v50 = v13 + 4 * (a3 + a6 + 14);
    v14 = operator new(v50, 0x4B677844u, 1, (POOL_TYPE)512);
    v16 = v14;
    Object[1] = v14;
    if ( v14 )
    {
      *(_QWORD *)v14 = 0LL;
      v14[2] = 0;
      v14[3] = 0;
      v14[4] = 26;
      v14[2] = DXGPROCESS::GetHostProcess(a2);
      v16[8] = a6;
      v16[7] = a5.0;
      v16[6] = v11;
      *((_QWORD *)v16 + 5) = a9;
      Object[0] = &v16[v11 + 14];
      v51 = (char *)Object[0] + 4 * a6;
      v19 = 0LL;
      Object[2] = 0LL;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v53, (struct _KTHREAD **)a2);
      for ( i = 0LL; (unsigned int)i < a6; i = (unsigned int)(i + 1) )
      {
        v21 = (unsigned int)i;
        v22 = (a7[i] >> 6) & 0xFFFFFF;
        v23 = a2;
        if ( (unsigned int)v22 < *((_DWORD *)a2 + 62)
          && (v24 = *((_QWORD *)a2 + 29),
              v23 = (struct DXGPROCESS *)*(unsigned int *)(v24 + 16 * v22 + 8),
              ((a7[i] >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v22 + 8) & 0x60))
          && ((unsigned __int16)v23 & 0x2000) == 0
          && ((unsigned __int8)v23 & 0x1F) != 0
          && (v23 = (struct DXGPROCESS *)((unsigned __int8)v23 & 0x1F), (_BYTE)v23 == 7) )
        {
          v25 = *(_QWORD *)(v24 + 16LL * (unsigned int)v22);
        }
        else
        {
          v25 = 0LL;
        }
        if ( !v25 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v23);
          v27 = a7[v21];
LABEL_20:
          *(_QWORD *)(v26 + 24) = v27;
          WdLogEvent5_WdAssertion(v26);
          v28 = -1073741811;
          goto LABEL_21;
        }
        v16[v11 + 14 + i] = *(_DWORD *)(v25 + 28);
      }
      if ( (*(_BYTE *)&a5.0 & 2) != 0 )
      {
        v28 = ObReferenceObjectByHandle(*a10, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL);
        v19 = Object[0];
        if ( v28 < 0 )
        {
          v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
          *(_QWORD *)(v33 + 24) = *a10;
          WdLogEvent5_WdWarning(v33);
LABEL_21:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
          goto LABEL_27;
        }
        *((PVOID *)v16 + 6) = Object[0];
      }
      else
      {
        for ( j = 0LL; (unsigned int)j < (unsigned int)v11; j = (unsigned int)(j + 1) )
        {
          v37 = (a4[j] >> 6) & 0xFFFFFF;
          v38 = a4[j] >> 30;
          v39 = *((_DWORD *)a2 + 62);
          if ( v37 < v39
            && (v40 = *((_QWORD *)a2 + 29), v41 = *(_DWORD *)(v40 + 16LL * v37 + 8), v38 == ((v41 >> 5) & 3))
            && (v41 & 0x2000) == 0
            && (v41 & 0x1F) == 8 )
          {
            v42 = *(DXGSYNCOBJECT **)(v40 + 16LL * v37);
          }
          else
          {
            v42 = 0LL;
          }
          if ( v42 )
          {
            v16[j + 14] = DXGSYNCOBJECT::GetHostHandle(v42, a4[j], a4[j]);
          }
          else
          {
            if ( v37 < v39
              && (v43 = v37, v44 = *((_QWORD *)a2 + 29),
                             v45 = *(_DWORD *)(v44 + 16LL * v37 + 8),
                             v38 == ((v45 >> 5) & 3))
              && (v45 & 0x2000) == 0
              && (v45 & 0x1F) != 0
              && (v46 = 2 * v43, (v45 & 0x1F) == 0xB) )
            {
              v47 = *(_QWORD *)(v44 + 8 * v46);
            }
            else
            {
              v47 = 0LL;
            }
            if ( !v47 )
            {
              v26 = WdLogNewEntry5_WdAssertion(0LL);
              v27 = a4[j];
              goto LABEL_20;
            }
            v16[j + 14] = *(_DWORD *)(v47 + 44);
            v42 = *(DXGSYNCOBJECT **)(v47 + 32);
          }
          if ( v56 && *((_DWORD *)v42 + 42) == 5 )
          {
            if ( a11 )
            {
              v48 = &a8[j];
              if ( (unsigned __int64)v48 >= MmUserProbeAddress )
                v48 = (const unsigned __int64 *)MmUserProbeAddress;
              *(_QWORD *)&v51[8 * j] = *v48;
            }
            else
            {
              *(_QWORD *)&v51[8 * j] = a8[j];
            }
          }
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
      v28 = VmBusSendSyncMessageStatusReturn(*this, (struct DXGKVMB_COMMAND_BASE *)v16, v50, v34);
LABEL_27:
      if ( v28 < 0 )
      {
        if ( v19 )
          ObfDereferenceObject(v19);
        v35 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v35 + 24) = v28;
        WdLogEvent5_WdAssertion(v35);
      }
      operator delete[](v16);
      return (unsigned int)v28;
    }
    else
    {
      v17 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v17 + 24) = 4831LL;
      WdLogEvent5_WdAssertion(v17);
      return 3221225495LL;
    }
  }
}
