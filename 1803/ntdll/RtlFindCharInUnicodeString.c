/*
 * XREFs of RtlFindCharInUnicodeString @ 0x18003F370
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     sub_18008781C @ 0x18008781C (sub_18008781C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     RtlDowncaseUnicodeChar @ 0x1800E4AB0 (RtlDowncaseUnicodeChar.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  char v5; // r12
  NTSTATUS result; // eax
  USHORT MaximumLength; // dx
  USHORT v8; // dx
  USHORT Length; // dx
  PWCH Buffer; // r13
  PWCH v11; // rsi
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // di
  ULONG v14; // r10d
  int v15; // r8d
  WCHAR v16; // cx
  USHORT v17; // bx
  USHORT v18; // dx
  ULONG v19; // r12d
  WCHAR v20; // dx
  unsigned __int16 v21; // cx
  __int64 v22; // rbp
  signed __int64 v23; // r13
  WCHAR *v24; // r14
  int v25; // r12d
  WCHAR v26; // r8
  unsigned __int16 i; // dx
  unsigned __int16 j; // cx
  ULONG v29; // r12d
  WCHAR v30; // r15
  unsigned __int16 v31; // bp
  USHORT v32; // [rsp+20h] [rbp-A8h]
  ULONG v33; // [rsp+24h] [rbp-A4h]
  int v34; // [rsp+28h] [rbp-A0h]
  USHORT *v35; // [rsp+30h] [rbp-98h]
  _WORD v36[32]; // [rsp+40h] [rbp-88h] BYREF

  v35 = NonInclusivePrefixLength;
  v5 = Flags;
  if ( NonInclusivePrefixLength )
    *NonInclusivePrefixLength = 0;
  if ( (Flags & 0xFFFFFFF8) != 0 || !NonInclusivePrefixLength )
    return -1073741811;
  result = 0;
  if ( StringToSearch )
  {
    if ( (StringToSearch->Length & 1) != 0
      || (MaximumLength = StringToSearch->MaximumLength, (MaximumLength & 1) != 0)
      || StringToSearch->Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringToSearch->Buffer && (StringToSearch->Length || MaximumLength) )
    {
      result = -1073741811;
    }
  }
  if ( result >= 0 )
  {
    result = 0;
    if ( CharSet )
    {
      if ( (CharSet->Length & 1) != 0
        || (v8 = CharSet->MaximumLength, (v8 & 1) != 0)
        || CharSet->Length > v8
        || v8 == 0xFFFF
        || !CharSet->Buffer && (CharSet->Length || v8) )
      {
        result = -1073741811;
      }
    }
    if ( result >= 0 )
    {
      Length = StringToSearch->Length;
      Buffer = CharSet->Buffer;
      v11 = StringToSearch->Buffer;
      v12 = Length >> 1;
      v13 = CharSet->Length >> 1;
      v14 = Flags & 1;
      v32 = Length;
      v33 = v14;
      if ( (Flags & 1) != 0 )
      {
        v15 = -1;
        v11 = &v11[v12 - 1];
      }
      else
      {
        v15 = 1;
      }
      v34 = v15;
      if ( (Flags & 4) == 0 )
      {
        if ( v13 == 1 )
        {
          v16 = *Buffer;
          if ( (v5 & 2) != 0 )
          {
            if ( v12 )
            {
              do
              {
                if ( *v11 != v16 )
                  break;
                v11 += v15;
                --v12;
              }
              while ( v12 );
              goto LABEL_27;
            }
          }
          else if ( v12 )
          {
            do
            {
              if ( *v11 == v16 )
                break;
              v11 += v15;
              --v12;
            }
            while ( v12 );
            goto LABEL_27;
          }
        }
        else if ( v12 )
        {
          v19 = Flags & 2;
          while ( 1 )
          {
            v20 = *v11;
            v21 = 0;
            if ( v19 )
            {
              if ( v13 )
              {
                do
                {
                  if ( v20 == Buffer[v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v13 );
              }
              if ( v21 == v13 )
                goto LABEL_42;
            }
            else
            {
              if ( v13 )
              {
                do
                {
                  if ( v20 == Buffer[v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v13 );
              }
              if ( v21 != v13 )
                goto LABEL_42;
            }
            v11 += v15;
            if ( !--v12 )
              goto LABEL_42;
          }
        }
        return -1073741275;
      }
      if ( v13 <= 0x20u )
      {
        if ( v13 )
        {
          v22 = v13;
          v23 = (char *)Buffer - (char *)v36;
          v24 = v36;
          do
          {
            *v24 = RtlDowncaseUnicodeChar(*(WCHAR *)((char *)v24 + v23));
            ++v24;
            --v22;
          }
          while ( v22 );
        }
        if ( v12 )
        {
          v25 = v5 & 2;
          while ( 1 )
          {
            v26 = RtlDowncaseUnicodeChar(*v11);
            if ( v25 )
            {
              for ( i = 0; i < v13; ++i )
              {
                if ( v26 == v36[i] )
                  break;
              }
              if ( i == v13 )
                goto LABEL_73;
            }
            else
            {
              for ( j = 0; j < v13; ++j )
              {
                if ( v26 == v36[j] )
                  break;
              }
              if ( j != v13 )
                goto LABEL_73;
            }
            v11 += v34;
            if ( !--v12 )
              goto LABEL_73;
          }
        }
        return -1073741275;
      }
      if ( v12 )
      {
        v29 = Flags & 2;
        while ( 1 )
        {
          v30 = RtlDowncaseUnicodeChar(*v11);
          v31 = 0;
          if ( v29 )
          {
            do
            {
              if ( v30 == RtlDowncaseUnicodeChar(Buffer[v31]) )
                break;
              ++v31;
            }
            while ( v31 < v13 );
            if ( v31 == v13 )
              goto LABEL_73;
          }
          else
          {
            do
            {
              if ( v30 == RtlDowncaseUnicodeChar(Buffer[v31]) )
                break;
              ++v31;
            }
            while ( v31 < v13 );
            if ( v31 != v13 )
            {
LABEL_73:
              v14 = v33;
              NonInclusivePrefixLength = v35;
LABEL_42:
              Length = v32;
LABEL_27:
              if ( v12 )
              {
                result = 0;
                v17 = 2 * v12 - 2;
                v18 = Length - v17;
                if ( !v14 )
                  v17 = v18;
                *NonInclusivePrefixLength = v17;
                return result;
              }
              return -1073741275;
            }
          }
          v11 += v34;
          if ( !--v12 )
            goto LABEL_73;
        }
      }
      return -1073741275;
    }
  }
  return result;
}
