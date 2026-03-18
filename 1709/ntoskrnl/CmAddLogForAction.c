/*
 * XREFs of CmAddLogForAction @ 0x140593D1C
 * Callers:
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x14047442C (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpTransWriteLog @ 0x1405D5318 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x1405D55B8 (HvBufferCheckSum.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // r15d
  __int64 v7; // rcx
  ULONG v8; // r12d
  int v9; // eax
  __int64 v10; // r8
  const void **v11; // r14
  int v12; // eax
  unsigned int v13; // r12d
  bool v14; // cc
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, _QWORD, _DWORD *); // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned __int16 v20; // ax
  int v21; // ebx
  unsigned int v22; // eax
  unsigned int v23; // ebx
  _DWORD *PoolWithTag; // rax
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  _WORD *v28; // rbx
  __int64 v29; // rdx
  size_t v30; // r8
  void *v31; // rdx
  char *v32; // rcx
  BOOLEAN v33; // al
  __int64 v34; // r12
  int v35; // ebx
  CLFS_INFORMATION *v36; // rax
  CLFS_INFORMATION *v37; // r15
  char *v39; // rcx
  __int64 v40; // rdx
  size_t v41; // r8
  unsigned int v42; // edx
  __int64 v43; // rax
  ULONG v44; // ecx
  __int64 v45; // rdx
  _WORD *v46; // rcx
  _DWORD v47[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v48; // [rsp+48h] [rbp-30h] BYREF
  __int64 v49; // [rsp+50h] [rbp-28h]
  _DWORD v50[2]; // [rsp+58h] [rbp-20h] BYREF
  int v51[2]; // [rsp+60h] [rbp-18h]
  CLFS_LSN plsnFinish; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  ULONG pcbInfoBuffer; // [rsp+C8h] [rbp+50h] BYREF
  void *Src; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v56; // [rsp+D8h] [rbp+60h]

  pcbInfoBuffer = a2;
  v2 = 0;
  v47[1] = 0;
  v50[1] = 0;
  v47[0] = -1;
  v4 = 0LL;
  v50[0] = -1;
  v5 = 0LL;
  v56 = -1;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 0;
  LODWORD(Src) = 0;
  LODWORD(Size) = 0;
  v49 = 0LL;
  v9 = *(_DWORD *)(v7 + 48);
  pcbInfoBuffer = 0;
  if ( (v9 & 0x80u) != 0 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v51 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 5400LL);
  if ( !*(_QWORD *)(*(_QWORD *)v51 + 96LL) || !*(_QWORD *)(v7 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  v48 = 0LL;
  CmpConstructNameWithStatus(v10, &v48);
  v11 = (const void **)v48;
  if ( v48 )
  {
    v12 = *(_DWORD *)(a1 + 68);
    if ( !v12 || v12 == 2 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL) + 24LL);
    }
    else
    {
      if ( v12 <= 3 )
        goto LABEL_22;
      if ( v12 <= 6 )
      {
        v13 = 80;
        v14 = (unsigned int)(v12 - 4) <= 1;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
        v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v15 + 8);
        if ( v14 )
        {
          v56 = *(_DWORD *)(a1 + 92);
          v17 = v16(v15, v56, v47);
          v5 = v17;
          if ( v17 )
          {
            v18 = *(_DWORD *)(v17 + 4);
            LODWORD(Src) = v18;
            if ( v18 >= 0x80000000 )
            {
              v18 += 0x80000000;
              LODWORD(Src) = v18;
            }
            LODWORD(Size) = v18;
            v19 = v18 + 80;
            if ( v19 < 0x50 )
            {
              v35 = -1073741675;
LABEL_43:
              if ( v5 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                  v47);
              if ( v4 )
                ExFreePoolWithTag(v4, 0);
              goto LABEL_47;
            }
            v13 = v19;
            goto LABEL_16;
          }
        }
        else
        {
          v56 = *(_DWORD *)(a1 + 88);
          v5 = v16(v15, v56, v47);
          if ( v5 )
          {
LABEL_16:
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              v6 = (unsigned __int16)(2 * *(_WORD *)(v5 + 2));
            else
              v6 = *(unsigned __int16 *)(v5 + 2);
            v20 = v6;
LABEL_19:
            v21 = v20;
LABEL_20:
            v2 = v13 + v21;
            if ( v2 < v13 )
            {
              v35 = -1073741675;
              goto LABEL_41;
            }
            v8 = pcbInfoBuffer;
LABEL_22:
            v22 = *(unsigned __int16 *)v11;
            v23 = v22 + v2;
            if ( v23 < v22 )
            {
              v35 = -1073741562;
              goto LABEL_41;
            }
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v23, 0x20204D43u);
            v4 = PoolWithTag;
            if ( !PoolWithTag )
            {
LABEL_77:
              v35 = -1073741670;
LABEL_41:
              if ( v49 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
                  v50);
              goto LABEL_43;
            }
            PoolWithTag[1] = v23;
            PoolWithTag[2] = 1;
            *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
            *((_WORD *)PoolWithTag + 16) = *(_WORD *)v11;
            *((_WORD *)PoolWithTag + 17) = *((_WORD *)v11 + 1);
            v25 = *(_DWORD *)(a1 + 68);
            if ( !v25 || v25 == 2 )
            {
              PoolWithTag[3] = (v25 != 0) + 1;
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
              if ( v25 <= 3 )
                goto LABEL_36;
              if ( v25 <= 6 )
              {
                v48 = 0xFFFFFFFFLL;
                v26 = 0;
                if ( v25 == 4 )
                {
                  v4[3] = 3;
                }
                else
                {
                  LOBYTE(v26) = v25 != 5;
                  v4[3] = v26 + 4;
                }
                v27 = *(_DWORD *)(v5 + 12);
                *((_QWORD *)v4 + 5) = v4 + 20;
                v4[16] = v27;
                memmove(v4 + 20, v11[1], *(unsigned __int16 *)v11);
                v28 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v11 + 80);
                *((_QWORD *)v4 + 7) = v28;
                if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
                  CmpCopyCompressedName(v28, v6, (unsigned __int8 *)(v5 + 20), *(unsigned __int16 *)(v5 + 2));
                else
                  memmove(v28, (const void *)(v5 + 20), v6);
                *((_WORD *)v4 + 25) = v6;
                *((_WORD *)v4 + 24) = v6;
                if ( *(_DWORD *)(a1 + 68) != 6 )
                {
                  v29 = v56;
                  v4[17] = (_DWORD)Src;
                  if ( CmpGetValueData(
                         *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                         v29,
                         v5,
                         (unsigned int *)&Size,
                         (__int64)&Src,
                         (__int64)&pcbInfoBuffer,
                         (__int64)&v48) )
                  {
                    v30 = (unsigned int)Size;
                    v31 = Src;
                    v32 = (char *)v28 + v6;
                    *((_QWORD *)v4 + 9) = v32;
                    memmove(v32, v31, v30);
                    if ( (_BYTE)pcbInfoBuffer == 1 )
                      ExFreePoolWithTag(Src, 0);
                    else
                      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
                        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                        &v48);
                    goto LABEL_36;
                  }
                  goto LABEL_77;
                }
                v4[17] = 0;
                *((_QWORD *)v4 + 9) = 0LL;
LABEL_36:
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
                goto LABEL_41;
              }
              if ( v25 != 9 )
              {
                switch ( v25 )
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
                    v45 = v49;
                    v46 = (_WORD *)((char *)v4 + *(unsigned __int16 *)v11 + 64);
                    *((_QWORD *)v4 + 7) = v46;
                    if ( (*(_BYTE *)(v45 + 2) & 0x20) != 0 )
                      CmpCopyCompressedName(v46, v8, (unsigned __int8 *)(v45 + 76), *(unsigned __int16 *)(v45 + 72));
                    else
                      memmove(v46, (const void *)(v45 + 76), v8);
                    *((_WORD *)v4 + 25) = v8;
                    *((_WORD *)v4 + 24) = v8;
                    break;
                }
                goto LABEL_36;
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
            goto LABEL_36;
          }
        }
LABEL_70:
        v35 = -1073741670;
LABEL_47:
        CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
        return (unsigned int)v35;
      }
      if ( v12 != 9 )
      {
        if ( v12 == 7 || v12 == 8 )
        {
          v2 = 56;
          goto LABEL_22;
        }
        if ( v12 != 11 )
          goto LABEL_22;
        v13 = 64;
        v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 8LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
                *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL),
                v50);
        v49 = v43;
        if ( v43 )
        {
          if ( (*(_BYTE *)(v43 + 2) & 0x20) != 0 )
            v44 = (unsigned __int16)(2 * *(_WORD *)(v43 + 72));
          else
            v44 = *(unsigned __int16 *)(v43 + 72);
          v20 = v44;
          pcbInfoBuffer = v44;
          goto LABEL_19;
        }
        goto LABEL_70;
      }
      v21 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
    }
    v13 = 64;
    goto LABEL_20;
  }
  return 3221225626LL;
}
