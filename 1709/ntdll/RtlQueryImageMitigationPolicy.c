/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800E0FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __cdecl RtlQueryImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  ULONG v7; // r12d
  ULONG v8; // r15d
  int inited; // edi
  const WCHAR *v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int32 v16; // esi
  __int32 v17; // esi
  __int32 v18; // esi
  __int32 v19; // esi
  int v20; // esi
  unsigned __int64 v21; // rcx
  char v22; // cl
  unsigned __int64 v23; // rcx
  char v24; // cl
  bool v25; // zf
  char v26; // cl
  char v27; // r14
  __int32 v28; // esi
  __int32 v29; // esi
  __int32 v30; // esi
  __int32 v31; // esi
  int v32; // esi
  char v33; // r14
  bool v34; // zf
  HANDLE KeyHandle; // [rsp+30h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-49h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-29h]
  _OBJECT_ATTRIBUTES DestinationString; // [rsp+60h] [rbp-21h] BYREF

  KeyHandle = 0LL;
  v39 = 0LL;
  v7 = Flags & 4;
  v40 = 0LL;
  v8 = Flags & 8;
  inited = RtlInitUnicodeStringEx((PUNICODE_STRING)&DestinationString, ImagePath);
  if ( inited >= 0 )
  {
    v10 = L"MitigationOptions";
    if ( v8 )
      v10 = L"MitigationAuditOptions";
    inited = RtlInitUnicodeStringEx(&ValueName, v10);
    if ( inited >= 0 )
    {
      if ( v7 )
      {
        if ( LOWORD(DestinationString.Length) )
          return -1073741811;
      }
      else
      {
        if ( LOWORD(DestinationString.Length) )
        {
          v11 = RtlpOpenImageFileOptionsKeyEx((unsigned __int16 *)&DestinationString, 9LL, 0, &KeyHandle);
        }
        else
        {
          DestinationString.RootDirectory = 0LL;
          DestinationString.Length = 48;
          DestinationString.ObjectName = (PUNICODE_STRING)&unk_180113AD8;
          DestinationString.Attributes = 576;
          *(_OWORD *)&DestinationString.SecurityDescriptor = 0LL;
          v11 = NtOpenKey(&KeyHandle, 9u, &DestinationString);
        }
        inited = v11;
      }
      if ( inited < 0 )
        return inited;
      if ( v7 )
      {
        if ( v8 )
        {
          v14 = 0LL;
          v15 = 0x2222222222222222LL;
        }
        else
        {
          v14 = 0x12222111211LL;
          v15 = 0x2222200000000000LL;
        }
        v12 = v15 | v14;
        v13 = 0x22022222220222LL;
      }
      else
      {
        inited = NtQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   &DestinationString,
                   0x20u,
                   &ResultLength);
        NtClose(KeyHandle);
        if ( inited < 0 )
          return inited;
        if ( LODWORD(DestinationString.RootDirectory) > 0x10 )
          return -1073741788;
        memmove(&v39, (char *)&DestinationString.RootDirectory + 4, LODWORD(DestinationString.RootDirectory));
        v12 = v39;
        v13 = v40;
      }
      if ( Policy <= ImageSignaturePolicy )
      {
        if ( Policy != ImageSignaturePolicy )
        {
          if ( Policy == ImageDepPolicy )
          {
            if ( BufferSize != 8 )
              return -1073741811;
            goto LABEL_194;
          }
          v16 = Policy - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  v20 = v19 - 2;
                  if ( v20 )
                  {
                    if ( v20 != 1 || BufferSize != 16 )
                      return -1073741811;
                    *(_QWORD *)Buffer = 0LL;
                    *((_QWORD *)Buffer + 1) = 0LL;
                    if ( (v12 & 0x30000000000LL) == 0 )
                    {
                      *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
                      goto LABEL_40;
                    }
                    if ( (BYTE5(v12) & 3) != 1 )
                    {
                      if ( (BYTE5(v12) & 3) == 2 )
                      {
                        *(_QWORD *)Buffer &= ~1uLL;
                        *(_QWORD *)Buffer |= 2uLL;
                        goto LABEL_40;
                      }
                      if ( (BYTE5(v12) & 3) != 3 )
                      {
LABEL_40:
                        if ( (v12 & 0x40000000000LL) != 0 )
                          *(_QWORD *)Buffer |= 4uLL;
                        v13 >>= 8;
LABEL_98:
                        v27 = v13 & 0xF;
                        if ( (v27 & 3) != 0 )
                        {
                          if ( (v27 & 3) == 1 )
                          {
                            *((_QWORD *)Buffer + 1) &= ~2uLL;
                            *((_QWORD *)Buffer + 1) |= 1uLL;
                          }
                          else if ( (v27 & 3) == 2 )
                          {
                            *((_QWORD *)Buffer + 1) &= ~1uLL;
                            *((_QWORD *)Buffer + 1) |= 2uLL;
                          }
                        }
                        else
                        {
                          *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
                        }
                        if ( (v27 & 4) != 0 )
                          *((_QWORD *)Buffer + 1) |= 4uLL;
                        return inited;
                      }
                      *(_QWORD *)Buffer |= 8uLL;
                    }
                    *(_QWORD *)Buffer &= ~2uLL;
                    *(_QWORD *)Buffer |= 1uLL;
                    goto LABEL_40;
                  }
                  if ( BufferSize != 8 )
                    return -1073741811;
                  v21 = HIDWORD(v12);
                }
                else
                {
                  if ( BufferSize != 8 )
                    return -1073741811;
                  v21 = v12 >> 28;
                }
              }
              else
              {
                if ( BufferSize != 8 )
                  return -1073741811;
                v21 = v12 >> 24;
              }
LABEL_45:
              v22 = v21 & 0xF;
              *(_QWORD *)Buffer = 0LL;
              if ( (v22 & 3) != 0 )
              {
                if ( (v22 & 3) != 1 )
                {
                  if ( (v22 & 3) != 2 )
                  {
LABEL_201:
                    v34 = (v22 & 4) == 0;
LABEL_202:
                    if ( !v34 )
                      *(_QWORD *)Buffer |= 4uLL;
                    return inited;
                  }
LABEL_48:
                  *(_QWORD *)Buffer &= ~1uLL;
                  *(_QWORD *)Buffer |= 2uLL;
                  goto LABEL_201;
                }
                goto LABEL_199;
              }
              goto LABEL_200;
            }
            if ( BufferSize != 8 )
              return -1073741811;
            v12 >>= 36;
            goto LABEL_194;
          }
          if ( BufferSize != 24 )
            return -1073741811;
          *(_QWORD *)Buffer = 0LL;
          *((_QWORD *)Buffer + 1) = 0LL;
          *((_QWORD *)Buffer + 2) = 0LL;
          if ( (v12 & 0x300) == 0 )
          {
            *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_64;
          }
          if ( (BYTE1(v12) & 3) != 1 )
          {
            if ( (BYTE1(v12) & 3) == 2 )
            {
              *(_QWORD *)Buffer &= ~1uLL;
              *(_QWORD *)Buffer |= 2uLL;
              goto LABEL_64;
            }
            if ( (BYTE1(v12) & 3) != 3 )
            {
LABEL_64:
              if ( (v12 & 0x400) != 0 )
                *(_QWORD *)Buffer |= 4uLL;
              if ( (v12 & 0x30000) != 0 )
              {
                if ( (BYTE2(v12) & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 1) &= ~2uLL;
                  *((_QWORD *)Buffer + 1) |= 1uLL;
                }
                else if ( (BYTE2(v12) & 3) == 2 )
                {
                  *((_QWORD *)Buffer + 1) &= ~1uLL;
                  *((_QWORD *)Buffer + 1) |= 2uLL;
                }
              }
              else
              {
                *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
              }
              if ( (v12 & 0x40000) != 0 )
                *((_QWORD *)Buffer + 1) |= 4uLL;
              v23 = v12 >> 20;
LABEL_75:
              v24 = v23 & 0xF;
              if ( (v24 & 3) != 0 )
              {
                if ( (v24 & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 2) &= ~2uLL;
                  *((_QWORD *)Buffer + 2) |= 1uLL;
                }
                else if ( (v24 & 3) == 2 )
                {
                  *((_QWORD *)Buffer + 2) &= ~1uLL;
                  *((_QWORD *)Buffer + 2) |= 2uLL;
                }
              }
              else
              {
                *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
              }
              v25 = (v24 & 4) == 0;
LABEL_82:
              if ( !v25 )
                *((_QWORD *)Buffer + 2) |= 4uLL;
              return inited;
            }
            *(_QWORD *)Buffer |= 8uLL;
          }
          *(_QWORD *)Buffer &= ~2uLL;
          *(_QWORD *)Buffer |= 1uLL;
          goto LABEL_64;
        }
        if ( BufferSize != 16 )
          return -1073741811;
        v26 = (v12 >> 44) & 0xF;
        *(_QWORD *)Buffer = 0LL;
        *((_QWORD *)Buffer + 1) = 0LL;
        if ( (v26 & 3) == 0 )
        {
          *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
          goto LABEL_95;
        }
        if ( (v26 & 3) != 1 )
        {
          if ( (v26 & 3) == 2 )
          {
            *(_QWORD *)Buffer &= ~1uLL;
            *(_QWORD *)Buffer |= 2uLL;
            goto LABEL_95;
          }
          if ( (v26 & 3) != 3 )
          {
LABEL_95:
            if ( (v26 & 4) != 0 )
              *(_QWORD *)Buffer |= 4uLL;
            LOBYTE(v13) = (unsigned __int8)v13 >> 4;
            goto LABEL_98;
          }
          *(_QWORD *)Buffer |= 8uLL;
        }
        *(_QWORD *)Buffer &= ~2uLL;
        *(_QWORD *)Buffer |= 1uLL;
        goto LABEL_95;
      }
      v28 = Policy - 9;
      if ( !v28 )
      {
        if ( BufferSize != 8 )
          return -1073741811;
        v12 >>= 48;
        goto LABEL_194;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        if ( BufferSize != 24 )
          return -1073741811;
        *(_QWORD *)Buffer = 0LL;
        *((_QWORD *)Buffer + 1) = 0LL;
        *((_QWORD *)Buffer + 2) = 0LL;
        if ( ((v12 >> 52) & 3) != 0 )
        {
          if ( ((v12 >> 52) & 3) == 1 )
          {
            *(_QWORD *)Buffer &= ~2uLL;
            *(_QWORD *)Buffer |= 1uLL;
          }
          else if ( ((v12 >> 52) & 3) == 2 )
          {
            *(_QWORD *)Buffer &= ~1uLL;
            *(_QWORD *)Buffer |= 2uLL;
          }
        }
        else
        {
          *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( ((v12 >> 52) & 4) != 0 )
          *(_QWORD *)Buffer |= 4uLL;
        if ( (v12 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v12) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) &= ~2uLL;
            *((_QWORD *)Buffer + 1) |= 1uLL;
          }
          else if ( (HIBYTE(v12) & 3) == 2 )
          {
            *((_QWORD *)Buffer + 1) &= ~1uLL;
            *((_QWORD *)Buffer + 1) |= 2uLL;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( (v12 & 0x400000000000000LL) != 0 )
          *((_QWORD *)Buffer + 1) |= 4uLL;
        v23 = v12 >> 60;
        goto LABEL_75;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        if ( BufferSize != 48 )
          return -1073741811;
        memset(Buffer, 0, 0x30uLL);
        if ( (v13 & 0x30000) != 0 )
        {
          if ( (BYTE2(v13) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 3) &= ~2uLL;
            *((_QWORD *)Buffer + 3) |= 1uLL;
          }
          else if ( (BYTE2(v13) & 3) == 2 )
          {
            *((_QWORD *)Buffer + 3) &= ~1uLL;
            *((_QWORD *)Buffer + 3) |= 2uLL;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 3) &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( (v13 & 0x40000) != 0 )
          *((_QWORD *)Buffer + 3) |= 4uLL;
        if ( ((v13 >> 20) & 3) != 0 )
        {
          if ( ((v13 >> 20) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 4) &= ~2uLL;
            *((_QWORD *)Buffer + 4) |= 1uLL;
          }
          else if ( ((v13 >> 20) & 3) == 2 )
          {
            *((_QWORD *)Buffer + 4) &= ~1uLL;
            *((_QWORD *)Buffer + 4) |= 2uLL;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 4) &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( ((v13 >> 20) & 4) != 0 )
          *((_QWORD *)Buffer + 4) |= 4uLL;
        if ( (v13 & 0x3000000) != 0 )
        {
          if ( (BYTE3(v13) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 5) &= ~2uLL;
            *((_QWORD *)Buffer + 5) |= 1uLL;
          }
          else if ( (BYTE3(v13) & 3) == 2 )
          {
            *((_QWORD *)Buffer + 5) &= ~1uLL;
            *((_QWORD *)Buffer + 5) |= 2uLL;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 5) &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( (v13 & 0x4000000) != 0 )
          *((_QWORD *)Buffer + 5) |= 4uLL;
        if ( ((v13 >> 28) & 3) != 0 )
        {
          if ( ((v13 >> 28) & 3) == 1 )
          {
            *(_QWORD *)Buffer &= ~2uLL;
            *(_QWORD *)Buffer |= 1uLL;
          }
          else if ( ((v13 >> 28) & 3) == 2 )
          {
            *(_QWORD *)Buffer &= ~1uLL;
            *(_QWORD *)Buffer |= 2uLL;
          }
        }
        else
        {
          *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( ((v13 >> 28) & 4) != 0 )
          *(_QWORD *)Buffer |= 4uLL;
        if ( (v13 & 0x300000000LL) != 0 )
        {
          if ( (BYTE4(v13) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) &= ~2uLL;
            *((_QWORD *)Buffer + 1) |= 1uLL;
          }
          else if ( (BYTE4(v13) & 3) == 2 )
          {
            *((_QWORD *)Buffer + 1) &= ~1uLL;
            *((_QWORD *)Buffer + 1) |= 2uLL;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        if ( (v13 & 0x400000000LL) != 0 )
          *((_QWORD *)Buffer + 1) |= 4uLL;
        if ( (v13 & 0x30000000000LL) != 0 )
        {
          if ( (BYTE5(v13) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 2) &= ~2uLL;
            *((_QWORD *)Buffer + 2) |= 1uLL;
          }
          else if ( (BYTE5(v13) & 3) == 2 )
          {
            *((_QWORD *)Buffer + 2) &= ~1uLL;
            *((_QWORD *)Buffer + 2) |= 2uLL;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        v25 = (v13 & 0x40000000000LL) == 0;
        goto LABEL_82;
      }
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 != 1 || BufferSize != 8 )
            return -1073741811;
          v21 = v12 >> 12;
          goto LABEL_45;
        }
        if ( BufferSize != 8 )
          return -1073741811;
        LOBYTE(v12) = (unsigned __int8)v12 >> 4;
LABEL_194:
        v22 = v12 & 0xF;
        *(_QWORD *)Buffer = 0LL;
        if ( (v22 & 3) != 0 )
        {
          if ( (v22 & 3) != 1 )
          {
            if ( (v22 & 3) == 2 )
              goto LABEL_48;
            if ( (v22 & 3) != 3 )
              goto LABEL_201;
            *(_QWORD *)Buffer |= 8uLL;
          }
LABEL_199:
          *(_QWORD *)Buffer &= ~2uLL;
          *(_QWORD *)Buffer |= 1uLL;
          goto LABEL_201;
        }
LABEL_200:
        *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_201;
      }
      if ( BufferSize != 8 )
        return -1073741811;
      v33 = (v13 >> 36) & 0xF;
      *(_QWORD *)Buffer = 0LL;
      if ( (v33 & 3) == 0 )
      {
        *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_125;
      }
      if ( (v33 & 3) != 1 )
      {
        if ( (v33 & 3) == 2 )
        {
          *(_QWORD *)Buffer &= ~1uLL;
          *(_QWORD *)Buffer |= 2uLL;
          goto LABEL_125;
        }
        if ( (v33 & 3) != 3 )
        {
LABEL_125:
          v34 = (v33 & 4) == 0;
          goto LABEL_202;
        }
        *(_QWORD *)Buffer |= 8uLL;
      }
      *(_QWORD *)Buffer &= ~2uLL;
      *(_QWORD *)Buffer |= 1uLL;
      goto LABEL_125;
    }
  }
  return inited;
}
