/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00843DC
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0024700 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00846C8 (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C008495C (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _wcsupr @ 0x1C00A7998 (_wcsupr.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(PRKPROCESS *a1, struct _CIT_PROGRAM_ID *a2)
{
  char v3; // r13
  wchar_t *v4; // rsi
  void *v5; // r14
  PACCESS_TOKEN v6; // r12
  const char *v7; // rdx
  __int64 v8; // rcx
  void *ProcessSectionBaseAddress; // rdi
  __int64 v10; // r8
  NTSTATUS v11; // eax
  int v12; // edi
  PIMAGE_NT_HEADERS v13; // rax
  DWORD TimeDateStamp; // edi
  DWORD CheckSum; // eax
  struct _CIT_PROGRAM_ID *v16; // rcx
  unsigned __int64 v17; // rax
  int v19; // eax
  const char *v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // r8d
  int v23; // ecx
  char v24; // [rsp+30h] [rbp-228h]
  wchar_t *String; // [rsp+38h] [rbp-220h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-218h] BYREF
  void *v27; // [rsp+48h] [rbp-210h]
  size_t Size; // [rsp+50h] [rbp-208h] BYREF
  size_t v29; // [rsp+58h] [rbp-200h] BYREF
  struct _CIT_PROGRAM_ID *v30; // [rsp+60h] [rbp-1F8h]
  __int64 v31; // [rsp+68h] [rbp-1F0h]
  PACCESS_TOKEN v32; // [rsp+70h] [rbp-1E8h]
  DWORD v33; // [rsp+78h] [rbp-1E0h]
  DWORD v34; // [rsp+7Ch] [rbp-1DCh]
  _BYTE v35[144]; // [rsp+90h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+120h] [rbp-138h] BYREF

  v30 = a2;
  v3 = 0;
  v24 = 0;
  pImageFileName = 0LL;
  v4 = 0LL;
  String = 0LL;
  v5 = 0LL;
  v31 = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*a1);
  v27 = ProcessSectionBaseAddress;
  if ( !ProcessSectionBaseAddress )
  {
    v12 = -1073741637;
    v22 = 2349;
    goto LABEL_30;
  }
  if ( a1 != (PRKPROCESS *)PsGetCurrentProcessWin32Process(v8, v7, v10) )
  {
    KeAttachProcess(*a1);
    v3 = 1;
    v24 = 1;
  }
  if ( ((_DWORD)a1[97] & 0x30) == 0x10 )
  {
    v6 = PsReferencePrimaryToken(*a1);
    v32 = v6;
    Size = 256LL;
    v29 = 130LL;
    v19 = RtlQueryPackageIdentity(v6, Src, &Size, v35, &v29, 0LL, v24);
    if ( v19 < 0 )
    {
      CitpLogFailureWorker(v19, v20, 0x962u);
      goto LABEL_5;
    }
    v4 = (wchar_t *)Win32AllocPool(Size, 0x49637355u);
    String = v4;
    v21 = Win32AllocPool(v29, 0x49637355u);
    v5 = (void *)v21;
    v31 = v21;
    if ( v4 && v21 )
    {
      memmove(v4, Src, Size);
      wcsupr(v4);
      memmove(v5, v35, v29);
      goto LABEL_5;
    }
    v12 = -1073741670;
    v22 = 2391;
LABEL_30:
    v23 = v12;
LABEL_32:
    CitpLogFailureWorker(v23, v7, v22);
    goto LABEL_13;
  }
LABEL_5:
  if ( v4 )
    goto LABEL_10;
  v11 = SeLocateProcessImageName(*a1, &pImageFileName);
  v12 = v11;
  if ( v11 < 0 )
  {
    pImageFileName = 0LL;
    v22 = 2415;
    v23 = v11;
    goto LABEL_32;
  }
  if ( !pImageFileName->Length )
  {
    v12 = -1073741637;
    goto LABEL_13;
  }
  v12 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  v4 = String;
  if ( v12 < 0 )
    goto LABEL_13;
  wcsupr(String);
  ProcessSectionBaseAddress = v27;
LABEL_10:
  v13 = RtlImageNtHeader(ProcessSectionBaseAddress);
  TimeDateStamp = v13->FileHeader.TimeDateStamp;
  v33 = TimeDateStamp;
  CheckSum = v13->OptionalHeader.CheckSum;
  LODWORD(v27) = CheckSum;
  v34 = CheckSum;
  if ( v5 )
  {
    wcsupr((wchar_t *)v5);
    CheckSum = (unsigned int)v27;
  }
  v16 = v30;
  *(_QWORD *)v30 = v4;
  v4 = 0LL;
  *((_QWORD *)v16 + 1) = v5;
  v5 = 0LL;
  *((_DWORD *)v16 + 6) = TimeDateStamp;
  *((_DWORD *)v16 + 7) = CheckSum;
  *((_DWORD *)v16 + 8) = (*((_DWORD *)a1 + 194) >> 4) & 3;
  v17 = CitpProgramIdCalculateHash(v16);
  *((_QWORD *)v30 + 2) = v17;
  v12 = 0;
LABEL_13:
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( v4 )
    Win32FreePool((__int64)v4);
  if ( v5 )
    Win32FreePool((__int64)v5);
  if ( v3 )
    KeDetachProcess();
  return (unsigned int)v12;
}
