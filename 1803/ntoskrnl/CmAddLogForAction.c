/*
 * XREFs of CmAddLogForAction @ 0x140576A18
 * Callers:
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x1404A33EC (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x1404A6CE0 (CmpGetValueData.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpTransWriteLog @ 0x1405DE890 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1405DEB38 (HvBufferCheckSum.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r15
  unsigned int v6; // r12d
  __int64 v7; // rcx
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // r8
  const void **v11; // r14
  int v12; // eax
  unsigned int v13; // r15d
  bool v14; // cc
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, _QWORD, _DWORD *); // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // eax
  ULONG v20; // ecx
  unsigned __int16 v21; // cx
  int v22; // ebx
  unsigned int v23; // eax
  unsigned int v24; // ebx
  _DWORD *PoolWithTag; // rax
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  _WORD *v29; // rbx
  size_t v30; // r8
  void *v31; // rdx
  char *v32; // rcx
  BOOLEAN v33; // al
  __int64 v34; // r13
  int v35; // ebx
  CLFS_INFORMATION *v36; // rax
  CLFS_INFORMATION *v37; // r15
  char *v39; // rcx
  __int64 v40; // rdx
  size_t v41; // r8
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // r8
  _WORD *v45; // rcx
  _DWORD v46[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v47; // [rsp+48h] [rbp-21h] BYREF
  __int64 v48; // [rsp+50h] [rbp-19h]
  _DWORD v49[2]; // [rsp+58h] [rbp-11h] BYREF
  void *Src; // [rsp+60h] [rbp-9h] BYREF
  int v51[2]; // [rsp+68h] [rbp-1h]
  CLFS_LSN plsnFinish; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v53; // [rsp+D0h] [rbp+67h]
  ULONG pcbInfoBuffer; // [rsp+D8h] [rbp+6Fh] BYREF
  size_t Size; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v56; // [rsp+E8h] [rbp+7Fh]

  pcbInfoBuffer = a2;
  v2 = 0;
  v46[1] = 0;
  v49[1] = 0;
  v46[0] = -1;
  v4 = 0LL;
  v49[0] = -1;
  v5 = 0LL;
  v53 = -1;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 0;
  v56 = 0LL;
  pcbInfoBuffer = 0;
  LODWORD(Size) = 0;
  v9 = *(_DWORD *)(v7 + 48);
  v48 = 0LL;
  if ( (v9 & 0x80u) != 0 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v51 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 4192LL);
  if ( !*(_QWORD *)(*(_QWORD *)v51 + 96LL) || !*(_QWORD *)(v7 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v47 = 0LL;
  CmpConstructNameWithStatus(v10, &v47);
  v11 = (const void **)v47;
  if ( v47 )
  {
    v12 = *(_DWORD *)(a1 + 68);
    if ( !v12 || v12 == 2 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL) + 24LL);
    }
    else
    {
      if ( v12 <= 3 )
        goto LABEL_21;
      if ( v12 <= 6 )
      {
        v13 = 80;
        v14 = (unsigned int)(v12 - 4) <= 1;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v15 + 8);
        if ( v14 )
        {
          v53 = *(_DWORD *)(a1 + 92);
          v17 = v16(v15, v53, v46);
          v56 = v17;
          v18 = v17;
          if ( v17 )
          {
            v19 = *(_DWORD *)(v17 + 4);
            v20 = v19 + 0x80000000;
            if ( v19 < 0x80000000 )
              v20 = v19;
            pcbInfoBuffer = v20;
            LODWORD(Size) = v20;
            if ( v20 + 80 < 0x50 )
            {
              v35 = -1073741675;
LABEL_42:
              if ( v56 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                  v46);
              if ( v4 )
                ExFreePoolWithTag(v4, 0);
              goto LABEL_46;
            }
            v13 = v20 + 80;
            goto LABEL_16;
          }
        }
        else
        {
          v53 = *(_DWORD *)(a1 + 88);
          v56 = v16(v15, v53, v46);
          v18 = v56;
          if ( v56 )
          {
LABEL_16:
            v21 = *(_WORD *)(v18 + 2);
            if ( (*(_BYTE *)(v18 + 16) & 1) != 0 )
            {
              v6 = (unsigned __int16)(2 * v21);
              v21 *= 2;
            }
            else
            {
              v6 = v21;
            }
LABEL_18:
            v22 = v21;
LABEL_19:
            v2 = v13 + v22;
            if ( v2 < v13 )
            {
              v35 = -1073741675;
              goto LABEL_40;
            }
            v5 = v56;
LABEL_21:
            v23 = *(unsigned __int16 *)v11;
            v24 = v23 + v2;
            if ( v24 < v23 )
            {
              v35 = -1073741562;
              goto LABEL_40;
            }
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x20204D43u);
            v4 = PoolWithTag;
            if ( !PoolWithTag )
            {
LABEL_75:
              v35 = -1073741670;
LABEL_40:
              if ( v48 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
                  v49);
              goto LABEL_42;
            }
            PoolWithTag[1] = v24;
            PoolWithTag[2] = 1;
            *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
            *((_WORD *)PoolWithTag + 16) = *(_WORD *)v11;
            *((_WORD *)PoolWithTag + 17) = *((_WORD *)v11 + 1);
            v26 = *(_DWORD *)(a1 + 68);
            if ( !v26 || v26 == 2 )
            {
              PoolWithTag[3] = (v26 != 0) + 1;
              PoolWithTag[12] = *(_DWORD *)(a1 + 72);
              *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
              memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
              v39 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
              *((_QWORD *)v4 + 7) = v39;
              v40 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL);
              v41 = *(unsigned int *)(v40 + 24);
            }
            else
            {
              if ( v26 <= 3 )
                goto LABEL_35;
              if ( v26 <= 6 )
              {
                v47 = 0xFFFFFFFFLL;
                v27 = 0;
                if ( v26 == 4 )
                {
                  v4[3] = 3;
                }
                else
                {
                  LOBYTE(v27) = v26 != 5;
                  v4[3] = v27 + 4;
                }
                v28 = *(_DWORD *)(v5 + 12);
                *((_QWORD *)v4 + 5) = v4 + 20;
                v4[16] = v28;
                memmove(v4 + 20, v11[1], *(unsigned __int16 *)v11);
                v29 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v11 + 80);
                *((_QWORD *)v4 + 7) = v29;
                if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
                  CmpCopyCompressedName(v29, v6, (unsigned __int8 *)(v5 + 20), *(unsigned __int16 *)(v5 + 2));
                else
                  memmove(v29, (const void *)(v5 + 20), v6);
                *((_WORD *)v4 + 25) = v6;
                *((_WORD *)v4 + 24) = v6;
                if ( *(_DWORD *)(a1 + 68) != 6 )
                {
                  v4[17] = pcbInfoBuffer;
                  if ( CmpGetValueData(
                         *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                         v53,
                         v5,
                         (unsigned int *)&Size,
                         (__int64)&Src,
                         (__int64)&pcbInfoBuffer,
                         (__int64)&v47) )
                  {
                    v30 = (unsigned int)Size;
                    v31 = Src;
                    v32 = (char *)v29 + v6;
                    *((_QWORD *)v4 + 9) = v32;
                    memmove(v32, v31, v30);
                    if ( (_BYTE)pcbInfoBuffer == 1 )
                      ExFreePoolWithTag(Src, 0);
                    else
                      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
                        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                        &v47);
                    goto LABEL_35;
                  }
                  goto LABEL_75;
                }
                v4[17] = 0;
                *((_QWORD *)v4 + 9) = 0LL;
LABEL_35:
                *v4 = HvBufferCheckSum(v4, (unsigned int)v4[1]);
                v33 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
                v34 = *(_QWORD *)v51;
                v35 = CmpTransWriteLog(v51[0], (int)v4, v4[1], v33 != 0 ? 2 : 0, &plsnFinish);
                if ( v35 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
                  *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = plsnFinish;
                pcbInfoBuffer = 120;
                v36 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
                v37 = v36;
                if ( v36 )
                {
                  ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v34 + 88), v36, &pcbInfoBuffer);
                  ExFreePoolWithTag(v37, 0);
                }
                goto LABEL_40;
              }
              if ( v26 != 9 )
              {
                switch ( v26 )
                {
                  case 7:
                    PoolWithTag[3] = 6;
                    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 14;
                    memmove(PoolWithTag + 14, v11[1], *(unsigned __int16 *)v11);
                    v4[12] = *(_DWORD *)(a1 + 88);
                    break;
                  case 8:
                    PoolWithTag[3] = 7;
                    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 14;
                    memmove(PoolWithTag + 14, v11[1], *(unsigned __int16 *)v11);
                    *((_QWORD *)v4 + 6) = *(_QWORD *)(a1 + 88);
                    break;
                  case 11:
                    PoolWithTag[3] = 9;
                    *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
                    memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
                    v44 = v48;
                    v45 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v11 + 64);
                    *((_QWORD *)v4 + 7) = v45;
                    if ( (*(_BYTE *)(v44 + 2) & 0x20) != 0 )
                      CmpCopyCompressedName(v45, v8, (unsigned __int8 *)(v44 + 76), *(unsigned __int16 *)(v44 + 72));
                    else
                      memmove(v45, (const void *)(v44 + 76), v8);
                    *((_WORD *)v4 + 25) = v8;
                    *((_WORD *)v4 + 24) = v8;
                    break;
                }
                goto LABEL_35;
              }
              PoolWithTag[3] = 8;
              *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
              memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
              v42 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
              v4[12] = v42;
              v41 = v42;
              v39 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
              *((_QWORD *)v4 + 7) = v39;
              v40 = *(_QWORD *)(a1 + 88);
            }
            memmove(v39, (const void *)(v40 + 32), v41);
            goto LABEL_35;
          }
        }
LABEL_69:
        v35 = -1073741670;
LABEL_46:
        CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
        return (unsigned int)v35;
      }
      if ( v12 != 9 )
      {
        if ( v12 == 7 || v12 == 8 )
        {
          v2 = 56;
          goto LABEL_21;
        }
        if ( v12 != 11 )
          goto LABEL_21;
        v13 = 64;
        v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 8LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
                *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL),
                v49);
        v48 = v43;
        if ( v43 )
        {
          v21 = *(_WORD *)(v43 + 72);
          if ( (*(_BYTE *)(v43 + 2) & 0x20) != 0 )
          {
            v8 = (unsigned __int16)(2 * v21);
            v21 *= 2;
          }
          else
          {
            v8 = v21;
          }
          goto LABEL_18;
        }
        goto LABEL_69;
      }
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
    }
    v13 = 64;
    goto LABEL_19;
  }
  return 3221225626LL;
}
