/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x1404C7830
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     AlpcpConnectPort @ 0x1404DA5F0 (AlpcpConnectPort.c)
 *     NtCreateWnfStateName @ 0x1404F47EC (NtCreateWnfStateName.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405466C4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtSetSecurityObject @ 0x14055C910 (NtSetSecurityObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405ACE00 (ObpCaptureObjectCreateInformation.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1405CC298 (PipGetRegistrySecurityWithFallback.c)
 *     NtOpenObjectAuditAlarm @ 0x1405DFF70 (NtOpenObjectAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x1406F6030 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x1404C80A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1404C80D0 (RtlValidAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, POOL_TYPE a3, char a4, _QWORD *a5)
{
  __int16 v8; // r14d^2
  __int16 v9; // ax
  __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int8 *v12; // r8
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int16 *v15; // r13
  __int64 v16; // rax
  unsigned __int16 *v17; // rsi
  __int64 v18; // rcx
  char v19; // r14
  unsigned int v20; // r12d
  unsigned int v21; // r15d
  unsigned int v22; // ebx
  unsigned int v23; // edx
  unsigned int v24; // r11d
  char v25; // r10
  __int16 v26; // r14
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned int v32; // r8d
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rcx
  int v35; // r11d
  SIZE_T v36; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v38; // rdi
  ACL *v39; // rbx
  char v40; // r13
  __int64 v41; // rax
  unsigned __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  size_t v47; // [rsp+20h] [rbp-A8h]
  int v48; // [rsp+28h] [rbp-A0h]
  int v49; // [rsp+30h] [rbp-98h]
  unsigned int Size; // [rsp+34h] [rbp-94h]
  unsigned int Size_4; // [rsp+38h] [rbp-90h]
  unsigned __int8 *v52; // [rsp+48h] [rbp-80h]
  void *v53; // [rsp+50h] [rbp-78h]
  _BYTE v54[40]; // [rsp+58h] [rbp-70h] BYREF
  int v55; // [rsp+80h] [rbp-48h]
  unsigned int v56; // [rsp+84h] [rbp-44h]
  unsigned int v57; // [rsp+88h] [rbp-40h]
  unsigned int v58; // [rsp+8Ch] [rbp-3Ch]

  memset(v54, 0, sizeof(v54));
  v55 = 0;
  v47 = 0LL;
  v48 = 0;
  LOBYTE(v49) = 0;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_OWORD *)v54 = *(_OWORD *)a1;
    *(_DWORD *)&v54[16] = *(_DWORD *)(a1 + 16);
    v8 = *(_WORD *)&v54[2];
    if ( *(__int16 *)&v54[2] >= 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v47 = 0LL;
    LOBYTE(v49) = 0;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    *(_OWORD *)v54 = *(_OWORD *)a1;
    *(_DWORD *)&v54[16] = *(_DWORD *)(a1 + 16);
    v8 = *(_WORD *)&v54[2];
  }
  if ( v54[0] != 1 )
    return 3221225560LL;
  v9 = *(_WORD *)(a1 + 2);
  v10 = v9 & 0x8000;
  if ( (v9 & 0x8000) == 0 )
  {
    v12 = *(unsigned __int8 **)(a1 + 8);
    goto LABEL_13;
  }
  v11 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned __int8 *)(a1 + v11);
LABEL_13:
    v52 = v12;
    goto LABEL_14;
  }
  v12 = 0LL;
  v52 = 0LL;
LABEL_14:
  *(_QWORD *)&v54[8] = v12;
  if ( !v10 )
  {
    v14 = *(_BYTE **)(a1 + 16);
    goto LABEL_17;
  }
  v13 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v13 )
  {
    v14 = (_BYTE *)(a1 + v13);
LABEL_17:
    v53 = v14;
    goto LABEL_18;
  }
  v14 = 0LL;
  v53 = 0LL;
LABEL_18:
  *(_QWORD *)&v54[16] = v14;
  if ( (v9 & 0x10) != 0 )
  {
    if ( v10 )
    {
      v18 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v18 )
        v15 = (unsigned __int16 *)(a1 + v18);
      else
        v15 = 0LL;
    }
    else
    {
      v15 = *(unsigned __int16 **)(a1 + 24);
    }
  }
  else
  {
    v15 = 0LL;
  }
  *(_QWORD *)&v54[24] = v15;
  if ( (v9 & 4) != 0 )
  {
    if ( v9 >= 0 )
    {
      v17 = *(unsigned __int16 **)(a1 + 32);
    }
    else
    {
      v16 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v16 )
        v17 = (unsigned __int16 *)(a1 + v16);
      else
        v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
  }
  *(_QWORD *)&v54[32] = v17;
  v19 = v8;
  *(_WORD *)&v54[2] = v8 & 0x7FFF;
  v20 = 0;
  Size = 0;
  v21 = 0;
  Size_4 = 0;
  v22 = 0;
  v57 = 0;
  v23 = 0;
  v58 = 0;
  v24 = 0;
  v56 = 0;
  if ( (v8 & 0x10) != 0 && v15 )
  {
    v25 = a2;
    if ( a2 )
    {
      v43 = (unsigned __int64)(v15 + 1);
      if ( v43 >= 0x7FFFFFFF0000LL )
        v43 = 0x7FFFFFFF0000LL;
      v44 = *(unsigned __int16 *)v43;
      v20 = *(unsigned __int16 *)v43;
      Size = v20;
      if ( *(_WORD *)v43 )
      {
        if ( (v54[24] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = *(unsigned __int16 **)&v54[24];
        if ( (unsigned __int64)(v44 + *(_QWORD *)&v54[24]) > 0x7FFFFFFF0000LL
          || (unsigned __int64)(v44 + *(_QWORD *)&v54[24]) < *(_QWORD *)&v54[24] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v15 = *(unsigned __int16 **)&v54[24];
      }
      v17 = *(unsigned __int16 **)&v54[32];
      v14 = *(_BYTE **)&v54[16];
      v53 = *(void **)&v54[16];
      v12 = *(unsigned __int8 **)&v54[8];
      v52 = *(unsigned __int8 **)&v54[8];
      v19 = v54[2];
      v47 = 0LL;
      LOBYTE(v49) = 0;
      v21 = 0;
    }
    else
    {
      v20 = v15[1];
      Size = v20;
    }
    v22 = (v20 + 3) & 0xFFFFFFFC;
    v57 = v22;
    if ( v22 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v15 = 0LL;
    *(_QWORD *)&v54[24] = 0LL;
    v25 = a2;
  }
  v26 = v19 & 4;
  if ( v26 && v17 )
  {
    if ( v25 )
    {
      v27 = (unsigned __int64)(v17 + 1);
      if ( v27 >= 0x7FFFFFFF0000LL )
        v27 = 0x7FFFFFFF0000LL;
      v28 = *(unsigned __int16 *)v27;
      v21 = *(unsigned __int16 *)v27;
      Size_4 = v21;
      if ( *(_WORD *)v27 )
      {
        if ( (v54[32] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = *(unsigned __int16 **)&v54[32];
        if ( (unsigned __int64)(*(_QWORD *)&v54[32] + v28) > 0x7FFFFFFF0000LL
          || (unsigned __int64)(*(_QWORD *)&v54[32] + v28) < *(_QWORD *)&v54[32] )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v17 = *(unsigned __int16 **)&v54[32];
      }
      v15 = *(unsigned __int16 **)&v54[24];
      v14 = *(_BYTE **)&v54[16];
      v53 = *(void **)&v54[16];
      v12 = *(unsigned __int8 **)&v54[8];
      v52 = *(unsigned __int8 **)&v54[8];
      v47 = 0LL;
      LOBYTE(v49) = 0;
      v20 = Size;
    }
    else
    {
      v21 = v17[1];
      Size_4 = v21;
    }
    v23 = (v21 + 3) & 0xFFFFFFFC;
    v58 = v23;
    if ( v23 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v17 = 0LL;
    *(_QWORD *)&v54[32] = 0LL;
  }
  if ( v12 )
  {
    if ( v25 )
    {
      v29 = (unsigned __int64)(v12 + 1);
      if ( v29 >= 0x7FFFFFFF0000LL )
        v29 = 0x7FFFFFFF0000LL;
      v55 = *(unsigned __int8 *)v29;
      v30 = (unsigned int)(4 * v55 + 8);
      LODWORD(v47) = 4 * v55 + 8;
      v48 = v47;
      if ( 4 * v55 == -8 )
      {
        v52 = *(unsigned __int8 **)&v54[8];
      }
      else
      {
        if ( (v54[8] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v52 = *(unsigned __int8 **)&v54[8];
        v31 = *(_QWORD *)&v54[8] + v30;
        if ( v31 > 0x7FFFFFFF0000LL || v31 < *(_QWORD *)&v54[8] )
          MEMORY[0x7FFFFFFF0000] = 0;
        LODWORD(v30) = 4 * v55 + 8;
      }
      v17 = *(unsigned __int16 **)&v54[32];
      v15 = *(unsigned __int16 **)&v54[24];
      v14 = *(_BYTE **)&v54[16];
      v53 = *(void **)&v54[16];
      LOBYTE(v49) = 0;
      HIDWORD(v47) = 0;
      v20 = Size;
      v21 = Size_4;
    }
    else
    {
      v46 = v12[1];
      v55 = v46;
      LODWORD(v30) = 4 * v46 + 8;
      v48 = v30;
      LODWORD(v47) = v30;
    }
    v32 = (v30 + 3) & 0xFFFFFFFC;
    v56 = v32;
  }
  else
  {
    v32 = v56;
  }
  if ( v14 )
  {
    if ( v25 )
    {
      v33 = (unsigned __int64)(v14 + 1);
      if ( v33 >= 0x7FFFFFFF0000LL )
        v33 = 0x7FFFFFFF0000LL;
      v49 = *(unsigned __int8 *)v33;
      HIDWORD(v47) = 4 * v49 + 8;
      if ( 4 * v49 == -8 )
      {
        v53 = *(void **)&v54[16];
      }
      else
      {
        if ( (v54[16] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v53 = *(void **)&v54[16];
        v34 = *(_QWORD *)&v54[16] + (unsigned int)(4 * v49 + 8);
        if ( v34 > 0x7FFFFFFF0000LL || v34 < *(_QWORD *)&v54[16] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v17 = *(unsigned __int16 **)&v54[32];
      v15 = *(unsigned __int16 **)&v54[24];
      v52 = *(unsigned __int8 **)&v54[8];
      LODWORD(v47) = v48;
      v20 = Size;
      v21 = Size_4;
      v35 = 4 * v49 + 8;
    }
    else
    {
      LOBYTE(v49) = v14[1];
      v35 = 4 * (unsigned __int8)v49 + 8;
      HIDWORD(v47) = v35;
    }
    v24 = (v35 + 3) & 0xFFFFFFFC;
  }
  v36 = v22 + 20 + v23 + v32 + v24;
  PoolWithTag = ExAllocatePoolWithTag(a3, v36, 0x63536553u);
  v38 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v36);
  *(_OWORD *)v38 = *(_OWORD *)v54;
  v38[4] = *(_DWORD *)&v54[16];
  v39 = (ACL *)(v38 + 5);
  *((_WORD *)v38 + 1) |= 0x8000u;
  if ( (v8 & 0x10) != 0 && v15 )
  {
    memmove(v38 + 5, v15, v20);
    v40 = a2;
    if ( a2 && (v20 < 8 || v20 != *((unsigned __int16 *)v38 + 11) || !RtlValidAcl((PACL)(v38 + 5))) )
      goto LABEL_130;
    v38[3] = 20;
    v45 = v57;
    *((_WORD *)v38 + 11) = v57;
    v39 = (ACL *)((char *)v39 + v45);
  }
  else
  {
    v38[3] = 0;
    v40 = a2;
  }
  if ( v26 && v17 )
  {
    memmove(v39, v17, v21);
    if ( !v40 || v21 >= 8 && v21 == v39->AclSize && RtlValidAcl(v39) )
    {
      v38[4] = (_DWORD)v39 - (_DWORD)v38;
      v41 = v58;
      v39->AclSize = v58;
      v39 = (ACL *)((char *)v39 + v41);
      goto LABEL_89;
    }
LABEL_130:
    ExFreePoolWithTag(v38, 0);
    return 3221225591LL;
  }
  v38[4] = 0;
LABEL_89:
  if ( !v52 )
  {
    v38[1] = 0;
    goto LABEL_93;
  }
  memmove(v39, v52, (unsigned int)v47);
  v39->Sbz1 = v55;
  if ( !v40 || RtlValidSid(v39) )
  {
    v38[1] = (_DWORD)v39 - (_DWORD)v38;
    v39 = (ACL *)((char *)v39 + v56);
LABEL_93:
    if ( !v53 )
    {
      v38[2] = 0;
      goto LABEL_97;
    }
    memmove(v39, v53, HIDWORD(v47));
    v39->Sbz1 = v49;
    if ( !v40 || RtlValidSid(v39) )
    {
      v38[2] = (_DWORD)v39 - (_DWORD)v38;
LABEL_97:
      *a5 = v38;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v38, 0);
  return 3221225592LL;
}
