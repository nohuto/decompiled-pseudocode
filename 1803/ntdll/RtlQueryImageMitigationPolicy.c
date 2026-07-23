/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800DBF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __cdecl RtlQueryImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v6; // rbx
  ULONG v8; // r13d
  ULONG v9; // r12d
  int inited; // esi
  const WCHAR *v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  __int32 v17; // r14d
  __int32 v18; // r14d
  __int32 v19; // r14d
  __int32 v20; // r14d
  int v21; // r14d
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  char v25; // cl
  __int64 v26; // r11
  __int64 v27; // r9
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  char v30; // cl
  char v31; // cl
  __int64 v32; // r10
  __int64 v33; // r9
  char v34; // r15
  __int32 v35; // r14d
  __int32 v36; // r14d
  __int32 v37; // r14d
  __int32 v38; // r14d
  int v39; // r14d
  char v40; // r15
  bool v41; // zf
  __int64 v42; // r8
  unsigned __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // r8
  HANDLE KeyHandle; // [rsp+30h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-49h] BYREF
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int64 v50; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-29h]
  _OBJECT_ATTRIBUTES DestinationString; // [rsp+60h] [rbp-21h] BYREF

  v6 = 0LL;
  v50 = 0LL;
  KeyHandle = 0LL;
  v8 = Flags & 4;
  v51 = 0LL;
  v9 = Flags & 8;
  inited = RtlInitUnicodeStringEx((PUNICODE_STRING)&DestinationString, ImagePath);
  if ( inited >= 0 )
  {
    v11 = L"MitigationOptions";
    if ( v9 )
      v11 = L"MitigationAuditOptions";
    inited = RtlInitUnicodeStringEx(&ValueName, v11);
    if ( inited >= 0 )
    {
      if ( v8 )
      {
        if ( LOWORD(DestinationString.Length) )
          return -1073741811;
      }
      else
      {
        if ( LOWORD(DestinationString.Length) )
        {
          v12 = sub_180076270((unsigned __int16 *)&DestinationString, 9LL, 0, &KeyHandle);
        }
        else
        {
          DestinationString.Length = 48;
          DestinationString.ObjectName = (PUNICODE_STRING)&unk_180110B58;
          DestinationString.RootDirectory = 0LL;
          DestinationString.Attributes = 576;
          *(_OWORD *)&DestinationString.SecurityDescriptor = 0LL;
          v12 = ZwOpenKey(&KeyHandle, 9u, &DestinationString);
        }
        inited = v12;
      }
      if ( inited < 0 )
        return inited;
      if ( v8 )
      {
        if ( v9 )
        {
          v15 = 0LL;
          v16 = 0x2222222222222222LL;
        }
        else
        {
          v15 = 0x12222111211LL;
          v16 = 0x2222200000000000LL;
        }
        v13 = v16 | v15;
        v14 = 0x22022222220222LL;
      }
      else
      {
        inited = ZwQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   &DestinationString,
                   0x20u,
                   &ResultLength);
        ZwClose(KeyHandle);
        if ( inited < 0 )
          return inited;
        if ( LODWORD(DestinationString.RootDirectory) > 0x10 )
          return -1073741788;
        memmove(&v50, (char *)&DestinationString.RootDirectory + 4, LODWORD(DestinationString.RootDirectory));
        v13 = v50;
        v14 = v51;
      }
      if ( Policy <= ImageSignaturePolicy )
      {
        if ( Policy != ImageSignaturePolicy )
        {
          if ( Policy == ImageDepPolicy )
          {
            if ( BufferSize != 8 )
              return -1073741811;
            goto LABEL_195;
          }
          v17 = Policy - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  v21 = v20 - 2;
                  if ( v21 )
                  {
                    if ( v21 != 1 || BufferSize != 16 )
                      return -1073741811;
                    *(_QWORD *)Buffer = 0LL;
                    v22 = 0LL;
                    *((_QWORD *)Buffer + 1) = 0LL;
                    v23 = 0LL;
                    if ( (v13 & 0x30000000000LL) == 0 )
                    {
                      *(_QWORD *)Buffer = 0LL;
                      goto LABEL_40;
                    }
                    if ( (BYTE5(v13) & 3) != 1 )
                    {
                      if ( (BYTE5(v13) & 3) == 2 )
                      {
                        *(_QWORD *)Buffer = 2LL;
                        v23 = 2LL;
                        goto LABEL_40;
                      }
                      if ( (BYTE5(v13) & 3) != 3 )
                      {
LABEL_40:
                        if ( (v13 & 0x40000000000LL) != 0 )
                          *(_QWORD *)Buffer = v23 | 4;
                        v14 >>= 8;
                        goto LABEL_98;
                      }
                      *(_QWORD *)Buffer = 8LL;
                      v22 = 8LL;
                    }
                    v23 = v22 | 1;
                    *(_QWORD *)Buffer = v22 | 1;
                    goto LABEL_40;
                  }
                  if ( BufferSize != 8 )
                    return -1073741811;
                  v24 = HIDWORD(v13);
                }
                else
                {
                  if ( BufferSize != 8 )
                    return -1073741811;
                  v24 = v13 >> 28;
                }
              }
              else
              {
                if ( BufferSize != 8 )
                  return -1073741811;
                v24 = v13 >> 24;
              }
LABEL_45:
              v25 = v24 & 0xF;
              *(_QWORD *)Buffer = 0LL;
              if ( (v25 & 3) != 0 )
              {
                if ( (v25 & 3) == 1 )
                {
                  *(_QWORD *)Buffer = 1LL;
                  v6 = 1LL;
                  goto LABEL_202;
                }
                if ( (v25 & 3) != 2 )
                {
LABEL_202:
                  v41 = (v25 & 4) == 0;
LABEL_203:
                  if ( !v41 )
                    *(_QWORD *)Buffer = v6 | 4;
                  return inited;
                }
LABEL_48:
                *(_QWORD *)Buffer = 2LL;
                v6 = 2LL;
                goto LABEL_202;
              }
              goto LABEL_201;
            }
            if ( BufferSize != 8 )
              return -1073741811;
            v13 >>= 36;
            goto LABEL_195;
          }
          if ( BufferSize != 24 )
            return -1073741811;
          v26 = 0LL;
          *(_QWORD *)Buffer = 0LL;
          v27 = 0LL;
          *((_QWORD *)Buffer + 1) = 0LL;
          *((_QWORD *)Buffer + 2) = 0LL;
          if ( (v13 & 0x300) == 0 )
          {
            *(_QWORD *)Buffer = 0LL;
            goto LABEL_65;
          }
          if ( (BYTE1(v13) & 3) != 1 )
          {
            if ( (BYTE1(v13) & 3) == 2 )
            {
              *(_QWORD *)Buffer = 2LL;
              v27 = 2LL;
              goto LABEL_65;
            }
            if ( (BYTE1(v13) & 3) != 3 )
            {
LABEL_65:
              if ( (v13 & 0x400) != 0 )
                *(_QWORD *)Buffer = v27 | 4;
              v28 = 0LL;
              if ( (v13 & 0x30000) != 0 )
              {
                if ( (BYTE2(v13) & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 1) = 1LL;
                  v28 = 1LL;
                }
                else if ( (BYTE2(v13) & 3) == 2 )
                {
                  v28 = 2LL;
                  *((_QWORD *)Buffer + 1) = 2LL;
                }
              }
              else
              {
                *((_QWORD *)Buffer + 1) = 0LL;
              }
              if ( (v13 & 0x40000) != 0 )
                *((_QWORD *)Buffer + 1) = v28 | 4;
              v29 = v13 >> 20;
LABEL_76:
              v30 = v29 & 0xF;
              if ( (v30 & 3) != 0 )
              {
                if ( (v30 & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 2) &= ~2uLL;
                  *((_QWORD *)Buffer + 2) |= 1uLL;
                }
                else if ( (v30 & 3) == 2 )
                {
                  *((_QWORD *)Buffer + 2) &= ~1uLL;
                  *((_QWORD *)Buffer + 2) |= 2uLL;
                }
              }
              else
              {
                *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
              }
              if ( (v30 & 4) != 0 )
                *((_QWORD *)Buffer + 2) |= 4uLL;
              return inited;
            }
            *(_QWORD *)Buffer = 8LL;
            v26 = 8LL;
          }
          v27 = v26 | 1;
          *(_QWORD *)Buffer = v26 | 1;
          goto LABEL_65;
        }
        if ( BufferSize != 16 )
          return -1073741811;
        v31 = (v13 >> 44) & 0xF;
        *(_QWORD *)Buffer = 0LL;
        v32 = 0LL;
        *((_QWORD *)Buffer + 1) = 0LL;
        v33 = 0LL;
        if ( (v31 & 3) == 0 )
        {
          *(_QWORD *)Buffer = 0LL;
          goto LABEL_95;
        }
        if ( (v31 & 3) != 1 )
        {
          if ( (v31 & 3) == 2 )
          {
            *(_QWORD *)Buffer = 2LL;
            v33 = 2LL;
            goto LABEL_95;
          }
          if ( (v31 & 3) != 3 )
          {
LABEL_95:
            if ( (v31 & 4) != 0 )
              *(_QWORD *)Buffer = v33 | 4;
            LOBYTE(v14) = (unsigned __int8)v14 >> 4;
LABEL_98:
            v34 = v14 & 0xF;
            if ( (v34 & 3) != 0 )
            {
              if ( (v34 & 3) == 1 )
              {
                *((_QWORD *)Buffer + 1) = 1LL;
                v6 = 1LL;
LABEL_103:
                if ( (v34 & 4) != 0 )
                  *((_QWORD *)Buffer + 1) = v6 | 4;
                return inited;
              }
              if ( (v34 & 3) != 2 )
                goto LABEL_103;
              v6 = 2LL;
            }
            *((_QWORD *)Buffer + 1) = v6;
            goto LABEL_103;
          }
          *(_QWORD *)Buffer = 8LL;
          v32 = 8LL;
        }
        v33 = v32 | 1;
        *(_QWORD *)Buffer = v32 | 1;
        goto LABEL_95;
      }
      v35 = Policy - 9;
      if ( !v35 )
      {
        if ( BufferSize != 8 )
          return -1073741811;
        v13 >>= 48;
        goto LABEL_195;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
        if ( BufferSize != 24 )
          return -1073741811;
        v44 = 0LL;
        *(_QWORD *)Buffer = 0LL;
        *((_QWORD *)Buffer + 1) = 0LL;
        *((_QWORD *)Buffer + 2) = 0LL;
        if ( ((v13 >> 52) & 3) != 0 )
        {
          if ( ((v13 >> 52) & 3) == 1 )
          {
            *(_QWORD *)Buffer = 1LL;
            v44 = 1LL;
          }
          else if ( ((v13 >> 52) & 3) == 2 )
          {
            *(_QWORD *)Buffer = 2LL;
            v44 = 2LL;
          }
        }
        else
        {
          *(_QWORD *)Buffer = 0LL;
        }
        if ( ((v13 >> 52) & 4) != 0 )
          *(_QWORD *)Buffer = v44 | 4;
        v45 = 0LL;
        if ( (v13 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v13) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) = 1LL;
            v45 = 1LL;
          }
          else if ( (HIBYTE(v13) & 3) == 2 )
          {
            v45 = 2LL;
            *((_QWORD *)Buffer + 1) = 2LL;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 1) = 0LL;
        }
        if ( (v13 & 0x400000000000000LL) != 0 )
          *((_QWORD *)Buffer + 1) = v45 | 4;
        v29 = v13 >> 60;
        goto LABEL_76;
      }
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            if ( v39 != 1 || BufferSize != 8 )
              return -1073741811;
            v24 = v13 >> 12;
            goto LABEL_45;
          }
          if ( BufferSize != 8 )
            return -1073741811;
          LOBYTE(v13) = (unsigned __int8)v13 >> 4;
