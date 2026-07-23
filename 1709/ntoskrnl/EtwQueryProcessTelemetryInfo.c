/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x140573710
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     PsGetProcessStartKey @ 0x1400AE9D0 (PsGetProcessStartKey.c)
 *     PsGetProcessSessionId @ 0x1400AE9F0 (PsGetProcessSessionId.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     EtwpQueryProcessCommandLine @ 0x1404DC09C (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1404DC228 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404DCA98 (EtwpQueryTokenPackageInfo.c)
 *     SeQueryUserSidToken @ 0x1405034B0 (SeQueryUserSidToken.c)
 *     MmGetSessionCreateTime @ 0x140573A2C (MmGetSessionCreateTime.c)
 *     PsAcquireProcessExitSynchronization @ 0x140573A60 (PsAcquireProcessExitSynchronization.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(
        __int64 BugCheckParameter1,
        char *a2,
        size_t Size,
        char a4,
        unsigned int *a5)
{
  SIZE_T v5; // r12
  void *v8; // r15
  int v9; // ebx
  const void **v10; // rax
  const void **v11; // rcx
  PACCESS_TOKEN v12; // r13
  int v13; // edi
  unsigned int v14; // edi
  size_t v15; // r8
  __int64 v16; // rbx
  char *v17; // rdi
  unsigned __int16 *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  char *v21; // rbx
  ULONG Sizea; // [rsp+24h] [rbp-2B4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2B0h]
  __int64 v26; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-2A0h] BYREF
  void *v28; // [rsp+40h] [rbp-298h]
  const void **v29; // [rsp+48h] [rbp-290h]
  unsigned int *v30; // [rsp+50h] [rbp-288h]
  PACCESS_TOKEN v31; // [rsp+58h] [rbp-280h]
  __int64 v32; // [rsp+60h] [rbp-278h]
  size_t PackageSize; // [rsp+70h] [rbp-268h] BYREF
  size_t v34; // [rsp+78h] [rbp-260h]
  char v35[256]; // [rsp+80h] [rbp-258h] BYREF
  char v36[144]; // [rsp+180h] [rbp-158h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v37; // [rsp+210h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+240h] [rbp-98h] BYREF

  v5 = (unsigned int)Size;
  v32 = BugCheckParameter1;
  v30 = a5;
  v27 = 0LL;
  v8 = 0LL;
  v28 = 0LL;
  v9 = 0;
  v26 = 0LL;
  v10 = *(const void ***)(BugCheckParameter1 + 1128);
  v11 = (const void **)&EmptyUnicodeString;
  if ( v10 )
    v11 = v10;
  v29 = v11;
  v12 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
  v31 = v12;
  Sizea = 0;
  EtwpQueryTokenPackageInfo(v12, (WCHAR *)&PackageSize, &Sizea);
  v13 = SeQueryUserSidToken((__int64)v12, Src, 0x44u, &Sizea);
  if ( v13 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v37);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, (__int64)&v26);
      EtwpQueryProcessCommandLine(BugCheckParameter1, (__int64)&v27);
      KiUnstackDetachProcess(&v37, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
      v8 = v28;
      v9 = v26;
    }
    v14 = PackageSize + v34 + *(unsigned __int16 *)v29 + (unsigned __int16)v27 + Sizea + 100;
    *v30 = v14;
    if ( a4 )
      ProbeForWrite(a2, v5, 4u);
    v15 = v14;
    if ( v14 >= (unsigned int)v5 )
      v15 = (unsigned int)v5;
    memset(a2, 0, v15);
    if ( (unsigned int)v5 < 0x60 )
    {
      v13 = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      *(_DWORD *)a2 = 96;
      *((_DWORD *)a2 + 1) = *(_DWORD *)(BugCheckParameter1 + 736);
      *((_QWORD *)a2 + 1) = PsGetProcessStartKey(BugCheckParameter1);
      *((_QWORD *)a2 + 2) = *(_QWORD *)(BugCheckParameter1 + 776);
      *((_QWORD *)a2 + 3) = *(_QWORD *)(BugCheckParameter1 + 1880);
      *((_QWORD *)a2 + 4) = *(_QWORD *)(BugCheckParameter1 + 1888);
      *((_QWORD *)a2 + 5) = *(_QWORD *)(BugCheckParameter1 + 1872);
      *((_QWORD *)a2 + 6) = MmGetSessionCreateTime();
      *((_DWORD *)a2 + 14) = PsGetProcessSessionId(BugCheckParameter1);
      *((_DWORD *)a2 + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)a2 + 16) = v9;
      *((_DWORD *)a2 + 17) = HIDWORD(v26);
      if ( (unsigned int)v5 >= v14 )
      {
        *((_DWORD *)a2 + 18) = 96;
        v16 = Sizea;
        memmove(a2 + 96, Src, Sizea);
        v17 = &a2[v16 + 96];
        *((_DWORD *)a2 + 19) = v16 + 96;
        v18 = (unsigned __int16 *)v29;
        memmove(v17, v29[1], *(unsigned __int16 *)v29);
        v19 = &v17[*v18 + 2];
        *((_DWORD *)a2 + 20) = (_DWORD)v19 - (_DWORD)a2;
        memmove(v19, v35, PackageSize);
        v20 = &v19[PackageSize];
        *((_DWORD *)a2 + 21) = (_DWORD)v20 - (_DWORD)a2;
        memmove(v20, v36, v34);
        v21 = &v20[v34];
        *((_DWORD *)a2 + 22) = (_DWORD)v21 - (_DWORD)a2;
        memmove(v21, v8, (unsigned __int16)v27);
        v13 = 0;
      }
      else
      {
        v13 = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v12 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 856), (unsigned __int64)v12);
  return (unsigned int)v13;
}
