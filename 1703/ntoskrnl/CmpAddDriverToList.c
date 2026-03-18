/*
 * XREFs of CmpAddDriverToList @ 0x14080E330
 * Callers:
 *     CmpFindDrivers @ 0x14080EC68 (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpFindValueByName @ 0x1405B6E28 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x1405B6E58 (CmpValueToData.c)
 *     CmpFindTagIndex @ 0x14080E168 (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x14080F0A8 (CmpGetNodeName.c)
 */

char CmpAddDriverToList(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3, ...)
{
  wchar_t *Buffer; // rsi
  wchar_t *v5; // r15
  UNICODE_STRING *v6; // r13
  UNICODE_STRING *v7; // rdi
  __int64 (__fastcall *v8)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v9; // rax
  const WCHAR *NodeName; // rax
  const WCHAR *v11; // r14
  UNICODE_STRING *v12; // rax
  unsigned __int16 v13; // cx
  int v14; // edx
  UNICODE_STRING *v15; // r12
  unsigned int ValueByName; // r14d
  ULONG_PTR v17; // rax
  PVOID v18; // r14
  unsigned int v19; // r14d
  wchar_t *v20; // rax
  void (__fastcall *v21)(ULONG_PTR, __int64 *); // rax
  unsigned __int16 v22; // ax
  wchar_t *v23; // rcx
  UNICODE_STRING v24; // xmm0
  wchar_t *v25; // rcx
  UNICODE_STRING v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // r12d
  unsigned int v30; // r14d
  ULONG_PTR v31; // rax
  _DWORD *v32; // r14
  unsigned int v33; // r14d
  ULONG_PTR v34; // rax
  int v35; // r14d
  unsigned __int16 v36; // ax
  unsigned int v37; // r12d
  unsigned int v38; // eax
  char v39; // r12
  ULONG_PTR v41; // rax
  unsigned __int16 v42; // ax
  __int64 (__fastcall *v43)(__int64, _QWORD, __int64); // rax
  __int64 v44; // rcx
  wchar_t *v45; // rcx
  wchar_t *v46; // rcx
  wchar_t *v47; // rcx
  _DWORD v48[2]; // [rsp+38h] [rbp-59h] BYREF
  UNICODE_STRING v49; // [rsp+40h] [rbp-51h] BYREF
  __int64 v50; // [rsp+50h] [rbp-41h] BYREF
  __int64 v51; // [rsp+58h] [rbp-39h]
  UNICODE_STRING Destination; // [rsp+60h] [rbp-31h] BYREF
  __int64 v53; // [rsp+70h] [rbp-21h] BYREF
  __int64 v54; // [rsp+78h] [rbp-19h] BYREF
  __int64 v55; // [rsp+80h] [rbp-11h] BYREF
  _DWORD v56[2]; // [rsp+88h] [rbp-9h] BYREF
  void *Src; // [rsp+90h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp+7h] BYREF
  size_t Size; // [rsp+E8h] [rbp+57h] BYREF
  unsigned int v60; // [rsp+F8h] [rbp+67h]
  __int64 v61; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va; // [rsp+100h] [rbp+6Fh]
  __int64 v63; // [rsp+108h] [rbp+77h]
  __int64 v64; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v61 = va_arg(va1, _QWORD);
  v63 = va_arg(va1, _QWORD);
  v64 = va_arg(va1, _QWORD);
  v60 = a3;
  v56[1] = 0;
  v56[0] = -1;
  v55 = 0xFFFFFFFFLL;
  Buffer = 0LL;
  v54 = 0xFFFFFFFFLL;
  v5 = 0LL;
  v6 = 0LL;
  v53 = 0xFFFFFFFFLL;
  v7 = 0LL;
  v50 = 0xFFFFFFFFLL;
  v48[0] = -1;
  v48[1] = 0;
  v8 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  LOWORD(v61) = 0;
  *(_QWORD *)&v49.Length = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  LOBYTE(v64) = 0;
  v9 = v8(BugCheckParameter3, a2, v56);
  v51 = v9;
  if ( !v9 )
    goto LABEL_58;
  NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v9, (__int64 *)va);
  v11 = NodeName;
  if ( !NodeName )
    goto LABEL_61;
  if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) < 0
    || (v12 = (UNICODE_STRING *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(
                                  120LL,
                                  0LL,
                                  540101955LL),
        (v7 = v12) == 0LL) )
  {
    v39 = 0;
    goto LABEL_32;
  }
  memset(v12, 0, 0x78uLL);
  v13 = v61;
  v14 = v51;
  v6 = v7;
  v7[2].Buffer = 0LL;
  v7[1].Buffer = 0LL;
  v15 = v7 + 6;
  v7[6].Buffer = (wchar_t *)v11;
  v7[6].Length = v13 - 2;
  v7[6].MaximumLength = v13;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v14, (int)&CmpImagePathString);
  if ( ValueByName == -1 )
  {
    v43 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24);
    v44 = (unsigned int)v15->Length + 46;
    v49.MaximumLength = v15->Length + 46;
    v49.Length = 0;
    v49.Buffer = (wchar_t *)v43(v44, 0LL, 540233027LL);
    if ( !v49.Buffer )
    {
      v39 = 0;
      goto LABEL_36;
    }
    if ( RtlAppendUnicodeToString(&v49, L"System32\\Drivers\\") < 0
      || RtlAppendUnicodeStringToString(&v49, v7 + 6) < 0
      || RtlAppendUnicodeToString(&v49, L".sys") < 0 )
    {
      Buffer = v49.Buffer;
      v39 = 0;
      goto LABEL_34;
    }
    Buffer = v49.Buffer;
    goto LABEL_10;
  }
  v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
          BugCheckParameter3,
          ValueByName,
          v48);
  if ( !v17
    || (v18 = CmpValueToData(BugCheckParameter3, ValueByName, v17, (unsigned int *)&Size, (__int64)&v50),
        Src = v18,
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v48),
        !v18) )
  {
LABEL_61:
    v39 = 0;
    goto LABEL_34;
  }
  v19 = Size;
  v20 = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                     (unsigned int)Size,
                     0LL,
                     540233027LL);
  v49.Buffer = v20;
  Buffer = v20;
  if ( !v20 )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v50);
    v39 = 0;
    goto LABEL_36;
  }
  memmove(v20, Src, v19);
  v21 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16);
  v49.Length = v19;
  v49.MaximumLength = v19;
  v21(BugCheckParameter3, &v50);
