/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x18006C5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_1800470C4 @ 0x1800470C4 (sub_1800470C4.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_18006C8FC @ 0x18006C8FC (sub_18006C8FC.c)
 *     sub_18006C99C @ 0x18006C99C (sub_18006C99C.c)
 *     sub_18006CA0C @ 0x18006CA0C (sub_18006CA0C.c)
 *     sub_18006EA40 @ 0x18006EA40 (sub_18006EA40.c)
 *     sub_18006EB64 @ 0x18006EB64 (sub_18006EB64.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, __int64 a2, int *a3)
{
  int v5; // esi
  char v6; // r12
  __int64 result; // rax
  int v8; // ebx
  __int64 v9; // rdx
  _DWORD *MergedPrefLanguages; // rcx
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // eax
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  ULONG NumberOfLanguages; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+B8h] [rbp+58h] BYREF

  v21 = 0;
  ReturnLength = 0;
  v5 = a1;
  BaseAddress = 0LL;
  v6 = 0;
  v20 = 0LL;
  if ( (a1 & 0xFFFF7CF2) != 0 )
    return 3221225485LL;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      return 3221225485LL;
  }
  else
  {
    v5 = a1 | 8;
  }
  if ( (v5 & 0x300) == 0x300 || (v5 & 1) != 0 && (v5 & 0x300) != 0 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v20);
  v8 = result;
  if ( (int)result < 0 )
    return result;
  if ( (v5 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v6 = 1;
      sub_18006CA0C(v20);
      goto LABEL_18;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (int)sub_18006C99C(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    if ( (int)sub_18006C8FC(a2, v9, &v21) < 0 )
      return (unsigned int)-1073741811;
    if ( v21 < 2 || *(_WORD *)a2 || *(_WORD *)(a2 + 2) )
    {
      if ( (int)sub_1800470C4((__int64 *)&BaseAddress, v20, 5u, 0) < 0 || !BaseAddress )
        return (unsigned int)-1073741801;
      v8 = sub_180045810((__int64)qword_18015BF90, (const WCHAR *)a2, v21, v5 | 2u, 26, 5u, (__int64 *)&BaseAddress);
      if ( v8 < 0 )
      {
        sub_180040BA0(BaseAddress);
        goto LABEL_21;
      }
      v14 = *((_WORD *)BaseAddress + 2);
      if ( !v14 )
      {
        sub_180040BA0(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v14;
    }
  }
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    sub_180040BA0(NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0LL;
  }
  NtCurrentTeb()->PreferredLanguages = BaseAddress;
LABEL_18:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    if ( (MergedPrefLanguages[10] & 0x40) == 0 )
    {
LABEL_20:
      MergedPrefLanguages[10] |= 0x80u;
      NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      goto LABEL_21;
    }
    v15 = sub_18006EB64(MergedPrefLanguages);
    MergedPrefLanguages = (_DWORD *)v15;
    if ( v15 )
    {
      *(_DWORD *)(v15 + 40) &= ~0x40u;
      goto LABEL_20;
    }
    return (unsigned int)-1073741823;
  }
LABEL_21:
  if ( v8 || !v6 )
    return (unsigned int)v8;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v11 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v11 = 0LL;
  if ( !v11 )
    goto LABEL_34;
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x100) != 0 )
    {
      if ( (*(_BYTE *)(v11 + 40) & 0x40) == 0 )
      {
LABEL_29:
        v12 = *(_DWORD *)(v11 + 40) & 0xFFFFFFF9 | 2;
LABEL_30:
        *(_DWORD *)(v11 + 40) = v12;
        if ( (v5 & 0x8000) != 0 && a3 )
        {
          v13 = *a3;
          if ( *a3 )
          {
            *(_WORD *)(v11 + 42) = 0;
            *(_DWORD *)(v11 + 40) |= v13 << 16;
          }
        }
        goto LABEL_34;
      }
      v16 = sub_18006EB64(v11);
      v11 = v16;
      if ( v16 )
      {
        v8 = sub_18006EA40(v16, 0LL, 4LL);
        if ( !v8 )
        {
          *(_DWORD *)(v11 + 40) &= ~0x40u;
          goto LABEL_29;
        }
      }
      return 3221225473LL;
    }
    if ( (*(_BYTE *)(v11 + 40) & 0x40) != 0 )
    {
      v17 = sub_18006EB64(v11);
      v11 = v17;
      if ( !v17 )
        return 3221225473LL;
      v8 = sub_18006EA40(v17, 0LL, 4LL);
      if ( v8 )
        return 3221225473LL;
      *(_DWORD *)(v11 + 40) &= ~0x40u;
    }
    v12 = *(_DWORD *)(v11 + 40) & 0xFFFFFFF9 | 4;
    goto LABEL_30;
  }
  *(_DWORD *)(v11 + 40) &= 0xFFFFFFF9;
LABEL_34:
  RtlGetThreadPreferredUILanguages(v5 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
  return (unsigned int)v8;
}
