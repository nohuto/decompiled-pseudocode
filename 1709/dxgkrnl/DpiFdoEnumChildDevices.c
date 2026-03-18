/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C011ED3C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiAcpiExposeInfo @ 0x1C011EABC (DpiAcpiExposeInfo.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C011F010 (DpiFdoCreateChildDescriptor.c)
 *     DxgkDWCloneCheckTargetID @ 0x1C011F17C (DxgkDWCloneCheckTargetID.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C011F4A8 (DpiDxgkDdiQueryChildRelations.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C01DED10 (DpiFdoRemoveChildDescriptors.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  __int64 v3; // r14
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  int ChildRelations; // eax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r8
  unsigned int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r13d
  __int64 v17; // r15
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // ebx
  bool v24; // zf
  unsigned int i; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  bool v32; // al
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // r14
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // [rsp+30h] [rbp-68h]
  unsigned int v41; // [rsp+34h] [rbp-64h]
  __int64 v42; // [rsp+38h] [rbp-60h]
  char v44; // [rsp+A8h] [rbp+10h]
  unsigned int v45; // [rsp+B0h] [rbp+18h]
  unsigned int v46; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2544) + 1);
  v42 = v3;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v10) = -1073741801;
    v27 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v27 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v27);
    goto LABEL_36;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v7, v4);
  v10 = ChildRelations;
  if ( ChildRelations < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(v3 + 200);
    *(_QWORD *)(v28 + 32) = v10;
    WdLogEvent5_WdError(v28);
    goto LABEL_26;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3168), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3272), Executive, 0, 0, 0LL);
  v46 = -1;
  v11 = 0LL;
  v12 = -1;
  *(_DWORD *)(v1 + 3344) = 0;
  v45 = -1;
  v13 = 0xFFFFFFFFLL;
  LOBYTE(v14) = 0;
  v15 = 0;
  v16 = 0;
  v44 = 0;
  v40 = 0;
  v41 = -1;
  *(_WORD *)(v1 + 2562) = 257;
  if ( !*(_DWORD *)(v1 + 2544) )
  {
LABEL_14:
    if ( *(_QWORD *)(v1 + 3048) == v11 )
    {
      if ( !v15 )
      {
        v24 = 0;
LABEL_17:
        if ( v24 )
          *(_DWORD *)(v1 + 3088) = v13;
        if ( v12 != -1 )
        {
          v38 = 7LL * v12;
          if ( v7[v38 + 1] == 6 )
            v7[v38 + 1] = 0x80000000;
          if ( (_BYTE)v14 )
          {
            v39 = WdLogNewEntry5_WdError(v38 * 4);
            *(_QWORD *)(v39 + 24) = 0LL;
            WdLogEvent5_WdError(v39);
            *(_DWORD *)(v1 + 2584) |= 1u;
          }
        }
        if ( *(_BYTE *)(v1 + 1141) == 1 )
          DpiAcpiExposeInfo(v2);
        for ( i = 0; i < *(_DWORD *)(v1 + 2544); ++i )
        {
          LOBYTE(v11) = 1;
          LODWORD(v10) = DpiFdoCreateChildDescriptor(
                           v1,
                           v7[7 * i + 6],
                           v11,
                           (unsigned int)v7 + 28 * i,
                           (__int64)&v7[7 * i + 1],
                           v7[7 * i + 5]);
          if ( (int)v10 < 0 )
            break;
        }
        goto LABEL_25;
      }
    }
    else
    {
      v24 = v15 == 1;
      if ( v15 <= 1 )
        goto LABEL_17;
    }
LABEL_44:
    LODWORD(v10) = -1073741637;
    v31 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v31 + 24) = -1073741637LL;
    goto LABEL_87;
  }
  while ( 1 )
  {
    v17 = 7LL * v16;
    if ( v7[v17 + 4] == 2 )
    {
      v29 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v29 + 24) = 0LL;
      WdLogEvent5_WdError(v29);
      v11 = 0LL;
      v7[v17 + 4] = 4;
    }
    v18 = v7[v17];
    if ( v18 != 1 )
      break;
    *(_BYTE *)(v1 + 2562) &= DxgkDWCloneCheckTargetID((unsigned int)v7[v17 + 6], v14, v11, 0x80000000LL);
    v19 = v7[v17 + 6];
    DXGGLOBAL::GetGlobal(v20);
    *(_BYTE *)(v1 + 2563) &= (v19 & 0xF0000000) == 0;
    if ( *(_DWORD *)(v3 + 28) < 0x104Fu )
    {
      v7[v17 + 1] = -1;
      v23 = -1;
      v30 = WdLogNewEntry5_WdWarning(v13, v21, v22);
      *(_QWORD *)(v30 + 24) = 0LL;
      WdLogEvent5_WdWarning(v30);
    }
    else
    {
      v23 = v7[v17 + 1];
      if ( v23 < 0 )
      {
        v23 = -1;
        if ( (v7[v17 + 1] & 0x7FFFFFFFu) <= 0xE )
          v23 = 0x80000000;
      }
      v7[v17 + 1] = v23;
      if ( v23 >= 15 && v23 <= 16 )
      {
        if ( v7[v17 + 4] != 4 )
          goto LABEL_44;
        if ( v23 == 15 )
        {
          ++v40;
          v41 = v7[v17 + 6];
        }
        else if ( !*(_BYTE *)(v1 + 1143) )
        {
          goto LABEL_44;
        }
      }
    }
    if ( !IsInternalVideoOutput(v23) && v23 != 6 )
      goto LABEL_12;
    if ( v45 != -1 )
    {
      LODWORD(v10) = -1073741637;
      v31 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v31 + 24) = (unsigned int)v7[7 * v16 + 6];
      v37 = (unsigned int)v7[7 * v45 + 6];
      goto LABEL_89;
    }
    *(_DWORD *)(v1 + 3348) = v7[v17 + 6];
    if ( *(_BYTE *)(v1 + 1136) == (_BYTE)v11
      && *(_BYTE *)(v1 + 1138) == (_BYTE)v11
      && (*(_BYTE *)(v1 + 1139) == (_BYTE)v11 || *(_BYTE *)(v1 + 480) == (_BYTE)v11) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
      if ( *(_DWORD *)(v13 + 28) >= 0x4000u && *(_BYTE *)(v1 + 2556) == (_BYTE)v11 )
        goto LABEL_44;
    }
    if ( v12 == -1 )
      goto LABEL_60;
    if ( *(_BYTE *)(v1 + 2556) == (_BYTE)v11 )
    {
      v13 = v46;
      v44 = 1;
      if ( v23 == v46 )
        goto LABEL_64;
      if ( v23 == (_DWORD)v14 )
      {
        v32 = 1;
      }
      else if ( v23 == 6 )
      {
        v32 = v46 != (_DWORD)v14;
      }
      else
      {
        if ( v23 != 11 )
          goto LABEL_64;
        v32 = v46 == 13;
      }
      if ( !v32 )
      {
LABEL_64:
        v7[v17 + 1] = -1;
        goto LABEL_12;
      }
      v13 = 28LL * v12;
      *(_DWORD *)((char *)v7 + v13 + 4) = -1;
LABEL_60:
      v12 = v16;
      v46 = v23;
    }
