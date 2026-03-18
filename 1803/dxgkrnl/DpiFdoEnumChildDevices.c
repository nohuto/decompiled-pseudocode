/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C01F415C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkDWCloneCheckTargetID @ 0x1C01C73A0 (DxgkDWCloneCheckTargetID.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C01F22C0 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C01F88F0 (DpiFdoRemoveChildDescriptors.c)
 *     DpiAcpiExposeInfo @ 0x1C02070D0 (DpiAcpiExposeInfo.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C020A6C8 (DpiDxgkDdiQueryChildRelations.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r14
  __int64 v3; // r13
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  int ChildRelations; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r10
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v28; // ebx
  __int64 v29; // rax
  SIZE_T v30; // rax
  bool v31; // al
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rax
  BOOL v36; // eax
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int i; // ebx
  int v45; // [rsp+30h] [rbp-68h]
  unsigned int v46; // [rsp+34h] [rbp-64h]
  unsigned int v47; // [rsp+38h] [rbp-60h]
  char v49; // [rsp+A8h] [rbp+10h]
  unsigned int v50; // [rsp+B0h] [rbp+18h]
  unsigned int v51; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2544) + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x74727044u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v8) = -1073741801;
    v9 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v9 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v9);
    goto LABEL_99;
  }
  memset(PoolWithTag, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v7, v4);
  v8 = ChildRelations;
  if ( ChildRelations < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(v3 + 200);
    *(_QWORD *)(v12 + 32) = v8;
    WdLogEvent5_WdError(v12);
    goto LABEL_98;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3168), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3272), Executive, 0, 0, 0LL);
  v45 = -1;
  v13 = 0LL;
  v14 = -1;
  v49 = 0;
  v15 = 0xFFFFFFFFLL;
  *(_DWORD *)(v1 + 3344) = 0;
  v16 = 0xFFFFFFFFLL;
  v50 = -1;
  v17 = 0LL;
  v18 = 0;
  LOBYTE(v19) = 0;
  v46 = 0;
  v51 = 0;
  v47 = -1;
  *(_WORD *)(v1 + 2562) = 257;
  if ( !*(_DWORD *)(v1 + 2544) )
  {
LABEL_46:
    if ( *(_QWORD *)(v1 + 3048) == v13 )
    {
      if ( (_DWORD)v17 )
        goto LABEL_48;
      v33 = 0;
    }
    else
    {
      v33 = (_DWORD)v17 == 1;
      if ( (unsigned int)v17 > 1 )
      {
LABEL_48:
        LODWORD(v8) = -1073741637;
        v34 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v34 + 24) = -1073741637LL;
        WdLogEvent5_WdError(v34);
        goto LABEL_97;
      }
    }
    if ( v33 )
      *(_DWORD *)(v1 + 3088) = v16;
    if ( v14 != -1 )
    {
      v41 = 7LL * v14;
      if ( v7[v41 + 1] == 6 )
        v7[v41 + 1] = 0x80000000;
      if ( (_BYTE)v19 )
      {
        v42 = WdLogNewEntry5_WdError(v41 * 4);
        *(_QWORD *)(v42 + 24) = 0LL;
        WdLogEvent5_WdError(v42);
        *(_DWORD *)(v1 + 2584) |= 1u;
      }
    }
    if ( *(_BYTE *)(v1 + 1141) == 1 )
      DpiAcpiExposeInfo(v2, v15, v16, v19);
    for ( i = 0; i < *(_DWORD *)(v1 + 2544); ++i )
    {
      LODWORD(v8) = DpiFdoCreateChildDescriptor(
                      v1,
                      v7[7 * i + 6],
                      1,
                      &v7[7 * i],
                      (__int128 *)&v7[7 * i + 1],
                      v7[7 * i + 5]);
      if ( (int)v8 < 0 )
        break;
    }
    goto LABEL_97;
  }
  while ( 1 )
  {
    v20 = v18;
    v21 = 7LL * v18;
    if ( v7[v21 + 4] == 2 )
    {
      v22 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v22 + 24) = 0LL;
      WdLogEvent5_WdError(v22);
      v15 = v50;
      v13 = 0LL;
      v7[v21 + 4] = 4;
    }
    v23 = v7[v21];
    if ( v23 == 1 )
    {
      *(_BYTE *)(v1 + 2562) &= DxgkDWCloneCheckTargetID((unsigned int)v7[v21 + 6]);
      v24 = v7[v21 + 6];
      DXGGLOBAL::GetGlobal(v25);
      *(_BYTE *)(v1 + 2563) &= (v24 & 0xF0000000) == 0;
      if ( *(_DWORD *)(v3 + 28) >= 0x104Fu )
      {
        v28 = v7[v21 + 1];
        if ( v28 < D3DKMDT_VOT_HD15 )
        {
          v28 = D3DKMDT_VOT_OTHER;
          if ( (v7[v21 + 1] & 0x7FFFFFFFu) <= 0xE )
            v28 = 0x80000000;
        }
        v7[v21 + 1] = v28;
      }
      else
      {
        v7[v21 + 1] = -1;
        v28 = D3DKMDT_VOT_OTHER;
        v29 = WdLogNewEntry5_WdWarning(v17, v26, v27);
        *(_QWORD *)(v29 + 24) = 0LL;
        WdLogEvent5_WdWarning(v29);
      }
      if ( (unsigned int)(v28 - 15) <= 1 )
      {
        if ( v7[v21 + 4] != 4 )
          goto LABEL_74;
        if ( v28 == D3DKMDT_VOT_MIRACAST )
        {
          ++v46;
          v47 = v7[v21 + 6];
        }
        else if ( !*(_BYTE *)(v1 + 1143) )
        {
          goto LABEL_74;
        }
      }
      if ( !IsInternalVideoOutput(v28) && v28 != D3DKMDT_VOT_LVDS )
        goto LABEL_43;
      v15 = v50;
      if ( v50 != -1 )
      {
        LODWORD(v8) = -1073741637;
        v39 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v39 + 24) = (unsigned int)v7[v21 + 6];
        v40 = (unsigned int)v7[7 * v50 + 6];
        goto LABEL_77;
      }
      *(_DWORD *)(v1 + 3348) = v7[v21 + 6];
      if ( *(_BYTE *)(v1 + 1136) == (_BYTE)v13
        && *(_BYTE *)(v1 + 1138) == (_BYTE)v13
        && (*(_BYTE *)(v1 + 1139) == (_BYTE)v13 || *(_BYTE *)(v1 + 480) == (_BYTE)v13) )
      {
        v2 = a1;
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
        if ( *(_DWORD *)(v17 + 28) >= 0x4000u && *(_BYTE *)(v1 + 2556) == (_BYTE)v13 )
          goto LABEL_48;
      }
      if ( v14 == -1 )
      {
        v14 = v51;
        v45 = v28;
        goto LABEL_44;
      }
      if ( *(_BYTE *)(v1 + 2556) != (_BYTE)v13 )
        goto LABEL_44;
      v30 = RtlCompareMemory((const void *)(v1 + 544), &GUID_BUS_VMBUS, 0x10uLL);
      v13 = 0LL;
      if ( v30 == 16 && byte_1C007A758 )
        goto LABEL_43;
      v49 = 1;
      if ( v28 == v45 )
        goto LABEL_49;
      switch ( v28 )
      {
        case D3DKMDT_VOT_INTERNAL:
          v31 = 1;
          break;
        case D3DKMDT_VOT_LVDS:
          v31 = v45 != 0x80000000;
          break;
        case D3DKMDT_VOT_DISPLAYPORT_EMBEDDED:
          v31 = v45 == 13;
          break;
        default:
          goto LABEL_49;
      }
      if ( v31 )
      {
        v32 = v14;
        v14 = v51;
        v17 = 28 * v32;
        v45 = v28;
        v7[7 * v32 + 1] = -1;
LABEL_43:
        v15 = v50;
        goto LABEL_44;
      }
