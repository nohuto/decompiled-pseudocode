/*
 * XREFs of SeAuditProcessCreation @ 0x1405A71B4
 * Callers:
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PsQueryProcessCommandLine @ 0x14012E460 (PsQueryProcessCommandLine.c)
 *     SepAdtLogAuditRecord @ 0x1401338F0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     PsLookupProcessByProcessId @ 0x140575060 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14057D374 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
 */

void __fastcall SeAuditProcessCreation(struct _KPROCESS *BugCheckParameter1, unsigned __int16 *a2)
{
  unsigned __int16 *p_DestinationString; // rsi
  unsigned int v3; // r13d
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  int AllocatedFullProcessImageName; // r14d
  PEPROCESS v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // ecx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  bool v15; // r8
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  char v19; // [rsp+30h] [rbp-D0h]
  unsigned int NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  PVOID v21; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *Flink; // [rsp+68h] [rbp-98h]
  struct _SINGLE_LIST_ENTRY *v27; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _QWORD Src[132]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  Process = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  p_DestinationString = 0LL;
  v21 = 0LL;
  v3 = 0;
  v24 = a2;
  v19 = 0;
  v23 = DestinationSid;
  if ( !BugCheckParameter1[1].ActiveProcessors.Bitmap[15] )
    return;
  Next = BugCheckParameter1[1].SwapListEntry.Next;
  Flink = BugCheckParameter1[1].Header.WaitListHead.Flink;
  v27 = Next;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                    (__int64)BugCheckParameter1,
                                    (__int64)&NumberOfBytes[1]);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( PsLookupProcessByProcessId(Next, &Process) < 0 )
    {
      v3 = 1845;
    }
    else
    {
      v7 = Process;
      if ( Process[1].ActiveProcessors.Bitmap[15] )
        PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&v21);
      else
        v3 = 1844;
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
    v8 = PsReferencePrimaryToken(BugCheckParameter1);
    v9 = v8;
    if ( v8 )
    {
      v10 = *(_DWORD *)(v8[27] + 32LL);
      if ( (v10 & 4) != 0 )
        v11 = 1938LL;
      else
        v11 = (v10 & 2 | 0xF20uLL) >> 1;
      v12 = *((unsigned int *)v8 + 52);
      v13 = v9[3];
      v25 = v13;
      if ( (unsigned int)v12 >= *((_DWORD *)v9 + 31) )
        v23 = SeNullSid;
      else
        AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(v9[19] + 16 * v12));
      ObfDereferenceObject(v9);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        if ( !SepRmAuditProcessCommandLine )
        {
LABEL_14:
          RtlInitUnicodeString(&DestinationString, &word_1405F52C0);
          p_DestinationString = (unsigned __int16 *)&DestinationString;
          goto LABEL_15;
        }
        if ( v24 )
        {
          p_DestinationString = v24;
        }
        else
        {
          AllocatedFullProcessImageName = PsQueryProcessCommandLine(
                                            (ULONG_PTR)BugCheckParameter1,
                                            0LL,
                                            0,
                                            0,
                                            NumberOfBytes);
          if ( AllocatedFullProcessImageName != -1073741820 )
            goto LABEL_14;
          p_DestinationString = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x4C436553u);
          if ( !p_DestinationString )
            goto LABEL_14;
          AllocatedFullProcessImageName = PsQueryProcessCommandLine(
                                            (ULONG_PTR)BugCheckParameter1,
                                            (__int64)p_DestinationString,
                                            NumberOfBytes[0],
                                            0,
                                            NumberOfBytes);
          if ( AllocatedFullProcessImageName < 0 )
          {
            ExFreePoolWithTag(p_DestinationString, 0);
            goto LABEL_14;
          }
          v19 = 1;
        }
LABEL_15:
        SeCaptureSubjectContext(&SubjectContext);
        memset(Src, 0, 0x418uLL);
        Src[0] = 0x125000000005LL;
        LODWORD(Src[2]) = 524421;
        v14 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
        v15 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(HIDWORD(v25), v13);
        v16 = *(unsigned __int8 *)(v14 + 1);
        Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
        Src[16] = Flink;
        Src[6] = v14;
        HIDWORD(Src[3]) = 4 * v16 + 8;
        LODWORD(Src[3]) = 4;
        Src[10] = &SeSubsystemName;
        Src[22] = *(_QWORD *)&NumberOfBytes[1];
        Src[7] = 0x2000000001LL;
        v17 = (unsigned __int16)**(_WORD **)&NumberOfBytes[1] + 16;
        Src[11] = 0x800000005LL;
        HIDWORD(Src[19]) = v17;
        Src[28] = v27;
        v18 = *p_DestinationString + 16;
        Src[15] = 0x80000000BLL;
        LODWORD(Src[19]) = 2;
        Src[23] = 0x400000015LL;
        Src[24] = v11;
        Src[27] = 0x80000000BLL;
        LODWORD(Src[31]) = 34;
        HIDWORD(Src[31]) = v18;
        Src[34] = p_DestinationString;
        if ( v15 )
        {
          Src[35] = 0x800000023LL;
          Src[36] = v13;
        }
        else
        {
          LODWORD(Src[35]) = 6;
        }
        if ( v3 )
        {
          Src[40] = v3;
          Src[39] = 0x400000015LL;
        }
        else
        {
          LODWORD(Src[39]) = 2;
          Src[42] = v21;
          HIDWORD(Src[39]) = *(unsigned __int16 *)v21 + 16;
        }
        Src[46] = v23;
        LODWORD(Src[43]) = 4;
        LODWORD(Src[1]) = 11;
        HIDWORD(Src[43]) = 4 * (unsigned __int8)v23[1] + 8;
        SepAdtLogAuditRecord(Src);
        SeReleaseSubjectContext(&SubjectContext);
        if ( AllocatedFullProcessImageName >= 0 )
          goto LABEL_20;
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
  }
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_20:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ExFreePoolWithTag(*(PVOID *)&NumberOfBytes[1], 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v19 )
  {
    if ( p_DestinationString )
      ExFreePoolWithTag(p_DestinationString, 0);
  }
}
