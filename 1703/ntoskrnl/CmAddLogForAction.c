/*
 * XREFs of CmAddLogForAction @ 0x14042C988
 * Callers:
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpTransWriteLog @ 0x14042CE64 (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x14042D104 (HvBufferCheckSum.c)
 *     CmpCopyCompressedName @ 0x1404D2CB0 (CmpCopyCompressedName.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 */

__int64 __fastcall CmAddLogForAction(__int64 a1, ULONG a2)
{
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // rcx
  ULONG v8; // r15d
  int v9; // eax
  __int64 v10; // r8
  const void **v11; // r14
  int v12; // eax
  unsigned int v13; // r15d
  bool v14; // cc
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, _QWORD, _DWORD *); // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  _DWORD *PoolWithTag; // rax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  char *v26; // rbx
  unsigned int v27; // edx
  size_t v28; // r8
  void *v29; // rdx
  char *v30; // rcx
  BOOLEAN v31; // al
  __int64 v32; // r12
  int v33; // ebx
  CLFS_INFORMATION *v34; // rax
  CLFS_INFORMATION *v35; // r15
  ULONG v37; // ebx
  char *v38; // rcx
  __int64 v39; // rdx
  size_t v40; // r8
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rdx
  char *v44; // rcx
  _DWORD v45[2]; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  __int64 v47; // [rsp+50h] [rbp-28h]
  _DWORD v48[2]; // [rsp+58h] [rbp-20h] BYREF
  int v49[2]; // [rsp+60h] [rbp-18h]
  CLFS_LSN plsnFinish; // [rsp+68h] [rbp-10h] BYREF
  size_t Size; // [rsp+C0h] [rbp+48h] BYREF
  ULONG pcbInfoBuffer; // [rsp+C8h] [rbp+50h] BYREF
  void *Src; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v54; // [rsp+D8h] [rbp+60h]

  pcbInfoBuffer = a2;
  v2 = 0;
  v45[1] = 0;
  v48[1] = 0;
  v45[0] = -1;
  v4 = 0LL;
  v48[0] = -1;
  v5 = 0LL;
  v54 = -1;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 0;
  LODWORD(Src) = 0;
  LODWORD(Size) = 0;
  v47 = 0LL;
  v9 = *(_DWORD *)(v7 + 48);
  pcbInfoBuffer = 0;
  if ( (v9 & 0x80u) != 0 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v49 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 5400LL);
  if ( !*(_QWORD *)(*(_QWORD *)v49 + 96LL) || !*(_QWORD *)(v7 + 56) || *(_DWORD *)(a1 + 68) == 13 )
    return 0LL;
  P = 0LL;
  CmpConstructNameWithStatus(v10, &P);
  v11 = (const void **)P;
  if ( P )
  {
    v12 = *(_DWORD *)(a1 + 68);
    if ( !v12 || v12 == 2 )
    {
      v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL) + 24LL);
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
          v54 = *(_DWORD *)(a1 + 92);
          v17 = v16(v15, v54, v45);
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
              v33 = -1073741675;
LABEL_42:
              if ( v5 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                  v45);
              if ( v4 )
                ExFreePoolWithTag(v4, 0);
              goto LABEL_46;
            }
            v13 = v19;
            goto LABEL_16;
          }
        }
        else
        {
          v54 = *(_DWORD *)(a1 + 88);
          v5 = v16(v15, v54, v45);
          if ( v5 )
          {
LABEL_16:
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              v6 = (unsigned __int16)(2 * *(_WORD *)(v5 + 2));
            else
              v6 = *(unsigned __int16 *)(v5 + 2);
            v2 = v13 + v6;
            goto LABEL_19;
          }
        }
LABEL_70:
        v33 = -1073741670;
LABEL_46:
        CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
        return (unsigned int)v33;
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
        v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 8LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
                *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL),
                v48);
        v47 = v42;
        if ( !v42 )
          goto LABEL_70;
        if ( (*(_BYTE *)(v42 + 2) & 0x20) != 0 )
          v37 = (unsigned __int16)(2 * *(_WORD *)(v42 + 72));
        else
          v37 = *(unsigned __int16 *)(v42 + 72);
        pcbInfoBuffer = v37;
LABEL_49:
        v2 = v37 + 64;
LABEL_19:
        if ( v2 < v13 )
        {
          v33 = -1073741675;
          goto LABEL_40;
        }
        v8 = pcbInfoBuffer;
