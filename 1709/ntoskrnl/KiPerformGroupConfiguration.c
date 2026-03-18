/*
 * XREFs of KiPerformGroupConfiguration @ 0x14082F088
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     HviGetImplementationLimits @ 0x14028B5D0 (HviGetImplementationLimits.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KiAssignAllNodesToGroup0 @ 0x14082F334 (KiAssignAllNodesToGroup0.c)
 *     KiAssignAdjustableNodes @ 0x14086B67C (KiAssignAdjustableNodes.c)
 *     KiAssignFixedNodes @ 0x14086B724 (KiAssignFixedNodes.c)
 *     KiShuffleAssignedNodes @ 0x14086B91C (KiShuffleAssignedNodes.c)
 */

__int64 __fastcall KiPerformGroupConfiguration(__int64 a1)
{
  unsigned __int16 v1; // ax
  __int64 *v2; // r15
  __int64 v3; // r13
  unsigned int v4; // r14d
  unsigned __int16 v5; // r12
  int v6; // esi
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  unsigned __int16 v9; // di
  unsigned __int16 v10; // bx
  unsigned __int16 i; // r14
  int v12; // eax
  __int64 v13; // r14
  _DWORD *v14; // rbx
  __int64 v15; // r9
  __int64 result; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  int *v24; // rdi
  unsigned __int16 v25; // r9
  __int64 j; // rcx
  unsigned __int16 v27; // cx
  __int64 v28; // rdx
  char v29; // al
  unsigned __int16 v30; // di
  unsigned int v31; // r8d
  unsigned int v32; // eax
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  unsigned __int16 v35; // di
  int v36; // ebx
  unsigned __int16 v37; // dx
  unsigned __int16 v38; // r8
  __int64 v39; // rcx
  unsigned __int16 v40; // cx
  __int64 v41; // r11
  __int64 v42; // r10
  _QWORD *v43; // r8
  unsigned int v44; // edi
  bool v45; // zf
  __int64 v46; // r8
  unsigned __int16 v47; // ax
  __int16 v48; // di
  __int64 v49; // rdx
  __int64 *v50; // rcx
  int v51; // [rsp+38h] [rbp-D0h] BYREF
  int v52; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v53; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v54; // [rsp+44h] [rbp-C4h]
  __int64 v55; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v56[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v57[20]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v58[80]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v59[64]; // [rsp+108h] [rbp+0h] BYREF

  v1 = KeNumberNodes;
  v2 = KeNodeBlock;
  v56[0] = a1;
  v54 = 0;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      ((void (__fastcall *)(_QWORD, int *))KiNumaQueryNodeCapacity)(v7, &v52);
      v8 = KeNodeBlock[v7];
      *(_BYTE *)(v8 + 172) = v52;
      v4 += v52;
      if ( v52 )
        ++v5;
      if ( KiNumaQueryProximityId )
      {
        KiNumaQueryProximityId(v7, v8 + 160, &v53);
        ((void (__fastcall *)(_QWORD, __int64))KiNumaQueryProximityNode)(v53, KeNodeBlock[v7] + 148);
        if ( *(_DWORD *)(KeNodeBlock[v7] + 160) == v53 )
          ++v6;
      }
      else
      {
        *(_DWORD *)(v8 + 160) = 0;
        v6 = 1;
        *(_WORD *)(v8 + 148) = *(_WORD *)(v8 + 146);
      }
      ++v7;
      v1 = KeNumberNodes;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v3 = v56[0];
    v54 = v4;
  }
  if ( v1 > 1u )
  {
    KeNodeDistance = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v1 * (unsigned int)v1, 0x2020654Bu);
    if ( !KeNodeDistance )
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  }
  v9 = KeNumberNodes;
  v10 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      for ( i = 0; i < v9; *((_DWORD *)KeNodeDistance + v12 + v10 * (unsigned __int16)KeNumberNodes) = v55 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))KiNumaQueryNodeDistance[0])(v10, i, &v55);
        v9 = KeNumberNodes;
        v12 = i++;
      }
      ++v10;
    }
    while ( v10 < v9 );
    v3 = v56[0];
    v2 = KeNodeBlock;
  }
  if ( HvlHypervisorConnected )
  {
    if ( (HvlpRootFlags & 1) != 0 && (unsigned int)(KeRootProcSpecified - 1) <= 0x3F && !KeDynamicPartitioningSupported )
      return KiAssignAllNodesToGroup0();
    if ( (HvlpFlags & 0x80u) == 0 )
    {
      HviGetImplementationLimits(v56);
      if ( LODWORD(v56[0]) != -1 || (HvlEnlightenments & 0x4004) != 0 )
        return KiAssignAllNodesToGroup0();
    }
  }
  v13 = 20LL;
  v14 = *(_DWORD **)(*(_QWORD *)(v3 + 240) + 200LL);
  if ( v14 && v6 == *v14 )
  {
    if ( v9 )
    {
      v17 = KeNodeBlock;
      v18 = v9;
      do
      {
        v19 = *v17++;
        *(_WORD *)(v19 + 144) = -1;
        *(_BYTE *)(v19 + 173) &= ~2u;
        --v18;
      }
      while ( v18 );
    }
    while ( v6 )
    {
      --v6;
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, int *))KiNumaQueryProximityNode)((unsigned int)v14[1], &v51) )
        goto LABEL_18;
      v14 += 2;
      if ( *v14 >= 0x14u && *v14 != 0xFFFF )
        goto LABEL_18;
      if ( KeNumberNodes )
      {
        v20 = KeNodeBlock;
        v21 = (unsigned __int16)KeNumberNodes;
        do
        {
          v22 = *v20;
          if ( *(_WORD *)(*v20 + 148) == (_WORD)v51 )
          {
            *(_WORD *)(v22 + 144) = *(_WORD *)v14;
            *(_BYTE *)(v22 + 173) |= 2u;
          }
          ++v20;
          --v21;
        }
        while ( v21 );
      }
    }
    if ( *(_WORD *)(KeNodeBlock[0] + 144) != 0xFFFF )
    {
      v23 = KiMaximumGroupSize;
      v24 = v57;
      v25 = KeNumberNodes;
      for ( j = 20LL; j; --j )
        *v24++ = v23;
      v27 = 0;
      if ( !v25 )
      {
LABEL_60:
        KiMaximumGroups = 0;
        v33 = v57;
        do
        {
          if ( *v33 < (unsigned int)KiMaximumGroupSize )
            ++KiMaximumGroups;
          ++v33;
          --v13;
        }
        while ( v13 );
        result = (unsigned __int16)KeNumberNodes;
        if ( KeNumberNodes )
        {
          v34 = (unsigned __int16)KeNumberNodes;
          do
          {
            result = *v2++;
            *(_BYTE *)(result + 173) |= 8u;
            --v34;
          }
          while ( v34 );
        }
        return result;
      }
      while ( 1 )
      {
        v28 = KeNodeBlock[v27];
        v29 = *(_BYTE *)(v28 + 173);
        if ( (v29 & 2) == 0 )
          break;
        v30 = *(_WORD *)(v28 + 144);
        if ( v30 == 0xFFFF )
        {
          *(_BYTE *)(v28 + 173) = v29 & 0xFD;
        }
        else
        {
          v31 = *(unsigned __int8 *)(v28 + 172);
          v32 = v57[v30];
          if ( v32 < v31 )
            break;
          v57[v30] = v32 - v31;
        }
        if ( ++v27 >= v25 )
          goto LABEL_60;
      }
    }
  }
