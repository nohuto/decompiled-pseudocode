/*
 * XREFs of RtlLcidToLocaleName @ 0x180036A00
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 *     sub_18006FB8C @ 0x18006FB8C (sub_18006FB8C.c)
 *     sub_1800770AC @ 0x1800770AC (sub_1800770AC.c)
 *     sub_18007EC88 @ 0x18007EC88 (sub_18007EC88.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 * Callees:
 *     sub_180036B64 @ 0x180036B64 (sub_180036B64.c)
 *     sub_180036BD4 @ 0x180036BD4 (sub_180036BD4.c)
 *     sub_18007C3E8 @ 0x18007C3E8 (sub_18007C3E8.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800F2924 @ 0x1800F2924 (sub_1800F2924.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800F7FA0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // r14
  LCID v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rax
  WCHAR *v11; // r10
  _WORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r8
  PWCH Buffer; // rdx
  __int64 v19; // [rsp+20h] [rbp-A9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v21[176]; // [rsp+40h] [rbp-89h] BYREF

  v19 = 85LL;
  v5 = Flags;
  v7 = lcid;
  if ( (lcid & 0xFFFFEFFF) != 0 )
  {
    if ( !LocaleName )
      return -1073741584;
    if ( (Flags & 0xFFFFFFFD) != 0 )
      return -1073741583;
    if ( !AllocateDestinationString && !LocaleName->Buffer )
      return -1073741584;
    if ( lcid == 5120 )
    {
      if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v21, &v19) >= 0 )
      {
        v16 = (unsigned int)v19;
        Buffer = (PWCH)v21;
        goto LABEL_21;
      }
    }
    else if ( ((lcid - 1024) & 0xFFFFF7FF) != 0 )
    {
      if ( qword_18015D2B8 || (unsigned __int8)sub_18007C3E8() )
      {
        if ( v7 == 2048 )
          v7 = DefaultLocaleId;
        v8 = sub_180036BD4(v7);
        if ( v8 < 0 )
          return -1073741585;
        v9 = v8;
        if ( (v5 & 2) == 0 )
        {
          _mm_lfence();
          if ( (*(_BYTE *)(*(unsigned __int16 *)(qword_18015D2B8 + 56)
                         * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 24) + 8LL * v8 + 4)
                         + *(_QWORD *)(qword_18015D2B8 + 16)
                         + 24LL) & 1) == 0 )
            return -1073741585;
        }
        _mm_lfence();
        v10 = *(_QWORD *)(qword_18015D2B8 + 40) + 2LL;
        v11 = (WCHAR *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 24) + 8 * v9 + 6));
        if ( v11 )
        {
          v12 = (_WORD *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 24) + 8 * v9 + 6));
          v13 = 84LL;
          do
          {
            if ( !*v12 )
              break;
            ++v12;
            --v13;
          }
          while ( v13 );
          v14 = v13 == 0 ? 0xC000000D : 0;
          v15 = v13 ? 84 - v13 : 0;
        }
        else
        {
          v15 = v19;
          v14 = 3221225485LL;
        }
        if ( (int)v14 >= 0 )
        {
          v16 = v15;
          Buffer = v11;
LABEL_21:
          LOBYTE(v14) = AllocateDestinationString;
          return sub_180036B64(v14, Buffer, v16, LocaleName);
        }
      }
    }
    else
    {
      DestinationString.Buffer = (PWCH)v21;
      DestinationString.MaximumLength = 170;
      if ( (int)sub_1800F2924(&DestinationString) >= 0 )
      {
        Buffer = DestinationString.Buffer;
        v16 = DestinationString.Length >> 1;
        goto LABEL_21;
      }
    }
    return -1073741823;
  }
  return -1073741585;
}
