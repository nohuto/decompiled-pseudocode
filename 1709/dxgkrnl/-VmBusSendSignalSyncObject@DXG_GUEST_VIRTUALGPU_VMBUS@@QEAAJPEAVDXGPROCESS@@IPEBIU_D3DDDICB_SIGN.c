/*
 * XREFs of ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N@Z @ 0x1C0197EB4
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007F8B4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C01BF8A4 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
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
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 i; // rdx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r10
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  NTSTATUS v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 j; // r14
  __int64 v36; // rcx
  unsigned int v37; // r9d
  unsigned int v38; // r13d
  unsigned int v39; // edx
  DXGSYNCOBJECT *v40; // rbx
  __int64 v41; // rbx
  unsigned int v42; // edx
  __int64 v43; // rbx
  const unsigned __int64 *v44; // rdx
  struct _MDL *v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // [rsp+30h] [rbp-78h]
  char *v49; // [rsp+38h] [rbp-70h]
  PVOID Object[3]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v51[80]; // [rsp+58h] [rbp-50h] BYREF
  int v54; // [rsp+C0h] [rbp+18h]

  v11 = a3;
  if ( a3 >= 0x4000 || a6 >= 0x4000 )
  {
    v47 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v47 + 24) = 4132LL;
    WdLogEvent5_WdAssertion(v47);
    return 3221225485LL;
  }
  else
  {
    if ( a8 )
      v13 = 8 * a3;
    else
      v13 = 0;
    v54 = v13;
    v48 = 4 * a3 + 56 + v13 + 4 * a6;
    v14 = operator new(v48, 0x4B677844u, 1, (POOL_TYPE)512);
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
      v49 = (char *)Object[0] + 4 * a6;
      v19 = 0LL;
      Object[2] = 0LL;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v51, a2);
      for ( i = 0LL; (unsigned int)i < a6; i = (unsigned int)(i + 1) )
      {
        v23 = (unsigned int)i;
        v24 = (a7[i] >> 6) & 0xFFFFFF;
        if ( (unsigned int)v24 >= *((_DWORD *)a2 + 60)
          || (v20 = (unsigned int)v24,
              v25 = *((_QWORD *)a2 + 28),
              v26 = *(_DWORD *)(v25 + 16 * v24 + 8),
              LODWORD(v21) = (a7[i] >> 25) & 0x60,
              (_BYTE)v21 != (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60))
          || (v26 & 0x2000) != 0
          || (v26 & 0x1F) == 0
          || (v20 = 2LL * (unsigned int)v24, (*(_BYTE *)(v25 + 16LL * (unsigned int)v24 + 8) & 0x1F) != 7)
          || (v27 = *(_QWORD *)(v25 + 16LL * (unsigned int)v24)) == 0 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v28 + 24) = a7[v23];
LABEL_18:
          WdLogEvent5_WdAssertion(v28);
          v29 = -1073741811;
          goto LABEL_19;
        }
        v16[v11 + 14 + i] = *(_DWORD *)(v27 + 28);
      }
      if ( (*(_BYTE *)&a5.0 & 2) != 0 )
      {
        v29 = ObReferenceObjectByHandle(*a10, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, Object, 0LL);
        v19 = Object[0];
        if ( v29 < 0 )
        {
          v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
          *(_QWORD *)(v34 + 24) = *a10;
          WdLogEvent5_WdWarning(v34);
LABEL_19:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
          goto LABEL_52;
        }
        *((PVOID *)v16 + 6) = Object[0];
      }
      else
      {
        for ( j = 0LL; (unsigned int)j < (unsigned int)v11; j = (unsigned int)(j + 1) )
        {
          v36 = (a4[j] >> 6) & 0xFFFFFF;
          v37 = a4[j] >> 30;
          v38 = *((_DWORD *)a2 + 60);
          if ( (unsigned int)v36 < v38
            && (v21 = *((_QWORD *)a2 + 28),
                v39 = *(_DWORD *)(v21 + 16LL * (unsigned int)v36 + 8),
                v37 == ((v39 >> 5) & 3))
            && (v39 & 0x2000) == 0
            && (v39 & 0x1F) != 0
            && (*(_BYTE *)(v21 + 16LL * (unsigned int)v36 + 8) & 0x1F) == 8 )
          {
            v40 = *(DXGSYNCOBJECT **)(v21 + 16LL * (unsigned int)v36);
          }
          else
          {
            v40 = 0LL;
          }
          if ( v40 )
          {
            v16[j + 14] = DXGSYNCOBJECT::GetHostHandle(v40, a4[j], v21);
          }
          else
          {
            if ( (unsigned int)v36 >= v38
              || (v41 = *((_QWORD *)a2 + 28), v42 = *(_DWORD *)(v41 + 16 * v36 + 8), v37 != ((v42 >> 5) & 3))
              || (v42 & 0x2000) != 0
              || (v42 & 0x1F) == 0
              || (v36 *= 2LL, (*(_BYTE *)(v41 + 8 * v36 + 8) & 0x1F) != 0xB)
              || (v43 = *(_QWORD *)(v41 + 8 * v36)) == 0 )
            {
              v28 = WdLogNewEntry5_WdAssertion(v36);
              *(_QWORD *)(v28 + 24) = a4[j];
              goto LABEL_18;
            }
            v16[j + 14] = *(_DWORD *)(v43 + 44);
            v40 = *(DXGSYNCOBJECT **)(v43 + 32);
          }
          if ( v54 && *((_DWORD *)v40 + 40) == 5 )
          {
            if ( a11 )
            {
              v44 = &a8[j];
              if ( (unsigned __int64)v44 >= MmUserProbeAddress )
                v44 = (const unsigned __int64 *)MmUserProbeAddress;
              *(_QWORD *)&v49[8 * j] = *v44;
            }
            else
            {
              *(_QWORD *)&v49[8 * j] = a8[j];
            }
          }
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51);
      v29 = VmBusSendSyncMessageStatusReturn(*this, (struct DXGKVMB_COMMAND_BASE *)v16, v48, v45);
LABEL_52:
      if ( v29 < 0 )
      {
        if ( v19 )
          ObfDereferenceObject(v19);
        v46 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v46 + 24) = v29;
        WdLogEvent5_WdAssertion(v46);
      }
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      return (unsigned int)v29;
    }
    else
    {
      v17 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v17 + 24) = 4143LL;
      WdLogEvent5_WdAssertion(v17);
      return 3221225495LL;
    }
  }
}