LABEL_49:
      v7[v21 + 1] = -1;
      goto LABEL_43;
    }
    if ( v23 != 3 )
    {
      if ( v23 == 2 || *(_DWORD *)(v3 + 28) < 0x700Au )
        goto LABEL_44;
      LODWORD(v8) = -1073741637;
      v39 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v39 + 24) = (unsigned int)v7[7 * v20 + 6];
      v40 = (int)v7[7 * v20];
LABEL_77:
      *(_QWORD *)(v39 + 32) = v40;
      goto LABEL_75;
    }
    if ( *(_DWORD *)(v3 + 28) < 0x7007u )
    {
      LODWORD(v8) = -1073741637;
      v35 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v35 + 24) = *(unsigned int *)(v3 + 28);
      *(_QWORD *)(v35 + 32) = 28680LL;
      WdLogEvent5_WdError(v35);
      v13 = 0LL;
      goto LABEL_43;
    }
    if ( v14 != -1 )
    {
      LODWORD(v8) = -1073741637;
      v39 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v39 + 24) = (unsigned int)v7[7 * v14 + 6];
      goto LABEL_82;
    }
    if ( *(_BYTE *)(v1 + 1136) == (_BYTE)v13
      && *(_BYTE *)(v1 + 1138) == (_BYTE)v13
      && (*(_BYTE *)(v1 + 1139) == (_BYTE)v13 || *(_BYTE *)(v1 + 480) == (_BYTE)v13)
      && *(_BYTE *)(v1 + 2556) == (_BYTE)v13
      || *(_BYTE *)(v1 + 2556) == (_BYTE)v13 && byte_1C007A758 == (_BYTE)v13 && (_DWORD)v15 != -1 )
    {
LABEL_74:
      LODWORD(v8) = -1073741637;
      v39 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v39 + 24) = -1073741637LL;
      goto LABEL_75;
    }
    v36 = DxgkDWCloneCheckTargetID((unsigned int)v7[v21 + 6]);
    v13 = 0LL;
    if ( !v36 )
    {
      LODWORD(v8) = -1073741637;
      v39 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v39 + 24) = (unsigned int)v7[v21 + 6];
      goto LABEL_75;
    }
    v37 = (int)v7[v21 + 1];
    if ( (_DWORD)v37 != 0x80000000 && ((int)v37 <= 3 || (int)v37 > 6 && (unsigned int)(v37 - 8) > 5) )
      break;
    v38 = v7[v21 + 4];
    if ( v38 != 4 && v38 != 1 )
    {
      LODWORD(v8) = -1073741637;
      v39 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v39 + 24) = (unsigned int)v7[7 * v20 + 6];
      goto LABEL_75;
    }
    v15 = v50;
    if ( v50 == -1 )
    {
      v15 = v51;
      v50 = v51;
      *(_DWORD *)(v1 + 3348) = v7[v21 + 6];
    }
LABEL_44:
    v18 = v51 + 1;
    v51 = v18;
    if ( v18 >= *(_DWORD *)(v1 + 2544) )
    {
      v17 = v46;
      v2 = a1;
      v16 = v47;
      LOBYTE(v19) = v49;
      goto LABEL_46;
    }
  }
  LODWORD(v8) = -1073741637;
  v39 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v39 + 24) = v37;
LABEL_82:
  *(_QWORD *)(v39 + 32) = (unsigned int)v7[7 * v20 + 6];
LABEL_75:
  WdLogEvent5_WdError(v39);
  v2 = a1;
LABEL_97:
  KeReleaseMutex((PRKMUTEX)(v1 + 3272), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3168));
  KeLeaveCriticalRegion();
LABEL_98:
  if ( (int)v8 < 0 )
LABEL_99:
    DpiFdoRemoveChildDescriptors(v2);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
