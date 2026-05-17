/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x18006EA40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetSystemDefaultUILanguage @ 0x1800311A0 (RtlpGetSystemDefaultUILanguage.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18006EB70 @ 0x18006EB70 (sub_18006EB70.c)
 *     sub_18006EC30 @ 0x18006EC30 (sub_18006EC30.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *a1, char a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 v7; // rdx
  int v8; // eax
  int SystemDefaultUILanguage; // esi
  unsigned __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    *a1 = 0;
    v6 = RtlpCreateProcessRegistryInfo(&v12);
    v4 = v12;
    if ( v6 >= 0 && (int)sub_18003185C(a2, v12) >= 0 )
    {
      if ( NtCurrentTeb()->UserPrefLanguages )
        v7 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
      else
        v7 = 0LL;
      v4 = v12;
      v11 = v7;
      if ( v7 )
      {
        if ( *(_WORD *)(v7 + 4) )
        {
          SystemDefaultUILanguage = sub_18006EC30(v12, *(_QWORD *)(v7 + 24), a1);
          if ( SystemDefaultUILanguage >= 0 )
            goto LABEL_13;
        }
        v11 = 0LL;
      }
      v8 = sub_18006EB70(v4, 0, (unsigned int)&v11, 3 - (unsigned int)(a2 != 0), a2 == 0);
      v5 = v11;
      if ( v8 >= 0 )
      {
        if ( v11 && *(_WORD *)(v11 + 4) )
          SystemDefaultUILanguage = sub_18006EC30(v4, *(_QWORD *)(v11 + 24), a1);
        else
          SystemDefaultUILanguage = -1073741823;
LABEL_13:
        if ( SystemDefaultUILanguage >= 0 )
          goto LABEL_14;
      }
    }
  }
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(a1, v4);
  if ( SystemDefaultUILanguage < 0 )
    *a1 = 0;
LABEL_14:
  if ( v5 )
    sub_180032CEC(v5);
  return (unsigned int)SystemDefaultUILanguage;
}
