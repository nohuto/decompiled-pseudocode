/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x1400FBEB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAndAffinityEx @ 0x14008CC70 (KeAndAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x14008CE90 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KeAndGroupAffinityEx @ 0x1400FC600 (KeAndGroupAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400FC680 (KeOrAffinityEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400FC800 (KeQueryMaximumProcessorCountEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

NTSTATUS __stdcall KeQueryLogicalProcessorRelationship(
        PPROCESSOR_NUMBER ProcessorNumber,
        LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
        PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information,
        PULONG Length)
{
  NTSTATUS v4; // r15d
  ULONG v5; // r14d
  ULONG v7; // r13d
  char *v8; // rbx
  __int64 v9; // r12
  LOGICAL_PROCESSOR_RELATIONSHIP v10; // edi
  __int64 v11; // rbx
  DWORD v12; // ebx
  DWORD v13; // r9d
  __int64 v14; // rcx
  unsigned __int64 v15; // r10
  unsigned __int16 v16; // r11
  unsigned int v18; // r13d
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // di
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int16 *v23; // r12
  int v24; // eax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rax
  int v35; // eax
  unsigned __int16 v36; // r9
  WORD v37; // dx
  _QWORD *v38; // r8
  __int64 v39; // r10
  WORD v40; // ax
  __int64 v41; // rax
  unsigned __int16 v42; // dx
  GROUP_AFFINITY *GroupMask; // rcx
  unsigned __int64 *v44; // r8
  unsigned __int64 v45; // r10
  int v46; // edx
  DWORD v47; // eax
  unsigned int v48; // r12d
  __int64 v49; // rdi
  __int64 v50; // r12
  unsigned __int64 v51; // r13
  int v52; // eax
  bool v53; // zf
  ULONG ProcessorIndexFromNumber; // ecx
  ULONG v55; // [rsp+20h] [rbp-E0h]
  ULONG v56; // [rsp+24h] [rbp-DCh]
  ULONG v57; // [rsp+28h] [rbp-D8h]
  NTSTATUS v58; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v59; // [rsp+30h] [rbp-D0h]
  ULONG v60; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v63; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+50h] [rbp-B0h]
  PULONG v65; // [rsp+58h] [rbp-A8h]
  _DWORD v66[44]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v67[44]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v68[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v69; // [rsp+260h] [rbp+160h]
  _BYTE v70[4]; // [rsp+270h] [rbp+170h] BYREF
  char v71; // [rsp+274h] [rbp+174h] BYREF

  v4 = 0;
  v65 = Length;
  v5 = 0;
  v56 = *Length;
  v58 = 0;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v57 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
      return -1073741811;
    v7 = ProcessorIndexFromNumber;
    v60 = ProcessorIndexFromNumber;
  }
  else
  {
    v57 = 0;
    v7 = 0;
    v60 = KeNumberProcessors_0 - 1;
  }
  v55 = v7;
  v8 = &v71;
  v9 = 5LL;
  do
  {
    *(_DWORD *)v8 = 0;
    *((_DWORD *)v8 - 1) = 1310721;
    memset(v8 + 4, 0, 0xA0uLL);
    v8 += 168;
    --v9;
  }
  while ( v9 );
  v66[0] = 1310721;
  memset(&v66[1], 0, 0xA4uLL);
  v67[0] = 1310721;
  memset(&v67[1], 0, 0xA4uLL);
  v10 = RelationshipType;
  v63 = 0LL;
  v64 = 0LL;
  if ( v7 <= v60 )
  {
    while ( 1 )
    {
      v11 = KiProcessorBlock[v7];
      if ( v10 == RelationProcessorPackage || v10 == RelationAll )
      {
        v25 = *(_OWORD *)(v11 + 24736);
        v68[0] = *(_OWORD *)(v11 + 24720);
        v26 = *(_OWORD *)(v11 + 24752);
        v68[1] = v25;
        v27 = *(_OWORD *)(v11 + 24768);
        v68[2] = v26;
        v28 = *(_OWORD *)(v11 + 24784);
        v68[3] = v27;
        v29 = *(_OWORD *)(v11 + 24800);
        v68[4] = v28;
        v30 = *(_OWORD *)(v11 + 24816);
        v68[5] = v29;
        v31 = *(_OWORD *)(v11 + 24832);
        v68[6] = v30;
        v32 = *(_OWORD *)(v11 + 24848);
        v68[7] = v31;
        v33 = *(_OWORD *)(v11 + 24864);
        v34 = *(_QWORD *)(v11 + 24880);
        v68[8] = v32;
        v68[9] = v33;
        v69 = v34;
        v35 = KeAndAffinityEx((unsigned __int16 *)v67, (unsigned __int16 *)v68, 0LL);
        if ( ProcessorNumber || !v35 )
        {
          KeOrAffinityEx(v67, v68, v67);
          v36 = v68[0];
          v37 = 0;
          if ( LOWORD(v68[0]) )
          {
            v38 = (_QWORD *)v68 + 1;
            v39 = LOWORD(v68[0]);
            do
            {
              v40 = v37 + 1;
              v53 = *v38++ == 0LL;
              if ( v53 )
                v40 = v37;
              v37 = v40;
              --v39;
            }
            while ( v39 );
          }
          v41 = (16 * v37 + 39) & 0xFFFFFFF8;
          v5 += v41;
          if ( v5 > v56 )
          {
            v4 = -1073741820;
          }
          else
          {
            Information->Processor.GroupCount = v37;
            Information->Relationship = RelationProcessorPackage;
            v42 = 0;
            Information->Size = v41;
            Information->Group.MaximumGroupCount = 0;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            GroupMask = Information->Processor.GroupMask;
            if ( v36 )
            {
              v44 = (unsigned __int64 *)v68 + 1;
              do
              {
                v45 = *v44;
                if ( *v44 )
                {
                  *(_QWORD *)&GroupMask->Group = 0LL;
                  GroupMask->Group = v42;
                  GroupMask->Mask = v45;
                  ++GroupMask;
                }
                ++v42;
                ++v44;
              }
              while ( v42 < v36 );
            }
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v41);
          }
        }
      }
      if ( v10 == RelationProcessorCore || v10 == RelationAll )
      {
        v50 = *(unsigned __int8 *)(v11 + 208);
        v51 = *(_QWORD *)(v11 + 24920);
        LOWORD(v64) = *(unsigned __int8 *)(v11 + 208);
        v63 = v51;
        v52 = KeAndGroupAffinityEx(v66, &v63, 0LL);
        if ( !ProcessorNumber && v52 )
        {
          v7 = v55;
        }
        else
        {
          if ( LOWORD(v66[0]) <= (unsigned __int16)v50 )
            LOWORD(v66[0]) = v50 + 1;
          *(_QWORD *)&v66[2 * v50 + 2] |= v51;
          v53 = *(_QWORD *)(v11 + 200) == v51;
          v7 = v55;
          v5 += 48;
          if ( v5 <= v56 )
          {
            Information->Processor.Flags = !v53;
            Information->Relationship = RelationProcessorCore;
            Information->Size = 48;
            Information->Processor.EfficiencyClass = *(_BYTE *)(v11 + 23858);
            Information->Processor.GroupCount = 1;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            Information->Processor.GroupMask[0].Mask = 0LL;
            Information->Cache.GroupMask.Mask = 0LL;
            Information->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v11 + 208);
            Information->Processor.GroupMask[0].Mask = *(_QWORD *)(v11 + 24920);
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
          else
          {
            v4 = -1073741820;
          }
        }
      }
      if ( v10 != RelationCache && v10 != RelationAll )
        goto LABEL_12;
      v18 = 0;
      v19 = *(unsigned __int8 *)(v11 + 208);
      LOWORD(v64) = v19;
      if ( !*(_DWORD *)(v11 + 24596) )
        goto LABEL_35;
      v20 = v19;
      do
      {
        v21 = *(_QWORD *)(v11 + 200);
        v22 = v18;
        if ( !*(_QWORD *)(v11 + 8LL * v18 + 24944) )
          goto LABEL_39;
        v59 = *(_QWORD *)(v11 + 8LL * v18 + 24944);
        v63 = v59;
        v23 = (unsigned __int16 *)&v70[168 * v18];
        v24 = KeAndGroupAffinityEx(v23, &v63, 0LL);
        if ( ProcessorNumber || !v24 )
        {
          if ( *v23 <= v20 )
            *v23 = v20 + 1;
          v21 = v59;
          v22 = v18;
          *(_QWORD *)&v23[4 * v20 + 4] |= v59;
LABEL_39:
          v5 += 56;
          if ( v5 > v56 )
          {
            v4 = -1073741820;
          }
          else
          {
            Information->Relationship = RelationCache;
            Information->Size = 56;
            Information->Processor.Flags = *(_BYTE *)(v11 + 12 * v22 + 24536);
            Information->Processor.EfficiencyClass = *(_BYTE *)(v11 + 12 * v22 + 24537);
            Information->Cache.LineSize = *(_WORD *)(v11 + 12 * v22 + 24538);
            Information->Cache.CacheSize = *(_DWORD *)(v11 + 12 * v22 + 24540);
            Information->Cache.Type = *(_DWORD *)(v11 + 12 * v22 + 24544);
            *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
            *(_QWORD *)&Information->Group.Reserved[16] = 0LL;
            *(_DWORD *)&Information->Group.GroupInfo[0].Reserved[2] = 0;
            Information->Cache.GroupMask.Mask = 0LL;
            *(_QWORD *)&Information->Group.GroupInfo[0].Reserved[14] = 0LL;
            Information->Cache.GroupMask.Group = *(unsigned __int8 *)(v11 + 208);
            Information->Cache.GroupMask.Mask = v21;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 56);
          }
        }
        ++v18;
      }
      while ( v18 < *(_DWORD *)(v11 + 24596) );
      v10 = RelationshipType;
LABEL_35:
      v7 = v55;
LABEL_12:
      v55 = ++v7;
      if ( v7 > v60 )
      {
        v58 = v4;
        break;
      }
    }
  }
  if ( v10 == RelationNumaNode || v10 == RelationAll )
  {
    v12 = (unsigned __int16)KeNumberNodes;
    v13 = 0;
    do
    {
      v14 = KeNodeBlock[v13];
      v15 = *(_QWORD *)(v14 + 136);
      if ( v15 )
      {
        v16 = *(_WORD *)(v14 + 144);
        if ( !ProcessorNumber
          || (((unsigned int)KiProcessorIndexToNumberMappingTable[v57] >> 6 == v16) & (unsigned int)(v15 >> (KiProcessorIndexToNumberMappingTable[v57] & 0x3F))) != 0 )
        {
          v5 += 48;
          if ( v5 > v56 )
          {
            v4 = -1073741820;
          }
          else
          {
            Information->Size = 48;
            Information->Relationship = RelationNumaNode;
            Information->NumaNode.NodeNumber = v13;
            *(_QWORD *)Information->Group.Reserved = 0LL;
            *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[16] = 0;
            Information->Cache.GroupMask.Mask = 0LL;
            Information->Processor.GroupMask[0].Group = v16;
            Information->Processor.GroupMask[0].Mask = v15;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 48);
          }
        }
      }
      ++v13;
    }
    while ( v13 < v12 );
    v10 = RelationshipType;
    v58 = v4;
  }
  if ( v10 == RelationGroup || v10 == RelationAll && !ProcessorNumber )
  {
    v46 = (unsigned __int16)KiActiveGroups;
    v47 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
    v5 += v47;
    if ( v5 > v56 )
    {
      v4 = -1073741820;
    }
    else
    {
      Information->Size = v47;
      v48 = 0;
      Information->Group.MaximumGroupCount = KiMaximumGroups;
      Information->Relationship = RelationGroup;
      Information->Cache.LineSize = v46;
      *(_QWORD *)Information->Group.Reserved = 0LL;
      *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
      *(_DWORD *)&Information->Group.Reserved[16] = 0;
      if ( v46 )
      {
        do
        {
          v49 = v48;
          Information->Cache.Reserved[v49 * 48 + 12] = KeQueryMaximumProcessorCountEx(v48);
          Information->Cache.Reserved[v49 * 48 + 13] = KeQueryActiveProcessorCountEx(v48);
          Information->Group.GroupInfo[v49].ActiveProcessorMask = qword_140401408[v48];
          memset(Information->Group.GroupInfo[v49].Reserved, 0, sizeof(Information->Group.GroupInfo[v49].Reserved));
          ++v48;
        }
        while ( v48 < (unsigned __int16)KiActiveGroups );
        v4 = v58;
      }
    }
  }
  if ( !v4 && !v5 )
    v4 = -1073741823;
  *v65 = v5;
  return v4;
}
