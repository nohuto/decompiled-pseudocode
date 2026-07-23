/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x18006D720
 * Callers:
 *     <none>
 * Callees:
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180046590 (RtlpGetSystemDefaultUILanguage.c)
 *     sub_18006D864 @ 0x18006D864 (sub_18006D864.c)
 *     sub_18006DB48 @ 0x18006DB48 (sub_18006DB48.c)
 *     sub_18006DBCC @ 0x18006DBCC (sub_18006DBCC.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *DefaultUILanguageId, char a2)
{
  DWORD *v4; // rdi
  PVOID v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  NTSTATUS SystemDefaultUILanguage; // esi
  PVOID BaseAddress; // [rsp+60h] [rbp+8h] BYREF
  DWORD *v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( DefaultUILanguageId )
  {
    *DefaultUILanguageId = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v13);
    v4 = v13;
    if ( v6 >= 0 )
    {
      LOBYTE(v7) = a2;
      if ( (int)sub_18006D864(v7, v13) >= 0 )
      {
        if ( NtCurrentTeb()->UserPrefLanguages )
          v8 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
        else
          v8 = 0LL;
        v4 = v13;
        BaseAddress = (PVOID)v8;
        if ( v8 )
        {
          if ( *(_WORD *)(v8 + 4) )
          {
            SystemDefaultUILanguage = sub_18006DB48(v13, *(_QWORD *)(v8 + 24), DefaultUILanguageId);
            if ( SystemDefaultUILanguage >= 0 )
              goto LABEL_13;
          }
          BaseAddress = 0LL;
        }
        v9 = sub_18006DBCC((_DWORD)v4, 0, (unsigned int)&BaseAddress, 3 - (unsigned int)(a2 != 0), a2 == 0);
        v5 = BaseAddress;
        if ( v9 >= 0 )
        {
          if ( BaseAddress && *((_WORD *)BaseAddress + 2) )
            SystemDefaultUILanguage = sub_18006DB48(v4, *((_QWORD *)BaseAddress + 3), DefaultUILanguageId);
          else
            SystemDefaultUILanguage = -1073741823;
LABEL_13:
          if ( SystemDefaultUILanguage >= 0 )
            goto LABEL_14;
        }
      }
    }
  }
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, v4);
  if ( SystemDefaultUILanguage < 0 )
    *DefaultUILanguageId = 0;
LABEL_14:
  if ( v5 )
    sub_180040BA0(v5);
  return (unsigned int)SystemDefaultUILanguage;
}
