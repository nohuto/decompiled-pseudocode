/*
 * XREFs of IopGraftName @ 0x1404E10E4
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1404E1088 (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140063334 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x140065598 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14006626C (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopGetFileInformation @ 0x1404A5514 (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404D1FD0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkRememberJunction @ 0x1404E0CD0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1404E0ED8 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1404E0FBC (IopSymlinkAllocateAndAddECP.c)
 *     IopCopyOverNewPath @ 0x1404E13A0 (IopCopyOverNewPath.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1404E1488 (IopSymlinkGetRelatedMountPoint.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404E2940 (IoGetIrpExtraCreateParameter.c)
 *     IopSymlinkUpdateECP @ 0x140577744 (IopSymlinkUpdateECP.c)
 *     IopSymlinkApplyToOpenedName @ 0x14071DA8C (IopSymlinkApplyToOpenedName.c)
 */

__int64 __fastcall IopGraftName(IRP *a1, __int64 a2, int *a3)
{
  unsigned int v4; // r15d
  char *v5; // r13
  int IrpExtraCreateParameter; // ebx
  UNICODE_STRING *v8; // rdi
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int16 v13; // r8
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // r8
  int v17; // r10d
  char v18; // cl
  unsigned int v19; // eax
  unsigned int v20; // r12d
  char *v21; // rax
  unsigned int v22; // r12d
  UNICODE_STRING *v23; // r9
  IRP *v24; // rdi
  __int64 result; // rax
  __int64 v26; // rax
  UNICODE_STRING *v27; // rdx
  int updated; // eax
  ULONG v29; // esi
  unsigned int v30; // r12d
  const void **PoolWithTag; // rax
  unsigned int v32; // r8d
  const void **v33; // r12
  int v34; // eax
  unsigned int v35; // r12d
  unsigned int *v36; // rax
  int FileInformation; // eax
  unsigned int v38; // eax
  unsigned int v39; // ecx
  unsigned int *v40; // rdi
  char *v41; // rbx
  char *v42; // rdx
  __int16 v43; // di
  unsigned __int16 v44; // di
  PVOID v45; // rsi
  unsigned int v46; // r15d
  __int64 MostRecentlyUsedName; // rax
  __int16 v48; // [rsp+28h] [rbp-61h]
  unsigned __int16 v49; // [rsp+30h] [rbp-59h]
  const void **P; // [rsp+50h] [rbp-39h]
  __int64 v51; // [rsp+58h] [rbp-31h] BYREF
  PVOID v52; // [rsp+60h] [rbp-29h]
  PVOID EcpContext; // [rsp+68h] [rbp-21h] BYREF
  PVOID Object; // [rsp+70h] [rbp-19h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+78h] [rbp-11h] BYREF
  __int64 v56; // [rsp+80h] [rbp-9h]
  unsigned int *v57; // [rsp+88h] [rbp-1h]
  unsigned __int16 *v58; // [rsp+90h] [rbp+7h]
  char v61; // [rsp+100h] [rbp+77h]
  PVOID v62; // [rsp+108h] [rbp+7Fh] BYREF

  Object = *(PVOID *)(a2 + 64);
  v4 = 0;
  LOWORD(v62) = 0;
  v5 = 0LL;
  v56 = 0LL;
  EcpContext = 0LL;
  v61 = 0;
  v52 = 0LL;
  P = 0LL;
  v57 = 0LL;
  ExtraCreateParameter = 0LL;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(a1, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v8 = (UNICODE_STRING *)EcpContext;
  v9 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  if ( a1->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  v10 = a1->IoStatus.Information - 2684354563u;
  if ( v10 > 0x16 || !_bittest64(&v9, v10) )
    IrpExtraCreateParameter = -1073741192;
  v11 = *((unsigned __int16 *)a3 + 3);
  if ( !a1->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned __int16)v11 >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v12 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned int)(v12 + 1610612733) > 0x16 || !_bittest((const int *)&v9, v12 + 1610612733) )
    IrpExtraCreateParameter = -1073741192;
  v58 = (unsigned __int16 *)(a2 + 88);
  if ( !*(_WORD *)(a2 + 88) )
    IrpExtraCreateParameter = -1073741192;
  if ( IrpExtraCreateParameter >= 0 )
  {
    if ( v12 == -1610612733 )
    {
      v13 = *((_WORD *)a3 + 5);
      v56 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
      LOWORD(v62) = v13;
    }
    else if ( v12 == -1610612724 )
    {
      v26 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
      LOWORD(v62) = *((_WORD *)a3 + 5);
      v56 = v26;
      if ( (a3[4] & 1) != 0 )
      {
        v29 = 256;
        v61 = 1;
        v30 = 256;
        if ( Object )
        {
          if ( !IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
          {
            while ( 1 )
            {
              PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v30, 0x63466F49u);
              P = PoolWithTag;
              if ( !PoolWithTag )
                break;
              memset(PoolWithTag, 0, v30);
              v32 = v30;
              v33 = P;
              v34 = ObQueryNameStringMode(*(char **)(a2 + 8), (__int64)P, v32, &v51, 0);
              IrpExtraCreateParameter = v34;
              if ( v34 >= 0 )
                goto LABEL_53;
              if ( v34 != -2147483643 )
                goto LABEL_52;
              v30 = v51;
              if ( (unsigned int)v51 >= 0xFFFF )
              {
                v33 = P;
                IrpExtraCreateParameter = -1073741562;
LABEL_52:
                if ( IrpExtraCreateParameter < 0 )
                  goto LABEL_37;
LABEL_53:
                v4 = *v58 + *(unsigned __int16 *)v33 - *((unsigned __int16 *)a3 + 3);
                v35 = v4;
                while ( 1 )
                {
                  v36 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v29, 0x63466F49u);
                  v52 = v36;
                  if ( !v36 )
                    goto LABEL_67;
                  v57 = v36;
                  memset(v36, 0, v29);
                  FileInformation = IopGetFileInformation(
                                      (struct _FILE_OBJECT *)Object,
                                      v29,
                                      9u,
                                      (struct _IRP *)v52,
                                      &v51);
                  IrpExtraCreateParameter = FileInformation;
                  if ( FileInformation >= 0 )
                  {
                    v38 = -1;
                    v39 = v4 + *(_DWORD *)v52;
                    if ( v39 >= v4 )
                      v38 = v4 + *(_DWORD *)v52;
                    v4 = v38;
                    if ( v39 < v35 )
                    {
                      IrpExtraCreateParameter = -1073741675;
                    }
                    else if ( v38 >= 0xFFFF )
                    {
                      IrpExtraCreateParameter = -1073741562;
                    }
                    goto LABEL_37;
                  }
                  if ( FileInformation != -2147483643 )
                    goto LABEL_37;
                  v29 = *(_DWORD *)v52 + 8;
                  if ( v29 >= 0xFFFF )
                  {
                    IrpExtraCreateParameter = -1073741562;
                    goto LABEL_37;
                  }
                  ExFreePoolWithTag(v52, 0);
                }
              }
              ExFreePoolWithTag(P, 0);
            }
LABEL_67:
            IrpExtraCreateParameter = -1073741670;
          }
        }
      }
LABEL_37:
      v11 = *((unsigned __int16 *)a3 + 3);
    }
    else
    {
      IrpExtraCreateParameter = -1073741194;
    }
  }
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_84;
  RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v8, v11);
  if ( !RelatedMountPoint )
    RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v8);
  v18 = v61;
  v19 = *(unsigned __int16 *)(RelatedMountPoint + 16);
  if ( v61 )
  {
    if ( v4 > v19 )
      v19 = v4;
    v4 = v17 + v19;
  }
  v20 = v4 + v16 + v15 + 4;
  if ( v20 >= 0xFFFF )
  {
    IrpExtraCreateParameter = -1073741562;
  }
  else
  {
    v21 = (char *)ExAllocatePoolWithTag(PagedPool, v20, 0x63466F49u);
    v5 = v21;
    if ( v21 )
      memset(v21, 0, v20);
    else
      IrpExtraCreateParameter = -1073741670;
    v18 = v61;
  }
  v22 = v20 - 2;
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_84;
  if ( !v18 )
  {
    IopCopyOverNewPath(v5, *((_WORD *)a3 + 3));
    if ( *a3 == -1610612733 )
    {
      v23 = v8;
      v24 = a1;
      IrpExtraCreateParameter = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), a2, (__int64)a1, v23);
      goto LABEL_32;
    }
    v27 = v8;
    v48 = v8->MaximumLength & 0xFFFE;
    v24 = a1;
    updated = IopSymlinkUpdateECP(a1, v27, 0, v48);
    goto LABEL_39;
  }
  v62 = 0LL;
  if ( !Object || IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
    goto LABEL_87;
  memmove(v5, P[1], *(unsigned __int16 *)P);
  v40 = v57;
  v41 = &v5[2 * ((unsigned __int64)*(unsigned __int16 *)P >> 1)];
  memmove(v41, v57 + 1, *v57);
  v42 = &v41[2 * ((unsigned __int64)*v40 >> 1)];
  v43 = (_WORD)v41 + 2 * ((unsigned __int64)*v40 >> 1);
  if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v42 - 1) != 92 )
  {
    *(_WORD *)v42 = 92;
    v43 = (_WORD)v42 + 2;
  }
  v44 = v43 - (_WORD)v5;
  IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
  v45 = EcpContext;
  v46 = *((unsigned __int16 *)EcpContext + 8) + 2 + v44;
  if ( v46 < 0xFFFF )
  {
    IrpExtraCreateParameter = IopSymlinkAllocateAndAddECP(a1, &v62, v46);
    if ( IrpExtraCreateParameter < 0 )
      goto LABEL_83;
    v49 = v44;
    v8 = (UNICODE_STRING *)v62;
    IopSymlinkInitializeSymlinkInfo(
      (__int64)v62,
      v46 + 32,
      *((const void **)v45 + 3),
      *((_WORD *)v45 + 8),
      *(_WORD *)v45,
      v5,
      v49,
      *(_WORD *)P,
      *((_WORD *)v45 + 1),
      *((_QWORD *)v45 + 1));
    FsRtlFreeExtraCreateParameter(v45);
LABEL_87:
    MostRecentlyUsedName = IopSymlinkGetRelatedMountPoint(v8, *((unsigned __int16 *)a3 + 3));
    if ( !MostRecentlyUsedName )
      MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v8);
    v24 = a1;
    updated = IopSymlinkApplyToOpenedName(a2, MostRecentlyUsedName, a3, a1, v5, v22);
LABEL_39:
    IrpExtraCreateParameter = updated;
    goto LABEL_40;
  }
  IrpExtraCreateParameter = -1073741562;
LABEL_83:
  ExFreePoolWithTag(v5, 0);
LABEL_84:
  v24 = a1;
LABEL_40:
  if ( v61 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v52 )
      ExFreePoolWithTag(v52, 0);
  }
LABEL_32:
  result = 260LL;
  if ( IrpExtraCreateParameter < 0 )
    result = (unsigned int)IrpExtraCreateParameter;
  v24->IoStatus.Status = result;
  return result;
}
