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

unsigned __int64 __fastcall ResCCreateMappingExclusive(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  int v10; // edx
  __int64 v11; // r8
  __int64 *v12; // r14
  int v13; // esi
  int v14; // r13d
  __int64 File; // rax
  char *v16; // rdi
  __int64 v17; // r8
  unsigned int v18; // ebp
  unsigned int v19; // esi
  __int64 v20; // rax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 SecureFileMapping; // rax
  int v26; // r8d
  int v27; // r9d
  unsigned __int64 result; // rax
  int v29; // [rsp+80h] [rbp+18h]

  v7 = a7;
  a5 = 0LL;
  v10 = a4 & 1;
  v11 = 3LL;
  v29 = 2 * !(a4 & 1) + 2;
  if ( (a4 & 4) != 0 )
  {
    if ( !a7 )
    {
LABEL_9:
      RtlSetLastWin32Error(0x57u);
      return 0LL;
    }
    v11 = 0LL;
  }
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
  v13 = 2 * v10;
  v14 = (2 * v10 + 1) | 8;
  if ( !a2 )
    v14 = 2 * v10 + 1;
  if ( !a1 )
    goto LABEL_9;
  File = ResCreateFile(a1, (unsigned int)((v10 + 2) << 30), v11);
  v16 = (char *)File;
  if ( File == -1 || !(unsigned int)ResGetFileSizeEx(File, &a5) )
    goto LABEL_37;
  if ( HIDWORD(a5) )
  {
    RtlSetLastWin32Error(0x20010600u);
    goto LABEL_37;
  }
  v18 = a5;
  if ( (a4 & 2) == 0 )
  {
    SecureFileMapping = CreateSecureFileMapping((int)v16, v13 + 2, v17, 0, a2);
    v23 = SecureFileMapping;
    if ( SecureFileMapping )
    {
      if ( SecureFileMapping == -1 || (v24 = ResMapViewOfFile(SecureFileMapping, v29, v26, v27, 0LL)) == 0 )
      {
LABEL_35:
        if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          ResCloseHandle(v23);
        goto LABEL_37;
      }
      goto LABEL_26;
    }
LABEL_37:
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      ResCloseHandle(v16);
    return 0LL;
  }
  v19 = 0;
  if ( (_DWORD)a5 )
    v19 = a5;
  v20 = CreateSecureFileMapping(-1, 4, v17, v19, a2);
  v23 = v20;
  if ( !v20 )
    goto LABEL_37;
  if ( v20 == -1 )
    goto LABEL_35;
  v24 = ResMapViewOfFile(v20, 2, v21, v22, v19);
  if ( !v24 )
    goto LABEL_35;
  if ( !(unsigned int)ResReadFile(v16) || v29 != v18 )
    goto LABEL_34;
LABEL_26:
  if ( v12 && a2 )
  {
    *v12 = v23;
  }
  else
  {
    ResCloseHandle(v23);
    v23 = 0LL;
  }
  if ( v7 )
    *v7 = v16;
  else
    ResCloseHandle(v16);
  v16 = 0LL;
  result = ResCSegmentCreateAndPopulate(v24, v18, v14);
  if ( !result )
  {
LABEL_34:
    ResUnmapViewOfFile(v24);
    goto LABEL_35;
  }
  return result;
}
