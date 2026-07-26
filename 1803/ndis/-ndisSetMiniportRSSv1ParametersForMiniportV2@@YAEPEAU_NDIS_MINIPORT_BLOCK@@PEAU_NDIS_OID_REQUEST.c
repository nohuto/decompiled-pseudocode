/*
 * XREFs of ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C234
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00B59A0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ndisCalculateRssParametersSize @ 0x1C0015F34 (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007AD24 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C007AF44 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C007B370 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C007B744 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z @ 0x1C007B870 (-ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z.c)
 *     ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C007C1E4 (-ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPO.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSv1ParametersForMiniportV2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  unsigned int *InformationBuffer; // r15
  unsigned __int64 *p_Lock; // r13
  unsigned __int16 v7; // r12
  KIRQL v8; // bl
  int v9; // eax
  int v10; // edi
  unsigned __int16 v11; // cx
  int v12; // eax
  char v13; // al
  unsigned int v14; // ecx
  size_t v15; // rax
  _WORD *v16; // rdi
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v17; // r10
  int v18; // r8d
  __int16 v19; // r9
  _PROCESSOR_NUMBER DefaultProcessorNumber; // ebx
  char v21; // r13
  unsigned __int16 IndirectionTableSize; // cx
  unsigned __int16 v23; // r12
  unsigned __int16 v24; // cx
  unsigned int NumQueuePairs; // r9d
  KIRQL v26; // bl
  size_t v27; // r8
  void *v28; // rdx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v29; // rcx
  unsigned __int8 result; // al
  struct _PROCESSOR_NUMBER v31[2]; // [rsp+20h] [rbp-59h]
  size_t v32; // [rsp+30h] [rbp-49h]
  size_t v33; // [rsp+30h] [rbp-49h]
  unsigned __int16 v34; // [rsp+40h] [rbp-39h]
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v35; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-29h] BYREF
  void *Src; // [rsp+58h] [rbp-21h] BYREF
  struct _NDIS_VPORT_BLOCK *v38; // [rsp+60h] [rbp-19h] BYREF
  void *v39; // [rsp+68h] [rbp-11h]
  struct _PROCESSOR_NUMBER *v40; // [rsp+70h] [rbp-9h]
  struct _PROCESSOR_NUMBER *v41; // [rsp+78h] [rbp-1h]
  size_t Size; // [rsp+80h] [rbp+7h]
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v43; // [rsp+88h] [rbp+Fh] BYREF
  bool v44; // [rsp+E0h] [rbp+67h]
  bool v45; // [rsp+E8h] [rbp+6Fh]
  struct _PROCESSOR_NUMBER v46; // [rsp+E8h] [rbp+6Fh]
  unsigned int v48; // [rsp+F8h] [rbp+7Fh] BYREF

  InformationBuffer = (unsigned int *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  p_Lock = &a1->Lock;
  v41 = 0LL;
  v40 = 0LL;
  *((_BYTE *)InformationBuffer + 43) = 0;
  v7 = 0;
  v34 = 0;
  v38 = 0LL;
  v44 = 0;
  v45 = 0;
  v39 = 0LL;
  v35 = 0LL;
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 4130787;
  v9 = ndisAllocateCombinedRSSParameters(a1, a2, &v38, &v35, &v43, (struct _NDIS_RECEIVE_SCALE_PARAMETERS **)&Src);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  v10 = v9;
  KeReleaseSpinLock(p_Lock, v8);
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
    {
      v11 = 11;
      v31[0] = (struct _PROCESSOR_NUMBER)v10;
LABEL_4:
      WPP_SF_qqd(v11, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, a1, a2, *(_QWORD *)&v31[0].Group);
    }
  }
  else
  {
    LOBYTE(v48) = ndisIsTargetNonDefaultVPort(a2, (NDIS_OBJECT_HEADER *)&v48);
    v12 = ndisCalculateRssParametersSize((__int64)InformationBuffer, &v36);
    v10 = v12;
    if ( v12 )
    {
      if ( (unsigned __int8)byte_1C0099612 < 2u )
        goto LABEL_35;
      v11 = 12;
      v31[0] = (struct _PROCESSOR_NUMBER)v12;
      goto LABEL_4;
    }
    v13 = *((_BYTE *)InformationBuffer + 1);
    if ( v13 == 1 )
    {
      v14 = 28;
    }
    else
    {
      v14 = 44;
      if ( v13 == 2 )
        v14 = 40;
    }
    v15 = v36;
    v16 = Src;
    if ( v36 <= v14 )
      v15 = v14;
    Size = v15;
    memmove(Src, InformationBuffer, (unsigned int)v15);
    v17 = v35;
    v18 = 0;
    v19 = *((_WORD *)InformationBuffer + 2);
    DefaultProcessorNumber = v35->DefaultProcessorNumber;
    if ( (v19 & 0x10) != 0 || !*((_BYTE *)InformationBuffer + 8) )
    {
      v21 = 0;
    }
    else
    {
      v21 = 1;
      v18 = ~(_BYTE)v19 & 2 | 1;
      if ( (v19 & 8) == 0 )
      {
        v18 = ~(_BYTE)v19 & 2 | 5;
        v39 = (char *)InformationBuffer + InformationBuffer[6];
      }
      if ( (v19 & 0x20) == 0 )
      {
        v46 = (struct _PROCESSOR_NUMBER)InformationBuffer[10];
        v46.Reserved = 0;
        v45 = !ndisAreProcessorsEqual(DefaultProcessorNumber, v46);
      }
      if ( (v19 & 4) == 0 )
      {
        IndirectionTableSize = v17->IndirectionTableSize;
        v23 = v16[6];
        v41 = (struct _PROCESSOR_NUMBER *)(&v17->Header.Type + v17->IndirectionTableOffset);
        v24 = IndirectionTableSize >> 2;
        v7 = v23 >> 2;
        v40 = (struct _PROCESSOR_NUMBER *)((char *)v16 + *((unsigned int *)v16 + 4));
        v34 = v24;
        v44 = v7 < v24;
        if ( v7 > v24 )
        {
          v18 |= 0x10u;
          v44 = v7 < v24;
        }
      }
    }
    if ( (_BYTE)v48 )
      NumQueuePairs = v38->VPortParams.NumQueuePairs;
    else
      NumQueuePairs = a1->RecvScaleCapabilities.NumberOfReceiveQueues;
    LODWORD(v32) = *((unsigned __int16 *)InformationBuffer + 10);
    v10 = ndisInternalSetRSSv2Parameters(a1, a2, v18, NumQueuePairs, v7, InformationBuffer[2], v32, v39);
    if ( !v10 )
    {
      if ( !v21
        || !v45 && (InformationBuffer[1] & 4) != 0
        || (v10 = ndisInternalSetRSSv2IndirectionTable(
                    a1,
                    a2,
                    v34,
                    v41,
                    DefaultProcessorNumber,
                    v7,
                    v40,
                    (struct _PROCESSOR_NUMBER *)Src + 10)) == 0
        && (!v44 || (LODWORD(v33) = 0, (v10 = ndisInternalSetRSSv2Parameters(a1, a2, 16, 0, v7, 0, v33, 0LL)) == 0)) )
      {
        v10 = 0;
        v26 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        v27 = Size;
        v28 = Src;
        a1->MiniportThread = KeGetCurrentThread();
        v29 = v35;
        a1->LockDbg = 4131024;
        memmove(v29, v28, v27);
        ndisSetCombinedRSSParameters(a1, a2, v38, v35);
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v26);
      }
    }
  }
LABEL_35:
  result = 1;
  *a3 = v10;
  return result;
}
