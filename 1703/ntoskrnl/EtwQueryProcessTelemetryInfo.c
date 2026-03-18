/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x14043D4E8
 * Callers:
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140021FE0 (PsGetProcessSessionId.c)
 *     PsGetProcessStartKey @ 0x1400853A0 (PsGetProcessStartKey.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmGetSessionCreateTime @ 0x14043D8B0 (MmGetSessionCreateTime.c)
 *     PsAcquireProcessExitSynchronization @ 0x14043D8F0 (PsAcquireProcessExitSynchronization.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404ED4D0 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1404ED594 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x1404ED5D4 (EtwpQueryProcessCommandLine.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(
        __int64 BugCheckParameter1,
        char *a2,
        SIZE_T Length,
        char a4,
        unsigned int *a5)
{
  SIZE_T v5; // r13
  void *v8; // r15
  int v9; // ebx
  PACCESS_TOKEN v10; // r12
  int UserSidToken; // edi
  unsigned int v12; // edi
  size_t v13; // r8
  __int64 v14; // rbx
  char *v15; // rdi
  unsigned __int16 *v16; // rbx
  char *v17; // rbx
  char *v18; // rbx
  char *v19; // rbx
  unsigned int Size; // [rsp+24h] [rbp-2B4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2B0h]
  __int64 v24; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-2A0h] BYREF
  void *v26; // [rsp+40h] [rbp-298h]
  const void **v27; // [rsp+48h] [rbp-290h]
  unsigned int *v28; // [rsp+50h] [rbp-288h]
  PACCESS_TOKEN v29; // [rsp+58h] [rbp-280h]
  __int64 v30; // [rsp+60h] [rbp-278h]
  size_t v31; // [rsp+70h] [rbp-268h] BYREF
  size_t v32; // [rsp+78h] [rbp-260h]
  char v33[256]; // [rsp+80h] [rbp-258h] BYREF
  char v34[144]; // [rsp+180h] [rbp-158h] BYREF
  $5BC46E0569261879018906DEC3127961 v35; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v30 = BugCheckParameter1;
  v28 = a5;
  v25 = 0LL;
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0;
  v24 = 0LL;
  v27 = *(const void ***)(BugCheckParameter1 + 1128);
  v10 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v29 = v10;
  Size = 0;
  EtwpQueryTokenPackageInfo(v10, &v31, &Size);
  UserSidToken = SeQueryUserSidToken(v10, Src, 68LL);
  if ( UserSidToken >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v35);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, &v24);
      EtwpQueryProcessCommandLine(BugCheckParameter1, &v25);
      KiUnstackDetachProcess(&v35, 0LL);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
      v8 = v26;
      v9 = v24;
    }
    v12 = v31 + v32 + *(unsigned __int16 *)v27 + (unsigned __int16)v25 + Size + 100;
    *v28 = v12;
    if ( a4 )
      ProbeForWrite(a2, v5, 4u);
    v13 = (unsigned int)v5;
    if ( v12 < (unsigned int)v5 )
      v13 = v12;
    memset(a2, 0, v13);
    if ( (unsigned int)v5 < 0x60 )
    {
      UserSidToken = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      *(_DWORD *)a2 = 96;
      *((_DWORD *)a2 + 1) = *(_DWORD *)(BugCheckParameter1 + 736);
      *((_QWORD *)a2 + 1) = PsGetProcessStartKey(BugCheckParameter1);
      *((_QWORD *)a2 + 2) = *(_QWORD *)(BugCheckParameter1 + 776);
      *((_QWORD *)a2 + 3) = *(_QWORD *)(BugCheckParameter1 + 1856);
      *((_QWORD *)a2 + 4) = *(_QWORD *)(BugCheckParameter1 + 1864);
      *((_QWORD *)a2 + 5) = *(_QWORD *)(BugCheckParameter1 + 1848);
      *((_QWORD *)a2 + 6) = MmGetSessionCreateTime();
      *((_DWORD *)a2 + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)a2 + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)a2 + 16) = v9;
      *((_DWORD *)a2 + 17) = HIDWORD(v24);
      if ( (unsigned int)v5 >= v12 )
      {
        *((_DWORD *)a2 + 18) = 96;
        v14 = Size;
        memmove(a2 + 96, Src, Size);
        v15 = &a2[v14 + 96];
        *((_DWORD *)a2 + 19) = v14 + 96;
        v16 = (unsigned __int16 *)v27;
        memmove(v15, v27[1], *(unsigned __int16 *)v27);
        v17 = &v15[*v16 + 2];
        *((_DWORD *)a2 + 20) = (_DWORD)v17 - (_DWORD)a2;
        memmove(v17, v33, v31);
        v18 = &v17[v31];
        *((_DWORD *)a2 + 21) = (_DWORD)v18 - (_DWORD)a2;
        memmove(v18, v34, v32);
        v19 = &v18[v32];
        *((_DWORD *)a2 + 22) = (_DWORD)v19 - (_DWORD)a2;
        memmove(v19, v8, (unsigned __int16)v25);
        UserSidToken = 0;
      }
      else
      {
        UserSidToken = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v10 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 856), (unsigned __int64)v10);
  return (unsigned int)UserSidToken;
}
