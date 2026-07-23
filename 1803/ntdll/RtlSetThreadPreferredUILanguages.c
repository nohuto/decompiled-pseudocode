/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x180031CA0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800309A4 @ 0x1800309A4 (sub_1800309A4.c)
 *     sub_180031068 @ 0x180031068 (sub_180031068.c)
 *     sub_1800310D8 @ 0x1800310D8 (sub_1800310D8.c)
 *     sub_180032030 @ 0x180032030 (sub_180032030.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     sub_180032B9C @ 0x180032B9C (sub_180032B9C.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     sub_18007C600 @ 0x18007C600 (sub_18007C600.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, __int16 *a2, int *a3)
{
  char v5; // r12
  int v6; // esi
  __int64 result; // rax
  int v8; // ebx
  __int64 v9; // rdx
  _DWORD *MergedPrefLanguages; // rcx
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  ULONG NumberOfLanguages; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+B8h] [rbp+58h] BYREF

  v23 = 0;
  ReturnLength = 0;
  v5 = 0;
  BaseAddress = 0LL;
  v22 = 0LL;
  if ( (a1 & 0xFFFF7CF2) != 0 || (a1 & 0xC) == 0xC )
    return 3221225485LL;
  v6 = a1 | 8;
  if ( (a1 & 0xC) != 0 )
    v6 = a1;
  if ( (v6 & 0x300) == 0x300 || (v6 & 1) != 0 && (v6 & 0x300) != 0 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v22);
  v8 = result;
  if ( (int)result < 0 )
    return result;
  if ( (v6 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v5 = 1;
      sub_1800309A4(v22);
      goto LABEL_19;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (int)sub_180031068(a2, (-(__int64)((v6 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    if ( (int)sub_1800310D8(a2, v9, &v23) < 0 )
      return (unsigned int)-1073741811;
    if ( v23 < 2 || *a2 || a2[1] )
    {
      if ( (int)sub_180032B9C(&BaseAddress, v22, 5LL, 0LL) < 0 || !BaseAddress )
        return (unsigned int)-1073741801;
      v8 = sub_180035E90(qword_18015D000, a2, v23, v6 | 2u, 26, 5, &BaseAddress);
      if ( v8 < 0 )
      {
        sub_180032CEC(BaseAddress);
        goto LABEL_22;
      }
      v16 = *((_WORD *)BaseAddress + 2);
      if ( !v16 )
      {
        sub_180032CEC(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v16;
    }
  }
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    sub_180032CEC(NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0LL;
  }
  NtCurrentTeb()->PreferredLanguages = BaseAddress;
LABEL_19:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    v11 = MergedPrefLanguages[10];
    if ( (v11 & 0x40) == 0 )
    {
LABEL_21:
      MergedPrefLanguages[10] = v11 | 0x80;
      NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      goto LABEL_22;
    }
    v17 = ((__int64 (*)(void))sub_180032030)();
    MergedPrefLanguages = (_DWORD *)v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 40) &= ~0x40u;
      v11 = *(_DWORD *)(v17 + 40);
      goto LABEL_21;
    }
    return (unsigned int)-1073741823;
  }
LABEL_22:
  if ( v8 || !v5 )
    return (unsigned int)v8;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v12 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v12 = 0LL;
  if ( !v12 )
    goto LABEL_40;
  v13 = *(_DWORD *)(v12 + 40);
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 0x100) != 0 )
    {
      if ( (v13 & 0x40) == 0 )
      {
LABEL_35:
        v14 = v13 & 0xFFFFFFF9 | 2;
LABEL_36:
        *(_DWORD *)(v12 + 40) = v14;
        if ( (v6 & 0x8000) != 0 && a3 )
        {
          v15 = *a3;
          if ( *a3 )
          {
            *(_WORD *)(v12 + 42) = 0;
            *(_DWORD *)(v12 + 40) |= v15 << 16;
          }
        }
        goto LABEL_40;
      }
      v18 = sub_180032030(v12);
      v12 = v18;
      if ( v18 )
      {
        v8 = sub_18007C600(v18, 0LL, 4LL);
        if ( !v8 )
        {
          *(_DWORD *)(v12 + 40) &= ~0x40u;
          v13 = *(_DWORD *)(v12 + 40);
          goto LABEL_35;
        }
      }
      return 3221225473LL;
    }
    if ( (v13 & 0x40) != 0 )
    {
      v19 = sub_180032030(v12);
      v12 = v19;
      if ( !v19 )
        return 3221225473LL;
      v8 = sub_18007C600(v19, 0LL, 4LL);
      if ( v8 )
        return 3221225473LL;
      *(_DWORD *)(v12 + 40) &= ~0x40u;
      v13 = *(_DWORD *)(v12 + 40);
    }
    v14 = v13 & 0xFFFFFFF9 | 4;
    goto LABEL_36;
  }
  *(_DWORD *)(v12 + 40) = v13 & 0xFFFFFFF9;
LABEL_40:
  RtlGetThreadPreferredUILanguages(v6 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
  return (unsigned int)v8;
}
