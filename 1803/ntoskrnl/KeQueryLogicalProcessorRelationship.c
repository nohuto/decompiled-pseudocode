/*
 * XREFs of KeQueryLogicalProcessorRelationship @ 0x1400D2FA0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAndAffinityEx @ 0x140035310 (KeAndAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140038470 (KeGetProcessorIndexFromNumber.c)
 *     KeAndGroupAffinityEx @ 0x1400D3700 (KeAndGroupAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400D3780 (KeOrAffinityEx.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
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
  WORD v30; // dx
  _QWORD *v31; // r8
  __int64 v32; // r10
  WORD v33; // cx
  __int64 v34; // rax
  unsigned __int16 v35; // dx
  GROUP_AFFINITY *GroupMask; // rcx
  unsigned __int64 *v37; // r8
  unsigned __int64 v38; // r10
  int v39; // edx
  DWORD v40; // eax
  unsigned int v41; // r12d
  __int64 v42; // rdi
  unsigned int v43; // r13d
  unsigned __int16 v44; // ax
  unsigned __int16 v45; // di
  unsigned __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int16 *v49; // r12
  int v50; // eax
  __int64 v51; // r12
  __int64 v52; // r13
  int v53; // eax
  bool v54; // zf
  ULONG ProcessorIndexFromNumber; // ecx
  ULONG v56; // [rsp+20h] [rbp-E0h]
  ULONG v57; // [rsp+24h] [rbp-DCh]
  ULONG v58; // [rsp+28h] [rbp-D8h]
  NTSTATUS v59; // [rsp+30h] [rbp-D0h]
  __int64 v60; // [rsp+30h] [rbp-D0h]
  ULONG v61; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v66; // [rsp+58h] [rbp-A8h]
  PULONG v67; // [rsp+60h] [rbp-A0h]
  _DWORD v68[44]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v69[44]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v70[10]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v71; // [rsp+270h] [rbp+170h]
  _BYTE v72[4]; // [rsp+280h] [rbp+180h] BYREF
  char v73; // [rsp+284h] [rbp+184h] BYREF

  v4 = 0;
  v67 = Length;
  v5 = 0;
  v57 = *Length;
  v59 = 0;
  if ( ProcessorNumber )
  {
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcessorNumber);
    v58 = ProcessorIndexFromNumber;
    if ( ProcessorIndexFromNumber >= (unsigned int)KeNumberProcessors_0 )
      return -1073741811;
    v7 = ProcessorIndexFromNumber;
    v61 = ProcessorIndexFromNumber;
  }
  else
  {
    v58 = 0;
    v7 = 0;
    v61 = KeNumberProcessors_0 - 1;
  }
  v56 = v7;
  v8 = &v73;
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
  v68[0] = 1310721;
  memset(&v68[1], 0, 0xA4uLL);
  v69[0] = 1310721;
  memset(&v69[1], 0, 0xA4uLL);
  v10 = RelationshipType;
  v64 = 0LL;
  v65 = 0LL;
  if ( v7 <= v61 )
  {
    while ( 1 )
    {
      v11 = KiProcessorBlock[v7];
      if ( v10 == RelationProcessorPackage || v10 == RelationAll )
      {
        v18 = *(_OWORD *)(v11 + 24736);
        v70[0] = *(_OWORD *)(v11 + 24720);
        v19 = *(_OWORD *)(v11 + 24752);
        v70[1] = v18;
        v20 = *(_OWORD *)(v11 + 24768);
        v70[2] = v19;
        v21 = *(_OWORD *)(v11 + 24784);
        v70[3] = v20;
        v22 = *(_OWORD *)(v11 + 24800);
        v70[4] = v21;
        v23 = *(_OWORD *)(v11 + 24816);
        v70[5] = v22;
        v24 = *(_OWORD *)(v11 + 24832);
        v70[6] = v23;
        v25 = *(_OWORD *)(v11 + 24848);
        v70[7] = v24;
        v26 = *(_OWORD *)(v11 + 24864);
        v27 = *(_QWORD *)(v11 + 24880);
        v70[8] = v25;
        v70[9] = v26;
        v71 = v27;
        v28 = KeAndAffinityEx((unsigned __int16 *)v69, (unsigned __int16 *)v70, 0LL);
        if ( ProcessorNumber || !v28 )
        {
          KeOrAffinityEx(v69, v70, v69);
          v29 = v70[0];
          v30 = 0;
          if ( LOWORD(v70[0]) )
          {
            v31 = (_QWORD *)v70 + 1;
            v32 = LOWORD(v70[0]);
            do
            {
              v54 = *v31 == 0LL;
              v33 = v30;
              ++v31;
              ++v30;
              if ( v54 )
                v30 = v33;
              --v32;
            }
            while ( v32 );
          }
          v34 = (16 * v30 + 39) & 0xFFFFFFF8;
          v5 += v34;
          if ( v5 > v57 )
          {
            v4 = -1073741820;
          }
          else
          {
            Information->Processor.GroupCount = v30;
            Information->Relationship = RelationProcessorPackage;
            v35 = 0;
            Information->Size = v34;
            Information->Group.MaximumGroupCount = 0;
            *(_QWORD *)((char *)&Information->NumaNode.NodeNumber + 2) = 0LL;
            *(_QWORD *)&Information->Group.Reserved[6] = 0LL;
            *(_DWORD *)&Information->Group.Reserved[14] = 0;
            GroupMask = Information->Processor.GroupMask;
            if ( v29 )
            {
              v37 = (unsigned __int64 *)v70 + 1;
              do
              {
                v38 = *v37;
                if ( *v37 )
                {
                  *(_QWORD *)&GroupMask->Group = 0LL;
                  GroupMask->Group = v35;
                  GroupMask->Mask = v38;
                  ++GroupMask;
                }
                ++v35;
                ++v37;
              }
              while ( v35 < v29 );
            }
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + v34);
          }
        }
      }
      if ( v10 == RelationProcessorCore || v10 == RelationAll )
      {
        v51 = *(unsigned __int8 *)(v11 + 208);
        v52 = *(_QWORD *)(v11 + 24920);
        LOWORD(v65) = *(unsigned __int8 *)(v11 + 208);
        v64 = v52;
        v53 = KeAndGroupAffinityEx(v68, &v64, 0LL);
        if ( !ProcessorNumber && v53 )
        {
          v7 = v56;
        }
        else
        {
          if ( LOWORD(v68[0]) <= (unsigned __int16)v51 )
            LOWORD(v68[0]) = v51 + 1;
          *(_QWORD *)&v68[2 * v51 + 2] |= v52;
          v54 = *(_QWORD *)(v11 + 200) == v52;
          v7 = v56;
          v5 += 48;
          if ( v5 > v57 )
          {
            v4 = -1073741820;
          }
          else
          {
            Information->Processor.Flags = !v54;
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
        }
      }
      if ( v10 != RelationAll && v10 != RelationCache )
        goto LABEL_12;
      v43 = 0;
      v44 = *(unsigned __int8 *)(v11 + 208);
      LOWORD(v65) = v44;
      if ( !*(_DWORD *)(v11 + 24596) )
        goto LABEL_59;
      v45 = v44;
      do
      {
        v46 = *(_QWORD *)(v11 + 200);
        v47 = v43;
        v48 = *(_QWORD *)(v11 + 8LL * v43 + 24944);
        v60 = v48;
        if ( !v48 )
          goto LABEL_63;
        v66 = *(_QWORD *)(v11 + 8LL * v43 + 24944);
        v64 = v48;
        v49 = (unsigned __int16 *)&v72[168 * v43];
        v50 = KeAndGroupAffinityEx(v49, &v64, 0LL);
        if ( ProcessorNumber || !v50 )
        {
          if ( *v49 <= v45 )
            *v49 = v45 + 1;
          v46 = v66;
          *(_QWORD *)&v49[4 * v45 + 4] |= v60;
          v47 = v43;
LABEL_63:
          v5 += 56;
          if ( v5 > v57 )
          {
            v4 = -1073741820;
          }
          else
          {
            Information->Relationship = RelationCache;
            Information->Size = 56;
            Information->Processor.Flags = *(_BYTE *)(v11 + 12 * v47 + 24536);
            Information->Processor.EfficiencyClass = *(_BYTE *)(v11 + 12 * v47 + 24537);
            Information->Cache.LineSize = *(_WORD *)(v11 + 12 * v47 + 24538);
            Information->Cache.CacheSize = *(_DWORD *)(v11 + 12 * v47 + 24540);
            Information->Cache.Type = *(_DWORD *)(v11 + 12 * v47 + 24544);
            *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
            *(_QWORD *)&Information->Group.Reserved[16] = 0LL;
            *(_DWORD *)&Information->Group.GroupInfo[0].Reserved[2] = 0;
            Information->Cache.GroupMask.Mask = 0LL;
            *(_QWORD *)&Information->Group.GroupInfo[0].Reserved[14] = 0LL;
            Information->Cache.GroupMask.Group = *(unsigned __int8 *)(v11 + 208);
            Information->Cache.GroupMask.Mask = v46;
            Information = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)((char *)Information + 56);
          }
        }
        ++v43;
      }
      while ( v43 < *(_DWORD *)(v11 + 24596) );
      v10 = RelationshipType;
LABEL_59:
      v7 = v56;
LABEL_12:
      v56 = ++v7;
      if ( v7 > v61 )
      {
        v59 = v4;
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
          || ((unsigned int)(v15 >> (KiProcessorIndexToNumberMappingTable[v58] & 0x3F)) & ((unsigned int)KiProcessorIndexToNumberMappingTable[v58] >> 6 == v16)) != 0 )
        {
          v5 += 48;
          if ( v5 > v57 )
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
    v59 = v4;
  }
  if ( v10 == RelationGroup || v10 == RelationAll && !ProcessorNumber )
  {
    v39 = (unsigned __int16)KiActiveGroups;
    v40 = (48 * (unsigned __int16)KiActiveGroups + 39) & 0xFFFFFFF8;
    v5 += v40;
    if ( v5 > v57 )
    {
      v4 = -1073741820;
    }
    else
    {
      Information->Size = v40;
      v41 = 0;
      Information->Group.MaximumGroupCount = KiMaximumGroups;
      Information->Relationship = RelationGroup;
      Information->Cache.LineSize = v39;
      *(_QWORD *)Information->Group.Reserved = 0LL;
      *(_QWORD *)&Information->Group.Reserved[8] = 0LL;
      *(_DWORD *)&Information->Group.Reserved[16] = 0;
      if ( v39 )
      {
        do
        {
          v42 = v41;
          Information->Cache.Reserved[v42 * 48 + 12] = KeQueryMaximumProcessorCountEx(v41);
          Information->Cache.Reserved[v42 * 48 + 13] = KeQueryActiveProcessorCountEx(v41);
          Information->Group.GroupInfo[v42].ActiveProcessorMask = qword_14044C5D8[v41];
          memset(Information->Group.GroupInfo[v42].Reserved, 0, sizeof(Information->Group.GroupInfo[v42].Reserved));
          ++v41;
        }
        while ( v41 < (unsigned __int16)KiActiveGroups );
        v4 = v59;
      }
    }
  }
  if ( !v4 && !v5 )
    v4 = -1073741823;
  *v67 = v5;
  return v4;
}
