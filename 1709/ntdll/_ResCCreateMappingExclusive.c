/*
 * XREFs of _ResCCreateMappingExclusive @ 0x18010EF60
 * Callers:
 *     ResCSegmentCreateMapping @ 0x18010C908 (ResCSegmentCreateMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     ResCSegmentCreateAndPopulate @ 0x18008E23C (ResCSegmentCreateAndPopulate.c)
 *     _CreateSecureFileMapping @ 0x18010EE74 (_CreateSecureFileMapping.c)
 *     _ResCloseHandle @ 0x18010F38C (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x18010F424 (_ResCreateFile.c)
 *     _ResGetFileSizeEx @ 0x18011039C (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x180110408 (_ResMapViewOfFile.c)
 *     _ResReadFile @ 0x18011056C (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 */

void *__fastcall ResCCreateMappingExclusive(
        const WCHAR *a1,
        const WCHAR *a2,
        __int64 a3,
        char a4,
        ULONG_PTR a5,
        __int64 *a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  int v10; // edx
  __int64 *v11; // r14
  int v12; // esi
  int v13; // r13d
  __int64 File; // rax
  char *v15; // rdi
  __int64 v16; // r8
  ULONG v17; // ebp
  unsigned int v18; // esi
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rbx
  void *v23; // rax
  void *v24; // rsi
  __int64 SecureFileMapping; // rax
  int v26; // r8d
  int v27; // r9d
  void *result; // rax
  int v29; // [rsp+80h] [rbp+18h]

  v7 = a7;
  a5 = 0LL;
  v10 = a4 & 1;
  v29 = 2 * !(a4 & 1) + 2;
  if ( (a4 & 4) != 0 && !a7 )
    goto LABEL_8;
  v11 = a6;
  if ( a6 )
    *a6 = 0LL;
  v12 = 2 * v10;
  v13 = (2 * v10 + 1) | 8;
  if ( !a2 )
    v13 = 2 * v10 + 1;
  if ( !a1 )
  {
LABEL_8:
    RtlSetLastWin32Error(87);
    return 0LL;
  }
  File = ResCreateFile(a1);
  v15 = (char *)File;
  if ( File == -1 || !(unsigned int)ResGetFileSizeEx(File, &a5) )
    goto LABEL_37;
  if ( HIDWORD(a5) )
  {
    RtlSetLastWin32Error(536937984);
    goto LABEL_37;
  }
  v17 = a5;
  if ( (a4 & 2) == 0 )
  {
    SecureFileMapping = CreateSecureFileMapping(v15, (unsigned int)(v12 + 2), v16, 0, a2);
    v22 = SecureFileMapping;
    if ( SecureFileMapping )
    {
      if ( SecureFileMapping == -1 || (v24 = (void *)ResMapViewOfFile(SecureFileMapping, v29, v26, v27, 0LL)) == 0LL )
      {
LABEL_35:
        if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          ResCloseHandle(v22);
        goto LABEL_37;
      }
      goto LABEL_25;
    }
LABEL_37:
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      ResCloseHandle(v15);
    return 0LL;
  }
  v18 = 0;
  if ( (_DWORD)a5 )
    v18 = a5;
  v19 = CreateSecureFileMapping((HANDLE)0xFFFFFFFFFFFFFFFFLL, 4LL, v16, v18, a2);
  v22 = v19;
  if ( !v19 )
    goto LABEL_37;
  if ( v19 == -1 )
    goto LABEL_35;
  v23 = (void *)ResMapViewOfFile(v19, 2, v20, v21, v18);
  v24 = v23;
  if ( !v23 )
    goto LABEL_35;
  if ( !(unsigned int)ResReadFile(v15, v23, v17) || v29 != v17 )
    goto LABEL_33;
LABEL_25:
  if ( v11 && a2 )
  {
    *v11 = v22;
  }
  else
  {
    ResCloseHandle(v22);
    v22 = 0LL;
  }
  if ( v7 )
    *v7 = v15;
  else
    ResCloseHandle(v15);
  v15 = 0LL;
  result = ResCSegmentCreateAndPopulate((__int64)v24, v17, v13);
  if ( !result )
  {
LABEL_33:
    if ( v24 )
      ResUnmapViewOfFile(v24);
    goto LABEL_35;
  }
  return result;
}
