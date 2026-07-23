/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x140080400
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAndAffinityEx @ 0x1400450B0 (KeAndAffinityEx.c)
 *     KeAndGroupAffinityEx @ 0x140080B50 (KeAndGroupAffinityEx.c)
 *     KeOrAffinityEx @ 0x140080BD0 (KeOrAffinityEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140088870 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140088D10 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
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
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  int v28; // eax
  unsigned __int16 v29; // r9
  WORD v30; // cx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int16 v34; // dx
  GROUP_AFFINITY *GroupMask; // rcx
  unsigned __int64 *v36; // r8
  unsigned __int64 v37; // r10
  unsigned int v38; // r13d
  unsigned __int16 v39; // ax
  unsigned __int16 v40; // di
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  unsigned __int16 *v43; // r12
  int v44; // eax
  int v45; // edx
  DWORD v46; // ecx
  unsigned int v47; // r12d
  __int64 v48; // rdi
  __int64 v49; // r12
  unsigned __int64 v50; // r13
  int v51; // eax
  bool v52; // zf
  ULONG ProcessorIndexFromNumber; // ecx
  ULONG v54; // [rsp+20h] [rbp-E0h]
  ULONG v55; // [rsp+24h] [rbp-DCh]
  ULONG v56; // [rsp+28h] [rbp-D8h]
  NTSTATUS v57; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v58; // [rsp+30h] [rbp-D0h]
  ULONG v59; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v62; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+50h] [rbp-B0h]
  PULONG v64; // [rsp+58h] [rbp-A8h]
  _DWORD v65[44]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v66[44]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v67[10]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v68; // [rsp+260h] [rbp+160h]
  _BYTE v69[4]; // [rsp+270h] [rbp+170h] BYREF
  char v70; // [rsp+274h] [rbp+174h] BYREF

  v4 = 0;
  v64 = Length;
  v5 = 0;
  v55 = *Length;
  v57 = 0;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v56 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
      return -1073741811;
    v7 = ProcessorIndexFromNumber;
    v59 = ProcessorIndexFromNumber;
  }
  else
  {
    v56 = 0;
    v7 = 0;
    v59 = KeNumberProcessors_0 - 1;
  }
  v54 = v7;
  v8 = &v70;
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
  v65[0] = 1310721;
  memset(&v65[1], 0, 0xA4uLL);
  v66[0] = 1310721;
  memset(&v66[1], 0, 0xA4uLL);
  v10 = RelationshipType;
  v62 = 0LL;
  v63 = 0LL;
  if ( v7 <= v59 )
  {
    while ( 1 )
    {
      v11 = KiProcessorBlock[v7];
      if ( v10 == RelationProcessorPackage || v10 == RelationAll )
      {
        v18 = *(_OWORD *)(v11 + 24872);
        v67[0] = *(_OWORD *)(v11 + 24856);
        v19 = *(_OWORD *)(v11 + 24888);
        v67[1] = v18;
        v20 = *(_OWORD *)(v11 + 24904);
        v67[2] = v19;
        v21 = *(_OWORD *)(v11 + 24920);
        v67[3] = v20;
        v22 = *(_OWORD *)(v11 + 24936);
        v67[4] = v21;
        v23 = *(_OWORD *)(v11 + 24952);
        v67[5] = v22;
        v24 = *(_OWORD *)(v11 + 24968);
        v67[6] = v23;
        v25 = *(_OWORD *)(v11 + 24984);
        v67[7] = v24;
        v26 = *(_OWORD *)(v11 + 25000);
        v27 = *(_QWORD *)(v11 + 25016);
        v67[8] = v25;
        v67[9] = v26;
        v68 = v27;
        v28 = KeAndAffinityEx((unsigned __int16 *)v66, (unsigned __int16 *)v67, 0LL);
        if ( ProcessorNumber || !v28 )
        {
          KeOrAffinityEx(v66, v67, v66);
          v29 = v67[0];
          v30 = 0;
          if ( LOWORD(v67[0]) )
          {
            v31 = (_QWORD *)v67 + 1;
            v32 = LOWORD(v67[0]);
            do
            {
              if ( *v31 )
                ++v30;
              ++v31;
              --v32;
            }
            while ( v32 );
          }
          v33 = (16 * (v30 - 1) + 55) & 0xFFFFFFF8;
          v5 += v33;
          if ( v5 > v55 )
          {
            v4 = -1073741820;
          }
          else
          {
            Information->Processor.GroupCount = v30;
            v34 = 0;
            Information->Relationship = RelationProcessorPackage;
            Information->Size = v33;
            Information->Group.MaximumGroupCount = 0;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            GroupMask = Information->Processor.GroupMask;
            if ( v29 )
            {
              v36 = (unsigned __int64 *)v67 + 1;
              do
              {
                v37 = *v36;
                if ( *v36 )
                {
                  *(_QWORD *)&GroupMask->Group = 0LL;
                  GroupMask->Group = v34;
                  GroupMask->Mask = v37;
                  ++GroupMask;
                }
                ++v34;
                ++v36;
              }
              while ( v34 < v29 );
            }
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v33);
          }
        }
      }
      if ( v10 == RelationProcessorCore || v10 == RelationAll )
      {
        v49 = *(unsigned __int8 *)(v11 + 208);
        v50 = *(_QWORD *)(v11 + 25176);
        LOWORD(v63) = *(unsigned __int8 *)(v11 + 208);
        v62 = v50;
        v51 = KeAndGroupAffinityEx(v65, &v62, 0LL);
        if ( !ProcessorNumber && v51 )
        {
          v7 = v54;
        }
        else
        {
          if ( LOWORD(v65[0]) <= (unsigned __int16)v49 )
            LOWORD(v65[0]) = v49 + 1;
          *(_QWORD *)&v65[2 * v49 + 2] |= v50;
          v52 = *(_QWORD *)(v11 + 200) == v50;
          v7 = v54;
          v5 += 48;
          if ( v5 <= v55 )
          {
            Information->Processor.Flags = !v52;
            Information->Relationship = RelationProcessorCore;
            Information->Size = 48;
            Information->Processor.EfficiencyClass = *(_BYTE *)(v11 + 23986);
            Information->Processor.GroupCount = 1;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            Information->Processor.GroupMask[0].Mask = 0LL;
            Information->Cache.GroupMask.Mask = 0LL;
            Information->Processor.GroupMask[0].Group = *(unsigned __int8 *)(v11 + 208);
            Information->Processor.GroupMask[0].Mask = *(_QWORD *)(v11 + 25176);
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
      v38 = 0;
      v39 = *(unsigned __int8 *)(v11 + 208);
      LOWORD(v63) = v39;
      if ( !*(_DWORD *)(v11 + 24756) )
        goto LABEL_49;
      v40 = v39;
      do
      {
        v41 = *(_QWORD *)(v11 + 200);
        v42 = v38;
        if ( !*(_QWORD *)(v11 + 8LL * v38 + 25200) )
          goto LABEL_53;
        v58 = *(_QWORD *)(v11 + 8LL * v38 + 25200);
        v62 = v58;
        v43 = (unsigned __int16 *)&v69[168 * v38];
        v44 = KeAndGroupAffinityEx(v43, &v62, 0LL);
        if ( ProcessorNumber || !v44 )
        {
          if ( *v43 <= v40 )
            *v43 = v40 + 1;
          v41 = v58;
          v42 = v38;
          *(_QWORD *)&v43[4 * v40 + 4] |= v58;
LABEL_53:
          v5 += 56;
          if ( v5 > v55 )
          {
            v4 = -1073741820;
          }
          else
          {
            Information->Relationship = RelationCache;
            Information->Size = 56;
            Information->Processor.Flags = *(_BYTE *)(v11 + 12 * v42 + 24696);
            Information->Processor.EfficiencyClass = *(_BYTE *)(v11 + 12 * v42 + 24697);
            Information->Cache.LineSize = *(_WORD *)(v11 + 12 * v42 + 24698);
            Information->Cache.CacheSize = *(_DWORD *)(v11 + 12 * v42 + 24700);
            Information->Cache.Type = *(_DWORD *)(v11 + 12 * v42 + 24704);
            *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
            *(_QWORD *)&Information->Group.Reserved[16] = 0LL;
            *(_DWORD *)&Information->Group.GroupInfo[0].Reserved[2] = 0;
            Information->Cache.GroupMask.Mask = 0LL;
            *(_QWORD *)&Information->Group.GroupInfo[0].Reserved[14] = 0LL;
            Information->Cache.GroupMask.Group = *(unsigned __int8 *)(v11 + 208);
            Information->Cache.GroupMask.Mask = v41;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 56);
          }
        }
        ++v38;
      }
      while ( v38 < *(_DWORD *)(v11 + 24756) );
      v10 = RelationshipType;
LABEL_49:
      v7 = v54;
LABEL_12:
      v54 = ++v7;
      if ( v7 > v59 )
      {
        v57 = v4;
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
          || ((unsigned int)(v15 >> (KiProcessorIndexToNumberMappingTable[v56] & 0x3F)) & ((unsigned int)KiProcessorIndexToNumberMappingTable[v56] >> 6 == v16)) != 0 )
        {
          v5 += 48;
          if ( v5 > v55 )
          {
            v4 = -1073741820;
          }
          else
          {
            Information->Size = 48;
            Information->NumaNode.NodeNumber = v13;
            Information->Relationship = RelationNumaNode;
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
    v57 = v4;
  }
  if ( v10 == RelationGroup || v10 == RelationAll && !ProcessorNumber )
  {
    v45 = (unsigned __int16)KiActiveGroups;
    v46 = (48 * ((unsigned __int16)KiActiveGroups - 1) + 87) & 0xFFFFFFF8;
    v5 += v46;
    if ( v5 > v55 )
    {
      v4 = -1073741820;
    }
    else
    {
      v47 = 0;
      Information->Group.MaximumGroupCount = KiMaximumGroups;
      Information->Relationship = RelationGroup;
      Information->Size = v46;
      Information->Cache.LineSize = v45;
      *(_QWORD *)Information->Group.Reserved = 0LL;
      *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
      *(_DWORD *)&Information->Group.Reserved[16] = 0;
      if ( v45 )
      {
        do
        {
          v48 = v47;
          Information->Cache.Reserved[v48 * 48 + 12] = KeQueryMaximumProcessorCountEx(v47);
          Information->Cache.Reserved[v48 * 48 + 13] = KeQueryActiveProcessorCountEx(v47);
          Information->Group.GroupInfo[v48].ActiveProcessorMask = qword_1403E42B8[v47];
          memset(Information->Group.GroupInfo[v48].Reserved, 0, sizeof(Information->Group.GroupInfo[v48].Reserved));
          ++v47;
        }
        while ( v47 < (unsigned __int16)KiActiveGroups );
        v4 = v57;
      }
    }
  }
  if ( !v4 && !v5 )
    v4 = -1073741823;
  *v64 = v5;
  return v4;
}
