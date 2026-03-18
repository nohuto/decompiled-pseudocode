/*
 * XREFs of ?LoadLibraryShellCompositor@CHolographicClient@@AEAAPEAUHINSTANCE__@@XZ @ 0x1801A7C6C
 * Callers:
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x1801A7990 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     StringCopyWorkerW_0 @ 0x1801A8894 (StringCopyWorkerW_0.c)
 *     StringLengthWorkerW @ 0x1801A8908 (StringLengthWorkerW.c)
 */

HINSTANCE __fastcall CHolographicClient::LoadLibraryShellCompositor(CHolographicClient *this)
{
  HMODULE Library; // rsi
  size_t v2; // rdx
  signed int LastError; // eax
  bool v4; // sf
  HRESULT v5; // eax
  WCHAR *v6; // rdi
  HANDLE FileW; // rax
  signed int v8; // eax
  bool v9; // sf
  signed int v10; // eax
  bool v11; // sf
  signed int v12; // eax
  bool v13; // sf
  signed int v14; // eax
  bool v15; // sf
  signed int v16; // eax
  bool v17; // sf
  DWORD dwCreationDisposition[2]; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  size_t pcchLength; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR Buffer[264]; // [rsp+68h] [rbp-A0h] BYREF

  hObject = (HANDLE)-1LL;
  Library = 0LL;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetSystemDirectoryW(Buffer, 0x104u) )
  {
    LastError = GetLastError();
    v4 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v4 = LastError < 0;
    }
    if ( v4 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x140u);
      goto LABEL_39;
    }
  }
  v5 = StringLengthWorkerW(Buffer, v2, &pcchLength);
  if ( v5 < 0 )
    goto LABEL_38;
  v6 = &Buffer[pcchLength];
  if ( 260 - pcchLength <= 1 )
  {
    v5 = -2147024774;
LABEL_10:
    *v6 = 0;
LABEL_38:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x147u);
    goto LABEL_39;
  }
  v5 = StringCopyWorkerW_0(
         &Buffer[pcchLength],
         260 - pcchLength,
         &pcchLength,
         L"\\ShellCompositor.dll",
         *(size_t *)dwCreationDisposition);
  if ( v5 < 0 )
    goto LABEL_10;
  FileW = CreateFileW(Buffer, 0x80000000, 1u, 0LL, 3u, 0x80u, 0LL);
  hObject = FileW;
  if ( FileW == (HANDLE)-1LL )
  {
    v8 = GetLastError();
    v9 = v8 < 0;
    if ( v8 > 0 )
    {
      v8 = (unsigned __int16)v8 | 0x80070000;
      v9 = v8 < 0;
    }
    if ( v9 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x153u);
      goto LABEL_39;
    }
    FileW = hObject;
  }
  LODWORD(v22) = 0;
  LODWORD(v20) = 0;
  if ( (unsigned int)GetCachedSigningLevel(FileW, &v22, &v20, 0LL, 0LL, 0LL) )
    goto LABEL_31;
  if ( !(unsigned int)SetCachedSigningLevel(&hObject, 1LL, 5LL, hObject) )
  {
    v10 = GetLastError();
    v11 = v10 < 0;
    if ( v10 > 0 )
    {
      v10 = (unsigned __int16)v10 | 0x80070000;
      v11 = v10 < 0;
    }
    if ( v11 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x164u);
      goto LABEL_39;
    }
  }
  if ( (unsigned int)GetCachedSigningLevel(hObject, &v22, &v20, 0LL, 0LL, 0LL) )
    goto LABEL_31;
  v12 = GetLastError();
  v13 = v12 < 0;
  if ( v12 > 0 )
  {
    v12 = (unsigned __int16)v12 | 0x80070000;
    v13 = v12 < 0;
  }
  if ( !v13 )
  {
LABEL_31:
    if ( (unsigned int)v20 >= 0xC )
      goto LABEL_33;
    v14 = RtlNtStatusToDosError(-1073740760);
    v15 = v14 < 0;
    if ( v14 > 0 )
    {
      v14 = (unsigned __int16)v14 | 0x80070000;
      v15 = v14 < 0;
    }
    if ( v15 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x174u);
    }
    else
    {
LABEL_33:
      Library = LoadLibraryExW(Buffer, 0LL, 0x800u);
      if ( !Library )
      {
        v16 = GetLastError();
        v17 = v16 < 0;
        if ( v16 > 0 )
        {
          v16 = (unsigned __int16)v16 | 0x80070000;
          v17 = v16 < 0;
        }
        if ( v17 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x17Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x16Eu);
  }
LABEL_39:
  if ( hObject != (HANDLE)-1LL )
    CloseHandle(hObject);
  return Library;
}
