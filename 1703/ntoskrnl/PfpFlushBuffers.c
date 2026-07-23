/*
 * XREFs of PfpFlushBuffers @ 0x140496650
 * Callers:
 *     PfTLoggingWorker @ 0x1405D7720 (PfTLoggingWorker.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x14005F1B8 (MmFreeAccessPfnBuffer.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1401894F0 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PfpReturnAccessBuffer @ 0x140226FA0 (PfpReturnAccessBuffer.c)
 *     PfpFlushEventBuffers @ 0x1404962F0 (PfpFlushEventBuffers.c)
 *     PfpCopyEvent @ 0x140496400 (PfpCopyEvent.c)
 *     PfpLogPageAccess @ 0x140496930 (PfpLogPageAccess.c)
 *     PfTAcquireLogEntry @ 0x1406C4630 (PfTAcquireLogEntry.c)
 */

char PfpFlushBuffers()
{
  _SLIST_ENTRY *v0; // rbx
  char *v1; // rdi
  void *v2; // r15
  int v3; // r12d
  PSLIST_ENTRY v4; // rax
  _SLIST_ENTRY *v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 *v12; // r14
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rax
  _SLIST_ENTRY *v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 Src; // [rsp+48h] [rbp-70h] BYREF
  __int64 v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+58h] [rbp-60h]
  __int64 v23; // [rsp+60h] [rbp-58h] BYREF
  __int64 v24; // [rsp+68h] [rbp-50h]
  _QWORD v25[2]; // [rsp+70h] [rbp-48h] BYREF

  v0 = 0LL;
  v19[0] = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v19[1] = 1LL;
  v3 = PfpFlushEventBuffers();
  if ( v3 < 0 )
    return 0;
  v4 = RtlpInterlockedFlushSList(&ListHead);
  if ( !v4 )
    goto LABEL_16;
  do
  {
    v5 = v4;
    v4 = v4->Next;
    v5->Next = v0;
    v0 = v5;
  }
  while ( v4 );
  while ( 1 )
  {
    v6 = (__int64)v0;
    v0 = v0->Next;
    v22 = 0LL;
    v21 = 0LL;
    v7 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*(_QWORD *)(v6 + 24)) >> 24)
       + ((MEMORY[0xFFFFF78000000004] * HIDWORD(*(_QWORD *)(v6 + 24))) << 8);
    LODWORD(v22) = dword_14036DE5C
                 + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*(_QWORD *)(v6 + 16)) >> 24)
                   + ((MEMORY[0xFFFFF78000000004] * HIDWORD(*(_QWORD *)(v6 + 16))) << 8)) >> 10);
    HIDWORD(v22) = dword_14036DE5C + (v7 >> 10);
    LODWORD(v21) = v22;
    Src = 163851LL;
    PfpCopyEvent(&Src);
    if ( *(int *)(v6 + 8) > 1
      || (v24 = 0LL, v23 = 94215LL, LODWORD(v24) = *(_DWORD *)(v6 + 12), PfpCopyEvent(&v23), *(int *)(v6 + 8) > 1) )
    {
      v12 = *(unsigned __int64 **)(v6 + 32);
      if ( (unsigned __int64)v12 <= *(_QWORD *)(v6 + 40) )
      {
        while ( 1 )
        {
          v13 = *v12;
          v14 = PfTAcquireLogEntry(&unk_14036D918, &v18, 1LL);
          if ( !v14 )
            break;
          v15 = (unsigned __int64 *)(16LL * v18 + ((v14 + 31) & 0xFFFFFFFFFFFFFFF8uLL));
          v16 = *v15 & 0xFFFFFFFFFFFC6007uLL;
          v15[1] = v13;
          *v15 = v16 | 0x6007;
          ++v12;
          v3 = 0;
          if ( (unsigned __int64)v12 > *(_QWORD *)(v6 + 40) )
            goto LABEL_14;
        }
        v3 = -1073741670;
        *(_QWORD *)(v6 + 32) = v12;
      }
      goto LABEL_13;
    }
    v8 = *(_QWORD *)(v6 + 56);
    v9 = *(_QWORD *)(v6 + 48);
    if ( v8 == 1 )
    {
      LODWORD(v8) = *(_DWORD *)(v6 + 64) + 1;
    }
    else if ( v8 && (!*(_QWORD *)(v8 + 736) || !*(_QWORD *)(v8 + 776)) )
    {
      goto LABEL_15;
    }
    v2 = (void *)(v6 + 72);
    v1 = (char *)(v6 + 72);
    if ( (unsigned __int64)(v6 + 72) < *(_QWORD *)(v6 + 32) )
      break;
LABEL_13:
    if ( v3 < 0 )
      goto LABEL_26;
LABEL_14:
    v10 = *(_QWORD *)(v6 + 24);
    v25[0] = 147463LL;
    v25[1] = dword_14036DE5C
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v10) >> 24)
                           + ((MEMORY[0xFFFFF78000000004] * HIDWORD(v10)) << 8)) >> 10);
    PfpCopyEvent(v25);
LABEL_15:
    MmFreeAccessPfnBuffer(v6, 0);
    if ( !v0 )
      goto LABEL_16;
  }
  while ( PfpLogPageAccess(v8, (_DWORD)v1, (unsigned int)v19, v9, 0) )
  {
    v1 += 8;
    if ( (unsigned __int64)v1 >= *(_QWORD *)(v6 + 32) )
      goto LABEL_13;
  }
  v3 = -1073741432;
LABEL_26:
  if ( *(int *)(v6 + 8) <= 1 )
  {
    memmove(v2, v1, (*(_QWORD *)(v6 + 32) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v6 + 32) += -8 * ((v1 - (_BYTE *)v2) >> 3);
  }
  PfpReturnAccessBuffer((PSLIST_ENTRY)v6);
LABEL_16:
  if ( v3 >= 0 )
    return 1;
  while ( v0 )
  {
    v17 = v0;
    v0 = v0->Next;
    PfpReturnAccessBuffer(v17);
  }
  return 0;
}
