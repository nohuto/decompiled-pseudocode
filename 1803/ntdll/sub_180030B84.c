/*
 * XREFs of sub_180030B84 @ 0x180030B84
 * Callers:
 *     sub_1800316A8 @ 0x1800316A8 (sub_1800316A8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_180036BD4 @ 0x180036BD4 (sub_180036BD4.c)
 *     sub_1800378F0 @ 0x1800378F0 (sub_1800378F0.c)
 *     sub_18007C3E8 @ 0x18007C3E8 (sub_18007C3E8.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 *     sub_1800F25F8 @ 0x1800F25F8 (sub_1800F25F8.c)
 */

__int64 __fastcall sub_180030B84(
        wchar_t *String2,
        char a2,
        bool *a3,
        _UNICODE_STRING *a4,
        __int64 a5,
        unsigned __int16 a6)
{
  bool v6; // bl
  bool v11; // zf
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // r13d
  int v20; // r15d
  const WCHAR *v21; // rdx
  __int64 v23; // rax
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rsi
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  int v29; // ecx
  __int16 v30; // r8
  int v31; // eax
  int v32; // [rsp+20h] [rbp-38h]
  _QWORD v33[6]; // [rsp+28h] [rbp-30h] BYREF
  int v34; // [rsp+60h] [rbp+8h]

  v6 = 0;
  v33[0] = 0LL;
  if ( !String2 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  v11 = qword_18015D2B8 == 0;
  *a3 = 0;
  if ( !v11 || (unsigned __int8)sub_18007C3E8() )
  {
    v12 = sub_180036BD4(DefaultLocaleId);
    if ( v12 >= 0 )
    {
      _mm_lfence();
      v13 = *(unsigned __int16 *)(qword_18015D2B8 + 56)
          * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 24) + 8LL * v12 + 4);
      v14 = *(_QWORD *)(qword_18015D2B8 + 16);
      v34 = *(unsigned __int16 *)(v13 + v14 + 110);
      v32 = *(unsigned __int16 *)(v13 + v14 + 112);
      v15 = sub_1800378F0(String2);
      if ( v15 >= 0 )
      {
        _mm_lfence();
        v16 = 149;
        v17 = *(_QWORD *)(qword_18015D2B8 + 16);
        v18 = *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 32) + 8LL * v15 + 2)
            * *(unsigned __int16 *)(qword_18015D2B8 + 56);
        v19 = *(unsigned __int16 *)(v18 + v17 + 112);
        v20 = *(unsigned __int16 *)(v18 + v17 + 110);
        if ( (unsigned int)(v19 - 1250) <= 7 && _bittest(&v16, v19 - 1250)
          || (unsigned int)(v20 - 1250) <= 7 && _bittest(&v16, v20 - 1250) )
        {
          v21 = String2;
LABEL_12:
          *a3 = v6;
          RtlInitUnicodeString(a4, v21);
          return 0LL;
        }
        v23 = *(_QWORD *)(qword_18015D2B8 + 40) + 2LL;
        v24 = (const wchar_t *)(v23 + 2LL * *(unsigned int *)(v18 + v17 + 276));
        if ( a2 && !wcsicmp((const wchar_t *)(v23 + 2LL * *(unsigned int *)(v18 + v17 + 276)), String2) )
        {
          v25 = String2;
LABEL_45:
          v21 = v25;
          goto LABEL_12;
        }
        v25 = L"en-US";
        if ( !wcsicmp(v24, L"en") || !wcsicmp(v24, L"en-US") )
          goto LABEL_42;
        if ( wcsicmp(v24, String2) )
        {
          v26 = sub_1800378F0(v24);
          if ( v26 < 0 )
            goto LABEL_41;
          _mm_lfence();
          v27 = *(unsigned __int16 *)(qword_18015D2B8 + 56)
              * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 32) + 8LL * v26 + 2);
          v28 = *(_QWORD *)(qword_18015D2B8 + 16);
          v20 = *(unsigned __int16 *)(v27 + v28 + 110);
          v19 = *(unsigned __int16 *)(v27 + v28 + 112);
        }
        v29 = sub_1800F25F8(a5, v24, v33);
        if ( !a6 || v29 || a6 == v20 || a6 == v19 )
        {
          if ( v20 == v34 || v20 == v32 || v19 == v34 || v19 == v32 )
            goto LABEL_42;
          if ( v29 )
          {
            if ( v29 != -1 )
            {
              v30 = 0;
              if ( v29 > 0 )
              {
                while ( 1 )
                {
                  if ( *(__int16 *)(v33[0] + 2LL * v30) > 0 )
                  {
                    v31 = *(__int16 *)(v33[0] + 2LL * v30);
                    if ( v31 == v34 || v31 == v32 )
                      goto LABEL_42;
                  }
                  if ( ++v30 >= v29 )
                    goto LABEL_41;
                }
              }
              goto LABEL_41;
            }
LABEL_42:
            if ( wcsicmp(v24, L"en") )
              v25 = v24;
            v6 = wcsicmp(v25, String2) != 0;
            goto LABEL_45;
          }
        }
LABEL_41:
        v24 = L"en-US";
        goto LABEL_42;
      }
      return 3221225711LL;
    }
  }
  return 3221225473LL;
}
