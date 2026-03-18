/*
 * XREFs of LookupSidInTable @ 0x14057FC7C
 * Callers:
 *     SeConvertStringSidToSid @ 0x140162440 (SeConvertStringSidToSid.c)
 *     LocalGetSidForString @ 0x14057FB88 (LocalGetSidForString.c)
 *     LocalConvertAclToString @ 0x1406FA724 (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x1406FBB48 (LocalGetStringForSid.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     RtlSubAuthorityCountSid @ 0x14008C0B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 */

__int64 __fastcall LookupSidInTable(
        wchar_t *Str1,
        PSID Sid1,
        __int64 a3,
        __int64 a4,
        wchar_t *Str2,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  BOOL v10; // esi
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  PSID *v13; // r14
  __int64 v14; // rax
  PUCHAR v16; // rax
  ULONG v17; // ecx
  __int64 v18; // rbp
  void *v19; // rcx
  ULONG v20; // r14d
  void *v21; // rsi
  PUCHAR v22; // rax
  int v23; // [rsp+60h] [rbp+8h]
  char v25; // [rsp+78h] [rbp+20h]
  wchar_t *Str2a; // [rsp+80h] [rbp+28h]

  v7 = 0LL;
  v25 = 0;
  v23 = 0;
  if ( __PAIR128__((unsigned __int64)Str1, (unsigned __int64)Sid1) == 0 )
    return 0LL;
  v10 = 0;
  v11 = 63;
  *a7 = 0LL;
  if ( !Str1 )
  {
    v25 = 1;
    v16 = RtlSubAuthorityCountSid(Sid1);
    if ( !*v16 )
      goto LABEL_6;
    v17 = *RtlSubAuthoritySid(Sid1, (unsigned int)*v16 - 1);
    if ( v17 != 498 && v17 - 518 > 1 )
      goto LABEL_6;
    v10 = 1;
    if ( v17 != 518 )
      goto LABEL_6;
    goto LABEL_25;
  }
  if ( !wcsnicmp(Str1, L"EA", 2uLL) )
  {
    v10 = 1;
    goto LABEL_6;
  }
  if ( !wcsnicmp(Str1, L"SA", 2uLL) )
  {
    v10 = 1;
LABEL_25:
    v23 = 1;
    goto LABEL_6;
  }
  v10 = wcsnicmp(Str1, L"RO", 2uLL) == 0;
LABEL_6:
  v12 = 0;
  v13 = (PSID *)&unk_14033E180;
  do
  {
    if ( !v25 )
    {
      Str2a = (wchar_t *)((char *)&unk_14033E170 + 104 * v12 + 2);
      if ( !wcsnicmp(Str1, Str2a, *((unsigned int *)v13 - 1)) )
        break;
      if ( v10 && a6 && !a3 && *((_BYTE *)v13 - 16) && *v13 && !wcsnicmp(L"DA", Str2a, *((unsigned int *)v13 - 1)) )
        v11 = v12;
      goto LABEL_10;
    }
    if ( RtlEqualSid(Sid1, *v13) )
      break;
LABEL_10:
    ++v12;
    v13 += 13;
  }
  while ( v12 < 0x3F );
  if ( v12 < 0x3F )
  {
    v14 = v12;
    return (__int64)&unk_14033E170 + 104 * v14;
  }
  if ( v10 && a6 && !a3 && v11 < 0x3F )
  {
    if ( v23 )
    {
      if ( v25 )
      {
        *a7 = Sid1;
      }
      else
      {
        v18 = 104LL * v11;
        v19 = *(void **)((char *)&unk_14033E170 + v18 + 16);
        if ( v19 )
        {
          v20 = RtlLengthSid(v19);
          v21 = (void *)SddlpAlloc(v20 + 1);
          *a7 = v21;
          if ( v21 )
          {
            _mm_lfence();
            memmove(v21, *(const void **)((char *)&unk_14033E170 + v18 + 16), v20);
            v22 = RtlSubAuthorityCountSid(*(PSID *)((char *)&unk_14033E170 + v18 + 16));
            *RtlSubAuthoritySid(v21, (unsigned int)*v22 - 1) = 518;
          }
        }
      }
    }
    else
    {
      v14 = v11;
      return (__int64)&unk_14033E170 + 104 * v14;
    }
  }
  return v7;
}