LABEL_195:
          v25 = v13 & 0xF;
          *(_QWORD *)Buffer = 0LL;
          if ( (v25 & 3) != 0 )
          {
            if ( (v25 & 3) != 1 )
            {
              if ( (v25 & 3) == 2 )
                goto LABEL_48;
              if ( (v25 & 3) != 3 )
                goto LABEL_202;
              *(_QWORD *)Buffer = 8LL;
              v6 = 8LL;
            }
            v6 |= 1uLL;
          }
LABEL_201:
          *(_QWORD *)Buffer = v6;
          goto LABEL_202;
        }
        if ( BufferSize != 8 )
          return -1073741811;
        v40 = (v14 >> 36) & 0xF;
        *(_QWORD *)Buffer = 0LL;
        if ( (v40 & 3) != 0 )
        {
          if ( (v40 & 3) != 1 )
          {
            if ( (v40 & 3) == 2 )
            {
              *(_QWORD *)Buffer = 2LL;
              v6 = 2LL;
              goto LABEL_124;
            }
            if ( (v40 & 3) != 3 )
            {
LABEL_124:
              v41 = (v40 & 4) == 0;
              goto LABEL_203;
            }
            *(_QWORD *)Buffer = 8LL;
            v6 = 8LL;
          }
          v6 |= 1uLL;
        }
        *(_QWORD *)Buffer = v6;
        goto LABEL_124;
      }
      if ( BufferSize != 48 )
        return -1073741811;
      memset(Buffer, 0, 0x30uLL);
      v42 = 0LL;
      if ( (v14 & 0x30000) != 0 )
      {
        if ( (BYTE2(v14) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 3) = 1LL;
          v42 = 1LL;
        }
        else if ( (BYTE2(v14) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 3) = 2LL;
          v42 = 2LL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 3) = 0LL;
      }
      if ( (v14 & 0x40000) != 0 )
        *((_QWORD *)Buffer + 3) = v42 | 4;
      v43 = 0LL;
      if ( ((v14 >> 20) & 3) != 0 )
      {
        if ( ((v14 >> 20) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 4) = 1LL;
          v43 = 1LL;
        }
        else if ( ((v14 >> 20) & 3) == 2 )
        {
          v43 = *((_QWORD *)Buffer + 4) & 0xFFFFFFFFFFFFFFFCuLL | 2;
          *((_QWORD *)Buffer + 4) = v43;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 4) = 0LL;
      }
      if ( ((v14 >> 20) & 4) != 0 )
        *((_QWORD *)Buffer + 4) = v43 | 4;
      if ( (v14 & 0x3000000) != 0 )
      {
        if ( (BYTE3(v14) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 5) &= ~2uLL;
          *((_QWORD *)Buffer + 5) |= 1uLL;
        }
        else if ( (BYTE3(v14) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 5) &= ~1uLL;
          *((_QWORD *)Buffer + 5) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 5) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v14 & 0x4000000) != 0 )
        *((_QWORD *)Buffer + 5) |= 4uLL;
      if ( ((v14 >> 28) & 3) != 0 )
      {
        if ( ((v14 >> 28) & 3) == 1 )
        {
          *(_QWORD *)Buffer &= ~2uLL;
          *(_QWORD *)Buffer |= 1uLL;
        }
        else if ( ((v14 >> 28) & 3) == 2 )
        {
          *(_QWORD *)Buffer &= ~1uLL;
          *(_QWORD *)Buffer |= 2uLL;
        }
      }
      else
      {
        *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( ((v14 >> 28) & 4) != 0 )
        *(_QWORD *)Buffer |= 4uLL;
      if ( (v14 & 0x300000000LL) != 0 )
      {
        if ( (BYTE4(v14) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 1) &= ~2uLL;
          *((_QWORD *)Buffer + 1) |= 1uLL;
        }
        else if ( (BYTE4(v14) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 1) &= ~1uLL;
          *((_QWORD *)Buffer + 1) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v14 & 0x400000000LL) != 0 )
        *((_QWORD *)Buffer + 1) |= 4uLL;
      if ( (v14 & 0x30000000000LL) != 0 )
      {
        if ( (BYTE5(v14) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 2) &= ~2uLL;
          *((_QWORD *)Buffer + 2) |= 1uLL;
        }
        else if ( (BYTE5(v14) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 2) &= ~1uLL;
          *((_QWORD *)Buffer + 2) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v14 & 0x40000000000LL) != 0 )
        *((_QWORD *)Buffer + 2) |= 4uLL;
    }
  }
  return inited;
}
