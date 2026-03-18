/*
 * XREFs of ?CreateValidationProcessInCallerSession@DXGVALIDATION@@AEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003C8B8
 * Callers:
 *     ?InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C000D9AC (-InitializeForSession@DXGVALIDATION@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGVALIDATION::CreateValidationProcessInCallerSession(DXGVALIDATION *this, struct _EPROCESS **a2)
{
  char *v3; // rax
  char *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  NTSTATUS v7; // eax
  PVOID Ptr; // rcx
  _EX_RUNDOWN_REF RunRef; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-98h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v13; // [rsp+90h] [rbp-78h]
  __int64 v14; // [rsp+98h] [rbp-70h]
  __int64 v15; // [rsp+A0h] [rbp-68h]
  int v16; // [rsp+A8h] [rbp-60h]
  __int128 v17; // [rsp+B0h] [rbp-58h]
  _QWORD v18[17]; // [rsp+C8h] [rbp-40h] BYREF

  *(_DWORD *)&SourceString.Length = 2883626;
  SourceString.Buffer = L"\\SystemRoot\\System32\\";
  v3 = (char *)operator new[](0x43CuLL, 0x4B677844u, PagedPool);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x43CuLL);
    *((_DWORD *)v4 + 1) = 1084;
    *((_QWORD *)v4 + 8) = v4 + 1040;
    *(_DWORD *)v4 = 1084;
    *((_DWORD *)v4 + 2) = 1;
    *((_WORD *)v4 + 29) = SourceString.MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 56), &SourceString);
    memset(v18, 0, 0x58uLL);
    v18[0] = 88LL;
    memset(&v18[12], 0, 0x28uLL);
    v14 = 0LL;
    v15 = 0LL;
    v18[15] = L"\\SystemRoot\\System32\\csrss.exe";
    v18[12] = 40LL;
    v18[13] = 131077LL;
    v18[14] = 60LL;
    v13.HandleAttributes = 48;
    v16 = 576;
    v17 = 0LL;
    LOBYTE(v6) = ZwCreateUserProcess(&RunRef);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = ObReferenceObjectByHandle(RunRef.Ptr, 0x1FFFFFu, 0LL, 0, Object, 0LL);
      Ptr = RunRef.Ptr;
      v5 = v7;
      *a2 = (struct _EPROCESS *)Object[0];
      ZwTerminateProcess(Ptr, -1);
      ZwClose(RunRef.Ptr);
      ZwClose(Object[1]);
    }
    operator delete[](v4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
