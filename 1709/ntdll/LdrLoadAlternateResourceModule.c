/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x180081AB0
 * Callers:
 *     <none>
 * Callees:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800200E4 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpGetRcConfig @ 0x18002A8F0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x18002CBD0 (LdrpSetThreadPreferredLangList.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrpCompareServiceChecksum @ 0x180081CA4 (LdrpCompareServiceChecksum.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModule(__int64 a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // rbx
  int v7; // esi
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  __int64 v10; // r12
  unsigned int v11; // ecx
  char v12; // al
  unsigned int v13; // r8d
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned __int16 v15; // bx
  unsigned int v16; // r14d
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned __int16 v19; // dx
  int AlternateResourceModule; // eax
  _DWORD *RcConfig; // rax
  char v23; // al
  _WORD *v24; // rax
  bool v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-CCh]
  unsigned __int16 v27[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-C4h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  unsigned int v30; // [rsp+48h] [rbp-B8h]
  unsigned int v31; // [rsp+4Ch] [rbp-B4h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v35[64]; // [rsp+70h] [rbp-90h] BYREF

  v26 = 0;
  v32 = a1;
  v6 = a1;
  v30 = a4;
  memset(v35, 0, sizeof(v35));
  v7 = -1073020927;
  v31 = 0;
  v8 = 0LL;
  v29 = 0LL;
  v9 = 0LL;
  v28 = 0;
  v10 = 0LL;
  if ( !v6 || !a2 )
    return 3221225485LL;
  v25[0] = 0;
  while ( 2 )
  {
    v11 = v26;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = v11 + 1;
          if ( !v11 )
            break;
          if ( v11 != 1 )
            goto LABEL_19;
          RcConfig = LdrpGetRcConfig(v6, v8, 1, 1);
          v11 = v26;
          v8 = v29;
          v9 = RcConfig;
          if ( RcConfig )
          {
            if ( *RcConfig == -20054323 && (RcConfig[6] & 2) != 0 )
            {
              if ( RcConfig[31] )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
                v23 = RtlCultureNameToLCID(&DestinationString.Length, &v33);
                v11 = v26;
                v8 = v29;
                if ( v23 )
                {
                  v16 = v30;
                  v15 = v33;
                  v27[0] = v33;
                  if ( (v30 & 0x80u) == 0 && (v9[5] & 0x100) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(v26, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v27, v25);
                    v11 = v26;
                    if ( v25[0] )
                      v15 = -4370;
                    else
                      v15 = v27[0];
                  }
                  goto LABEL_12;
                }
              }
            }
          }
        }
        v27[0] = 0;
        v12 = LdrpSetThreadPreferredLangList();
        v13 = v28;
        if ( v12
          && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages, v28 < MergedPrefLanguages[2]) )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            (__int64)MergedPrefLanguages,
            (__int64)NtCurrentTeb()->MergedPrefLanguages,
            v28,
            v27,
            v25);
          v13 = v28;
          v15 = v27[0];
        }
        else
        {
          v15 = 0;
        }
        v11 = v26;
        v8 = v29;
        if ( !v15 )
          goto LABEL_23;
        if ( (v30 & 0x80u) == 0 && v25[0] )
        {
          if ( (v9 || (v9 = LdrpGetRcConfig(v32, v29, 0, 1)) != 0LL) && *v9 == -20054323 )
          {
            v13 = v28;
            if ( (v9[5] & 0x100) != 0 )
              v15 = -4370;
          }
          else
          {
            v13 = v28;
          }
        }
        v11 = 0;
        v16 = v30;
        v28 = v13 + 1;
        v26 = 0;
LABEL_12:
        v8 = v29;
        if ( v15 == 0xEEEE )
          goto LABEL_23;
        v17 = v31;
        v18 = 0;
        if ( !v31 )
          break;
        v24 = v35;
        while ( 1 )
        {
          v8 = v29;
          if ( *v24 == v15 )
            break;
          ++v18;
          ++v24;
          if ( v18 >= v31 )
            goto LABEL_14;
        }
        v11 = v26;
LABEL_23:
        v6 = v32;
      }
LABEL_14:
      if ( v31 >= 0x40 )
        goto LABEL_18;
      v35[v31] = v15;
      v19 = v15;
      v6 = v32;
      v31 = v17 + 1;
      AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v32, v19, a2, a3, v16);
      v11 = v26;
      v8 = v29;
      v7 = AlternateResourceModule;
    }
    while ( AlternateResourceModule < 0 );
    if ( (v16 & 0x80u) == 0 )
      goto LABEL_19;
    if ( !(unsigned __int8)LdrpCompareServiceChecksum(v6, *a2) )
    {
      if ( v10 )
      {
        v8 = v29;
      }
      else
      {
        v10 = *a2;
        if ( a3 )
          v8 = *a3;
        else
          v8 = 0LL;
        v29 = v8;
      }
      v7 = -1073020927;
      continue;
    }
    break;
  }
LABEL_18:
  v8 = v29;
LABEL_19:
  if ( v7 < 0 && (v30 & 0x80u) != 0 && v10 )
  {
    *a2 = v10;
    if ( a3 )
      *a3 = v8;
    return 0;
  }
  return (unsigned int)v7;
}