LABEL_12:
    if ( ++v16 >= *(_DWORD *)(v1 + 2544) )
    {
      v15 = v40;
      v2 = a1;
      v13 = v41;
      LOBYTE(v14) = v44;
      goto LABEL_14;
    }
  }
  if ( v18 != 3 )
  {
    if ( v18 != 2 && *(_DWORD *)(v3 + 28) >= 0x700Au )
    {
      LODWORD(v10) = -1073741637;
      v31 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v31 + 24) = (unsigned int)v7[7 * v16 + 6];
      v37 = (int)v7[7 * v16];
LABEL_89:
      *(_QWORD *)(v31 + 32) = v37;
      goto LABEL_87;
    }
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v3 + 28) < 0x7007u )
  {
    LODWORD(v10) = -1073741637;
    v33 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v33 + 24) = *(unsigned int *)(v3 + 28);
    *(_QWORD *)(v33 + 32) = 28680LL;
    WdLogEvent5_WdError(v33);
    v11 = 0LL;
    goto LABEL_12;
  }
  if ( v12 == -1 )
  {
    if ( *(_BYTE *)(v1 + 1136) == (_BYTE)v11
      && *(_BYTE *)(v1 + 1138) == (_BYTE)v11
      && (*(_BYTE *)(v1 + 1139) == (_BYTE)v11 || *(_BYTE *)(v1 + 480) == (_BYTE)v11)
      && *(_BYTE *)(v1 + 2556) == (_BYTE)v11 )
    {
      goto LABEL_44;
    }
    v34 = DxgkDWCloneCheckTargetID((unsigned int)v7[v17 + 6], v14, v11, 0x80000000LL);
    v11 = 0LL;
    if ( !v34 )
    {
LABEL_86:
      LODWORD(v10) = -1073741637;
      v31 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v31 + 24) = (unsigned int)v7[7 * v16 + 6];
      goto LABEL_87;
    }
    v35 = (int)v7[v17 + 1];
    if ( (_DWORD)v35 != 0x80000000 && ((int)v35 <= 3 || (int)v35 > 6 && (unsigned int)(v35 - 8) > 5) )
    {
      LODWORD(v10) = -1073741637;
      v31 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v31 + 24) = v35;
      goto LABEL_92;
    }
    v36 = v7[v17 + 4];
    if ( v36 != 4 && v36 != 1 )
      goto LABEL_86;
    v3 = v42;
    if ( v45 == -1 )
    {
      *(_DWORD *)(v1 + 3348) = v7[v17 + 6];
      v45 = v16;
    }
    goto LABEL_12;
  }
  LODWORD(v10) = -1073741637;
  v31 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v31 + 24) = (unsigned int)v7[7 * v12 + 6];
LABEL_92:
  *(_QWORD *)(v31 + 32) = (unsigned int)v7[7 * v16 + 6];
LABEL_87:
  WdLogEvent5_WdError(v31);
LABEL_25:
  KeReleaseMutex((PRKMUTEX)(v1 + 3272), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3168));
  KeLeaveCriticalRegion();
  v2 = a1;
LABEL_26:
  if ( (int)v10 < 0 )
LABEL_36:
    DpiFdoRemoveChildDescriptors(v2);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v10;
}
