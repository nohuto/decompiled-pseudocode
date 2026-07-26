/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C0017530
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0013610 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C002478C (ndisFLoopbackNetBufferLists.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  unsigned int v4; // r12d
  NDIS_PORT_NUMBER v6; // r13d
  __int64 v9; // rax
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  ULONG v13; // esi
  struct NDIS_NBL_TRACKER_HANDLE__ *v14; // rcx
  unsigned __int64 v15; // rbx
  char v16; // di
  unsigned __int64 v17; // r8
  __int64 v18; // r11
  unsigned __int64 v19; // rcx
  char v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int8 *v23; // r9
  struct NDIS_NBL_TRACKER_HANDLE__ *v24; // r13
  PNET_BUFFER_LIST Alignment; // r12
  unsigned __int64 v26; // rdi
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rbx
  __int64 v32; // r8
  _QWORD *v33; // rcx
  struct _NDIS_FILTER_BLOCK *v34; // rdi
  void *NextSendNetBufferListsContext; // r10
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r15
  void *v37; // rdx
  NDIS_HANDLE v38; // rcx
  struct NDIS_NBL_TRACKER_HANDLE__ *v39; // rbx
  struct NDIS_NBL_TRACKER_HANDLE__ *v40; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ **v41; // rdx
  struct NDIS_NBL_TRACKER_HANDLE__ *i; // rax
  unsigned int Number; // edx
  struct _NET_BUFFER_LIST **v44; // r14
  struct NDIS_NBL_TRACKER_HANDLE__ *v45; // rax
  struct _NDIS_FILTER_BLOCK *v46; // r13
  __int64 v47; // rsi
  char v48; // al
  struct _NET_BUFFER_LIST *v49; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v51; // r9
  struct _NET_BUFFER_LIST *v52; // rbx
  unsigned int Context; // [rsp+20h] [rbp-79h]
  unsigned int Contexta; // [rsp+20h] [rbp-79h]
  unsigned int ChildRefCount; // [rsp+30h] [rbp-69h]
  unsigned int v56; // [rsp+30h] [rbp-69h]
  __int64 v57; // [rsp+40h] [rbp-59h]
  unsigned __int8 *v58; // [rsp+48h] [rbp-51h]
  __int64 v59; // [rsp+50h] [rbp-49h]
  __int64 v60; // [rsp+58h] [rbp-41h]
  _QWORD v61[3]; // [rsp+60h] [rbp-39h] BYREF
  char Parameter[8]; // [rsp+78h] [rbp-21h] BYREF
  struct _NDIS_FILTER_BLOCK *v63; // [rsp+80h] [rbp-19h]
  void *v64; // [rsp+88h] [rbp-11h]
  void (__fastcall *v65)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+90h] [rbp-9h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v66; // [rsp+98h] [rbp-1h]
  NDIS_PORT_NUMBER v67; // [rsp+A0h] [rbp+7h]
  __int64 v68; // [rsp+A4h] [rbp+Bh]
  ULONG v69; // [rsp+ACh] [rbp+13h]
  BOOL v70; // [rsp+100h] [rbp+67h]
  void *v71; // [rsp+100h] [rbp+67h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v72; // [rsp+108h] [rbp+6Fh] BYREF
  NDIS_PORT_NUMBER v73; // [rsp+110h] [rbp+77h]
  unsigned int v74; // [rsp+118h] [rbp+7Fh]

  v73 = PortNumber;
  v4 = 0;
  v6 = PortNumber;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_2;
  v15 = *((_QWORD *)NdisFilterHandle + 57);
  v16 = ndisNblTrackerEpoch;
  v17 = SendFlags & 1;
  v72 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 100);
  v18 = 0LL;
  v60 = 0LL;
  v19 = (SendFlags & 1) != 0;
  v59 = 0LL;
  v20 = 0;
  v70 = (SendFlags & 1) != 0;
  LOBYTE(v74) = 0;
  v21 = 0LL;
  v57 = 0LL;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(NetBufferList, v72, 0x90u, (void *)v15, v17);
    LOBYTE(v19) = v70;
    v21 = 0LL;
    v20 = 0;
    v18 = 0LL;
  }
  v22 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (v22 & 1) != 0 )
  {
    v23 = *(unsigned __int8 **)((v22 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    v22 |= 2LL * (v16 & 1);
  }
  else
  {
    v23 = (unsigned __int8 *)v22;
  }
  v58 = v23;
  if ( NetBufferList )
  {
    v24 = v72;
    Alignment = NetBufferList;
    while ( 1 )
    {
      v26 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      while ( Alignment->NetBufferListInfo[27] == (void *)v26 )
      {
        if ( !v26 && !Alignment->SourceHandle )
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                              (unsigned __int64)v24 & 0xFFFFFFFFFFFFFFFDuLL,
                                              v21,
                                              v17);
        if ( (v26 & 4) != 0 )
          goto LABEL_65;
        SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          v17 = *SourceHandle;
          if ( (unsigned __int8)(v17 - 17) <= 1u || (_BYTE)v17 == 5 )
          {
            if ( SourceHandle != v23 || Alignment->ParentNetBufferList )
            {
              ++v21;
              Alignment->NetBufferListInfo[27] = (void *)v22;
              v57 = v21;
            }
            else
            {
              ++v18;
              Alignment->NetBufferListInfo[27] = (void *)24;
              ++v21;
              v59 = v18;
              v57 = v21;
            }
            goto LABEL_27;
          }
          if ( (unsigned __int8)byte_1C0098762 >= 3u )
          {
            WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment, (unsigned __int8)v17);
            goto LABEL_64;
          }
        }
        else if ( (unsigned __int8)byte_1C0098762 >= 3u )
        {
          WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment);
LABEL_64:
          v21 = v57;
          v23 = v58;
          v18 = v59;
        }
LABEL_65:
        Alignment->NetBufferListInfo[27] = (void *)(v22 | 4);
LABEL_27:
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        if ( !Alignment )
          break;
      }
      LODWORD(v19) = v70;
      v28 = v60 - v21;
      v20 = v74;
      if ( (v26 & 1) != 0 && v28 )
      {
        if ( !v70 && !(_BYTE)v74 )
        {
          v20 = 1;
          LOBYTE(v74) = 1;
          if ( KeGetCurrentIrql() == 2 )
            LODWORD(v19) = 1;
          else
            LOBYTE(v19) = 0;
          v70 = v19;
        }
        v17 = 16 * ((v26 >> 1) & 1) + (v26 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        if ( (_BYTE)v19 )
        {
          v19 = *(_QWORD *)v17 + (KeGetPcr()->Prcb.Number << 12);
          *(_QWORD *)v19 += v28;
          LOBYTE(v19) = v70;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 8), v28);
        }
      }
      v23 = v58;
      v60 = v21;
      if ( !Alignment )
      {
        v6 = v73;
        v4 = 0;
        break;
      }
    }
  }
  v29 = v21 - v18;
  if ( (v22 & 1) != 0 && v29 )
  {
    if ( !(_BYTE)v19 && !v20 )
      LOBYTE(v19) = KeGetCurrentIrql() == 2;
    v30 = v22;
    v31 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
    v32 = 2 * ((v30 >> 1) & 1);
    if ( (_BYTE)v19 )
    {
      v33 = (_QWORD *)(*(_QWORD *)(v31 + 8 * v32 + 40) + (KeGetPcr()->Prcb.Number << 12));
      *v33 += v29;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 8 * v32 + 48), v29);
    }
  }
