/*
 * XREFs of SeAuditProcessCreation @ 0x1405AC188
 * Callers:
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 * Callees:
 *     PsQueryProcessCommandLine @ 0x140039BE0 (PsQueryProcessCommandLine.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x140156510 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCopySid @ 0x1404F1BD0 (RtlCopySid.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14056432C (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1406F9D10 (SepAuditFailed.c)
 */

void __fastcall SeAuditProcessCreation(PEPROCESS Process, unsigned __int16 *a2)
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
  PEPROCESS Processa; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *Flink; // [rsp+68h] [rbp-98h]
  struct _SINGLE_LIST_ENTRY *v27; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _QWORD Src[132]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  Processa = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  p_DestinationString = 0LL;
  v21 = 0LL;
  v3 = 0;
  v24 = a2;
  v19 = 0;
  v23 = DestinationSid;
  if ( !Process[1].ActiveProcessors.Bitmap[15] )
    return;
  Next = Process[1].SwapListEntry.Next;
  Flink = Process[1].Header.WaitListHead.Flink;
  v27 = Next;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&NumberOfBytes[1]);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( PsLookupProcessByProcessId(Next, &Processa) < 0 )
    {
      v3 = 1845;
    }
    else
    {
      v7 = Processa;
      if ( Processa[1].ActiveProcessors.Bitmap[15] )
        PsGetAllocatedFullProcessImageNameEx((__int64)Processa, (__int64)&v21);
      else
        v3 = 1844;
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
    v8 = PsReferencePrimaryToken(Process);
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
          RtlInitUnicodeString(&DestinationString, (PCWSTR)&cchOriginalDestLength);
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
                                            (struct _EX_RUNDOWN_REF *)Process,
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
                                            (struct _EX_RUNDOWN_REF *)Process,
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
