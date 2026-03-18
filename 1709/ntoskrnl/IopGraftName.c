/*
 * XREFs of IopGraftName @ 0x1405CDB54
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1405CDAF8 (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     IopSymlinkRemoveECP @ 0x140085BE8 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x140122AF8 (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14014B834 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x14048FE14 (IopGetFileInformation.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404BB290 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkUpdateECP @ 0x1405CD968 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1405CE168 (IopSymlinkRememberJunction.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1405CE368 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405CE440 (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1405CE50C (IopSymlinkGetRelatedMountPoint.c)
 *     IopCopyOverNewPath @ 0x1405CE534 (IopCopyOverNewPath.c)
 *     IopSymlinkApplyToOpenedName @ 0x1406B8D58 (IopSymlinkApplyToOpenedName.c)
 */

__int64 __fastcall IopGraftName(IRP *a1, __int64 a2, int *a3)
{
  unsigned int v4; // r12d
  char *v5; // r13
  const void **v6; // rsi
  NTSTATUS IrpExtraCreateParameter; // ebx
  UNICODE_STRING *v9; // r15
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  ULONG v15; // edi
  unsigned int v16; // esi
  const void **v17; // r8
  const void **PoolWithTag; // rax
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int *v21; // rax
  int FileInformation; // eax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v26; // dx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r10d
  unsigned int v30; // eax
  unsigned int v31; // r12d
  char *v32; // rax
  unsigned int v33; // r12d
  unsigned int *v34; // rdi
  char *v35; // rbx
  char *v36; // rdi
  unsigned __int16 v37; // di
  _QWORD *v38; // rsi
  unsigned int v39; // r15d
  IRP *v40; // rdi
  __int64 result; // rax
  __int64 v42; // rdx
  __int64 MostRecentlyUsedName; // rax
  NTSTATUS updated; // eax
  int v45; // [rsp+20h] [rbp-69h]
  const void **P; // [rsp+50h] [rbp-39h]
  __int64 v47; // [rsp+58h] [rbp-31h] BYREF
  PVOID v48; // [rsp+60h] [rbp-29h]
  PVOID EcpContext; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v50; // [rsp+70h] [rbp-19h]
  PVOID Object; // [rsp+78h] [rbp-11h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+80h] [rbp-9h] BYREF
  __int64 v53; // [rsp+88h] [rbp-1h]
  unsigned int *v54; // [rsp+90h] [rbp+7h]
  const UNICODE_STRING *v55; // [rsp+98h] [rbp+Fh]
  char v58; // [rsp+100h] [rbp+77h]
  PVOID v59; // [rsp+108h] [rbp+7Fh] BYREF

  Object = *(PVOID *)(a2 + 64);
  v4 = 0;
  LOWORD(v59) = 0;
  v5 = 0LL;
  v53 = 0LL;
  EcpContext = 0LL;
  v6 = 0LL;
  v58 = 0;
  v48 = 0LL;
  P = 0LL;
  v54 = 0LL;
  ExtraCreateParameter = 0LL;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(a1, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v9 = (UNICODE_STRING *)EcpContext;
  v10 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  if ( a1->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  v11 = a1->IoStatus.Information - 2684354563u;
  if ( v11 > 0x16 || !_bittest64(&v10, v11) )
    IrpExtraCreateParameter = -1073741192;
  if ( !a1->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( *((_WORD *)a3 + 3) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v12 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned int)(v12 + 1610612733) > 0x16 || !_bittest((const int *)&v10, v12 + 1610612733) )
    IrpExtraCreateParameter = -1073741192;
  v55 = (const UNICODE_STRING *)(a2 + 88);
  if ( !*(_WORD *)(a2 + 88) )
    IrpExtraCreateParameter = -1073741192;
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_50;
  if ( v12 == -1610612733 )
  {
    v13 = *((unsigned __int16 *)a3 + 5);
    v53 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
    LOWORD(v59) = v13;
LABEL_51:
    LOBYTE(v10) = 0;
    goto LABEL_52;
  }
  if ( v12 != -1610612724 )
  {
    IrpExtraCreateParameter = -1073741194;
LABEL_50:
    v13 = 0LL;
    goto LABEL_51;
  }
  v13 = *((unsigned __int16 *)a3 + 5);
  v14 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
  LOWORD(v59) = *((_WORD *)a3 + 5);
  v53 = v14;
  if ( (a3[4] & 1) == 0 )
    goto LABEL_51;
  LOBYTE(v10) = 1;
  v58 = 1;
  v15 = 256;
  v16 = 256;
  if ( Object )
  {
    if ( IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
    {
      LOBYTE(v10) = 1;
      v6 = v17;
      v13 = (unsigned __int16)v59;
    }
    else
    {
      while ( 1 )
      {
        PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v16, 0x63466F49u);
        P = PoolWithTag;
        if ( !PoolWithTag )
        {
          v6 = 0LL;
          goto LABEL_46;
        }
        memset(PoolWithTag, 0, v16);
        v19 = v16;
        v6 = P;
        v20 = ObQueryNameStringMode(*(char **)(a2 + 8), (__int64)P, v19, &v47, 0);
        IrpExtraCreateParameter = v20;
        if ( v20 >= 0 )
          break;
        if ( v20 != -2147483643 )
          goto LABEL_32;
        v16 = v47;
        if ( (unsigned int)v47 >= 0xFFFF )
        {
          v6 = P;
          IrpExtraCreateParameter = -1073741562;
LABEL_32:
          if ( IrpExtraCreateParameter < 0 )
            goto LABEL_47;
          break;
        }
        ExFreePoolWithTag(P, 0);
      }
      v4 = v55->Length + *(unsigned __int16 *)v6 - *((unsigned __int16 *)a3 + 3);
      v50 = v4;
      while ( 1 )
      {
        v21 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v15, 0x63466F49u);
        v48 = v21;
        if ( !v21 )
          break;
        v54 = v21;
        memset(v21, 0, v15);
        FileInformation = IopGetFileInformation((struct _FILE_OBJECT *)Object, v15, 9u, (struct _IRP *)v48, &v47);
        IrpExtraCreateParameter = FileInformation;
        if ( FileInformation >= 0 )
        {
          v23 = -1;
          v24 = v4 + *(_DWORD *)v48;
          if ( v24 >= v4 )
            v23 = v4 + *(_DWORD *)v48;
          v4 = v23;
          if ( v24 < v50 )
          {
            IrpExtraCreateParameter = -1073741675;
            goto LABEL_47;
          }
          v13 = (unsigned __int16)v59;
          LOBYTE(v10) = 1;
          if ( v23 >= 0xFFFF )
            IrpExtraCreateParameter = -1073741562;
          goto LABEL_52;
        }
        if ( FileInformation != -2147483643 )
          goto LABEL_47;
        v15 = *(_DWORD *)v48 + 8;
        if ( v15 >= 0xFFFF )
        {
          IrpExtraCreateParameter = -1073741562;
          goto LABEL_47;
        }
        ExFreePoolWithTag(v48, 0);
      }
LABEL_46:
      IrpExtraCreateParameter = -1073741670;
LABEL_47:
      v13 = (unsigned __int16)v59;
      LOBYTE(v10) = 1;
    }
  }
  else
  {
    v6 = 0LL;
  }
LABEL_52:
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_77;
  RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3), v13, v10);
  if ( !RelatedMountPoint )
    RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
  v30 = *(unsigned __int16 *)(RelatedMountPoint + 16);
  if ( (_BYTE)v28 )
  {
    if ( v4 > v30 )
      v30 = v4;
    v4 = v29 + v30;
  }
  v31 = v4 + (unsigned __int16)v27 + v26 + 4;
  if ( v31 >= 0xFFFF )
  {
    IrpExtraCreateParameter = -1073741562;
  }
  else
  {
    v32 = (char *)ExAllocatePoolWithTag(PagedPool, v31, 0x63466F49u);
    v5 = v32;
    if ( v32 )
      memset(v32, 0, v31);
    else
      IrpExtraCreateParameter = -1073741670;
    v27 = (unsigned __int16)v59;
    LOBYTE(v28) = v58;
  }
  v33 = v31 - 2;
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_77;
  if ( (_BYTE)v28 )
  {
    v59 = 0LL;
    if ( Object && !IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
    {
      memmove(v5, v6[1], *(unsigned __int16 *)v6);
      v34 = v54;
      v35 = &v5[2 * ((unsigned __int64)*(unsigned __int16 *)v6 >> 1)];
      memmove(v35, v54 + 1, *v54);
      v36 = &v35[2 * ((unsigned __int64)*v34 >> 1)];
      if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v36 - 1) != 92 )
      {
        *(_WORD *)v36 = 92;
        LOWORD(v36) = (_WORD)v36 + 2;
      }
      v37 = (_WORD)v36 - (_WORD)v5;
      IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
      v38 = EcpContext;
      v39 = *((unsigned __int16 *)EcpContext + 8) + 2 + v37;
      if ( v39 >= 0xFFFF )
      {
        IrpExtraCreateParameter = -1073741562;
LABEL_76:
        ExFreePoolWithTag(v5, 0);
LABEL_77:
        v40 = a1;
        goto LABEL_78;
      }
      IrpExtraCreateParameter = IopSymlinkAllocateAndAddECP(a1, &v59);
      if ( IrpExtraCreateParameter < 0 )
        goto LABEL_76;
      v42 = v39 + 32;
      v9 = (UNICODE_STRING *)v59;
      LOWORD(v45) = *(_WORD *)v38;
      IopSymlinkInitializeSymlinkInfo(
        v59,
        v42,
        v38[3],
        *((unsigned __int16 *)v38 + 8),
        v45,
        v5,
        v37,
        *(_WORD *)P,
        *((_WORD *)v38 + 1),
        v38[1]);
      FsRtlFreeExtraCreateParameter(v38);
    }
    MostRecentlyUsedName = IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3), v27, v28);
    if ( !MostRecentlyUsedName )
      MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
    v40 = a1;
    updated = IopSymlinkApplyToOpenedName(a2, MostRecentlyUsedName, a3, a1, v5, v33);
  }
  else
  {
    IopCopyOverNewPath(v5, *((_WORD *)a3 + 3));
    v40 = a1;
    if ( *a3 == -1610612733 )
    {
      IrpExtraCreateParameter = IopSymlinkRememberJunction(*((unsigned __int16 *)a3 + 3), a2, a1, v9);
      goto LABEL_83;
    }
    updated = IopSymlinkUpdateECP(a1, v9, 0, v55, 0, v9->MaximumLength & 0xFFFE);
  }
  IrpExtraCreateParameter = updated;
LABEL_78:
  if ( v58 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v48 )
      ExFreePoolWithTag(v48, 0);
  }
LABEL_83:
  result = 260LL;
  if ( IrpExtraCreateParameter < 0 )
    result = (unsigned int)IrpExtraCreateParameter;
  v40->IoStatus.Status = result;
  return result;
}
