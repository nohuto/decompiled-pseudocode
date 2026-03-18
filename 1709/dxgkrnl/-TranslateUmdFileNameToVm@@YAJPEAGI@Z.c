/*
 * XREFs of ?TranslateUmdFileNameToVm@@YAJPEAGI@Z @ 0x1C017F474
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1C0007EF0 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     RtlStringCbCatW @ 0x1C0023D98 (RtlStringCbCatW.c)
 */

NTSTATUS __fastcall TranslateUmdFileNameToVm(NTSTRSAFE_PWSTR pszDest)
{
  NTSTATUS v1; // ebx
  wchar_t *v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rdx
  signed __int64 v6; // rsi
  wchar_t *p_pszDesta; // rcx
  wchar_t v8; // ax
  wchar_t *v9; // rax
  const wchar_t *NtSystemRoot; // rax
  size_t v11; // rdx
  NTSTATUS result; // eax
  size_t v13; // rdx
  size_t v14; // rdx
  size_t v15; // rdx
  wchar_t *v16; // rcx
  wchar_t v17; // ax
  wchar_t *v18; // rax
  const wchar_t *v19; // rax
  size_t v20; // rdx
  NTSTATUS v21; // eax
  size_t v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  void *FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  wchar_t pszDesta; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszSrc[260]; // [rsp+98h] [rbp-68h] BYREF

  v1 = 0;
  pszDest[259] = 0;
  _wcslwr(pszDest);
  v3 = wcsstr(pszDest, L"\\filerepository\\");
  if ( !v3 )
    return v1;
  if ( g_VgpuUseHostDriverStore )
    goto LABEL_26;
  v4 = 260LL;
  v5 = 260LL;
  v6 = (char *)L"\\??\\" - (char *)&pszDesta;
  p_pszDesta = &pszDesta;
  do
  {
    if ( v5 == -2147483386 )
      break;
    v8 = *(wchar_t *)((char *)p_pszDesta + v6);
    if ( !v8 )
      break;
    *p_pszDesta++ = v8;
    --v5;
  }
  while ( v5 );
  v9 = p_pszDesta - 1;
  if ( v5 )
    v9 = p_pszDesta;
  *v9 = 0;
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
  result = RtlStringCbCatW(&pszDesta, v11, NtSystemRoot);
  if ( result >= 0 )
  {
    result = RtlStringCbCatW(&pszDesta, v13, L"\\System32\\");
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(&pszDesta, v14, L"DriverStore");
      if ( result >= 0 )
      {
        result = RtlStringCbCatW(&pszDesta, v15, v3);
        if ( result >= 0 )
        {
          memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
          RtlInitUnicodeString(&DestinationString, &pszDesta);
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 1u, 0) < 0 )
          {
            v16 = &pszDesta;
            do
            {
              if ( v4 == -2147483386 )
                break;
              v17 = *(wchar_t *)((char *)v16 + v6);
              if ( !v17 )
                break;
              *v16++ = v17;
              --v4;
            }
            while ( v4 );
            v18 = v16 - 1;
            if ( v4 )
              v18 = v16;
            *v18 = 0;
            v19 = (const wchar_t *)RtlGetNtSystemRoot();
            v21 = RtlStringCbCatW(&pszDesta, v20, v19);
            if ( v21 >= 0 )
            {
              v21 = RtlStringCbCatW(&pszDesta, v22, L"\\System32\\");
              if ( v21 >= 0 )
              {
                v21 = RtlStringCbCatW(&pszDesta, v22, L"HostDriverStore");
                if ( v21 >= 0 )
                  v21 = RtlStringCbCatW(&pszDesta, v22, v3);
              }
            }
            v1 = v21;
            if ( v21 < 0 )
              goto LABEL_27;
          }
          else
          {
            ZwClose(FileHandle);
          }
LABEL_26:
          v1 = RtlStringCbCopyW(pszDest, 0x208uLL, pszSrc);
          if ( v1 >= 0 )
            return v1;
LABEL_27:
          v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
          *(_QWORD *)(v25 + 24) = v1;
          WdLogEvent5_WdWarning(v25);
          return v1;
        }
      }
    }
  }
  return result;
}