LABEL_10:
  v22 = v15->Length + 104;
  Destination.Length = 0;
  Destination.MaximumLength = v22;
  Destination.Buffer = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                                    v22,
                                    0LL,
                                    540298563LL);
  v5 = Destination.Buffer;
  if ( Destination.Buffer )
  {
    if ( RtlAppendUnicodeStringToString(&Destination, &CmpServicesKeyName) >= 0
      && RtlAppendUnicodeStringToString(&Destination, v7 + 6) >= 0 )
    {
      v23 = v7[1].Buffer;
      if ( v23 )
        (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v23, v7[1].Length);
      v24 = v49;
      v25 = v7[2].Buffer;
      Buffer = 0LL;
      *(_QWORD *)&v49.Length = 0LL;
      v7[1] = v24;
      if ( v25 )
        (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v25, v7[2].Length);
      v26 = Destination;
      v27 = v63;
      v5 = 0LL;
      *(_QWORD *)&Destination.Length = 0LL;
      v7[2] = v26;
      v28 = *(_QWORD *)v27;
      if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
        __fastfail(3u);
      v29 = v51;
      *(_QWORD *)&v7->Length = v28;
      v7->Buffer = (wchar_t *)v27;
      v6 = 0LL;
      *(_QWORD *)(v28 + 8) = v7;
      *(_QWORD *)v27 = v7;
      v30 = CmpFindValueByName(BugCheckParameter3, v29, (int)&CmpErrorControlString);
      if ( v30 == -1 )
      {
        *(_DWORD *)(&v7[7].MaximumLength + 1) = 1;
      }
      else
      {
        v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                v30,
                v48);
        if ( !v31 )
          goto LABEL_58;
        v32 = CmpValueToData(BugCheckParameter3, v30, v31, (unsigned int *)&Size, (__int64)&v53);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v48);
        if ( !v32 )
          goto LABEL_58;
        *(_DWORD *)(&v7[7].MaximumLength + 1) = *v32;
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v53);
      }
      v33 = CmpFindValueByName(BugCheckParameter3, v29, (int)&CmpGroupString);
      if ( v33 == -1 )
      {
        v35 = (_DWORD)v7 + 80;
        v7[5].Length = 0;
        v7[5].MaximumLength = 0;
        v7[5].Buffer = 0LL;
        goto LABEL_27;
      }
      v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v33,
              v48);
      if ( v34 )
      {
        v7[5].Buffer = (wchar_t *)CmpValueToData(BugCheckParameter3, v33, v34, (unsigned int *)&Size, (__int64)&v54);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v48);
        if ( v7[5].Buffer )
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v54);
          v35 = (_DWORD)v7 + 80;
          v36 = Size - 2;
          v7[5].Length = Size - 2;
          if ( v36 <= (unsigned __int16)Size )
          {
            v7[5].MaximumLength = v36;
LABEL_27:
            v37 = CmpFindValueByName(BugCheckParameter3, v29, (int)&CmpDriverDependencyString);
            if ( v37 == -1 )
            {
              *(_DWORD *)&v7[4].Length = 0;
              v7[4].Buffer = 0LL;
LABEL_29:
              v38 = CmpFindValueByName(BugCheckParameter3, v51, (int)&CmpTagString);
              if ( v38 == -1 )
                *(_DWORD *)&v7[7].Length = -1;
              else
                *(_DWORD *)&v7[7].Length = CmpFindTagIndex(BugCheckParameter3, v38, v60, v35);
              v39 = 1;
              v11 = 0LL;
LABEL_32:
              if ( v11 )
                (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v11, (unsigned __int16)v61);
              goto LABEL_34;
            }
            v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v37,
                    v48);
            if ( v41 )
            {
              v7[4].Buffer = (wchar_t *)CmpValueToData(
                                          BugCheckParameter3,
                                          v37,
                                          v41,
                                          (unsigned int *)&Size,
                                          (__int64)&v55);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v48);
              if ( v7[4].Buffer )
              {
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v55);
                v42 = Size - 2;
                v7[4].Length = Size - 2;
                if ( v42 <= (unsigned __int16)Size )
                {
                  v7[4].MaximumLength = v42;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
LABEL_58:
      v39 = 0;
      goto LABEL_34;
    }
    v5 = Destination.Buffer;
  }
  v39 = v64;
LABEL_34:
  if ( Buffer )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(Buffer, v49.Length);
LABEL_36:
  if ( v5 )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v5, Destination.Length);
  if ( v6 )
  {
    v45 = v6[1].Buffer;
    if ( v45 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v45, v6[1].Length);
    v46 = v6[2].Buffer;
    if ( v46 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v46, v6[2].Length);
    v47 = v7[6].Buffer;
    if ( v47 )
      (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v47, v7[6].Length);
    (*(void (__fastcall **)(UNICODE_STRING *, __int64))(BugCheckParameter3 + 32))(v7, 120LL);
  }
  if ( v51 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v56);
  return v39;
}
