/*
 * XREFs of PfpFlushBuffers @ 0x140529600
 * Callers:
 *     PfTLoggingWorker @ 0x14062C1C0 (PfTLoggingWorker.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x14007AB38 (MmFreeAccessPfnBuffer.c)
 *     PfpIsProcessInfoPresent @ 0x14007AB78 (PfpIsProcessInfoPresent.c)
 *     PfpReturnAccessBuffer @ 0x14007ACB8 (PfpReturnAccessBuffer.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     PfpFlushEventBuffers @ 0x1405292B0 (PfpFlushEventBuffers.c)
 *     PfpCopyEvent @ 0x1405293C0 (PfpCopyEvent.c)
 *     PfpLogPageAccess @ 0x140529920 (PfpLogPageAccess.c)
 *     PfTAcquireLogEntry @ 0x14075C500 (PfTAcquireLogEntry.c)
 */

char PfpFlushBuffers()
{
  _SLIST_ENTRY *v0; // rbx
  _SLIST_ENTRY *v1; // rdi
  void *v2; // r12
  int v3; // r14d
  PSLIST_ENTRY v4; // rax
  _SLIST_ENTRY *v5; // rcx
  _SLIST_ENTRY *v6; // r15
  _SLIST_ENTRY *v7; // rsi
  _SLIST_ENTRY *v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r10
  __int64 v11; // rbp
  _SLIST_ENTRY *v12; // r14
  unsigned __int64 v13; // rcx
  _SLIST_ENTRY *v15; // rcx
  _SLIST_ENTRY *Next; // r14
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-88h]
  unsigned int v22; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v24; // [rsp+48h] [rbp-70h] BYREF
  __int64 v25; // [rsp+50h] [rbp-68h]
  _QWORD v26[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 Src; // [rsp+68h] [rbp-50h] BYREF
  __int64 v28; // [rsp+70h] [rbp-48h]
  __int64 v29; // [rsp+78h] [rbp-40h]

  v0 = 0LL;
  v1 = 0LL;
  v23[1] = 1LL;
  v2 = 0LL;
  v23[0] = 0LL;
  v21 = PfpFlushEventBuffers();
  v3 = v21;
  if ( v21 < 0 )
    return 0;
  v4 = RtlpInterlockedFlushSList(&stru_1403E27C0);
  if ( !v4 )
    goto LABEL_20;
  do
  {
    v5 = v4;
    v6 = v0;
    v4 = v4->Next;
    v5->Next = v0;
    v0 = v5;
  }
  while ( v4 );
  while ( 1 )
  {
    v7 = v0;
    v29 = 0LL;
    v28 = 0LL;
    v8 = v0;
    v0 = v6;
    v9 = *((_QWORD *)&v7[1].Next + 1);
    v10 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v7[1].Next) >> 24)
        + ((MEMORY[0xFFFFF78000000004] * ((unsigned __int64)v7[1].Next >> 32)) << 8);
    Src = 163851LL;
    LODWORD(v29) = dword_1403CD6DC + (v10 >> 10);
    HIDWORD(v29) = dword_1403CD6DC
                 + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v9) >> 24)
                   + ((MEMORY[0xFFFFF78000000004] * HIDWORD(v9)) << 8)) >> 10);
    v28 = (unsigned int)v29;
    PfpCopyEvent(&Src);
    if ( *((int *)&v7->Next + 2) > 1
      || (v24 = 94215LL,
          v25 = 0LL,
          LODWORD(v25) = *((_DWORD *)&v7->Next + 3),
          PfpCopyEvent(&v24),
          *((int *)&v7->Next + 2) > 1) )
    {
      Next = v7[2].Next;
      if ( (unsigned __int64)Next <= *((_QWORD *)&v7[2].Next + 1) )
      {
        while ( 1 )
        {
          v17 = (unsigned __int64)Next->Next;
          v18 = PfTAcquireLogEntry(&unk_1403CD198, &v22, 1LL);
          if ( !v18 )
            break;
          v19 = (unsigned __int64 *)(16LL * v22 + ((v18 + 31) & 0xFFFFFFFFFFFFFFF8uLL));
          v20 = *v19 & 0xFFFFFFFFFFFC6007uLL;
          v19[1] = v17;
          *v19 = v20 | 0x6007;
          Next = (_SLIST_ENTRY *)((char *)Next + 8);
          v21 = 0;
          if ( (unsigned __int64)Next > *((_QWORD *)&v7[2].Next + 1) )
          {
            v3 = 0;
            goto LABEL_13;
          }
        }
        v7[2].Next = Next;
        v21 = -1073741670;
      }
      goto LABEL_12;
    }
    v11 = *((_QWORD *)&v7[3].Next + 1);
    v12 = v7[3].Next;
    if ( v11 == 1 )
    {
      LODWORD(v11) = LODWORD(v7[4].Next) + 1;
    }
    else if ( v11 && !PfpIsProcessInfoPresent(*((_QWORD *)&v7[3].Next + 1)) )
    {
      v3 = v21;
      goto LABEL_14;
    }
    v2 = &v7[4].Next + 1;
    v1 = (_SLIST_ENTRY *)((char *)v7 + 72);
    if ( (_SLIST_ENTRY *)(&v7[4].Next + 1) < v7[2].Next )
      break;
LABEL_12:
    v3 = v21;
    if ( v21 < 0 )
      goto LABEL_17;
LABEL_13:
    v13 = *((_QWORD *)&v7[1].Next + 1);
    v26[0] = 147463LL;
    v26[1] = dword_1403CD6DC
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v13) >> 24)
                           + ((MEMORY[0xFFFFF78000000004] * HIDWORD(v13)) << 8)) >> 10);
    PfpCopyEvent(v26);
LABEL_14:
    MmFreeAccessPfnBuffer(v8, 0);
    if ( !v6 )
      goto LABEL_20;
    v6 = v6->Next;
  }
  while ( PfpLogPageAccess(v11, (_DWORD)v1, (unsigned int)v23, (_DWORD)v12, 0) )
  {
    v1 = (_SLIST_ENTRY *)((char *)v1 + 8);
    if ( v1 >= v7[2].Next )
      goto LABEL_12;
  }
  v3 = -1073741432;
LABEL_17:
  if ( *((int *)&v7->Next + 2) <= 1 )
  {
    memmove(v2, v1, ((char *)v7[2].Next - (char *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    v7[2].Next = (_SLIST_ENTRY *)((char *)v7[2].Next - 8 * (((char *)v1 - (_BYTE *)v2) >> 3));
  }
  PfpReturnAccessBuffer(v7);
LABEL_20:
  if ( v3 >= 0 )
    return 1;
  while ( v0 )
  {
    v15 = v0;
    v0 = v0->Next;
    PfpReturnAccessBuffer(v15);
  }
  return 0;
}
