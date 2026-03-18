/*
 * XREFs of ?VmBusSendCreateAllocation@DXGADAPTER@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEBU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C002F080
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0032214 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendCreateAllocation(
        struct VMBCHANNEL__ **this,
        int a2,
        int a3,
        int a4,
        const struct _D3DKMT_CREATEALLOCATION *a5,
        const struct _D3DDDI_ALLOCATIONINFO2 *a6,
        void **a7,
        void *a8,
        void *Src,
        char a10,
        char a11,
        unsigned __int8 **a12)
{
  const struct _D3DKMT_CREATEALLOCATION *v12; // r15
  unsigned int v13; // ebx
  unsigned int PrivateRuntimeDataSize; // r10d
  unsigned int v16; // r8d
  __int64 NumAllocations; // r10
  unsigned int v19; // r14d
  unsigned int v20; // r9d
  UINT *p_PrivateDriverDataSize; // rdx
  unsigned int v22; // r11d
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // esi
  unsigned int v26; // ebp
  _DWORD *v27; // rax
  _DWORD *v28; // rdi
  unsigned int v29; // edx
  char *v30; // r12
  unsigned int v31; // r9d
  __int64 v32; // rcx
  unsigned int v33; // esi
  unsigned int v34; // eax
  _DWORD *v35; // r14
  __int64 v36; // rdx
  UINT v37; // r13d
  UINT *v38; // rsi
  _QWORD *v39; // rax
  const void *v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  UINT v43; // edx
  UINT v44; // r14d
  char *v45; // rbp
  void **v46; // rdi
  UINT *v47; // rsi
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  struct _MDL *v51; // [rsp+28h] [rbp-50h]
  unsigned int v52; // [rsp+30h] [rbp-48h]
  _DWORD *v53; // [rsp+38h] [rbp-40h]

  v12 = a5;
  v13 = 0;
  *a12 = 0LL;
  PrivateRuntimeDataSize = v12->PrivateRuntimeDataSize;
  if ( PrivateRuntimeDataSize + v12->PrivateDriverDataSize < PrivateRuntimeDataSize )
    return 0LL;
  v16 = PrivateRuntimeDataSize + v12->PrivateDriverDataSize;
  NumAllocations = v12->NumAllocations;
  v19 = 0;
  v20 = 0;
  if ( (_DWORD)NumAllocations )
  {
    p_PrivateDriverDataSize = &a6->PrivateDriverDataSize;
    while ( 1 )
    {
      v22 = v19;
      if ( *((_QWORD *)p_PrivateDriverDataSize - 2) )
        return 3221225659LL;
      v23 = -1;
      v24 = v19 + *p_PrivateDriverDataSize;
      if ( v24 >= v19 )
        v23 = v19 + *p_PrivateDriverDataSize;
      v19 = v23;
      if ( v24 < v22 )
        return 2147483653LL;
      ++v20;
      p_PrivateDriverDataSize += 24;
      if ( v20 >= (unsigned int)NumAllocations )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( v19 + v16 < v16 )
      return 2147483653LL;
    if ( v19 + v16 + 56 < v19 + v16 )
      return 2147483653LL;
    v25 = 12 * NumAllocations;
    if ( (unsigned __int64)(12 * NumAllocations) > 0xFFFFFFFF || v25 + v19 + v16 + 56 < v19 + v16 + 56 )
    {
      return 2147483653LL;
    }
    else
    {
      v26 = v25 + v19 + v16 + 56;
      v27 = operator new[](v26, 0x4B677844u, (enum _POOL_TYPE)512);
      v53 = v27;
      v28 = v27;
      if ( v27 )
      {
        memset(v27, 0, v26);
        v52 = (v19 + 72 * v12->NumAllocations + 23) & 0xFFFFFFF8;
        v30 = (char *)operator new(v52, v29, 1, (enum _POOL_TYPE)512);
        if ( v30 )
        {
          v31 = v25 + 56;
          v28[4] = a3;
          v28[3] = a2;
          v28[2] = 6;
          v28[9] = v12->Flags;
          v28[5] = a4;
          *((_QWORD *)v28 + 5) = v12->hPrivateRuntimeResourceHandle;
          v28[8] = v12->NumAllocations;
          v32 = v12->PrivateRuntimeDataSize;
          v28[6] = v32;
          v28[7] = v12->PrivateDriverDataSize;
          *((_BYTE *)v28 + 48) = a11;
          v33 = v25 + 56 + v12->PrivateRuntimeDataSize;
          if ( (_DWORD)v32 && Src )
            memmove((char *)v28 + v31, Src, (unsigned int)v32);
          v34 = v28[7];
          if ( v34 )
            memmove((char *)v28 + v33, a8, v34);
          v35 = v28 + 14;
          v36 = v33 + v28[7];
          v37 = 0;
          LODWORD(a5) = v33 + v28[7];
          if ( v12->NumAllocations )
          {
            v38 = &a6->PrivateDriverDataSize;
            while ( !*((_QWORD *)v38 - 2) )
            {
              *v35 = v38[2];
              v35[2] = v38[1];
              if ( (unsigned int)v36 + *v38 > v26 )
              {
                v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
                v39[3] = 275LL;
                v39[4] = 2LL;
                v39[5] = 0LL;
                v39[6] = 0LL;
                v39[7] = 0LL;
                WdLogEvent5_WdCriticalError(v39);
                LODWORD(v36) = (_DWORD)a5;
              }
              v35[1] = *v38;
              if ( a10 )
                v40 = a7[v37];
              else
                v40 = (const void *)*((_QWORD *)v38 - 1);
              memmove((char *)v28 + (unsigned int)v36, v40, *v38);
              v35 += 3;
              v36 = *v38 + (unsigned int)a5;
              ++v37;
              v38 += 24;
              LODWORD(a5) = v36;
              if ( v37 >= v12->NumAllocations )
                goto LABEL_35;
            }
            v49 = WdLogNewEntry5_WdError(v32, v36);
            *(_QWORD *)(v49 + 24) = 3207LL;
            WdLogEvent5_WdError(v49);
            v13 = -1073741637;
          }
          else
          {
LABEL_35:
            LODWORD(a5) = v52;
            VmBusSendSyncMessage(this[484], (struct DXGKVMB_COMMAND *)v28, v26, v30, (unsigned int *)&a5, v51);
            if ( (unsigned int)a5 < v52 )
            {
              v13 = -1073741823;
              v50 = WdLogNewEntry5_WdError(v42, v41);
              *(_QWORD *)(v50 + 24) = 3258LL;
              WdLogEvent5_WdError(v50);
              operator delete[](v30);
            }
            else
            {
              v43 = v12->NumAllocations;
              v44 = 0;
              v45 = &v30[64 * v43 + 16 + 8 * v43];
              if ( v43 )
              {
                v46 = a7;
                v47 = &a6->PrivateDriverDataSize;
                do
                {
                  if ( &v45[*v47] > &v30[v52] )
                  {
                    v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
                    v48[3] = 275LL;
                    v48[4] = 2LL;
                    v48[5] = 0LL;
                    v48[6] = 0LL;
                    v48[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v48);
                  }
                  memmove(v46[v44++], v45, *v47);
                  v45 += *v47;
                  v47 += 24;
                }
                while ( v44 < v12->NumAllocations );
                v28 = v53;
              }
              *a12 = (unsigned __int8 *)v30;
            }
          }
        }
        else
        {
          v13 = -1073741801;
        }
        operator delete[](v28);
        return v13;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
