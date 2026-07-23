/*
 * XREFs of PfpFlushBuffers @ 0x140455670
 * Callers:
 *     PfTLoggingWorker @ 0x140687320 (PfTLoggingWorker.c)
 * Callees:
 *     PfpReturnAccessBuffer @ 0x1400107F0 (PfpReturnAccessBuffer.c)
 *     MmFreeAccessPfnBuffer @ 0x140011CE0 (MmFreeAccessPfnBuffer.c)
 *     PfpIsProcessInfoPresent @ 0x140011D20 (PfpIsProcessInfoPresent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     PfpFlushEventBuffers @ 0x140455360 (PfpFlushEventBuffers.c)
 *     PfpCopyEvent @ 0x140455440 (PfpCopyEvent.c)
 *     PfpLogPageAccess @ 0x140455990 (PfpLogPageAccess.c)
 *     PfTAcquireLogEntry @ 0x1406F3C10 (PfTAcquireLogEntry.c)
 */

char PfpFlushBuffers()
{
  _SLIST_ENTRY *v0; // rbx
  _SLIST_ENTRY *v1; // rdi
  void *v2; // r15
  int v3; // r12d
  PSLIST_ENTRY v4; // rax
  _SLIST_ENTRY *v5; // rcx
  _SLIST_ENTRY *v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rbp
  _SLIST_ENTRY *v9; // r14
  unsigned __int64 v10; // rax
  _SLIST_ENTRY *v12; // rcx
  _SLIST_ENTRY *Next; // r14
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // rax
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
    goto LABEL_15;
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
    v6 = v0;
    v0 = v0->Next;
    v22 = 0LL;
    v21 = 0LL;
    v7 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)*((_QWORD *)&v6[1].Next + 1)) >> 24)
       + ((MEMORY[0xFFFFF78000000004] * HIDWORD(*((_QWORD *)&v6[1].Next + 1))) << 8);
    LODWORD(v22) = dword_14038D2BC
                 + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v6[1].Next) >> 24)
                   + ((MEMORY[0xFFFFF78000000004] * ((unsigned __int64)v6[1].Next >> 32)) << 8)) >> 10);
    HIDWORD(v22) = dword_14038D2BC + (v7 >> 10);
    LODWORD(v21) = v22;
    Src = 163851LL;
    PfpCopyEvent(&Src);
    if ( *((int *)&v6->Next + 2) > 1
      || (v24 = 0LL,
          v23 = 94215LL,
          LODWORD(v24) = *((_DWORD *)&v6->Next + 3),
          PfpCopyEvent(&v23),
          *((int *)&v6->Next + 2) > 1) )
    {
      Next = v6[2].Next;
      if ( (unsigned __int64)Next <= *((_QWORD *)&v6[2].Next + 1) )
      {
        while ( 1 )
        {
          v14 = (unsigned __int64)Next->Next;
          v15 = PfTAcquireLogEntry(&unk_140387898, &v18, 1LL);
          if ( !v15 )
            break;
          v16 = (unsigned __int64 *)(16LL * v18 + ((v15 + 31) & 0xFFFFFFFFFFFFFFF8uLL));
          v17 = *v16 & 0xFFFFFFFFFFFC6007uLL;
          v16[1] = v14;
          *v16 = v17 | 0x6007;
          Next = (_SLIST_ENTRY *)((char *)Next + 8);
          v3 = 0;
          if ( (unsigned __int64)Next > *((_QWORD *)&v6[2].Next + 1) )
            goto LABEL_13;
        }
        v3 = -1073741670;
        v6[2].Next = Next;
      }
      goto LABEL_12;
    }
    v8 = *((_QWORD *)&v6[3].Next + 1);
    v9 = v6[3].Next;
    if ( v8 == 1 )
    {
      LODWORD(v8) = LODWORD(v6[4].Next) + 1;
    }
    else if ( v8 && !PfpIsProcessInfoPresent(*((_QWORD *)&v6[3].Next + 1)) )
    {
      goto LABEL_14;
    }
    v2 = &v6[4].Next + 1;
    v1 = (_SLIST_ENTRY *)((char *)v6 + 72);
    if ( (_SLIST_ENTRY *)(&v6[4].Next + 1) < v6[2].Next )
      break;
LABEL_12:
    if ( v3 < 0 )
      goto LABEL_22;
LABEL_13:
    v10 = *((_QWORD *)&v6[1].Next + 1);
    v25[0] = 147463LL;
    v25[1] = dword_14038D2BC
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)v10) >> 24)
                           + ((MEMORY[0xFFFFF78000000004] * HIDWORD(v10)) << 8)) >> 10);
    PfpCopyEvent(v25);
LABEL_14:
    MmFreeAccessPfnBuffer(v6, 0);
    if ( !v0 )
      goto LABEL_15;
  }
  while ( PfpLogPageAccess(v8, (_DWORD)v1, (unsigned int)v19, (_DWORD)v9, 0) )
  {
    v1 = (_SLIST_ENTRY *)((char *)v1 + 8);
    if ( v1 >= v6[2].Next )
      goto LABEL_12;
  }
  v3 = -1073741432;
LABEL_22:
  if ( *((int *)&v6->Next + 2) <= 1 )
  {
    memmove(v2, v1, ((char *)v6[2].Next - (char *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    v6[2].Next = (_SLIST_ENTRY *)((char *)v6[2].Next - 8 * (((char *)v1 - (_BYTE *)v2) >> 3));
  }
  PfpReturnAccessBuffer(v6);
LABEL_15:
  if ( v3 >= 0 )
    return 1;
  while ( v0 )
  {
    v12 = v0;
    v0 = v0->Next;
    PfpReturnAccessBuffer(v12);
  }
  return 0;
}
