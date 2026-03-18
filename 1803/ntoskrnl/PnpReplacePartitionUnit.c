/*
 * XREFs of PnpReplacePartitionUnit @ 0x140732D40
 * Callers:
 *     IoReplacePartitionUnit @ 0x1407242C0 (IoReplacePartitionUnit.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PnprQueryReplaceFeatures @ 0x14023CE94 (PnprQueryReplaceFeatures.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x140240230 (KeFindFirstSetLeftAffinityEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PnprGetMillisecondCounter @ 0x140482DFC (PnprGetMillisecondCounter.c)
 *     PnprInitiateReplaceOperation @ 0x140482E4C (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceDevices @ 0x1404837F0 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1404842A0 (PnprWakeDevices.c)
 *     MmUnloadSystemImage @ 0x140605910 (MmUnloadSystemImage.c)
 *     PnprAllocateMappingReserves @ 0x140733BF8 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x140733DB0 (PnprCollectResources.c)
 *     PnprFreeMappingReserve @ 0x140734138 (PnprFreeMappingReserve.c)
 *     PnprIdentifyUnits @ 0x140734384 (PnprIdentifyUnits.c)
 *     PnprLegacyDeviceDriversPresent @ 0x140734828 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x140734878 (PnprLoadPluginDriver.c)
 *     PnprLockPagesForReplace @ 0x140734A00 (PnprLockPagesForReplace.c)
 *     PnprLogFailureEvent @ 0x140734A34 (PnprLogFailureEvent.c)
 *     PnprLogStartEvent @ 0x140734B60 (PnprLogStartEvent.c)
 *     PnprLogSuccessEvent @ 0x140734C34 (PnprLogSuccessEvent.c)
 *     PnprMmConstruct @ 0x140735024 (PnprMmConstruct.c)
 *     PnprMmFree @ 0x140735130 (PnprMmFree.c)
 *     PnprUnlockPagesForReplace @ 0x1407352F0 (PnprUnlockPagesForReplace.c)
 */

