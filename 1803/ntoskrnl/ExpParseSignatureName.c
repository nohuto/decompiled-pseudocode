/*
 * XREFs of ExpParseSignatureName @ 0x1407C06C0
 * Callers:
 *     ExpConvertSignatureName @ 0x1407BF0C4 (ExpConvertSignatureName.c)
 * Callees:
 *     wcsncpy_s @ 0x14018EDE0 (wcsncpy_s.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     ExpTranslateHexStringToGUID @ 0x1407C1EB4 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1407C2088 (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1407C212C (ExpTranslateHexStringToULONGLONG.c)
 */

NTSTATUS __fastcall ExpParseSignatureName(
        wchar_t *Src,
        unsigned int a2,
        GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        char *a8)
{
  wchar_t v8; // r10
  bool v12; // r8
  char v13; // dl
  char v14; // r12
  __int64 v15; // rdi
  wchar_t v16; // cx
  char v17; // r15
  NTSTATUS result; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v20; // r14
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rdi
  wchar_t *v24; // r14
  int v25; // edx
  const wchar_t *v26; // r8
  unsigned int v27; // ecx
  __int64 v28; // rbx
  __int64 v29; // rdi
  int v30; // r10d
  const wchar_t *v31; // r8
  wchar_t v32; // dx
  int v33; // r9d
  int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rbx
  int v37; // eax
  int v38; // r11d
  const wchar_t *v39; // r8
  wchar_t v40; // r9
  int v41; // r10d
  int v42; // ecx
  unsigned int v43; // ecx
  __int64 v44; // rbx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-48h] BYREF

  v8 = *Src;
  v12 = *Src == 123;
  v13 = 0;
  v14 = 0;
  LODWORD(v15) = 0;
  if ( a2 )
  {
    do
    {
      v16 = Src[(unsigned int)v15];
      if ( v16 == 41 )
        break;
      if ( v8 == 123 )
      {
        if ( v16 == 125 )
        {
          v13 = 1;
          break;
        }
      }
      else if ( v16 == 45 )
      {
        break;
      }
      LODWORD(v15) = v15 + 1;
    }
    while ( (unsigned int)v15 < a2 );
  }
  if ( v8 == 123 && !v13 )
    return -1073741811;
  v17 = v12;
  if ( (unsigned int)v15 > 8 )
    v17 = 1;
  if ( v17 != 1 || v13 != 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * (unsigned int)(v15 + 1), 0x72766E45u);
    v20 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    wcsncpy_s(PoolWithTag, (unsigned int)(v15 + 1), Src, (unsigned int)v15);
    v14 = 0;
    v20[(unsigned int)v15] = 0;
    if ( v17 )
      v21 = ExpTranslateHexStringToGUID(v20, a3);
    else
      v21 = ExpTranslateHexStringToULONG(v20, a3);
    v22 = v21;
    ExFreePoolWithTag(v20, 0);
    if ( v22 < 0 )
      return v22;
LABEL_24:
    if ( (unsigned int)v15 < a2 )
    {
      if ( Src[(unsigned int)v15] != 45 )
      {
LABEL_50:
        if ( (unsigned int)v15 < a2 && Src[(unsigned int)v15] == 41 && (v17 || v14) )
        {
          *a7 = v17;
          *a8 = v14;
          return 0;
        }
        return -1073741811;
      }
      v23 = (unsigned int)(v15 + 1);
      v14 = 1;
      if ( (unsigned int)v23 < a2 )
      {
        v24 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x22uLL, 0x72766E45u);
        if ( v24 )
        {
          v25 = v23;
          v26 = &Src[v23];
          do
          {
            if ( Src[v23] == 45 )
              break;
            v23 = (unsigned int)(v23 + 1);
          }
          while ( (unsigned int)v23 < a2 );
          v27 = v23 - v25;
          if ( (unsigned int)(v23 - v25 - 1) > 7 )
            goto LABEL_55;
          v28 = v27;
          wcsncpy_s(v24, 0x11uLL, v26, v27);
          v24[v28] = 0;
          v22 = ExpTranslateHexStringToULONG(v24, a4);
          if ( v22 < 0 )
          {
LABEL_56:
            ExFreePoolWithTag(v24, 0);
            return v22;
          }
          v29 = (unsigned int)(v23 + 1);
          if ( (unsigned int)v29 >= a2 )
            goto LABEL_55;
          v30 = v29;
          v31 = &Src[v29];
          do
          {
            v32 = Src[v29];
            v33 = v29;
            if ( v32 == 45 )
              break;
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < a2 );
          v34 = v33 + 1;
          if ( v32 == 45 )
            v34 = v33;
          v35 = v34 - v30;
          if ( v35 - 1 > 0xF )
            goto LABEL_55;
          v36 = v35;
          wcsncpy_s(v24, 0x11uLL, v31, v35);
          v24[v36] = 0;
          v37 = ExpTranslateHexStringToULONGLONG(v24, a5);
          if ( v37 < 0 )
          {
            v22 = v37;
            goto LABEL_56;
          }
          v15 = (unsigned int)(v29 + 1);
          if ( (unsigned int)v15 >= a2 )
            goto LABEL_55;
          v38 = v15;
          v39 = &Src[v15];
          do
          {
            v40 = Src[v15];
            v41 = v15;
            if ( v40 == 41 )
              break;
            v15 = (unsigned int)(v15 + 1);
          }
          while ( (unsigned int)v15 < a2 );
          v42 = v41 + 1;
          if ( v40 == 41 )
            v42 = v41;
          v43 = v42 - v38;
          if ( v43 - 1 > 0xF )
          {
LABEL_55:
            v22 = -1073741811;
            goto LABEL_56;
          }
          v44 = v43;
          wcsncpy_s(v24, 0x11uLL, v39, v43);
          v24[v44] = 0;
          v22 = ExpTranslateHexStringToULONGLONG(v24, a6);
          ExFreePoolWithTag(v24, 0);
          if ( v22 < 0 )
            return v22;
          goto LABEL_50;
        }
        return -1073741670;
      }
    }
    return -1073741811;
  }
  LODWORD(v15) = v15 + 1;
  GuidString.Buffer = Src;
  GuidString.Length = 2 * v15;
  GuidString.MaximumLength = 2 * v15;
  result = RtlGUIDFromString(&GuidString, a3);
  if ( result >= 0 )
    goto LABEL_24;
  return result;
}
