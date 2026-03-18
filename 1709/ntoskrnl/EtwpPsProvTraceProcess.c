/*
 * XREFs of EtwpPsProvTraceProcess @ 0x1404DCB5C
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1404DBBF8 (EtwpWriteProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14074E870 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     PsQueryStatisticsProcess @ 0x1404AD730 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x14050523C (ObGetProcessHandleCount.c)
 */

int __fastcall EtwpPsProvTraceProcess(PEPROCESS Process, __int64 a2, unsigned int *a3, __int64 a4, __int16 a5)
{
  _UNKNOWN **v5; // rax
  const EVENT_DESCRIPTOR *v9; // r15
  ULONG v10; // edi
  char v11; // r8
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING *v13; // rax
  unsigned int Length; // ecx
  unsigned int v15; // eax
  PACCESS_TOKEN v16; // r14
  NTSTATUS v17; // eax
  PVOID v18; // rdi
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ecx
  $60201AF00380910E80576F6AC5720300 *p_SecureState; // rax
  unsigned __int64 *v24; // rbx
  __int64 v25; // rax
  int v27; // [rsp+38h] [rbp-D0h] BYREF
  int v28; // [rsp+3Ch] [rbp-CCh] BYREF
  int Flink; // [rsp+40h] [rbp-C8h] BYREF
  int ProcessHandleCount; // [rsp+44h] [rbp-C4h] BYREF
  int v31; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  int v33; // [rsp+50h] [rbp-B8h] BYREF
  int v34; // [rsp+54h] [rbp-B4h] BYREF
  int Next; // [rsp+58h] [rbp-B0h] BYREF
  int SessionId; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  PVOID TokenInformation; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42[3]; // [rsp+98h] [rbp-70h] BYREF
  char v43; // [rsp+B0h] [rbp-58h] BYREF
  int v44; // [rsp+C0h] [rbp-48h]
  int v45; // [rsp+C4h] [rbp-44h]
  int v46; // [rsp+C8h] [rbp-40h]
  int v47; // [rsp+CCh] [rbp-3Ch]
  __int64 v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  _LIST_ENTRY *p_ThreadListHead; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  unsigned __int64 *p_Next; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  char *p_SessionId; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  int *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  wchar_t *p_ProcessHandleCount; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  __int64 *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  __int64 *v63; // [rsp+168h] [rbp+60h]
  __int64 v64; // [rsp+170h] [rbp+68h]
  char *v65; // [rsp+178h] [rbp+70h]
  __int64 v66; // [rsp+180h] [rbp+78h]
  int *v67; // [rsp+188h] [rbp+80h]
  __int64 v68; // [rsp+190h] [rbp+88h]
  int *v69; // [rsp+198h] [rbp+90h]
  __int64 v70; // [rsp+1A0h] [rbp+98h]
  int *v71; // [rsp+1A8h] [rbp+A0h]
  __int64 v72; // [rsp+1B0h] [rbp+A8h]
  int *v73; // [rsp+1B8h] [rbp+B0h]
  __int64 v74; // [rsp+1C0h] [rbp+B8h]
  $60201AF00380910E80576F6AC5720300 *v75; // [rsp+1C8h] [rbp+C0h]
  __int64 v76; // [rsp+1D0h] [rbp+C8h]
  unsigned __int64 *v77; // [rsp+1D8h] [rbp+D0h]
  int v78; // [rsp+1E0h] [rbp+D8h]
  int v79; // [rsp+1E4h] [rbp+DCh]
  wchar_t pszDest[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  _UNKNOWN *retaddr; // [rsp+240h] [rbp+138h] BYREF

  v5 = &retaddr;
  v27 = 0;
  switch ( a5 )
  {
    case 769:
      v9 = &ProcessStart;
      break;
    case 770:
      v9 = (const EVENT_DESCRIPTOR *)&ProcessStop;
      break;
    case 771:
      v9 = (const EVENT_DESCRIPTOR *)&ProcessRundown;
      break;
    default:
      return (int)v5;
  }
  Flink = (int)Process[1].Header.WaitListHead.Flink;
  v10 = 2;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&Flink;
  p_ThreadListHead = &Process[1].ThreadListHead;
  v52 = 8LL;
  if ( ((a5 - 769) & 0xFFFD) != 0 )
  {
    if ( a5 == 770 )
    {
      TokenInformation = 0LL;
      PsQueryStatisticsProcess((__int64)Process, v42);
      v54 = 8LL;
      p_Next = &Process[2].Affinity.Bitmap[17];
      v56 = 4LL;
      p_SessionId = (char *)&Process[2].Affinity.Bitmap[3] + 4;
      v16 = PsReferencePrimaryToken(Process);
      v17 = SeQueryInformationToken(v16, TokenElevationType, &TokenInformation);
      v18 = TokenInformation;
      if ( v17 >= 0 )
      {
        if ( *(_DWORD *)TokenInformation == 1 )
        {
          P = 0LL;
          if ( SeQueryInformationToken(v16, TokenElevation, &P) >= 0 )
            v27 = *(_DWORD *)P != 0 ? 1 : 4;
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
          v27 = *(_DWORD *)TokenInformation;
        }
      }
      ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v16);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      v58 = 4LL;
      v57 = &v27;
      ProcessHandleCount = ObGetProcessHandleCount(Process, 0LL);
      v60 = 4LL;
      p_ProcessHandleCount = (wchar_t *)&ProcessHandleCount;
      v37 = *(_QWORD *)&Process[1].IdealNode[4];
      v37 <<= 12;
      v61 = &v37;
      v38 = *(_QWORD *)&Process[1].IdealNode[8];
      v38 <<= 12;
      v63 = &v38;
      v65 = &v43;
      v19 = v44;
      if ( v45 )
        v19 = -1;
      v62 = 8LL;
      v31 = v19;
      v67 = &v31;
      v20 = v46;
      if ( v47 )
        v20 = -1;
      v64 = 8LL;
      v32 = v20;
      v21 = v48 >> 10;
      v69 = &v32;
      v48 = v21;
      v66 = 8LL;
      if ( HIDWORD(v21) )
        LODWORD(v21) = -1;
      v71 = &v33;
      v33 = v21;
      v49 >>= 10;
      v22 = v49;
      v68 = 4LL;
      v70 = 4LL;
      if ( HIDWORD(v49) )
        v22 = -1;
      v73 = &v34;
      p_SecureState = &Process[1].SecureState;
      v72 = 4LL;
      v24 = &Process[1].ActiveProcessors.Bitmap[12];
      v75 = p_SecureState;
      v77 = v24;
      v25 = -1LL;
      v34 = v22;
      v74 = 4LL;
      v76 = 4LL;
      do
        ++v25;
      while ( *((_BYTE *)v24 + v25) );
      v79 = 0;
      v78 = v25 + 1;
      v10 = 15;
    }
  }
  else
  {
    Next = (int)Process[1].SwapListEntry.Next;
    p_Next = (unsigned __int64 *)&Next;
    v54 = 4LL;
    SessionId = MmGetSessionId((__int64)Process);
    v56 = 4LL;
    p_SessionId = (char *)&SessionId;
    v28 = (v11 & 1) != 0;
    if ( (v11 & 8) != 0 )
      v28 = ((v11 & 1) != 0) | 2;
    p_DestinationString = (UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[15];
    v57 = &v28;
    v58 = 4LL;
    if ( !p_DestinationString || !p_DestinationString->Length )
    {
      RtlStringCchPrintfW(pszDest, 0xFuLL, L"%S", &Process[1].ActiveProcessors.Bitmap[12]);
      RtlInitUnicodeString(&DestinationString, pszDest);
      p_DestinationString = &DestinationString;
    }
    v13 = (UNICODE_STRING *)&EmptyUnicodeString;
    if ( p_DestinationString )
      v13 = p_DestinationString;
    Length = v13->Length;
    p_ProcessHandleCount = v13->Buffer;
    v61 = (__int64 *)&EtwpNull;
    v65 = (char *)(a4 + 4);
    v67 = (int *)(a3 + 4);
    v68 = *a3;
    v69 = (int *)(a3 + 68);
    v15 = a3[2];
    v62 = 2LL;
    v10 = 11;
    v70 = v15;
    v60 = Length;
    v63 = (__int64 *)a4;
    v64 = 4LL;
    v66 = 4LL;
  }
  LODWORD(v5) = EtwWrite(EtwpPsProvRegHandle, v9, 0LL, v10, &UserData);
  return (int)v5;
}
