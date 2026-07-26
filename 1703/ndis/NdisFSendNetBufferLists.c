/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C000D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0004160 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C005A5A4 (ndisFLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  unsigned int v4; // r13d
  ULONG v5; // esi
  NDIS_PORT_NUMBER v6; // ebx
  struct _NET_BUFFER_LIST *v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r14
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  char v12; // bl
  char v13; // r8
  unsigned __int64 v14; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned __int64 v16; // rbx
  __int64 v17; // r12
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // r10
  __int64 v28; // rax
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // esi
  struct _NET_BUFFER_LIST *v33; // rax
  struct _NET_BUFFER_LIST **p_Next; // rcx
  struct _NET_BUFFER_LIST *i; // rax
  struct _NDIS_FILTER_BLOCK *v36; // rdi
  void (__fastcall *NextSendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r15
  void *NextSendNetBufferListsContext; // r12
  unsigned int Number; // edx
  struct _NET_BUFFER_LIST **v40; // r14
  struct _NET_BUFFER_LIST *v41; // rax
  struct _NDIS_FILTER_BLOCK *v42; // r13
  __int64 v43; // rsi
  char v44; // al
  struct _NET_BUFFER_LIST *v45; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v47; // r9
  struct _NET_BUFFER_LIST *v48; // rbx
  struct _NET_BUFFER_LIST *v49; // rbx
  struct _NET_BUFFER_LIST *v50; // rax
  unsigned int Context; // [rsp+20h] [rbp-89h]
  unsigned int Contexta; // [rsp+20h] [rbp-89h]
  unsigned int ChildRefCount; // [rsp+30h] [rbp-79h]
  unsigned int v54; // [rsp+30h] [rbp-79h]
  char v55; // [rsp+40h] [rbp-69h]
  char v56; // [rsp+41h] [rbp-68h]
  struct _NET_BUFFER_LIST *v57; // [rsp+48h] [rbp-61h] BYREF
  void *v58; // [rsp+50h] [rbp-59h]
  __int64 v59; // [rsp+58h] [rbp-51h]
  __int64 v60; // [rsp+60h] [rbp-49h]
  _QWORD v61[3]; // [rsp+68h] [rbp-41h] BYREF
  char Parameter[8]; // [rsp+80h] [rbp-29h] BYREF
  struct _NDIS_FILTER_BLOCK *v63; // [rsp+88h] [rbp-21h]
  void *v64; // [rsp+90h] [rbp-19h]
  void (__fastcall *v65)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+98h] [rbp-11h]
  struct _NET_BUFFER_LIST *v66; // [rsp+A0h] [rbp-9h]
  NDIS_PORT_NUMBER v67; // [rsp+A8h] [rbp-1h]
  __int64 v68; // [rsp+ACh] [rbp+3h]
  ULONG v69; // [rsp+B4h] [rbp+Bh]
  char v73; // [rsp+120h] [rbp+77h]
  unsigned int v75; // [rsp+128h] [rbp+7Fh]

  v4 = 0;
  v5 = SendFlags;
  v6 = PortNumber;
  v7 = NetBufferList;
  if ( ndisNblTrackerMode )
  {
    v8 = *((_QWORD *)NdisFilterHandle + 100);
    v9 = 0LL;
    v10 = *((_QWORD *)NdisFilterHandle + 57);
    v11 = 0LL;
    v12 = ndisNblTrackerEpoch;
    v60 = v8;
    v59 = 0LL;
    v13 = SendFlags & 1;
    v56 = 0;
    v55 = SendFlags & 1;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v7, (struct NDIS_NBL_TRACKER_HANDLE__ *)v8, 0x90u, (void *)v10, SendFlags & 1);
      v13 = v5 & 1;
      v7 = NetBufferList;
    }
    v14 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v14 & 1) != 0 )
    {
      v58 = *(void **)((v14 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v14 ^= ((unsigned __int8)v14 ^ (unsigned __int8)(2 * v12)) & 2;
    }
    else
    {
      v58 = (void *)v14;
    }
    Alignment = v7;
    if ( v7 )
    {
      do
      {
        v16 = (unsigned __int64)Alignment->NetBufferListInfo[26];
        v17 = v60;
        do
        {
          if ( Alignment->NetBufferListInfo[26] != (void *)v16 )
            break;
          if ( !v16 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(v17 & 0xFFFFFFFFFFFFFFFDuLL, v8);
          if ( (v16 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(Alignment) )
          {
            Alignment->NetBufferListInfo[26] = (void *)(v14 | 4);
          }
          else if ( Alignment->SourceHandle != v58 || Alignment->ParentNetBufferList )
          {
            ++v9;
            Alignment->NetBufferListInfo[26] = (void *)v14;
          }
          else
          {
            ++v11;
            Alignment->NetBufferListInfo[26] = (void *)24;
            ++v9;
          }
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
        v13 = v55;
        v18 = v59 - v9;
        if ( (v16 & 1) != 0 && v18 )
        {
          if ( !v55 && !v56 )
          {
            v56 = 1;
            v13 = KeGetCurrentIrql() == 2;
            v55 = v13;
          }
          v19 = v16;
          v20 = v16 & 0xFFFFFFFFFFFFFFF8uLL;
          v8 = 2 * ((v19 >> 1) & 1);
          if ( v13 )
          {
            v21 = (_QWORD *)(*(_QWORD *)(v20 + 8 * v8 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v21 += v18;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 8 * v8 + 48), v18);
          }
        }
        v59 = v9;
      }
      while ( Alignment );
      v7 = NetBufferList;
    }
    v22 = v9 - v11;
    if ( (v14 & 1) != 0 && v22 )
    {
      if ( !v13 && !v56 )
        v13 = KeGetCurrentIrql() == 2;
      v5 = SendFlags;
      v23 = v14;
      v6 = PortNumber;
      v24 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
      v25 = 2 * ((v23 >> 1) & 1);
      if ( v13 )
      {
        v26 = (_QWORD *)(*(_QWORD *)(v24 + 8 * v25 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v26 += v22;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8 * v25 + 48), v22);
      }
    }
    else
    {
      v6 = PortNumber;
      v5 = SendFlags;
    }
  }
  v27 = NdisFilterHandle;
  v28 = *((_QWORD *)NdisFilterHandle + 79);
  if ( (void (__fastcall *)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))v28 == ndisFilterSendNetBufferLists )
  {
    v29 = (_DWORD *)*((_QWORD *)NdisFilterHandle + 58);
    v30 = *((_QWORD *)NdisFilterHandle + 4);
    v57 = v7;
    if ( *(_BYTE *)v29 == 5
      && (v29[14] & 0x8000) != 0
      && !v29[86]
      && (*(_BYTE *)(v30 + 91) && (*(_WORD *)(v30 + 1820) > 1u || *(_BYTE *)(v30 + 1999))
       || (v5 & 2) != 0
       || (*(_DWORD *)(v30 + 120) & 0x4000) != 0) )
    {
      v28 = ndisFLoopbackNetBufferLists(v29, v7, (__int64)&v57);
      v7 = v57;
      v27 = NdisFilterHandle;
    }
    if ( v7 )
    {
      LODWORD(v28) = KeGetPcr()->Prcb.Number;
      v31 = v27[54] + 96 * v28;
      if ( !ndisIterativeDataPathDisabled && ((v5 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v31 + 16) )
      {
        v32 = v5 | 1;
        if ( !*(_QWORD *)v31 )
        {
          v33 = v57;
          *(_QWORD *)v31 = v57;
LABEL_64:
          *(_QWORD *)(v31 + 8) = v33;
          v33->Scratch = 0LL;
          v33->ChildRefCount = v32;
          v33->Status = v6;
          return;
        }
        p_Next = *(struct _NET_BUFFER_LIST ***)(v31 + 8);
        if ( v6 != *((_DWORD *)p_Next + 35) || v32 != *((_DWORD *)p_Next + 33) || (v32 & 0x34) != 0 )
        {
          v33 = v57;
          p_Next[14] = v57;
          goto LABEL_64;
        }
        for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
          p_Next = &i->Next;
        *p_Next = v57;
      }
      else
      {
        v36 = (struct _NDIS_FILTER_BLOCK *)v27[58];
        NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))v27[55];
        NextSendNetBufferListsContext = (void *)v27[56];
        if ( v36->Header.Type == 17 )
        {
          ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))v27[55])(v27[56], v57, v6, v5);
        }
        else if ( !ndisIterativeDataPathDisabled && ((v5 & 1) != 0 || KeGetCurrentIrql() == 2) )
        {
          Number = KeGetPcr()->Prcb.Number;
          v40 = (struct _NET_BUFFER_LIST **)v61;
          v75 = Number;
          v61[2] = 0LL;
          v41 = v57;
          v61[0] = v57;
          v61[1] = v57;
          v57->Scratch = 0LL;
          v41->ChildRefCount = v5;
          v41->Status = v6;
          if ( v36->Header.Type == 5 )
          {
            while ( *v40 )
            {
              v42 = v36;
              v43 = (__int64)v36->IterativeDataPathTracker[Number];
              v44 = *(_BYTE *)(v43 + 16);
              *(_BYTE *)(v43 + 16) = 1;
              v45 = *v40;
              v73 = v44;
              *v40 = 0LL;
              if ( v45 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v45->Scratch;
                  ChildRefCount = v45->ChildRefCount;
                  Context = v45->NdisReserved2;
                  v45->ChildRefCount = 0;
                  ndisCallSendHandler(
                    v36,
                    NextSendNetBufferListsHandler,
                    NextSendNetBufferListsContext,
                    v45,
                    Context,
                    0,
                    ChildRefCount);
                  v45 = Scratch;
                }
                while ( Scratch );
                v44 = v73;
                v42 = v36;
                Number = v75;
              }
              *(_BYTE *)(v43 + 16) = 0;
              if ( v44 )
              {
                *(_BYTE *)(v43 + 16) = 1;
                goto LABEL_79;
              }
              v36 = (struct _NDIS_FILTER_BLOCK *)v36->NextSendNetBufferListsObject;
              v40 = (struct _NET_BUFFER_LIST **)v43;
              NextSendNetBufferListsHandler = v42->NextSendNetBufferListsHandler;
              NextSendNetBufferListsContext = v42->NextSendNetBufferListsContext;
              if ( v36->Header.Type != 5 )
                goto LABEL_79;
            }
          }
          else
          {
LABEL_79:
            v47 = *v40;
            if ( *v40 )
            {
              *v40 = 0LL;
              do
              {
                v48 = (struct _NET_BUFFER_LIST *)v47->Scratch;
                v54 = v47->ChildRefCount;
                Contexta = v47->NdisReserved2;
                v47->ChildRefCount = 0;
                ndisCallSendHandler(
                  v36,
                  NextSendNetBufferListsHandler,
                  NextSendNetBufferListsContext,
                  v47,
                  Contexta,
                  0,
                  v54);
                v47 = v48;
              }
              while ( v48 );
            }
          }
        }
        else
        {
          v49 = v57;
          v66 = v57;
          v63 = v36;
          v64 = NextSendNetBufferListsContext;
          v68 = 0LL;
          v65 = NextSendNetBufferListsHandler;
          v67 = PortNumber;
          v69 = v5;
          if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
          {
            v50 = v49;
            do
            {
              v50->Status = -1073741670;
              v50 = (struct _NET_BUFFER_LIST *)v50->Link.Alignment;
            }
            while ( v50 );
            do
            {
              v49 = (struct _NET_BUFFER_LIST *)v49->Link.Alignment;
              ++v4;
            }
            while ( v49 );
            _InterlockedExchangeAdd(&v36->DroppedSendNbls, v4);
            ndisQueueStackExpansionFallbackNbls(v36, v57, 1u);
          }
        }
      }
    }
  }
  else
  {
    ((void (__fastcall *)(NDIS_HANDLE, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))v28)(NdisFilterHandle, v7, v6, v5);
  }
}
