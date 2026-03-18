/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x1404BBCD0
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     AlpcpConnectPort @ 0x14046378C (AlpcpConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046D680 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046D7AC (NtOpenObjectAuditAlarm.c)
 *     NtSetSecurityObject @ 0x140488560 (NtSetSecurityObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404ACCF0 (ObpCaptureObjectCreateInformation.c)
 *     NtCreateWnfStateName @ 0x140504994 (NtCreateWnfStateName.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140576C08 (PipGetRegistrySecurityWithFallback.c)
 *     CmpCopySaclToVirtualKey @ 0x140693140 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlValidAcl @ 0x1404BC590 (RtlValidAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, POOL_TYPE a3, char a4, _QWORD *a5)
{
  __int64 v6; // rsi
  __int16 v7; // ax
  __int64 v8; // r8
  unsigned __int8 *v9; // r8
  __int64 v10; // rdx
  unsigned __int8 *v11; // rdx
  unsigned __int16 *v12; // r12
  __int64 v13; // rax
  unsigned __int16 *v14; // r14
  __int64 v15; // r9
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  unsigned int v18; // r11d
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // ebx
  __int16 v22; // si
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // ebx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // eax
  unsigned __int64 v32; // r8
  int v33; // r9d
  SIZE_T v34; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v36; // rdi
  ACL *v37; // rbx
  char v38; // r12
  unsigned __int64 v40; // r12
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  size_t Size; // [rsp+20h] [rbp-B8h]
  unsigned int v45; // [rsp+28h] [rbp-B0h]
  UCHAR v46; // [rsp+30h] [rbp-A8h]
  UCHAR v47; // [rsp+34h] [rbp-A4h]
  UCHAR v48; // [rsp+38h] [rbp-A0h]
  size_t v49; // [rsp+3Ch] [rbp-9Ch]
  void *v50; // [rsp+50h] [rbp-88h]
  void *v51; // [rsp+58h] [rbp-80h]
  __int128 v52; // [rsp+60h] [rbp-78h]
  unsigned __int64 v53; // [rsp+70h] [rbp-68h]
  unsigned __int16 *v54; // [rsp+78h] [rbp-60h]
  unsigned __int16 *Src; // [rsp+80h] [rbp-58h]
  unsigned int v56; // [rsp+88h] [rbp-50h]
  unsigned int v57; // [rsp+8Ch] [rbp-4Ch]
  unsigned int v58; // [rsp+90h] [rbp-48h]

  v46 = 0;
  v48 = 0;
  v45 = 0;
  v47 = 0;
  Size = 0LL;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v52 = *(_OWORD *)a1;
    v6 = *(_QWORD *)a1;
    if ( (WORD1(*(_OWORD *)a1) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v46 = 0;
    v47 = 0;
    Size = 0LL;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    v52 = *(_OWORD *)a1;
    v6 = *(_QWORD *)a1;
  }
  if ( (_BYTE)v52 != 1 )
    return 3221225560LL;
  v7 = *(_WORD *)(a1 + 2);
  if ( v7 < 0 )
  {
    v8 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v8 )
      v9 = (unsigned __int8 *)(a1 + v8);
    else
      v9 = 0LL;
  }
  else
  {
    v9 = *(unsigned __int8 **)(a1 + 8);
  }
  v50 = v9;
  *((_QWORD *)&v52 + 1) = v9;
  if ( v7 < 0 )
  {
    v10 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v10 )
      v11 = (unsigned __int8 *)(a1 + v10);
    else
      v11 = 0LL;
  }
  else
  {
    v11 = *(unsigned __int8 **)(a1 + 16);
  }
  v51 = v11;
  v53 = (unsigned __int64)v11;
  if ( (v7 & 0x10) != 0 )
  {
    if ( v7 >= 0 )
    {
      v12 = *(unsigned __int16 **)(a1 + 24);
    }
    else
    {
      v15 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v15 )
        v12 = (unsigned __int16 *)(a1 + v15);
      else
        v12 = 0LL;
    }
  }
  else
  {
    v12 = 0LL;
  }
  v54 = v12;
  if ( (v7 & 4) != 0 )
  {
    if ( v7 >= 0 )
    {
      v14 = *(unsigned __int16 **)(a1 + 32);
    }
    else
    {
      v13 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v13 )
        v14 = (unsigned __int16 *)(a1 + v13);
      else
        v14 = 0LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  Src = v14;
  LOBYTE(v6) = BYTE2(v6);
  v16 = 0;
  v49 = 0LL;
  v17 = 0;
  v18 = 0;
  v56 = 0;
  v19 = 0;
  v57 = 0;
  v20 = 0;
  v21 = 0;
  v58 = 0;
  if ( (v6 & 0x100000) != 0 && v12 )
  {
    if ( a2 )
    {
      v40 = (unsigned __int64)(v12 + 1);
      if ( v40 >= 0x7FFFFFFF0000LL )
        v40 = 0x7FFFFFFF0000LL;
      v41 = *(unsigned __int16 *)v40;
      v16 = *(unsigned __int16 *)v40;
      LODWORD(v49) = v16;
      if ( *(_WORD *)v40 )
      {
        if ( ((unsigned __int8)v54 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = v54;
        if ( (unsigned __int64)v54 + v41 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)v54 + v41) < v54 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v12 = v54;
      }
      v46 = 0;
      v47 = 0;
      Size = 0LL;
      v51 = v11;
      v50 = v9;
      LOBYTE(v6) = BYTE2(v6);
      v17 = 0;
    }
    else
    {
      v16 = v12[1];
      LODWORD(v49) = v16;
    }
    v18 = (v16 + 3) & 0xFFFFFFFC;
    v56 = v18;
    if ( v18 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v12 = 0LL;
    v54 = 0LL;
  }
  v22 = v6 & 4;
  if ( v22 && v14 )
  {
    if ( a2 )
    {
      v23 = (unsigned __int64)(v14 + 1);
      if ( v23 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      v24 = *(unsigned __int16 *)v23;
      v17 = *(unsigned __int16 *)v23;
      HIDWORD(v49) = v17;
      if ( *(_WORD *)v23 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = Src;
        if ( (unsigned __int64)Src + v24 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)Src + v24) < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v14 = Src;
      }
      v46 = 0;
      v47 = 0;
      Size = 0LL;
      v12 = v54;
      v51 = v11;
      v50 = v9;
      v16 = v49;
    }
    else
    {
      v17 = v14[1];
      HIDWORD(v49) = v17;
    }
    v19 = (v17 + 3) & 0xFFFFFFFC;
    v57 = v19;
    if ( v19 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v14 = 0LL;
    Src = 0LL;
  }
  if ( v9 )
  {
    if ( a2 )
    {
      v25 = (__int64)(v9 + 1);
      if ( (unsigned __int64)(v9 + 1) >= 0x7FFFFFFF0000LL )
        v25 = 0x7FFFFFFF0000LL;
      v26 = *(unsigned __int8 *)v25;
      v46 = v26;
      v48 = v26;
      v27 = 4 * v26 + 8;
      HIDWORD(Size) = v27;
      v45 = v27;
      if ( 4 * v26 == -8 )
      {
        v50 = v9;
      }
      else
      {
        if ( ((unsigned __int8)v9 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v50 = v9;
        v28 = (unsigned __int64)&v9[v27];
        if ( v28 > 0x7FFFFFFF0000LL || v28 < (unsigned __int64)v9 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v47 = 0;
      LODWORD(Size) = 0;
      v14 = Src;
      v12 = v54;
      v11 = (unsigned __int8 *)v53;
      v51 = (void *)v53;
      v16 = v49;
      v17 = HIDWORD(v49);
    }
    else
    {
      v42 = v9[1];
      v46 = v42;
      v48 = v42;
      v27 = 4 * v42 + 8;
      v45 = v27;
      HIDWORD(Size) = v27;
    }
    v21 = (v27 + 3) & 0xFFFFFFFC;
    v58 = v21;
  }
  if ( v11 )
  {
    if ( a2 )
    {
      v29 = (__int64)(v11 + 1);
      if ( (unsigned __int64)(v11 + 1) >= 0x7FFFFFFF0000LL )
        v29 = 0x7FFFFFFF0000LL;
      v30 = *(unsigned __int8 *)v29;
      v47 = v30;
      v31 = 4 * v30 + 8;
      LODWORD(Size) = v31;
      if ( v31 )
      {
        if ( (v53 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v51 = (void *)v53;
        v32 = v53 + v31;
        if ( v32 > 0x7FFFFFFF0000LL || v32 < v53 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v51 = (void *)v53;
      }
      v46 = v48;
      HIDWORD(Size) = v45;
      v14 = Src;
      v12 = v54;
      v50 = (void *)*((_QWORD *)&v52 + 1);
      v16 = v49;
      v17 = HIDWORD(v49);
      v33 = v31;
    }
    else
    {
      v43 = v11[1];
      v47 = v43;
      v33 = 4 * v43 + 8;
      LODWORD(Size) = v33;
    }
    v20 = (v33 + 3) & 0xFFFFFFFC;
  }
  v34 = v18 + 20 + v19 + v21 + v20;
  PoolWithTag = ExAllocatePoolWithTag(a3, v34, 0x63536553u);
  v36 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v34);
  WORD1(v52) = WORD1(v6) & 0x7FFF;
  *(_OWORD *)v36 = v52;
  v36[4] = v53;
  v37 = (ACL *)(v36 + 5);
  *((_WORD *)v36 + 1) |= 0x8000u;
  if ( (v6 & 0x100000) != 0 && v12 )
  {
    memmove(v36 + 5, v12, v16);
    v38 = a2;
    if ( a2 && (v16 < 8 || v16 != *((unsigned __int16 *)v36 + 11) || !RtlValidAcl((PACL)(v36 + 5))) )
      goto LABEL_140;
    v36[3] = 20;
    *((_WORD *)v36 + 11) = v56;
    v37 = (ACL *)((char *)v37 + v56);
  }
  else
  {
    v36[3] = 0;
    v38 = a2;
  }
  if ( v22 && v14 )
  {
    memmove(v37, v14, v17);
    if ( !v38 || v17 >= 8 && v17 == v37->AclSize && RtlValidAcl(v37) )
    {
      v36[4] = (_DWORD)v37 - (_DWORD)v36;
      v37->AclSize = v57;
      v37 = (ACL *)((char *)v37 + v57);
      goto LABEL_90;
    }
LABEL_140:
    ExFreePoolWithTag(v36, 0);
    return 3221225591LL;
  }
  v36[4] = 0;
LABEL_90:
  if ( !v50 )
  {
    v36[1] = 0;
    goto LABEL_96;
  }
  memmove(v37, v50, HIDWORD(Size));
  v37->Sbz1 = v46;
  if ( !v38 || (unsigned __int64)v37 > 0x7FFFFFFF0000LL && (v37->AclRevision & 0xF) == 1 && v46 <= 0xFu )
  {
    v36[1] = (_DWORD)v37 - (_DWORD)v36;
    v37 = (ACL *)((char *)v37 + v58);
LABEL_96:
    if ( !v51 )
    {
      v36[2] = 0;
      goto LABEL_102;
    }
    memmove(v37, v51, (unsigned int)Size);
    v37->Sbz1 = v47;
    if ( !v38 || (unsigned __int64)v37 > 0x7FFFFFFF0000LL && (v37->AclRevision & 0xF) == 1 && v47 <= 0xFu )
    {
      v36[2] = (_DWORD)v37 - (_DWORD)v36;
LABEL_102:
      *a5 = v36;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v36, 0);
  return 3221225592LL;
}
