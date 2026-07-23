/*
 * XREFs of RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180051984
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x1800033D0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180004C20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     LdrpLangFallbackListAppendNode @ 0x180052170 (LdrpLangFallbackListAppendNode.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180051C6C (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180052B54 (RtlpMuiRegCreateLanguageList.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800FCCB0 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800FCDF0 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpMuiRegAddMultiSzToLangFallbackList(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v7; // ebx
  int v8; // r12d
  char v9; // di
  const WCHAR *v10; // r14
  __int64 *v11; // r13
  wchar_t *v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // r12d
  DWORD v15; // edi
  unsigned __int8 v16; // si
  _WORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 LanguageList; // rax
  __int64 v23; // rax
  __int16 v24[2]; // [rsp+20h] [rbp-30h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-2Ch] BYREF
  int v26; // [rsp+28h] [rbp-28h]
  int v27; // [rsp+2Ch] [rbp-24h]
  PVOID BaseAddress; // [rsp+30h] [rbp-20h]
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int16 v31; // [rsp+A0h] [rbp+50h] BYREF
  int v32; // [rsp+A8h] [rbp+58h]

  v32 = a4;
  v7 = 0;
  v8 = 2 * a3;
  v26 = 0;
  v27 = 2 * a3;
  v9 = a4;
  v31 = 0;
  v10 = a2;
  v24[0] = -1;
  if ( 2 * a3 <= 0 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  v11 = a7;
  if ( !a7 || (a5 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  v12 = (wchar_t *)BaseAddress;
  if ( BaseAddress )
  {
    while ( 1 )
    {
      if ( !*v10 || v8 <= 0 )
      {
LABEL_22:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        return v7;
      }
      Lcid = 0;
      v13 = -1LL;
      do
        ++v13;
      while ( v10[v13] );
      v14 = 2 * v13;
      RtlInitUnicodeString(&DestinationString, v10);
      if ( (v9 & 4) != 0 )
        break;
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        LOWORD(v15) = Lcid;
        if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
          goto LABEL_13;
        if ( (a5 & 2) != 0 && (int)RtlpMuiRegGetOrAddString(a1, DestinationString.Buffer, 1LL, &v31) >= 0 )
        {
          LOWORD(v15) = v31;
          v16 = 3;
LABEL_14:
          if ( (int)RtlpMuiRegGetInstalledLanguageIndex(a1, v16, (unsigned __int16)v15, v24) < 0 )
          {
            if ( (v32 & 2) != 0 )
              goto LABEL_17;
          }
          else
          {
            if ( (v32 & 0x10) == 0 )
            {
              LOWORD(v15) = v24[0];
              v16 = 2;
              v31 = v24[0];
            }
LABEL_17:
            if ( !*v11 )
            {
              LOBYTE(v17) = a5 & 1;
              LanguageList = RtlpMuiRegCreateLanguageList(1LL, v17, a1);
              *v11 = LanguageList;
              if ( !LanguageList )
              {
LABEL_56:
                v7 = -1073741801;
                goto LABEL_22;
              }
            }
            v18 = *v11;
            v19 = 0LL;
            v20 = *(unsigned __int16 *)(*v11 + 4);
            if ( (_WORD)v20 )
            {
              v17 = *(_WORD **)(v18 + 24);
              while ( *v17 != v16 || v17[2] != (_WORD)v15 )
              {
                v19 = (unsigned int)(v19 + 1);
                v17 += 3;
                if ( (int)v19 >= (unsigned __int16)v20 )
                  goto LABEL_19;
              }
            }
            else
            {
LABEL_19:
              if ( (unsigned __int16)v20 >= *(_WORD *)(v18 + 6) )
              {
                v23 = RtlpMuiRegGrowLanguageList(v18, v17, v20, v19);
                *v11 = v23;
                if ( !v23 )
                  goto LABEL_56;
              }
              *(_WORD *)(*(_QWORD *)(*v11 + 24) + 6LL * *(unsigned __int16 *)(*v11 + 4)) = v16;
              *(_WORD *)(*(_QWORD *)(*v11 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*v11 + 4))++ + 4) = v15;
            }
            if ( ++v26 >= a6 )
              goto LABEL_22;
          }
          v12 = (wchar_t *)BaseAddress;
        }
        goto LABEL_29;
      }
LABEL_30:
      v10 = (const WCHAR *)((char *)v10 + v14 + 2);
      v8 = -2 - v14 + v27;
      v27 = v8;
      if ( !v10 )
        goto LABEL_22;
    }
    if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Lcid) < 0 )
      goto LABEL_30;
    v15 = Lcid;
    if ( Lcid == 4096 || Lcid == 5120 || Lcid == 1024 || Lcid == 3072 || Lcid == 2048 || Lcid == 127 )
    {
      if ( (a5 & 4) != 0 )
        goto LABEL_29;
      if ( (a5 & 8) != 0 )
      {
        v7 = -1073741637;
        goto LABEL_22;
      }
    }
    DestinationString.Buffer = v12;
    *(_DWORD *)&DestinationString.Length = 11141120;
    if ( RtlLCIDToCultureName(Lcid, &DestinationString) && ((a5 & 2) != 0 || ((v15 - 4096) & 0xFFFFFBFF) != 0) )
    {
LABEL_13:
      v16 = 1;
      v31 = v15;
      goto LABEL_14;
    }
LABEL_29:
    v9 = v32;
    goto LABEL_30;
  }
  return 3221225495LL;
}