LABEL_18:
  if ( strstr(*(const char **)(v3 + 216), "MAXGROUP=OFF") )
  {
    KiMaximizeGroupsCreated = 0;
  }
  else if ( strstr(*(const char **)(v3 + 216), "MAXGROUP") )
  {
    KiMaximizeGroupsCreated = 1;
  }
  if ( v5 == 1 || !KiMaximizeGroupsCreated && v54 <= KiMaximumGroupSize )
    return KiAssignAllNodesToGroup0();
  v35 = KeNumberNodes;
  v36 = 0;
  v37 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v38 = 0;
      while ( v37 == v38 || *((_DWORD *)KeNodeDistance + v38 + v37 * v35) == 0xFFFF )
      {
        if ( ++v38 >= v35 )
          goto LABEL_75;
      }
      v39 = KeNodeBlock[v37];
      *(_BYTE *)(v39 + 173) |= 8u;
      v36 += *(unsigned __int8 *)(v39 + 172);
LABEL_75:
      ++v37;
    }
    while ( v37 < v35 );
    if ( v35 )
      memmove(v59, KeNodeBlock, 8LL * v35);
  }
  if ( v35 - 1 > 0 )
  {
    v40 = 1;
    do
    {
      if ( v40 < (unsigned __int16)KeNumberNodes )
      {
        v41 = (unsigned __int16)(v40 - 1);
        v42 = (unsigned __int16)(KeNumberNodes - v40);
        v43 = &v59[v40];
        do
        {
          v15 = v59[v41];
          if ( *(_BYTE *)(v15 + 172) < *(_BYTE *)(*v43 + 172LL) )
          {
            v59[v41] = *v43;
            *v43 = v15;
          }
          ++v43;
          --v42;
        }
        while ( v42 );
      }
      ++v40;
    }
    while ( (unsigned __int16)(v40 - 1) < v35 - 1 );
  }
  if ( !v36 )
  {
    LOWORD(v44) = 1;
LABEL_93:
    v45 = (_WORD)v44 == 20;
    goto LABEL_94;
  }
  if ( KiMaximizeGroupsCreated )
    LOWORD(v44) = v5;
  else
    v44 = (v36 + KiMaximumGroupSize - 1) / (unsigned int)KiMaximumGroupSize;
  v45 = (_WORD)v44 == 20;
  if ( (unsigned __int16)v44 > 0x14u )
  {
    LOWORD(v44) = 20;
    goto LABEL_93;
  }
  do
  {
LABEL_94:
    LOBYTE(v15) = v45;
    if ( (unsigned __int8)KiAssignFixedNodes(
                            (unsigned int)v59,
                            v5,
                            (unsigned __int16)v44,
                            v15,
                            (__int64)v58,
                            (__int64)v57) )
      break;
    LOWORD(v44) = v44 + 1;
    v45 = (_WORD)v44 == 20;
  }
  while ( (unsigned __int16)v44 <= 0x14u );
  KiShuffleAssignedNodes(v59, v5, v58, v57);
  v47 = KiAssignAdjustableNodes(v59, v5, v46, v58);
  if ( (unsigned __int16)v44 > v47 )
    v47 = v44;
  KiMaximumGroups = v47;
  result = KeNodeBlock[0];
  v48 = *(_WORD *)(KeNodeBlock[0] + 144);
  if ( v5 < (unsigned __int16)KeNumberNodes )
  {
    v49 = (unsigned __int16)(KeNumberNodes - v5);
    v50 = &v59[v5];
    do
    {
      result = *v50++;
      *(_WORD *)(result + 144) = v48;
      *(_BYTE *)(result + 173) |= 2u;
      --v49;
    }
    while ( v49 );
  }
  return result;
}
