/*
 * XREFs of SmpProcessModuleImports @ 0x1400088B0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x140008C70 (SmpSaveRegistryValue_U.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 */

int __fastcall SmpProcessModuleImports(__int64 *a1, const char *a2)
{
  __int64 *v3; // rdi
  int result; // eax
  __int64 v5; // r12
  _DWORD *v6; // rsi
  PWSTR Buffer; // r14
  USHORT Length; // r15
  unsigned __int64 v9; // rax
  unsigned int v10; // ebx
  PWSTR v11; // rax
  unsigned __int16 v12; // bx
  unsigned int v13; // eax
  PWSTR v14; // r9
  __int64 v15; // r10
  WCHAR v16; // r8
  int v17; // r10d
  int v18; // r9d
  int v19; // edx
  __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int *v22; // rdi
  unsigned int v23; // eax
  char *v24; // rbx
  PWSTR v25; // rcx
  struct _UNICODE_STRING *v26; // rdx
  int v27; // r14d
  int v28; // r15d
  const WCHAR *v29; // r10
  unsigned __int16 v30; // cx
  SIZE_T v31; // r12
  int v32; // r13d
  __int64 v33; // rax
  const WCHAR *v34; // r8
  SIZE_T v35; // r9
  LONG v36; // eax
  struct _UNICODE_STRING v37; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v39; // [rsp+50h] [rbp-B0h]
  const WCHAR *v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  _STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  char v43; // [rsp+80h] [rbp-80h] BYREF

  v39 = a1;
  v3 = a1;
  result = _stricmp(a2, "ntdll.dll");
  if ( !result )
    return result;
  result = _stricmp(a2, "ntdll32.dll");
  if ( !result )
    return result;
  RtlInitAnsiString(&DestinationString, a2);
  *(_DWORD *)&v37.Length = 34209792;
  v37.Buffer = (PWSTR)&v43;
  result = RtlAnsiStringToUnicodeString(&v37, &DestinationString, 0);
  if ( result < 0 )
    return result;
  v5 = *v3;
  v6 = *(_DWORD **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 104LL);
  Buffer = v37.Buffer;
  Length = v37.Length;
  v38 = (struct _UNICODE_STRING)0LL;
  if ( v37.Length < 8u )
    goto LABEL_31;
  v9 = *(_QWORD *)v37.Buffer & 0xFFFFFFDFFFDFFFDFuLL;
  if ( v9 != 0x2D004900500041LL && v9 != 0x2D005400580045LL )
    goto LABEL_31;
  v10 = v37.Length;
  v11 = (PWSTR)((char *)v37.Buffer + v37.Length);
  if ( v37.Length > 1u )
  {
    do
    {
      v10 -= 2;
      --v11;
    }
    while ( *v11 != 45 && v10 > 1 );
  }
  v12 = (unsigned __int16)v10 >> 1;
  if ( !v12 )
    goto LABEL_31;
  v13 = 0;
  v14 = v37.Buffer;
  v15 = v12;
  do
  {
    v16 = *v14;
    if ( (unsigned __int16)(*v14 - 65) <= 0x19u )
      v16 += 32;
    ++v14;
    v13 = v13 * v6[6] + v16;
    --v15;
  }
  while ( v15 );
  v17 = 0;
  v18 = v6[3] - 1;
  if ( v18 < 0 )
    goto LABEL_31;
  while ( 1 )
  {
    v19 = (v18 + v17) >> 1;
    v20 = (unsigned int)v6[5] + 8LL * v19;
    v21 = *(_DWORD *)((char *)v6 + v20);
    if ( v13 < v21 )
    {
      v18 = v19 - 1;
      goto LABEL_18;
    }
    if ( v13 <= v21 )
      break;
    v17 = v19 + 1;
LABEL_18:
    if ( v17 > v18 )
      goto LABEL_31;
  }
  v22 = (_DWORD *)((char *)&v6[6 * *(_DWORD *)((char *)v6 + v20 + 4)] + (unsigned int)v6[4]);
  if ( !v22 )
    goto LABEL_30;
  if ( RtlCompareUnicodeStrings(v37.Buffer, v12, (PCWCH)((char *)v6 + v22[1]), v22[3] >> 1, 1u) )
    goto LABEL_29;
  if ( !v5 || (v23 = v22[5], v23 <= 1) )
  {
    if ( v22[5] )
    {
      v24 = (char *)v6 + v22[4];
      goto LABEL_27;
    }
LABEL_29:
    Length = v37.Length;
    Buffer = v37.Buffer;
LABEL_30:
    v3 = v39;
LABEL_31:
    v25 = (PWSTR)((char *)Buffer + Length - 2);
    if ( v25 < Buffer )
      goto LABEL_50;
    while ( *v25 != 46 )
    {
      if ( --v25 < Buffer )
        goto LABEL_50;
    }
    if ( v25 < Buffer )
    {
LABEL_50:
      v26 = &v37;
    }
    else
    {
      v38.Buffer = Buffer;
      v26 = &v38;
      v38.MaximumLength = 2 * (v25 - Buffer);
      v38.Length = v38.MaximumLength;
    }
    return SmpSaveRegistryValue_U(v3[1], v26, &v37, 1LL, 0LL);
  }
  v27 = v23 - 1;
  v28 = 1;
  v29 = *(const WCHAR **)(v5 + 8);
  v24 = (char *)v6 + v22[4];
  v30 = *(_WORD *)v5 >> 1;
  v40 = v29;
  if ( (int)(v23 - 1) < 1 )
    goto LABEL_27;
  v31 = v30;
  while ( 2 )
  {
    v32 = (v27 + v28) >> 1;
    v33 = (__int64)&v6[5 * v32] + v22[4];
    v34 = (const WCHAR *)((char *)v6 + *(unsigned int *)(v33 + 4));
    v35 = *(_DWORD *)(v33 + 8) >> 1;
    v41 = v33;
    v36 = RtlCompareUnicodeStrings(v29, v31, v34, v35, 1u);
    if ( v36 < 0 )
    {
      v27 = v32 - 1;
LABEL_46:
      v29 = v40;
      if ( v28 > v27 )
        goto LABEL_27;
      continue;
    }
    break;
  }
  if ( v36 > 0 )
  {
    v28 = v32 + 1;
    goto LABEL_46;
  }
  v24 = (char *)v41;
LABEL_27:
  v38.Buffer = (PWSTR)((char *)v6 + *((unsigned int *)v24 + 3));
  v38.MaximumLength = *((_WORD *)v24 + 8);
  result = *((unsigned __int16 *)v24 + 8);
  v38.Length = result;
  if ( (_WORD)result )
  {
    v37 = v38;
    goto LABEL_29;
  }
  return result;
}