LONG __fastcall PnpReplacePartitionUnit(_QWORD *a1)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v3; // r15
  ULONG_PTR v4; // rcx
  __int64 v5; // rdx
  ULONG_PTR v6; // r8
  __int64 v7; // rdx
  PVOID PoolWithTag; // rax
  __int64 v9; // rbx
  int PluginDriver; // esi
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  ULONG_PTR v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  ULONG_PTR v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  bool v43; // zf
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // edx
  int v49; // eax
  __int64 v50; // rdx
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  int ReplaceFeatures; // eax
  __int64 v57; // rcx
  char v58; // r15
  int v59; // eax
  int v60; // edx
  int v61; // edx
  __int64 v62; // rcx
  int v63; // eax
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  int v67; // eax
  __int64 v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // rdx
  _QWORD *v71; // rcx
  __int64 v72; // r8
  int v73; // eax
  int FirstSetLeftAffinity; // eax
  unsigned int v75; // ecx
  ULONG_PTR v76; // r14
  void (*v77)(void); // rax
  void *v78; // rcx
  __int64 v79; // r14
  void *v80; // rcx
  void *v81; // rcx
  void *v82; // rcx
  void *v83; // rcx
  ULONG v85; // [rsp+30h] [rbp-D0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v88; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v89[21]; // [rsp+68h] [rbp-98h] BYREF
  char v90[64]; // [rsp+110h] [rbp+10h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v3 = ActiveProcessorCount;
  v85 = ActiveProcessorCount;
  KeWaitForSingleObject(&PnpReplaceEvent, Executive, 0, 0, 0LL);
  if ( *((int *)a1 + 4) >= 0 )
  {
    v4 = a1[1];
    if ( !v4 || (v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL)) == 0 || (*(_DWORD *)(v5 + 396) & 0x20000) != 0 )
    {
      if ( v4 )
      {
        IoAddTriageDumpDataBlock(v4, *(unsigned __int16 *)(v4 + 2));
        v4 = a1[1];
        v27 = *(_QWORD *)(v4 + 8);
        if ( v27 )
        {
          IoAddTriageDumpDataBlock(*(_QWORD *)(v4 + 8), *(__int16 *)(v27 + 2));
          v4 = a1[1];
          v28 = *(_QWORD *)(v4 + 8);
          if ( *(_WORD *)(v28 + 56) )
          {
            IoAddTriageDumpDataBlock(v28 + 56, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(a1[1] + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(a1[1] + 8LL) + 56LL));
            v4 = a1[1];
          }
        }
        if ( v4 )
          v29 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
        else
          v29 = 0LL;
        if ( v29 )
        {
          if ( v4 )
            v30 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            v30 = 0LL;
          if ( v4 )
            v31 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            LODWORD(v31) = 0;
          IoAddTriageDumpDataBlock(v31, 728);
          if ( *(_WORD *)(v30 + 40) )
          {
            IoAddTriageDumpDataBlock(v30 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v30 + 48), *(unsigned __int16 *)(v30 + 40));
          }
          v4 = a1[1];
          if ( v4 )
            v32 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          else
            v32 = 0LL;
          if ( *(_WORD *)(v32 + 56) )
          {
            if ( v4 )
              v33 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
            else
              LODWORD(v33) = 0;
            IoAddTriageDumpDataBlock(v33 + 56, 2);
            v34 = a1[1];
            if ( v34 )
              v35 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
            else
              v35 = 0LL;
            if ( v34 )
              v36 = *(_QWORD *)(*(_QWORD *)(v34 + 312) + 40LL);
            else
              v36 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v36 + 64), *(unsigned __int16 *)(v35 + 56));
            v4 = a1[1];
          }
          if ( v4 )
          {
            v37 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
          }
          else
          {
            v37 = 0LL;
            v4 = 0LL;
          }
          if ( *(_QWORD *)(v37 + 16) )
          {
            if ( v4 )
            {
              v38 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
            }
            else
            {
              v38 = 0LL;
              v4 = 0LL;
            }
            if ( *(_WORD *)(*(_QWORD *)(v38 + 16) + 56LL) )
            {
              if ( v4 )
                v39 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
              else
                v39 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v39 + 16) + 56, 2);
              v40 = a1[1];
              if ( v40 )
                v41 = *(_QWORD *)(*(_QWORD *)(v40 + 312) + 40LL);
              else
                v41 = 0LL;
              if ( v40 )
                v42 = *(_QWORD *)(*(_QWORD *)(v40 + 312) + 40LL);
              else
                v42 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v42 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v41 + 16) + 56LL));
              v4 = a1[1];
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v4, 0LL, 0LL);
    }
    v6 = *a1;
    if ( !*a1 || (v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL)) == 0 || (*(_DWORD *)(v7 + 396) & 0x20000) != 0 )
    {
      if ( v6 )
      {
        IoAddTriageDumpDataBlock(*a1, *(unsigned __int16 *)(v6 + 2));
        v6 = *a1;
        v11 = *(_QWORD *)(*a1 + 8LL);
        if ( v11 )
        {
          IoAddTriageDumpDataBlock(v11, *(__int16 *)(v11 + 2));
          v6 = *a1;
          v12 = (_WORD *)(*(_QWORD *)(*a1 + 8LL) + 56LL);
          if ( *v12 )
          {
            IoAddTriageDumpDataBlock((int)v12, 2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 64LL),
              *(unsigned __int16 *)(*(_QWORD *)(*a1 + 8LL) + 56LL));
            v6 = *a1;
          }
        }
        if ( v6 )
          v13 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
        else
          v13 = 0LL;
        if ( v13 )
        {
          if ( v6 )
            v14 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            v14 = 0LL;
          if ( v6 )
            v15 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            LODWORD(v15) = 0;
          IoAddTriageDumpDataBlock(v15, 728);
          if ( *(_WORD *)(v14 + 40) )
          {
            IoAddTriageDumpDataBlock(v14 + 40, 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 48), *(unsigned __int16 *)(v14 + 40));
          }
          v6 = *a1;
          if ( *a1 )
            v16 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          else
            v16 = 0LL;
          if ( *(_WORD *)(v16 + 56) )
          {
            if ( v6 )
              v17 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
            else
              LODWORD(v17) = 0;
            IoAddTriageDumpDataBlock(v17 + 56, 2);
            v18 = *a1;
            if ( *a1 )
              v19 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
            else
              v19 = 0LL;
            if ( v18 )
              v20 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
            else
              v20 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v20 + 64), *(unsigned __int16 *)(v19 + 56));
            v6 = *a1;
          }
          if ( v6 )
          {
            v21 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
          }
          else
          {
            v21 = 0LL;
            v6 = 0LL;
          }
          if ( *(_QWORD *)(v21 + 16) )
          {
            if ( v6 )
            {
              v22 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
            }
            else
            {
              v22 = 0LL;
              v6 = 0LL;
            }
            if ( *(_WORD *)(*(_QWORD *)(v22 + 16) + 56LL) )
            {
              if ( v6 )
                v23 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
              else
                v23 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v23 + 16) + 56, 2);
              v24 = *a1;
              if ( *a1 )
                v25 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
              else
                v25 = 0LL;
              if ( v24 )
                v26 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
              else
                v26 = 0LL;
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v26 + 16) + 64LL),
                *(unsigned __int16 *)(*(_QWORD *)(v25 + 16) + 56LL));
              v6 = *a1;
            }
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v6, 0LL, 0LL);
    }
    PnprLogStartEvent(*a1, a1[1]);
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x5238uLL, 0x51706E50u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    PluginDriver = -1073741670;
    goto LABEL_189;
  }
  memset(PoolWithTag, 0, 0x5238uLL);
  v43 = KeDynamicPartitioningSupported == 0;
  *(_QWORD *)v9 = *a1;
  *(_QWORD *)(v9 + 32) = a1[1];
  *(_DWORD *)(v9 + 64) = *((_DWORD *)a1 + 4);
  *(_QWORD *)(v9 + 160) = v9 + 152;
  *(_QWORD *)(v9 + 152) = v9 + 152;
  PnprContext = v9;
  if ( v43 && *((int *)a1 + 4) >= 0 )
  {
    v44 = *(_DWORD *)(v9 + 20984);
    if ( !v44 )
      v44 = 174;
    *(_DWORD *)(v9 + 20984) = v44;
    v45 = *(_DWORD *)(v9 + 20988);
    if ( !v45 )
      v45 = 2;
    *(_DWORD *)(v9 + 20988) = v45;
LABEL_116:
    PluginDriver = -1073741637;
    goto LABEL_189;
  }
  if ( (unsigned __int8)PnprLegacyDeviceDriversPresent() )
  {
    v46 = PnprContext;
    PluginDriver = -1073741621;
    v47 = *(_DWORD *)(PnprContext + 20984);
    if ( !v47 )
      v47 = 186;
    v48 = 7;
LABEL_121:
    *(_DWORD *)(v46 + 20984) = v47;
    v49 = *(_DWORD *)(v46 + 20988);
    if ( !v49 )
      v49 = v48;
    *(_DWORD *)(v46 + 20988) = v49;
    goto LABEL_189;
  }
  PnprGetMillisecondCounter(1);
  if ( *((int *)a1 + 4) < 0 )
  {
    PnprLockPagesForReplace();
    PnprQuiesceDevices(v90);
    PnprWakeDevices((__int64)v90);
    PnprUnlockPagesForReplace();
    PluginDriver = 0;
    goto LABEL_189;
  }
  PluginDriver = PnprIdentifyUnits(*(PDEVICE_OBJECT *)v9, *(PDEVICE_OBJECT *)(v9 + 32));
  if ( PluginDriver < 0 )
  {
    v50 = PnprContext;
    v51 = *(_DWORD *)(PnprContext + 20984);
    if ( !v51 )
      v51 = 223;
    *(_DWORD *)(PnprContext + 20984) = v51;
    v52 = *(_DWORD *)(v50 + 20988);
    if ( !v52 )
      v52 = 3;
    *(_DWORD *)(v50 + 20988) = v52;
    goto LABEL_189;
  }
  PluginDriver = PnprCollectResources(v9, v9 + 32);
  if ( PluginDriver < 0 )
  {
    v53 = PnprContext;
    v54 = *(_DWORD *)(PnprContext + 20984);
    if ( !v54 )
      v54 = 236;
    *(_DWORD *)(PnprContext + 20984) = v54;
    v55 = *(_DWORD *)(v53 + 20988);
    if ( !v55 )
      v55 = 1;
    goto LABEL_137;
  }
  PluginDriver = PnprLoadPluginDriver(v9 + 20864, v9 + 20888);
  if ( PluginDriver >= 0 )
  {
    ReplaceFeatures = PnprQueryReplaceFeatures(v9 + 20888, (PDEVICE_OBJECT *)(v9 + 32));
    v57 = *(_QWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 64) |= ReplaceFeatures;
    v58 = ReplaceFeatures;
    if ( *(_DWORD *)(v57 + 4) )
    {
      v59 = *(_DWORD *)(v9 + 20896);
      if ( (v59 & 1) == 0 || !*(_QWORD *)(v9 + 20928) )
      {
        v60 = 277;
        goto LABEL_165;
      }
      if ( (v59 & 2) != 0 && !*(_QWORD *)(v9 + 20936) )
      {
        v60 = 285;
LABEL_165:
        v65 = PnprContext;
        v3 = v85;
        v66 = *(_DWORD *)(PnprContext + 20984);
        if ( !v66 )
          v66 = v60;
        *(_DWORD *)(PnprContext + 20984) = v66;
        v67 = *(_DWORD *)(v65 + 20988);
        if ( !v67 )
          v67 = 9;
        *(_DWORD *)(v65 + 20988) = v67;
        goto LABEL_116;
      }
      PluginDriver = PnprMmConstruct(v57, v9 + 152);
      if ( PluginDriver < 0 )
      {
        v61 = 297;
        goto LABEL_147;
      }
      if ( (v58 & 8) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v9 + 56) + 4LL) = 0;
      }
      else if ( !*(_QWORD *)(v9 + 20968) || (*(_DWORD *)(v9 + 64) & 0x20) != 0 )
      {
        v60 = 321;
        goto LABEL_165;
      }
      v3 = v85;
      PluginDriver = PnprAllocateMappingReserves(v9 + 136, v9 + 144, v85);
      if ( PluginDriver < 0 )
      {
        v46 = PnprContext;
        v47 = *(_DWORD *)(PnprContext + 20984);
        if ( !v47 )
          v47 = 336;
        v48 = 10;
        goto LABEL_121;
      }
      *(_QWORD *)(v9 + 168) = 0LL;
