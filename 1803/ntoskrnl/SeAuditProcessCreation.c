/*
 * XREFs of SeAuditProcessCreation @ 0x1406414B8
 * Callers:
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 * Callees:
 *     PsQueryProcessCommandLine @ 0x1400CF920 (PsQueryProcessCommandLine.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     RtlCopySid @ 0x1404D4480 (RtlCopySid.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14050E924 (PsGetAllocatedFullProcessImageNameEx.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SepAuditFailed @ 0x140795050 (SepAuditFailed.c)
 */

void __fastcall SeAuditProcessCreation(struct _KPROCESS *BugCheckParameter1, unsigned __int16 *a2)
{
  char v2; // r14
  unsigned __int16 *PoolWithTag; // rdi
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  int AllocatedFullProcessImageName; // esi
  PEPROCESS v7; // rbx
  unsigned __int64 v8; // r14
  unsigned int v9; // r13d
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  int v12; // ecx
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  bool v17; // r8
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  unsigned int NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  PVOID v22; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v24; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *Flink; // [rsp+68h] [rbp-98h]
  struct _SINGLE_LIST_ENTRY *v28; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _QWORD Src[132]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  Process = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  v2 = 0;
  v22 = 0LL;
  PoolWithTag = 0LL;
  v25 = a2;
  v24 = DestinationSid;
  if ( !BugCheckParameter1[1].ActiveProcessors.Bitmap[15] )
    return;
  Next = BugCheckParameter1[1].SwapListEntry.Next;
  Flink = BugCheckParameter1[1].Header.WaitListHead.Flink;
  v28 = Next;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                    (__int64)BugCheckParameter1,
                                    (__int64)&NumberOfBytes[1]);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( PsLookupProcessByProcessId(Next, &Process) < 0 )
    {
      v9 = 1845;
    }
    else
    {
      v7 = Process;
      v8 = Process[1].ActiveProcessors.Bitmap[15];
      if ( v8 )
        PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&v22);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      v9 = 0;
      if ( !v8 )
        v9 = 1844;
    }
    v10 = PsReferencePrimaryToken(BugCheckParameter1);
    v11 = v10;
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10[27] + 32LL);
      if ( (v12 & 4) != 0 )
        v13 = 1938LL;
      else
        v13 = (v12 & 2 | 0xF20uLL) >> 1;
      v14 = *((unsigned int *)v10 + 52);
      v15 = v11[3];
      v26 = v15;
      if ( (unsigned int)v14 >= *((_DWORD *)v11 + 31) )
        v24 = SeNullSid;
      else
        AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(v11[19] + 16 * v14));
      ObfDereferenceObject(v11);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        if ( SepRmAuditProcessCommandLine )
        {
          if ( v25 )
          {
            PoolWithTag = v25;
            goto LABEL_16;
          }
          AllocatedFullProcessImageName = PsQueryProcessCommandLine(
                                            (ULONG_PTR)BugCheckParameter1,
                                            0LL,
                                            0,
                                            0,
                                            NumberOfBytes);
          if ( AllocatedFullProcessImageName == -1073741820 )
          {
            PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x4C436553u);
            if ( PoolWithTag )
            {
              AllocatedFullProcessImageName = PsQueryProcessCommandLine(
                                                (ULONG_PTR)BugCheckParameter1,
                                                (__int64)PoolWithTag,
                                                NumberOfBytes[0],
                                                0,
                                                NumberOfBytes);
              if ( AllocatedFullProcessImageName >= 0 )
              {
                v2 = 1;
LABEL_17:
                SeCaptureSubjectContext(&SubjectContext);
                memset(Src, 0, 0x418uLL);
                Src[0] = 0x125000000005LL;
                LODWORD(Src[2]) = 524421;
                v16 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
                v17 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(HIDWORD(v26), v15);
                v18 = *(unsigned __int8 *)(v16 + 1);
                Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
                Src[16] = Flink;
                Src[6] = v16;
                HIDWORD(Src[3]) = 4 * v18 + 8;
                LODWORD(Src[3]) = 4;
                Src[10] = &SeSubsystemName;
                Src[22] = *(_QWORD *)&NumberOfBytes[1];
                Src[7] = 0x2000000001LL;
                v19 = (unsigned __int16)**(_WORD **)&NumberOfBytes[1] + 16;
                Src[11] = 0x800000005LL;
                HIDWORD(Src[19]) = v19;
                Src[28] = v28;
                v20 = *PoolWithTag + 16;
                Src[15] = 0x80000000BLL;
                LODWORD(Src[19]) = 2;
                Src[23] = 0x400000015LL;
                Src[24] = v13;
                Src[27] = 0x80000000BLL;
                LODWORD(Src[31]) = 34;
                HIDWORD(Src[31]) = v20;
                Src[34] = PoolWithTag;
                if ( v17 )
                {
                  Src[35] = 0x800000023LL;
                  Src[36] = v15;
                }
                else
                {
                  LODWORD(Src[35]) = 6;
                }
                if ( v9 )
                {
                  Src[40] = v9;
                  Src[39] = 0x400000015LL;
                }
                else
                {
                  LODWORD(Src[39]) = 2;
                  Src[42] = v22;
                  HIDWORD(Src[39]) = *(unsigned __int16 *)v22 + 16;
                }
                Src[46] = v24;
                LODWORD(Src[43]) = 4;
                LODWORD(Src[1]) = 11;
                HIDWORD(Src[43]) = 4 * (unsigned __int8)v24[1] + 8;
                SepAdtLogAuditRecord(Src);
                SeReleaseSubjectContext(&SubjectContext);
                if ( AllocatedFullProcessImageName >= 0 )
                  goto LABEL_22;
                goto LABEL_28;
              }
              ExFreePoolWithTag(PoolWithTag, 0);
            }
          }
        }
        RtlInitUnicodeString(&DestinationString, &word_140657F20);
        PoolWithTag = (unsigned __int16 *)&DestinationString;
LABEL_16:
        v2 = 0;
        goto LABEL_17;
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
    v2 = 0;
  }
LABEL_28:
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_22:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ExFreePoolWithTag(*(PVOID *)&NumberOfBytes[1], 0);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v2 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
