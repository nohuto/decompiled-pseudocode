/*
 * XREFs of KiPerformGroupConfiguration @ 0x1408099B0
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     strstr @ 0x1401697D0 (strstr.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HviGetImplementationLimits @ 0x1402619F0 (HviGetImplementationLimits.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     KiAssignAllNodesToGroup0 @ 0x140809C74 (KiAssignAllNodesToGroup0.c)
 *     KiAssignAdjustableNodes @ 0x1408344AC (KiAssignAdjustableNodes.c)
 *     KiAssignFixedNodes @ 0x140834558 (KiAssignFixedNodes.c)
 *     KiShuffleAssignedNodes @ 0x14083475C (KiShuffleAssignedNodes.c)
 */

__int16 __fastcall KiPerformGroupConfiguration(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 *v2; // r15
  __int64 v3; // r12
  unsigned int v4; // r13d
  unsigned __int16 v5; // r14
  int v6; // esi
  unsigned __int16 v7; // di
  __int64 v8; // rcx
  unsigned __int16 v9; // di
  unsigned __int16 i; // r14
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r13
  _DWORD *v14; // rdi
  _DWORD *v15; // r9
  char v16; // di
  unsigned __int16 v17; // si
  unsigned int v18; // r12d
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int *v23; // rdi
  __int64 *v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r9d
  int *v27; // rdi
  int v28; // eax
  __int64 j; // rcx
  unsigned __int16 v30; // cx
  __int64 v31; // rdx
  char v32; // al
  unsigned __int16 v33; // di
  unsigned int v34; // r8d
  unsigned int v35; // eax
  unsigned int *v36; // rcx
  __int64 v37; // rcx
  unsigned __int16 v38; // bx
  int v39; // r14d
  unsigned __int16 v40; // dx
  unsigned __int16 v41; // r8
  __int64 v42; // rcx
  unsigned __int16 v43; // cx
  __int64 v44; // rsi
  _QWORD *v45; // r8
  __int64 v46; // r11
  __int64 v47; // r10
  unsigned int v48; // edi
  bool v49; // zf
  __int64 v50; // r8
  unsigned __int16 v51; // ax
  __int16 v52; // di
  __int64 v53; // rdx
  __int64 *v54; // rcx
  unsigned __int16 v56; // [rsp+38h] [rbp-D0h]
  int v57; // [rsp+3Ch] [rbp-CCh] BYREF
  int v58; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v59; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v60; // [rsp+48h] [rbp-C0h]
  int v61; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v62[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v63[20]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v64[80]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v65[64]; // [rsp+108h] [rbp+0h] BYREF

  v1 = KeNumberNodes;
  v2 = KeNodeBlock;
  v62[0] = a1;
  v60 = 0;
  v3 = a1;
  v56 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      ((void (__fastcall *)(_QWORD, int *))KiQueryNodeCapacity[0])(v7, &v58);
      v8 = KeNodeBlock[v7];
      *(_BYTE *)(v8 + 172) = v58;
      v4 += v58;
      if ( v58 )
        ++v5;
      if ( PnpQueryProximityId )
      {
        PnpQueryProximityId(v7, v8 + 160, &v59);
        ((void (__fastcall *)(_QWORD, __int64))PnpQueryProximityNode)(v59, KeNodeBlock[v7] + 148);
        if ( *(_DWORD *)(KeNodeBlock[v7] + 160) == v59 )
          ++v6;
      }
      else
      {
        *(_DWORD *)(v8 + 160) = 0;
        v6 = 1;
        *(_WORD *)(v8 + 148) = *(_WORD *)(v8 + 146);
      }
      v1 = KeNumberNodes;
      ++v7;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v3 = v62[0];
    v60 = v4;
    v56 = v5;
  }
  if ( v1 > 1u )
  {
    KeNodeDistance = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v1 * (unsigned int)v1, 0x2020654Bu);
    if ( !KeNodeDistance )
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
    v1 = KeNumberNodes;
  }
  v9 = 0;
  if ( v1 )
  {
    do
    {
      for ( i = 0; i < v1; *((_DWORD *)KeNodeDistance + v11 + v9 * (unsigned __int16)KeNumberNodes) = v61 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, int *))KiQueryNodeDistance)(v9, i, &v61);
        v1 = KeNumberNodes;
        v11 = i++;
      }
      ++v9;
    }
    while ( v9 < v1 );
    v3 = v62[0];
    v2 = KeNodeBlock;
  }
  if ( HvlHypervisorConnected )
  {
    if ( (HvlpFlags & 0x80u) == 0 )
    {
      HviGetImplementationLimits(v62);
      if ( LODWORD(v62[0]) != -1 || (HvlEnlightenments & 0x4004) != 0 )
        goto LABEL_25;
    }
  }
  v12 = 0xFFFFLL;
  v13 = 20LL;
  v14 = *(_DWORD **)(*(_QWORD *)(v3 + 240) + 200LL);
  if ( v14 && v6 == *v14 )
  {
    if ( v1 )
    {
      v20 = KeNodeBlock;
      v21 = v1;
      do
      {
        v22 = *v20++;
        *(_WORD *)(v22 + 144) = -1;
        *(_BYTE *)(v22 + 173) &= ~2u;
        --v21;
      }
      while ( v21 );
    }
    if ( v6 )
    {
      while ( 1 )
      {
        v23 = v14 + 1;
        --v6;
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, int *, __int64))PnpQueryProximityNode)(*v23, &v57, v12) )
          break;
        v14 = v23 + 1;
        if ( *v14 >= 0x14u && *v14 != 0xFFFF )
          break;
        v1 = KeNumberNodes;
        if ( KeNumberNodes )
        {
          v24 = KeNodeBlock;
          v12 = (unsigned __int16)KeNumberNodes;
          do
          {
            v25 = *v24;
            if ( *(_WORD *)(*v24 + 148) == (_WORD)v57 )
            {
              *(_WORD *)(v25 + 144) = *(_WORD *)v14;
              *(_BYTE *)(v25 + 173) |= 2u;
            }
            ++v24;
            --v12;
          }
          while ( v12 );
        }
        if ( !v6 )
          goto LABEL_47;
      }
    }
    else
    {
LABEL_47:
      if ( *(_WORD *)(KeNodeBlock[0] + 144) != 0xFFFF )
      {
        v26 = KiMaximumGroupSize;
        v27 = v63;
        v28 = KiMaximumGroupSize;
        for ( j = 20LL; j; --j )
          *v27++ = v28;
        v30 = 0;
        if ( !v1 )
        {
LABEL_58:
          LOWORD(v19) = 0;
          v36 = v63;
          KiMaximumGroups = 0;
          do
          {
            if ( *v36 < v26 )
              LOWORD(v19) = v19 + 1;
            ++v36;
            --v13;
          }
          while ( v13 );
          KiMaximumGroups = v19;
          if ( v1 )
          {
            v37 = v1;
            do
            {
              v19 = *v2++;
              *(_BYTE *)(v19 + 173) |= 8u;
              --v37;
            }
            while ( v37 );
          }
          return v19;
        }
        while ( 1 )
        {
          v31 = KeNodeBlock[v30];
          v32 = *(_BYTE *)(v31 + 173);
          if ( (v32 & 2) == 0 )
            break;
          v33 = *(_WORD *)(v31 + 144);
          if ( v33 == 0xFFFF )
          {
            *(_BYTE *)(v31 + 173) = v32 & 0xFD;
          }
          else
          {
            v34 = *(unsigned __int8 *)(v31 + 172);
            v35 = v63[v33];
            if ( v35 < v34 )
              break;
            v63[v33] = v35 - v34;
          }
          if ( ++v30 >= v1 )
            goto LABEL_58;
        }
      }
    }
  }
  if ( strstr(*(const char **)(v3 + 216), "MAXGROUP=OFF") )
  {
    v16 = 0;
    KiMaximizeGroupsCreated = 0;
  }
  else if ( strstr(*(const char **)(v3 + 216), "MAXGROUP") )
  {
    v16 = 1;
    KiMaximizeGroupsCreated = 1;
  }
  else
  {
    v16 = KiMaximizeGroupsCreated;
  }
  v17 = v56;
  if ( v56 == 1 || (v18 = KiMaximumGroupSize, !v16) && v60 <= KiMaximumGroupSize )
  {
LABEL_25:
    LOWORD(v19) = KiAssignAllNodesToGroup0();
    return v19;
  }
  v38 = KeNumberNodes;
  v39 = 0;
  v40 = 0;
  if ( KeNumberNodes )
  {
    v15 = KeNodeDistance;
    do
    {
      v41 = 0;
      while ( v40 == v41 || v15[v40 * v38 + v41] == 0xFFFF )
      {
        if ( ++v41 >= v38 )
          goto LABEL_75;
      }
      v42 = KeNodeBlock[v40];
      *(_BYTE *)(v42 + 173) |= 8u;
      v39 += *(unsigned __int8 *)(v42 + 172);
LABEL_75:
      ++v40;
    }
    while ( v40 < v38 );
    if ( v38 )
      memmove(v65, KeNodeBlock, 8LL * v38);
  }
  if ( v38 - 1 > 0 )
  {
    v43 = 1;
    do
    {
      if ( v43 < v38 )
      {
        v44 = (unsigned __int16)(v43 - 1);
        v45 = &v65[v43];
        v46 = (unsigned __int16)(v38 - v43);
        do
        {
          v15 = (_DWORD *)*v45;
          v47 = v65[v44];
          if ( *(_BYTE *)(v47 + 172) < *(_BYTE *)(*v45 + 172LL) )
          {
            v65[v44] = v15;
            *v45 = v47;
          }
          ++v45;
          --v46;
        }
        while ( v46 );
      }
      ++v43;
    }
    while ( (unsigned __int16)(v43 - 1) < v38 - 1 );
    v17 = v56;
  }
  if ( !v39 )
  {
    LOWORD(v48) = 1;
LABEL_94:
    v49 = (_WORD)v48 == 20;
    goto LABEL_95;
  }
  if ( v16 )
    LOWORD(v48) = v17;
  else
    v48 = (v39 + v18 - 1) / v18;
  v49 = (_WORD)v48 == 20;
  if ( (unsigned __int16)v48 > 0x14u )
  {
    LOWORD(v48) = 20;
    goto LABEL_94;
  }
  do
  {
LABEL_95:
    LOBYTE(v15) = v49;
    if ( (unsigned __int8)KiAssignFixedNodes(
                            (unsigned int)v65,
                            v17,
                            (unsigned __int16)v48,
                            (_DWORD)v15,
                            (__int64)v64,
                            (__int64)v63) )
      break;
    LOWORD(v48) = v48 + 1;
    v49 = (_WORD)v48 == 20;
  }
  while ( (unsigned __int16)v48 <= 0x14u );
  KiShuffleAssignedNodes(v65, v17, v64, v63);
  v51 = KiAssignAdjustableNodes(v65, v17, v50, v64);
  if ( (unsigned __int16)v48 > v51 )
    v51 = v48;
  KiMaximumGroups = v51;
  LOWORD(v19) = KeNodeBlock[0];
  v52 = *(_WORD *)(KeNodeBlock[0] + 144);
  if ( v17 < v38 )
  {
    v53 = (unsigned __int16)(v38 - v17);
    v54 = &v65[v17];
    do
    {
      v19 = *v54++;
      *(_WORD *)(v19 + 144) = v52;
      *(_BYTE *)(v19 + 173) |= 2u;
      --v53;
    }
    while ( v53 );
  }
  return v19;
}
