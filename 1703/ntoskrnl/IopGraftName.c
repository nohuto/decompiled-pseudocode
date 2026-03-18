/*
 * XREFs of IopGraftName @ 0x14057C2B8
 * Callers:
 *     IopSymlinkProcessReparse @ 0x14057C25C (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     IopSymlinkRemoveECP @ 0x1400FE280 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetECP @ 0x140100CB0 (IopSymlinkGetECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14013FF24 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoGetIrpExtraCreateParameter @ 0x140428960 (IoGetIrpExtraCreateParameter.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x1404FC060 (IopGetFileInformation.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkRememberJunction @ 0x14057BD70 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x14057BE7C (IopSymlinkUpdateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x14057C104 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14057C1B0 (IopSymlinkAllocateAndAddECP.c)
 *     IopCopyOverNewPath @ 0x14057C8EC (IopCopyOverNewPath.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x14057C9D4 (IopSymlinkGetRelatedMountPoint.c)
 *     IopSymlinkApplyToOpenedName @ 0x14068CE14 (IopSymlinkApplyToOpenedName.c)
 */

void __fastcall IopGraftName(IRP *a1, __int64 a2, int *a3)
{
  unsigned int v4; // edi
  char *v5; // r13
  IRP *v6; // rsi
  int IrpExtraCreateParameter; // ebx
  UNICODE_STRING *v8; // r15
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int16 v12; // r8
  __int64 v13; // rax
  ULONG v14; // esi
  unsigned int v15; // r12d
  const void **PoolWithTag; // rax
  unsigned int v17; // r8d
  const void **v18; // r12
  int v19; // eax
  struct _IRP *v20; // rax
  int FileInformation; // eax
  struct _IRP *v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v26; // dx
  unsigned __int16 v27; // r8
  char v28; // r9
  int v29; // r10d
  unsigned int v30; // eax
  unsigned int v31; // r12d
  char *v32; // rax
  __int16 v33; // r12
  struct _IRP *v34; // rdi
  char *v35; // rbx
  char *v36; // rdi
  unsigned __int16 v37; // di
  PVOID v38; // rsi
  unsigned int v39; // r15d
  __int16 v40; // dx
  void *MostRecentlyUsedName; // rax
  int updated; // eax
  const void **P; // [rsp+50h] [rbp-39h]
  struct _IRP *v44; // [rsp+58h] [rbp-31h]
  __int64 v45; // [rsp+60h] [rbp-29h] BYREF
  PVOID EcpContext; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-19h]
  PVOID Object; // [rsp+78h] [rbp-11h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+80h] [rbp-9h] BYREF
  __int64 v50; // [rsp+88h] [rbp-1h]
  struct _IRP *v51; // [rsp+90h] [rbp+7h]
  const UNICODE_STRING *v52; // [rsp+98h] [rbp+Fh]
  char v55; // [rsp+100h] [rbp+77h]
  PVOID v56; // [rsp+108h] [rbp+7Fh] BYREF

  Object = *(PVOID *)(a2 + 64);
  v4 = 0;
  LOWORD(v56) = 0;
  v5 = 0LL;
  v50 = 0LL;
  EcpContext = 0LL;
  v6 = a1;
  v55 = 0;
  v44 = 0LL;
  P = 0LL;
  v51 = 0LL;
  ExtraCreateParameter = 0LL;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(a1, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v8 = (UNICODE_STRING *)EcpContext;
  v9 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  if ( v6->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  v10 = v6->IoStatus.Information - 2684354563u;
  if ( v10 > 0x16 || !_bittest64(&v9, v10) )
    IrpExtraCreateParameter = -1073741192;
  if ( !v6->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( *((_WORD *)a3 + 3) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v11 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned int)(v11 + 1610612733) > 0x16 || !_bittest((const int *)&v9, v11 + 1610612733) )
    IrpExtraCreateParameter = -1073741192;
  v52 = (const UNICODE_STRING *)(a2 + 88);
  if ( !*(_WORD *)(a2 + 88) )
    IrpExtraCreateParameter = -1073741192;
  if ( IrpExtraCreateParameter >= 0 )
  {
    if ( v11 == -1610612733 )
    {
      v12 = *((_WORD *)a3 + 5);
      v50 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
      LOWORD(v56) = v12;
    }
    else if ( v11 == -1610612724 )
    {
      v13 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
      LOWORD(v56) = *((_WORD *)a3 + 5);
      v50 = v13;
      if ( (a3[4] & 1) != 0 )
      {
        v55 = 1;
        v14 = 256;
        v15 = 256;
        if ( Object )
        {
          if ( IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
          {
            v6 = a1;
          }
          else
          {
            while ( 1 )
            {
              PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v15, 0x63466F49u);
              P = PoolWithTag;
              if ( !PoolWithTag )
              {
                IrpExtraCreateParameter = -1073741670;
                goto LABEL_93;
              }
              memset(PoolWithTag, 0, v15);
              v17 = v15;
              v18 = P;
              v19 = ObQueryNameStringMode(*(char **)(a2 + 8), (__int64)P, v17, &v45, 0);
              IrpExtraCreateParameter = v19;
              if ( v19 >= 0 )
                break;
              if ( v19 != -2147483643 )
                goto LABEL_32;
              v15 = v45;
              if ( (unsigned int)v45 >= 0xFFFF )
              {
                v18 = P;
                IrpExtraCreateParameter = -1073741562;
LABEL_32:
                if ( IrpExtraCreateParameter < 0 )
                {
LABEL_60:
                  v6 = a1;
                  goto LABEL_50;
                }
                break;
              }
              ExFreePoolWithTag(P, 0);
            }
            v4 = v52->Length + *(unsigned __int16 *)v18 - *((unsigned __int16 *)a3 + 3);
            v47 = v4;
            while ( 1 )
            {
              v20 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, v14, 0x63466F49u);
              v44 = v20;
              if ( !v20 )
              {
                IrpExtraCreateParameter = -1073741670;
                goto LABEL_47;
              }
              v51 = v20;
              memset(v20, 0, v14);
              FileInformation = IopGetFileInformation((struct _FILE_OBJECT *)Object, v14, 9u, v44, &v45);
              IrpExtraCreateParameter = FileInformation;
              if ( FileInformation >= 0 )
                break;
              if ( FileInformation != -2147483643 )
                goto LABEL_60;
              v20 = v44;
              v14 = *(_DWORD *)&v44->Type + 8;
              if ( v14 >= 0xFFFF )
              {
                IrpExtraCreateParameter = -1073741562;
LABEL_47:
                v22 = v20;
                goto LABEL_87;
              }
              ExFreePoolWithTag(v44, 0);
            }
            v22 = v44;
            v23 = -1;
            v24 = v4 + *(_DWORD *)&v44->Type;
            if ( v24 >= v4 )
              v23 = v4 + *(_DWORD *)&v44->Type;
            v4 = v23;
            if ( v24 < v47 )
            {
              IrpExtraCreateParameter = -1073741675;
              goto LABEL_87;
            }
            v6 = a1;
            if ( v23 >= 0xFFFF )
              IrpExtraCreateParameter = -1073741562;
          }
        }
        else
        {
          v6 = a1;
        }
      }
    }
    else
    {
      IrpExtraCreateParameter = -1073741194;
    }
  }
LABEL_50:
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_85;
  RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v8, *((unsigned __int16 *)a3 + 3));
  if ( !RelatedMountPoint )
    RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v8);
  v30 = *(unsigned __int16 *)(RelatedMountPoint + 16);
  if ( v28 )
  {
    if ( v4 > v30 )
      v30 = v4;
    v4 = v29 + v30;
  }
  v31 = v4 + v27 + v26 + 4;
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
    v28 = v55;
  }
  v33 = v31 - 2;
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_85;
  if ( v28 )
  {
    v56 = 0LL;
    if ( Object && !IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
    {
      memmove(v5, P[1], *(unsigned __int16 *)P);
      v34 = v51;
      v35 = &v5[2 * ((unsigned __int64)*(unsigned __int16 *)P >> 1)];
      memmove(v35, &v51->Size + 1, *(unsigned int *)&v51->Type);
      v36 = &v35[2 * ((unsigned __int64)*(unsigned int *)&v34->Type >> 1)];
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
LABEL_75:
        ExFreePoolWithTag(v5, 0);
        v6 = a1;
        goto LABEL_85;
      }
      IrpExtraCreateParameter = IopSymlinkAllocateAndAddECP(a1, &v56, v39);
      if ( IrpExtraCreateParameter < 0 )
        goto LABEL_75;
      v40 = v39 + 32;
      v8 = (UNICODE_STRING *)v56;
      IopSymlinkInitializeSymlinkInfo(
        (__int64)v56,
        v40,
        *((const void **)v38 + 3),
        *((_WORD *)v38 + 8),
        *(_WORD *)v38,
        v5,
        v37,
        *(_WORD *)P,
        *((_WORD *)v38 + 1),
        *((_QWORD *)v38 + 1));
      FsRtlFreeExtraCreateParameter(v38);
    }
    MostRecentlyUsedName = (void *)IopSymlinkGetRelatedMountPoint(v8, *((unsigned __int16 *)a3 + 3));
    if ( !MostRecentlyUsedName )
      MostRecentlyUsedName = (void *)IopSymlinkGetMostRecentlyUsedName((__int64)v8);
    v6 = a1;
    updated = IopSymlinkApplyToOpenedName(a2, MostRecentlyUsedName, (int)a3, a1, v5, v33);
  }
  else
  {
    IopCopyOverNewPath(v5, *((_WORD *)a3 + 3));
    if ( *a3 == -1610612733 )
    {
      IrpExtraCreateParameter = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), a2, (__int64)v6, v8);
      goto LABEL_92;
    }
    updated = IopSymlinkUpdateECP(v6, v8, 0, v52, 0, v8->MaximumLength & 0xFFFE);
  }
  IrpExtraCreateParameter = updated;
LABEL_85:
  if ( v55 )
  {
    v18 = P;
    v22 = v44;
LABEL_87:
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    v6 = a1;
  }
LABEL_92:
  if ( IrpExtraCreateParameter >= 0 )
    v6->IoStatus.Status = 260;
  else
LABEL_93:
    a1->IoStatus.Status = IrpExtraCreateParameter;
}