LABEL_21:
        v20 = *(unsigned __int16 *)v11;
        v21 = v20 + v2;
        if ( v21 < v20 )
        {
          v33 = -1073741562;
          goto LABEL_40;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x20204D43u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_77:
          v33 = -1073741670;
LABEL_40:
          if ( v47 )
            (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 16LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL),
              v48);
          goto LABEL_42;
        }
        PoolWithTag[1] = v21;
        PoolWithTag[2] = 1;
        *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 88LL);
        *((_WORD *)PoolWithTag + 16) = *(_WORD *)v11;
        *((_WORD *)PoolWithTag + 17) = *((_WORD *)v11 + 1);
        v23 = *(_DWORD *)(a1 + 68);
        if ( !v23 || v23 == 2 )
        {
          PoolWithTag[3] = (v23 != 0) + 1;
          PoolWithTag[12] = *(_DWORD *)(a1 + 72);
          *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
          memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
          v38 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
          *((_QWORD *)v4 + 7) = v38;
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 80LL);
          v40 = *(unsigned int *)(v39 + 24);
        }
        else
        {
          if ( v23 <= 3 )
            goto LABEL_35;
          if ( v23 <= 6 )
          {
            P = (PVOID)0xFFFFFFFFLL;
            v24 = 0;
            if ( v23 == 4 )
            {
              v4[3] = 3;
            }
            else
            {
              LOBYTE(v24) = v23 != 5;
              v4[3] = v24 + 4;
            }
            v25 = *(_DWORD *)(v5 + 12);
            *((_QWORD *)v4 + 5) = v4 + 20;
            v4[16] = v25;
            memmove(v4 + 20, v11[1], *(unsigned __int16 *)v11);
            v26 = (char *)v4 + *(unsigned __int16 *)v11 + 80;
            *((_QWORD *)v4 + 7) = v26;
            if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
              CmpCopyCompressedName(v26, v6, v5 + 20, *(unsigned __int16 *)(v5 + 2));
            else
              memmove(v26, (const void *)(v5 + 20), v6);
            *((_WORD *)v4 + 25) = v6;
            *((_WORD *)v4 + 24) = v6;
            if ( *(_DWORD *)(a1 + 68) != 6 )
            {
              v27 = v54;
              v4[17] = (_DWORD)Src;
              if ( (unsigned __int8)CmpGetValueData(
                                      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                                      v27,
                                      v5,
                                      (unsigned int)&Size,
                                      (__int64)&Src,
                                      (__int64)&pcbInfoBuffer,
                                      (__int64)&P) )
              {
                v28 = (unsigned int)Size;
                v29 = Src;
                v30 = &v26[v6];
                *((_QWORD *)v4 + 9) = v30;
                memmove(v30, v29, v28);
                if ( (_BYTE)pcbInfoBuffer == 1 )
                  ExFreePoolWithTag(Src, 0);
                else
                  (*(void (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 16LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
                    &P);
                goto LABEL_35;
              }
              goto LABEL_77;
            }
            v4[17] = 0;
            *((_QWORD *)v4 + 9) = 0LL;
LABEL_35:
            *v4 = HvBufferCheckSum(v4, (unsigned int)v4[1]);
            v31 = ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL));
            v32 = *(_QWORD *)v49;
            v33 = CmpTransWriteLog(v49[0], (int)v4, v4[1], v31 != 0 ? 2 : 0, &plsnFinish);
            if ( v33 >= 0 && ClfsLsnInvalid((const CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL)) )
              *(CLFS_LSN *)(*(_QWORD *)(a1 + 56) + 104LL) = plsnFinish;
            pcbInfoBuffer = 120;
            v34 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
            v35 = v34;
            if ( v34 )
            {
              ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(v32 + 88), v34, &pcbInfoBuffer);
              ExFreePoolWithTag(v35, 0);
            }
            goto LABEL_40;
          }
          if ( v23 != 9 )
          {
            switch ( v23 )
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
                v43 = v47;
                v44 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
                *((_QWORD *)v4 + 7) = v44;
                if ( (*(_BYTE *)(v43 + 2) & 0x20) != 0 )
                  CmpCopyCompressedName(v44, v8, v43 + 76, *(unsigned __int16 *)(v43 + 72));
                else
                  memmove(v44, (const void *)(v43 + 76), v8);
                *((_WORD *)v4 + 25) = v8;
                *((_WORD *)v4 + 24) = v8;
                break;
            }
            goto LABEL_35;
          }
          PoolWithTag[3] = 8;
          *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 16;
          memmove(PoolWithTag + 16, v11[1], *(unsigned __int16 *)v11);
          v41 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
          v4[12] = v41;
          v40 = v41;
          v38 = (char *)v4 + *(unsigned __int16 *)v11 + 64;
          *((_QWORD *)v4 + 7) = v38;
          v39 = *(_QWORD *)(a1 + 88);
        }
        memmove(v38, (const void *)(v39 + 32), v40);
        goto LABEL_35;
      }
      v37 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 24LL);
    }
    v13 = 64;
    goto LABEL_49;
  }
  return 3221225626LL;
}