LABEL_171:
      if ( (*(_DWORD *)(v9 + 64) & 0x20) != 0 && !*(_QWORD *)(v9 + 20976) )
      {
        v46 = PnprContext;
        PluginDriver = -1073741637;
        v47 = *(_DWORD *)(PnprContext + 20984);
        if ( !v47 )
          v47 = 356;
        v48 = 9;
        goto LABEL_121;
      }
      *(_DWORD *)(v9 + 176) = v3;
      KeCopyAffinityEx((__int64)&v88, (unsigned __int16 *)KeActiveProcessors);
      v68 = *(_QWORD *)(v9 + 16);
      v69 = *(_DWORD *)(v68 + 8);
      if ( v69 )
      {
        v70 = *(_QWORD *)v68 - (_QWORD)v89;
        v71 = v89;
        v72 = v69;
        do
        {
          *v71 &= ~*(_QWORD *)((char *)v71 + v70);
          ++v71;
          --v72;
        }
        while ( v72 );
      }
      if ( !(unsigned int)KeIsEmptyAffinityEx(&v88) )
      {
        if ( ((v89[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) != 0 )
          FirstSetLeftAffinity = 0;
        else
          FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx(&v88);
        *(_DWORD *)(v9 + 180) = FirstSetLeftAffinity;
        v75 = KiProcessorIndexToNumberMappingTable[FirstSetLeftAffinity];
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v75 >> 6);
        Affinity.Mask = 1LL << (v75 & 0x3F);
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        PluginDriver = PnprInitiateReplaceOperation();
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        goto LABEL_189;
      }
      v53 = PnprContext;
      PluginDriver = -1073741621;
      v73 = *(_DWORD *)(PnprContext + 20984);
      if ( !v73 )
        v73 = 383;
      *(_DWORD *)(PnprContext + 20984) = v73;
      v55 = *(_DWORD *)(v53 + 20988);
      if ( !v55 )
        v55 = 6;
LABEL_137:
      *(_DWORD *)(v53 + 20988) = v55;
      goto LABEL_189;
    }
