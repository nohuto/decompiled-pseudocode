/*
 * XREFs of HvlpSelectLpSet @ 0x1401EAC40
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139988 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvlpComputeLpComparisonMetrics @ 0x1401EA340 (HvlpComputeLpComparisonMetrics.c)
 *     HvlpLpComparison @ 0x1401EAA80 (HvlpLpComparison.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1401EABE0 (HvlpQueryApicIdAndNumaNode.c)
 *     HviGetImplementationLimits @ 0x14028B5D0 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlpSelectLpSet(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebp
  int v5; // r12d
  unsigned int v6; // esi
  int v7; // r8d
  _WORD *v8; // rbx
  int ApicIdAndNumaNode; // eax
  unsigned int v10; // r15d
  __int64 (__fastcall *v11)(__int64, char *, unsigned int *); // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // r15d
  __int64 v16; // rbx
  int v17; // r11d
  int v18; // r13d
  unsigned int v19; // r10d
  __int64 v20; // rdx
  unsigned __int16 v21; // r9
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  __int64 v24; // rcx
  unsigned int v25; // eax
  _BYTE *v26; // rcx
  unsigned int v27; // ebx
  _BYTE *v28; // rsi
  unsigned int v29; // r9d
  unsigned int v30; // eax
  _BYTE *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  _BYTE *v34; // rsi
  unsigned int v35; // edx
  int v36; // r8d
  _DWORD *v37; // rcx
  unsigned int v38; // ecx
  unsigned __int16 v40[2]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v41; // [rsp+24h] [rbp-64h] BYREF
  int v42; // [rsp+28h] [rbp-60h]
  unsigned int v43; // [rsp+2Ch] [rbp-5Ch]
  int v44; // [rsp+30h] [rbp-58h]
  unsigned int v45; // [rsp+34h] [rbp-54h] BYREF
  int v46; // [rsp+38h] [rbp-50h]
  int v47; // [rsp+3Ch] [rbp-4Ch]
  char v48[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v49[4]; // [rsp+48h] [rbp-40h] BYREF

  v43 = 0;
  if ( (HvlpRootFlags & 1) == 0 )
  {
    KeHypervisorNumprocSpecified = 0;
    KeRootProcSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 0;
  }
  if ( (HvlpRootFlags & 0x800) != 0 )
  {
    KeRootProcSpecified = 0;
    KeRootProcPerNodeSpecified = 0;
    KeRootProcPerCoreSpecified = 1;
  }
  HviGetImplementationLimits(v49);
  v4 = 64;
  v5 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  if ( v49[0] < 0x40 )
    v4 = v49[0];
  if ( KeRootProcSpecified && KeRootProcSpecified < v4 )
    v4 = KeRootProcSpecified;
  v42 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  v6 = 0;
  v7 = v42;
  if ( a1 )
  {
    v8 = (_WORD *)(a2 + 10);
    do
    {
      *((_BYTE *)v8 - 10) = 1;
      ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(v6, v8 - 3, v40);
      v43 = ApicIdAndNumaNode;
      v10 = ApicIdAndNumaNode;
      if ( ApicIdAndNumaNode == -1073741275 )
      {
        v43 = 0;
        *((_BYTE *)v8 - 10) = 0;
      }
      else
      {
        if ( ApicIdAndNumaNode < 0 )
          return v10;
        v11 = (__int64 (__fastcall *)(__int64, char *, unsigned int *))HvlpQueryProximityId;
        v12 = v40[0];
        *(v8 - 1) = v40[0];
        if ( v11 )
        {
          v13 = v11(v12, v48, &v45);
          LOWORD(v12) = v40[0];
        }
        else
        {
          v13 = -1073741275;
        }
        if ( v13 < 0
          || (!HvlpQueryProximityNode
            ? (v14 = -1073741275)
            : (v14 = HvlpQueryProximityNode(v45, &v41), LOWORD(v12) = v40[0]),
              v14 < 0) )
        {
          *v8 = v12;
        }
        else
        {
          *v8 = v41;
        }
        v8[1] = *v8;
      }
      ++v6;
      v8 += 18;
    }
    while ( v6 < a1 );
    v7 = v42;
  }
  v15 = 1;
  v16 = a2 + 1;
  *(_BYTE *)(a2 + 1) = 1;
  v17 = 1;
  v44 = 1;
  v18 = 1;
  while ( 1 )
  {
    v47 = v18;
    v19 = 0;
    v46 = v17;
    if ( a1 )
    {
      v20 = a2;
      do
      {
        if ( *(_BYTE *)v20 )
        {
          if ( *(_BYTE *)(v20 + 1) )
            goto LABEL_57;
          v21 = *(_WORD *)(v20 + 8);
          if ( v21 >= (unsigned __int16)KeNumberNodes
            || (*(_BYTE *)(KeNodeBlock[v21] + 173) & 2) == 0
            || v15 == 512
            || v15 == v7
            || KeMaximumProcessors && v15 == KeMaximumProcessors )
          {
            goto LABEL_57;
          }
          if ( KeBootprocSpecified && v15 == KeBootprocSpecified
            || KeNumprocSpecified && v19 >= KeNumprocSpecified
            || KeHypervisorNumprocSpecified && v15 == KeHypervisorNumprocSpecified )
          {
            goto LABEL_57;
          }
          if ( v18 == v4 )
          {
            v22 = 0;
            do
            {
              if ( *(_WORD *)(a2 + 36LL * v22 + 8) == v21 && *(_BYTE *)(a2 + 36LL * v22 + 1) )
                break;
              ++v22;
            }
            while ( v22 < a1 );
            if ( v22 == a1 )
              goto LABEL_57;
          }
          if ( v17 == KeRegisteredProcessors )
          {
            v23 = 0;
            v24 = v16;
            do
            {
              if ( (v5 & *(_DWORD *)(v20 + 4)) == (v5 & *(_DWORD *)(v24 + 3)) && *(_BYTE *)v24 )
                break;
              ++v23;
              v24 += 36LL;
            }
            while ( v23 < a1 );
            if ( v23 == a1 )
LABEL_57:
              *(_BYTE *)v20 = 0;
          }
        }
        v7 = v42;
        ++v19;
        v20 += 36LL;
      }
      while ( v19 < a1 );
    }
    v25 = 0;
    if ( a1 )
    {
      v26 = (_BYTE *)a2;
      do
      {
        if ( *v26 )
          break;
        ++v25;
        v26 += 36;
      }
      while ( v25 < a1 );
    }
    if ( v25 == a1 )
      return v43;
    v27 = 0;
    if ( a1 )
    {
      v28 = (_BYTE *)a2;
      do
      {
        if ( *v28 )
          HvlpComputeLpComparisonMetrics(a1, a2, v27);
        ++v27;
        v28 += 36;
      }
      while ( v27 < a1 );
    }
    v29 = -1;
    v30 = 0;
    if ( a1 )
    {
      v31 = (_BYTE *)a2;
      while ( !*v31 )
      {
        ++v30;
        v31 += 36;
        if ( v30 >= a1 )
          goto LABEL_75;
      }
      v29 = v30;
    }
LABEL_75:
    v32 = v29 + 1;
    if ( (unsigned int)v32 < a1 )
    {
      v33 = 9 * v32;
      v34 = (_BYTE *)(a2 + 36 * v32);
      do
      {
        if ( *v34 && (unsigned int)HvlpLpComparison(v33, a2, v32, v29) == -1 )
          v29 = v32;
        LODWORD(v32) = v32 + 1;
        v34 += 36;
      }
      while ( (unsigned int)v32 < a1 );
    }
    ++v15;
    v35 = 0;
    v36 = v5 & *(_DWORD *)(a2 + 36LL * v29 + 4);
    *(_BYTE *)(a2 + 36LL * v29 + 1) = 1;
    if ( a1 )
    {
      v37 = (_DWORD *)(a2 + 4);
      do
      {
        if ( v35 != v29 && *((_BYTE *)v37 - 3) && (*v37 & v5) == v36 )
          break;
        ++v35;
        v37 += 9;
      }
      while ( v35 < a1 );
    }
    v38 = 0;
    v17 = v44 + 1;
    if ( v35 != a1 )
      v17 = v46;
    v44 = v17;
    if ( a1 )
    {
      do
      {
        if ( v38 != v29
          && *(_BYTE *)(a2 + 36LL * v38 + 1)
          && *(_WORD *)(a2 + 36LL * v38 + 8) == *(_WORD *)(a2 + 36LL * v29 + 8) )
        {
          break;
        }
        ++v38;
      }
      while ( v38 < a1 );
    }
    v7 = v42;
    v16 = a2 + 1;
    ++v18;
    if ( v38 != a1 )
      v18 = v47;
  }
}
