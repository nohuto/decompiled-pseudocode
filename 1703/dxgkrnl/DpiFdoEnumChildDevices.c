/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C011F74C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiAcpiExposeInfo @ 0x1C011F4CC (DpiAcpiExposeInfo.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C011FA28 (DpiFdoCreateChildDescriptor.c)
 *     DxgkDWCloneCheckTargetID @ 0x1C011FB94 (DxgkDWCloneCheckTargetID.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C011FEBC (DpiDxgkDdiQueryChildRelations.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C01C5208 (DpiFdoRemoveChildDescriptors.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  __int64 v3; // r13
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  int ChildRelations; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // r15
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r9
  int v27; // ebx
  bool v28; // zf
  unsigned int i; // ebx
  __int64 v30; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  bool v37; // al
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rbx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // [rsp+30h] [rbp-68h]
  unsigned int v48; // [rsp+34h] [rbp-64h]
  char v50; // [rsp+A8h] [rbp+10h]
  unsigned int v51; // [rsp+B0h] [rbp+18h]
  unsigned int v52; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2544) + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v11) = -1073741801;
    v32 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v32 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v32);
    goto LABEL_35;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v7, v4);
  v11 = ChildRelations;
  if ( ChildRelations < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v33 + 24) = *(_QWORD *)(v3 + 200);
    *(_QWORD *)(v33 + 32) = v11;
    WdLogEvent5_WdError(v33);
    goto LABEL_25;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3144), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3248), Executive, 0, 0, 0LL);
  v52 = -1;
  v12 = 0LL;
  v13 = -1;
  *(_DWORD *)(v1 + 3320) = 0;
  v51 = -1;
  v14 = 0xFFFFFFFFLL;
  LOBYTE(v15) = 0;
  v16 = 0;
  v17 = 0;
  v50 = 0;
  v47 = 0;
  v48 = -1;
  *(_WORD *)(v1 + 2562) = 257;
  if ( !*(_DWORD *)(v1 + 2544) )
  {
LABEL_14:
    if ( *(_QWORD *)(v1 + 3024) == v12 )
    {
      if ( !v16 )
      {
        v28 = 0;
        goto LABEL_16;
      }
    }
    else
    {
      v28 = v16 == 1;
      if ( v16 <= 1 )
      {
LABEL_16:
        if ( v28 )
          *(_DWORD *)(v1 + 3064) = v14;
        if ( v13 != -1 )
        {
          v45 = 7LL * v13;
          if ( v7[v45 + 1] == 6 )
            v7[v45 + 1] = 0x80000000;
          if ( (_BYTE)v15 )
          {
            v46 = WdLogNewEntry5_WdError(v45 * 4, v15);
            *(_QWORD *)(v46 + 24) = 0LL;
            WdLogEvent5_WdError(v46);
            *(_DWORD *)(v1 + 2584) |= 1u;
          }
        }
        if ( *(_BYTE *)(v1 + 1141) == 1 )
          DpiAcpiExposeInfo(v2);
        for ( i = 0; i < *(_DWORD *)(v1 + 2544); ++i )
        {
          LOBYTE(v12) = 1;
          LODWORD(v11) = DpiFdoCreateChildDescriptor(
                           v1,
                           v7[7 * i + 6],
                           v12,
                           (unsigned int)v7 + 28 * i,
                           (__int64)&v7[7 * i + 1],
                           v7[7 * i + 5]);
          if ( (int)v11 < 0 )
            break;
        }
        goto LABEL_24;
      }
    }
LABEL_43:
    LODWORD(v11) = -1073741637;
    v36 = WdLogNewEntry5_WdError(v14, v15);
    *(_QWORD *)(v36 + 24) = -1073741637LL;
    goto LABEL_86;
  }
  while ( 1 )
  {
    v18 = 7LL * v17;
    if ( v7[v18 + 4] == 2 )
    {
      v34 = WdLogNewEntry5_WdError(v14, v15);
      *(_QWORD *)(v34 + 24) = 0LL;
      WdLogEvent5_WdError(v34);
      v12 = 0LL;
      v7[v18 + 4] = 4;
    }
    v19 = v7[v18];
    if ( v19 != 1 )
      break;
    *(_BYTE *)(v1 + 2562) &= DxgkDWCloneCheckTargetID((unsigned int)v7[v18 + 6], v15, v12, 0x80000000LL);
    v20 = v7[v18 + 6];
    DXGGLOBAL::GetGlobal(v22, v21, v23, v24);
    *(_BYTE *)(v1 + 2563) &= (v20 & 0xF0000000) == 0;
    if ( *(_DWORD *)(v3 + 28) < 0x104Fu )
    {
      v7[v18 + 1] = -1;
      v27 = -1;
      v35 = WdLogNewEntry5_WdWarning(v14, v25, 0LL, v26);
      *(_QWORD *)(v35 + 24) = 0LL;
      WdLogEvent5_WdWarning(v35);
    }
    else
    {
      v27 = v7[v18 + 1];
      v15 = 0x80000000LL;
      if ( v27 < 0 )
      {
        v27 = -1;
        if ( (v7[v18 + 1] & 0x7FFFFFFFu) <= 0xE )
          v27 = 0x80000000;
      }
      v7[v18 + 1] = v27;
      if ( v27 >= 15 && v27 <= 16 )
      {
        if ( v7[v18 + 4] != 4 )
          goto LABEL_43;
        if ( v27 == 15 )
        {
          ++v47;
          v48 = v7[v18 + 6];
        }
        else if ( !*(_BYTE *)(v1 + 1143) )
        {
          goto LABEL_43;
        }
      }
    }
    if ( !IsInternalVideoOutput(v27) && v27 != 6 )
      goto LABEL_12;
    if ( v51 != -1 )
    {
      LODWORD(v11) = -1073741637;
      v36 = WdLogNewEntry5_WdError(v14, v15);
      *(_QWORD *)(v36 + 24) = (unsigned int)v7[7 * v17 + 6];
      v44 = v51;
      goto LABEL_90;
    }
    *(_DWORD *)(v1 + 3324) = v7[v18 + 6];
    if ( *(_BYTE *)(v1 + 1136) == (_BYTE)v12
      && *(_BYTE *)(v1 + 1138) == (_BYTE)v12
      && (*(_BYTE *)(v1 + 1139) == (_BYTE)v12 || *(_BYTE *)(v1 + 480) == (_BYTE)v12) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
      if ( *(_DWORD *)(v14 + 28) >= 0x4000u && *(_BYTE *)(v1 + 2556) == (_BYTE)v12 )
        goto LABEL_43;
    }
    if ( v13 == -1 )
      goto LABEL_59;
    if ( *(_BYTE *)(v1 + 2556) == (_BYTE)v12 )
    {
      v14 = v52;
      v50 = 1;
      if ( v27 == v52 )
        goto LABEL_63;
      if ( v27 == (_DWORD)v15 )
      {
        v37 = 1;
      }
      else if ( v27 == 6 )
      {
        v37 = v52 != (_DWORD)v15;
      }
      else
      {
        if ( v27 != 11 )
          goto LABEL_63;
        v37 = v52 == 13;
      }
      if ( !v37 )
      {
LABEL_63:
        v7[v18 + 1] = -1;
        goto LABEL_12;
      }
      v14 = 28LL * v13;
      *(_DWORD *)((char *)v7 + v14 + 4) = -1;
LABEL_59:
      v13 = v17;
      v52 = v27;
    }
LABEL_12:
    if ( ++v17 >= *(_DWORD *)(v1 + 2544) )
    {
      v16 = v47;
      v2 = a1;
      v14 = v48;
      LOBYTE(v15) = v50;
      goto LABEL_14;
    }
  }
  if ( v19 != 3 )
  {
    if ( v19 != 2 && *(_DWORD *)(v3 + 28) >= 0x700Au )
    {
      LODWORD(v11) = -1073741637;
      v36 = WdLogNewEntry5_WdError(v14, v15);
      v42 = 7LL * v17;
      *(_QWORD *)(v36 + 24) = (unsigned int)v7[v42 + 6];
      v43 = (int)v7[v42];
      goto LABEL_91;
    }
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v3 + 28) < 0x7007u )
  {
    LODWORD(v11) = -1073741637;
    v38 = WdLogNewEntry5_WdError(v14, v15);
    *(_QWORD *)(v38 + 24) = *(unsigned int *)(v3 + 28);
    *(_QWORD *)(v38 + 32) = 28680LL;
    WdLogEvent5_WdError(v38);
    v12 = 0LL;
    goto LABEL_12;
  }
  if ( v13 != -1 )
  {
    LODWORD(v11) = -1073741637;
    v36 = WdLogNewEntry5_WdError(v14, v15);
    *(_QWORD *)(v36 + 24) = (unsigned int)v7[7 * v13 + 6];
    goto LABEL_89;
  }
  if ( *(_BYTE *)(v1 + 1136) == (_BYTE)v12
    && *(_BYTE *)(v1 + 1138) == (_BYTE)v12
    && (*(_BYTE *)(v1 + 1139) == (_BYTE)v12 || *(_BYTE *)(v1 + 480) == (_BYTE)v12)
    && *(_BYTE *)(v1 + 2556) == (_BYTE)v12 )
  {
    goto LABEL_43;
  }
  v39 = DxgkDWCloneCheckTargetID((unsigned int)v7[v18 + 6], v15, v12, 0x80000000LL);
  v12 = 0LL;
  if ( !v39 )
  {
LABEL_85:
    LODWORD(v11) = -1073741637;
    v36 = WdLogNewEntry5_WdError(v14, v15);
    *(_QWORD *)(v36 + 24) = (unsigned int)v7[7 * v17 + 6];
    goto LABEL_86;
  }
  v40 = (int)v7[v18 + 1];
  if ( (_DWORD)v40 == 0x80000000 || (int)v40 > 3 && ((int)v40 <= 6 || (unsigned int)(v40 - 8) <= 5) )
  {
    v41 = v7[v18 + 4];
    if ( v41 != 4 && v41 != 1 )
      goto LABEL_85;
    if ( v51 == -1 )
    {
      *(_DWORD *)(v1 + 3324) = v7[v18 + 6];
      v51 = v17;
    }
    goto LABEL_12;
  }
  LODWORD(v11) = -1073741637;
  v36 = WdLogNewEntry5_WdError(v14, v15);
  *(_QWORD *)(v36 + 24) = v40;
LABEL_89:
  v44 = v17;
LABEL_90:
  v43 = (unsigned int)v7[7 * v44 + 6];
LABEL_91:
  *(_QWORD *)(v36 + 32) = v43;
LABEL_86:
  WdLogEvent5_WdError(v36);
LABEL_24:
  KeReleaseMutex((PRKMUTEX)(v1 + 3248), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3144));
  KeLeaveCriticalRegion();
  v2 = a1;
LABEL_25:
  if ( (int)v11 < 0 )
LABEL_35:
    DpiFdoRemoveChildDescriptors(v2, v30);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v11;
}
