/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x14050B5A0
 * Callers:
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140453108 (PipGetRegistrySecurityWithFallback.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046A2D4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046A60C (NtOpenObjectAuditAlarm.c)
 *     NtSetSecurityObject @ 0x14046AB40 (NtSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     AlpcpConnectPort @ 0x140474C88 (AlpcpConnectPort.c)
 *     NtCreateWnfStateName @ 0x1404C2738 (NtCreateWnfStateName.c)
 *     ObpCaptureObjectCreateInformation @ 0x14052DF10 (ObpCaptureObjectCreateInformation.c)
 *     CmpCopySaclToVirtualKey @ 0x140668104 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlValidAcl @ 0x14050C290 (RtlValidAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, POOL_TYPE a3, char a4, _QWORD *a5)
{
  __int64 v7; // rsi
  __int16 v8; // dx
  _BYTE *v9; // r12
  _BYTE *v10; // r8
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  unsigned int v19; // r13d
  unsigned int v20; // r9d
  unsigned int v21; // r11d
  __int16 v22; // si
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // r12
  int v26; // eax
  unsigned int v27; // r11d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  int v31; // r9d
  SIZE_T v32; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v34; // rdi
  ACL *v35; // rbx
  char v36; // si
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ecx
  size_t Size; // [rsp+20h] [rbp-98h]
  unsigned int v42; // [rsp+28h] [rbp-90h]
  unsigned int v43; // [rsp+30h] [rbp-88h]
  UCHAR v44; // [rsp+34h] [rbp-84h]
  UCHAR v45; // [rsp+38h] [rbp-80h]
  UCHAR v46; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v47; // [rsp+40h] [rbp-78h]
  unsigned int v48; // [rsp+44h] [rbp-74h]
  unsigned __int16 *v49; // [rsp+48h] [rbp-70h]
  void *v50; // [rsp+58h] [rbp-60h]
  void *v51[2]; // [rsp+60h] [rbp-58h]
  unsigned __int64 v52; // [rsp+70h] [rbp-48h]
  unsigned __int16 *v53; // [rsp+78h] [rbp-40h]
  unsigned __int16 *Src; // [rsp+80h] [rbp-38h]
  unsigned int v55; // [rsp+88h] [rbp-30h]
  unsigned int v56; // [rsp+8Ch] [rbp-2Ch]

  v44 = 0;
  v46 = 0;
  v42 = 0;
  v45 = 0;
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
    *(_OWORD *)v51 = *(_OWORD *)a1;
    v7 = *(_QWORD *)a1;
    if ( (WORD1(*(_OWORD *)a1) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v44 = 0;
    v45 = 0;
    Size = 0LL;
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    *(_OWORD *)v51 = *(_OWORD *)a1;
    v7 = *(_QWORD *)a1;
  }
  if ( LOBYTE(v51[0]) != 1 )
    return 3221225560LL;
  v8 = *(_WORD *)(a1 + 2);
  if ( v8 < 0 )
  {
    v16 = *(unsigned int *)(a1 + 4);
    if ( (_DWORD)v16 )
      v9 = (_BYTE *)(a1 + v16);
    else
      v9 = 0LL;
  }
  else
  {
    v9 = *(_BYTE **)(a1 + 8);
  }
  v51[1] = v9;
  if ( v8 < 0 )
  {
    v13 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v13 )
      v10 = (_BYTE *)(a1 + v13);
    else
      v10 = 0LL;
  }
  else
  {
    v10 = *(_BYTE **)(a1 + 16);
  }
  v50 = v10;
  v52 = (unsigned __int64)v10;
  if ( (~(_BYTE)v8 & 0x10) != 0 )
  {
    v11 = 0LL;
  }
  else if ( v8 >= 0 )
  {
    v11 = *(unsigned __int16 **)(a1 + 24);
  }
  else
  {
    v15 = *(unsigned int *)(a1 + 12);
    if ( (_DWORD)v15 )
      v11 = (unsigned __int16 *)(a1 + v15);
    else
      v11 = 0LL;
  }
  v49 = v11;
  v53 = v11;
  if ( (~(_BYTE)v8 & 4) != 0 )
  {
    v12 = 0LL;
  }
  else if ( v8 < 0 )
  {
    v14 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v14 )
      v12 = (unsigned __int16 *)(a1 + v14);
    else
      v12 = 0LL;
  }
  else
  {
    v12 = *(unsigned __int16 **)(a1 + 32);
  }
  Src = v12;
  LOBYTE(v7) = BYTE2(v7);
  v43 = 0;
  v47 = 0;
  v17 = 0;
  v48 = 0;
  v18 = 0;
  v55 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v56 = 0;
  if ( (v7 & 0x100000) != 0 && v49 )
  {
    if ( a2 )
    {
      v38 = (__int64)(v49 + 1);
      if ( (unsigned __int64)(v49 + 1) >= 0x7FFFFFFF0000LL )
        v38 = 0x7FFFFFFF0000LL;
      v39 = *(unsigned __int16 *)v38;
      v40 = v39;
      v43 = v39;
      v47 = v39;
      if ( (_DWORD)v39 )
      {
        if ( ((unsigned __int8)v53 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v49 = v53;
        if ( (unsigned __int64)v53 + v39 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)v53 + v39) < v53 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v49 = v53;
      }
      v44 = 0;
      v45 = 0;
      Size = 0LL;
      v50 = v10;
      LOBYTE(v7) = BYTE2(v7);
      v17 = 0;
    }
    else
    {
      v40 = v49[1];
      v43 = v40;
      v47 = v40;
    }
    v18 = (v40 + 3) & 0xFFFFFFFC;
    v55 = v18;
    if ( v18 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v49 = 0LL;
    v53 = 0LL;
  }
  v22 = v7 & 4;
  if ( v22 && v12 )
  {
    if ( a2 )
    {
      v23 = (unsigned __int64)(v12 + 1);
      if ( v23 >= 0x7FFFFFFF0000LL )
        v23 = 0x7FFFFFFF0000LL;
      v24 = *(unsigned __int16 *)v23;
      v17 = *(unsigned __int16 *)v23;
      v48 = v17;
      if ( *(_WORD *)v23 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = Src;
        if ( (unsigned __int64)Src + v24 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)Src + v24) < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v12 = Src;
      }
      v44 = 0;
      v45 = 0;
      Size = 0LL;
      v49 = v53;
      v50 = v10;
      v43 = v47;
    }
    else
    {
      v17 = v12[1];
      v48 = v17;
    }
    v19 = (v17 + 3) & 0xFFFFFFFC;
    if ( v19 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v12 = 0LL;
    Src = 0LL;
  }
  if ( v9 )
  {
    if ( a2 )
    {
      v25 = (unsigned __int64)(v9 + 1);
      if ( v25 >= 0x7FFFFFFF0000LL )
        v25 = 0x7FFFFFFF0000LL;
      v26 = *(unsigned __int8 *)v25;
      v44 = *(_BYTE *)v25;
      v46 = *(_BYTE *)v25;
      v27 = 4 * v26 + 8;
      HIDWORD(Size) = v27;
      v42 = v27;
      if ( 4 * v26 == -8 )
      {
        v9 = v51[1];
      }
      else
      {
        if ( ((__int64)v51[1] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v9 = v51[1];
        v28 = (unsigned __int64)v51[1] + v27;
        if ( v28 > 0x7FFFFFFF0000LL || (void *)v28 < v51[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v45 = 0;
      LODWORD(Size) = 0;
      v12 = Src;
      v49 = v53;
      v50 = v10;
      v43 = v47;
      v17 = v48;
    }
    else
    {
      v44 = v9[1];
      v46 = v44;
      v27 = 4 * v44 + 8;
      v42 = v27;
      HIDWORD(Size) = v27;
    }
    v21 = (v27 + 3) & 0xFFFFFFFC;
    v56 = v21;
  }
  if ( v10 )
  {
    if ( a2 )
    {
      v29 = (unsigned __int64)(v10 + 1);
      if ( v29 >= 0x7FFFFFFF0000LL )
        v29 = 0x7FFFFFFF0000LL;
      v45 = *(_BYTE *)v29;
      LODWORD(Size) = 4 * *(unsigned __int8 *)v29 + 8;
      if ( 4 * *(unsigned __int8 *)v29 == -8 )
      {
        v50 = (void *)v52;
      }
      else
      {
        if ( (v52 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v50 = (void *)v52;
        v30 = v52 + 4 * (unsigned int)*(unsigned __int8 *)v29 + 8;
        if ( v30 > 0x7FFFFFFF0000LL || v30 < v52 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v44 = v46;
      HIDWORD(Size) = v42;
      v12 = Src;
      v49 = v53;
      v9 = v51[1];
      v43 = v47;
      v17 = v48;
      v31 = Size;
    }
    else
    {
      v45 = v10[1];
      v31 = 4 * v45 + 8;
      LODWORD(Size) = v31;
    }
    v20 = (v31 + 3) & 0xFFFFFFFC;
  }
  v32 = v18 + 20 + v19 + v21 + v20;
  PoolWithTag = ExAllocatePoolWithTag(a3, v32, 0x63536553u);
  v34 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v32);
    WORD1(v51[0]) = WORD1(v7) & 0x7FFF;
    *(_OWORD *)v34 = *(_OWORD *)v51;
    v34[4] = v52;
    v35 = (ACL *)(v34 + 5);
    *((_WORD *)v34 + 1) |= 0x8000u;
    if ( (v7 & 0x100000) != 0 && v49 )
    {
      memmove(v34 + 5, v49, v43);
      if ( a2 && (v43 < 8 || v43 != *((unsigned __int16 *)v34 + 11) || !RtlValidAcl((PACL)(v34 + 5))) )
        goto LABEL_135;
      v34[3] = 20;
      *((_WORD *)v34 + 11) = v55;
      v35 = (ACL *)((char *)v35 + v55);
    }
    else
    {
      v34[3] = 0;
    }
    if ( !v22 || !v12 )
    {
      v34[4] = 0;
      v36 = a2;
LABEL_90:
      if ( v9 )
      {
        memmove(v35, v9, HIDWORD(Size));
        v35->Sbz1 = v44;
        if ( v36 && ((unsigned __int64)v35 <= 0x7FFFFFFF0000LL || v44 > 0xFu || (v35->AclRevision & 0xF) != 1) )
        {
LABEL_136:
          ExFreePoolWithTag(v34, 0);
          return 3221225592LL;
        }
        v34[1] = (_DWORD)v35 - (_DWORD)v34;
        v35 = (ACL *)((char *)v35 + v56);
      }
      else
      {
        v34[1] = 0;
      }
      if ( !v50 )
      {
        v34[2] = 0;
        goto LABEL_102;
      }
      memmove(v35, v50, (unsigned int)Size);
      v35->Sbz1 = v45;
      if ( !v36 || (unsigned __int64)v35 > 0x7FFFFFFF0000LL && v45 <= 0xFu && (v35->AclRevision & 0xF) == 1 )
      {
        v34[2] = (_DWORD)v35 - (_DWORD)v34;
LABEL_102:
        *a5 = v34;
        return 0LL;
      }
      goto LABEL_136;
    }
    memmove(v35, v12, v17);
    v36 = a2;
    if ( !a2 || v17 >= 8 && v17 == v35->AclSize && RtlValidAcl(v35) )
    {
      v34[4] = (_DWORD)v35 - (_DWORD)v34;
      v35->AclSize = v19;
      v35 = (ACL *)((char *)v35 + v19);
      goto LABEL_90;
    }
LABEL_135:
    ExFreePoolWithTag(v34, 0);
    return 3221225591LL;
  }
  return 3221225626LL;
}