LABEL_170:
    v3 = v85;
    goto LABEL_171;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v9 + 24) + 4LL) )
    goto LABEL_170;
  v61 = 262;
LABEL_147:
  v62 = PnprContext;
  v3 = v85;
  v63 = *(_DWORD *)(PnprContext + 20984);
  if ( !v63 )
    v63 = v61;
  *(_DWORD *)(PnprContext + 20984) = v63;
  v64 = *(_DWORD *)(v62 + 20988);
  if ( !v64 )
    v64 = 1;
  *(_DWORD *)(v62 + 20988) = v64;
LABEL_189:
  if ( *((int *)a1 + 4) >= 0 )
  {
    if ( PluginDriver < 0 )
    {
      PnprLogFailureEvent(*a1, a1[1], (unsigned int)PluginDriver);
    }
    else
    {
      *(_DWORD *)(v9 + 21040) = PnprGetMillisecondCounter(0);
      PnprLogSuccessEvent();
    }
  }
  if ( v9 )
  {
    v76 = *(_QWORD *)(v9 + 20864);
    if ( v76 )
    {
      v77 = *(void (**)(void))(v9 + 20904);
      if ( v77 )
        v77();
      MmUnloadSystemImage(v76);
    }
    v78 = *(void **)(v9 + 136);
    if ( v78 && *(_QWORD *)(v9 + 144) )
    {
      if ( (_DWORD)v3 )
      {
        v79 = 0LL;
        do
        {
          PnprFreeMappingReserve(v79 + *(_QWORD *)(v9 + 136));
          PnprFreeMappingReserve(v79 + *(_QWORD *)(v9 + 144));
          v79 += 24LL;
          --v3;
        }
        while ( v3 );
        v78 = *(void **)(v9 + 136);
      }
      ExFreePoolWithTag(v78, 0x51706E50u);
      ExFreePoolWithTag(*(PVOID *)(v9 + 144), 0x51706E50u);
    }
    PnprMmFree(v9 + 152);
    v80 = *(void **)(v9 + 16);
    if ( v80 )
    {
      ExFreePoolWithTag(v80, 0x51706E50u);
      *(_QWORD *)(v9 + 16) = 0LL;
    }
    v81 = *(void **)(v9 + 24);
    if ( v81 )
    {
      ExFreePoolWithTag(v81, 0x51706E50u);
      *(_QWORD *)(v9 + 24) = 0LL;
    }
    v82 = *(void **)(v9 + 48);
    if ( v82 )
    {
      ExFreePoolWithTag(v82, 0x51706E50u);
      *(_QWORD *)(v9 + 48) = 0LL;
    }
    v83 = *(void **)(v9 + 56);
    if ( v83 )
    {
      ExFreePoolWithTag(v83, 0x51706E50u);
      *(_QWORD *)(v9 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v9, 0x51706E50u);
  }
  KeSetEvent(&PnpReplaceEvent, 0, 0);
  *((_DWORD *)a1 + 5) = PluginDriver;
  return KeSetEvent((PRKEVENT)a1 + 1, 0, 0);
}