LABEL_2:
  v9 = *((_QWORD *)NdisFilterHandle + 79);
  if ( (void (__fastcall *)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))v9 != ndisFilterSendNetBufferLists )
  {
    v37 = NetBufferList;
    v38 = NdisFilterHandle;
    goto LABEL_48;
  }
  v10 = (_DWORD *)*((_QWORD *)NdisFilterHandle + 58);
  v11 = *((_QWORD *)NdisFilterHandle + 4);
  v72 = (struct NDIS_NBL_TRACKER_HANDLE__ *)NetBufferList;
  if ( *(_BYTE *)v10 == 5
    && (v10[14] & 0x8000) != 0
    && !v10[86]
    && (*(_BYTE *)(v11 + 91) && (*(_WORD *)(v11 + 1820) > 1u || *(_BYTE *)(v11 + 1999))
     || (SendFlags & 2) != 0
     || (*(_DWORD *)(v11 + 120) & 0x4000) != 0) )
  {
    v9 = ndisFLoopbackNetBufferLists(v10, NetBufferList, (__int64)&v72);
    NetBufferList = (PNET_BUFFER_LIST)v72;
  }
  if ( !NetBufferList )
    return;
  LODWORD(v9) = KeGetPcr()->Prcb.Number;
  v12 = *((_QWORD *)NdisFilterHandle + 54) + 96 * v9;
  if ( ndisIterativeDataPathDisabled || (SendFlags & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v12 + 16) )
  {
    v34 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)NdisFilterHandle + 58);
    NextSendNetBufferListsContext = (void *)*((_QWORD *)NdisFilterHandle + 56);
    NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)NdisFilterHandle + 55);
    v71 = NextSendNetBufferListsContext;
    if ( v34->Header.Type != 17 )
    {
      if ( !ndisIterativeDataPathDisabled && ((SendFlags & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v44 = (struct _NET_BUFFER_LIST **)v61;
        v74 = Number;
        v61[2] = 0LL;
        v45 = v72;
        v61[0] = v72;
        v61[1] = v72;
        *((_QWORD *)v72 + 14) = 0LL;
        *((_DWORD *)v45 + 33) = SendFlags;
        *((_DWORD *)v45 + 35) = v6;
        if ( v34->Header.Type == 5 )
        {
          while ( *v44 )
          {
            v46 = v34;
            v47 = (__int64)v34->IterativeDataPathTracker[Number];
            v48 = *(_BYTE *)(v47 + 16);
            *(_BYTE *)(v47 + 16) = 1;
            v49 = *v44;
            LOBYTE(v73) = v48;
            *v44 = 0LL;
            if ( v49 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v49->Scratch;
                ChildRefCount = v49->ChildRefCount;
                Context = v49->NdisReserved2;
                v49->ChildRefCount = 0;
                ndisCallSendHandler(
                  v34,
                  NextSendNetBufferListsHandler,
                  NextSendNetBufferListsContext,
                  v49,
                  Context,
                  0,
                  ChildRefCount);
                NextSendNetBufferListsContext = v71;
                v49 = Scratch;
              }
              while ( Scratch );
              v48 = v73;
              Number = v74;
            }
            *(_BYTE *)(v47 + 16) = 0;
            if ( v48 )
            {
              *(_BYTE *)(v47 + 16) = 1;
              goto LABEL_94;
            }
            v34 = (struct _NDIS_FILTER_BLOCK *)v34->NextSendNetBufferListsObject;
            v44 = (struct _NET_BUFFER_LIST **)v47;
            NextSendNetBufferListsContext = v46->NextSendNetBufferListsContext;
            NextSendNetBufferListsHandler = v46->NextSendNetBufferListsHandler;
            v71 = NextSendNetBufferListsContext;
            if ( v34->Header.Type != 5 )
              goto LABEL_94;
          }
        }
        else
        {
LABEL_94:
          v51 = *v44;
          if ( *v44 )
          {
            *v44 = 0LL;
            do
            {
              v52 = (struct _NET_BUFFER_LIST *)v51->Scratch;
              v56 = v51->ChildRefCount;
              Contexta = v51->NdisReserved2;
              v51->ChildRefCount = 0;
              ndisCallSendHandler(
                v34,
                NextSendNetBufferListsHandler,
                NextSendNetBufferListsContext,
                v51,
                Contexta,
                0,
                v56);
              NextSendNetBufferListsContext = v71;
              v51 = v52;
            }
            while ( v52 );
          }
        }
      }
      else
      {
        v39 = v72;
        v66 = v72;
        v63 = v34;
        v64 = NextSendNetBufferListsContext;
        v68 = 0LL;
        v65 = NextSendNetBufferListsHandler;
        v67 = v6;
        v69 = SendFlags;
        if ( KeExpandKernelStackAndCalloutEx(
               (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
               Parameter,
               0x4CCCuLL,
               0,
               0LL) < 0 )
        {
          v40 = v39;
          do
          {
            *((_DWORD *)v40 + 35) = -1073741670;
            v40 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)v40;
          }
          while ( v40 );
          do
          {
            v39 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)v39;
            ++v4;
          }
          while ( v39 );
          _InterlockedExchangeAdd(&v34->DroppedSendNbls, v4);
          ndisQueueStackExpansionFallbackNbls(v34, (struct _NET_BUFFER_LIST *)v72, 1u);
        }
      }
      return;
    }
    v37 = v72;
    v38 = (NDIS_HANDLE)*((_QWORD *)NdisFilterHandle + 56);
    v9 = *((_QWORD *)NdisFilterHandle + 55);
LABEL_48:
    ((void (__fastcall *)(NDIS_HANDLE, void *, _QWORD, _QWORD))v9)(v38, v37, v6, SendFlags);
    return;
  }
  v13 = SendFlags | 1;
  if ( !*(_QWORD *)v12 )
  {
    v14 = v72;
    *(_QWORD *)v12 = v72;
LABEL_11:
    *(_QWORD *)(v12 + 8) = v14;
    *((_QWORD *)v14 + 14) = 0LL;
    *((_DWORD *)v14 + 33) = v13;
    *((_DWORD *)v14 + 35) = v6;
    return;
  }
  v41 = *(struct NDIS_NBL_TRACKER_HANDLE__ ***)(v12 + 8);
  if ( v6 != *((_DWORD *)v41 + 35) || v13 != *((_DWORD *)v41 + 33) || (v13 & 0x34) != 0 )
  {
    v14 = v72;
    v41[14] = v72;
    goto LABEL_11;
  }
  for ( i = *v41; i; i = *(struct NDIS_NBL_TRACKER_HANDLE__ **)i )
    v41 = (struct NDIS_NBL_TRACKER_HANDLE__ **)i;
  *v41 = v72;
}
