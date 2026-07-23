/*
 * XREFs of sub_18004A7E4 @ 0x18004A7E4
 * Callers:
 *     sub_180046F10 @ 0x180046F10 (sub_180046F10.c)
 * Callees:
 *     sub_1800456A4 @ 0x1800456A4 (sub_1800456A4.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800462C0 @ 0x1800462C0 (sub_1800462C0.c)
 *     sub_180080990 @ 0x180080990 (sub_180080990.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 *     sub_1800F5068 @ 0x1800F5068 (sub_1800F5068.c)
 */

__int64 __fastcall sub_18004A7E4(
        wchar_t *String2,
        char a2,
        bool *a3,
        _UNICODE_STRING *a4,
        __int64 a5,
        unsigned __int16 a6)
{
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // r9d
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // r15d
  int v19; // ebp
  const WCHAR *v20; // rdx
  __int64 v22; // rax
  wchar_t *v23; // rbx
  const wchar_t *v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  int v29; // ecx
  __int16 v30; // r8
  int v31; // eax
  int v32; // [rsp+20h] [rbp-38h]
  _QWORD v33[6]; // [rsp+28h] [rbp-30h] BYREF
  int v34; // [rsp+60h] [rbp+8h]

  v33[0] = 0LL;
  if ( !String2 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  v10 = qword_18015C278 == 0;
  *a3 = 0;
  if ( !v10 || (unsigned __int8)sub_180080990() )
  {
    v11 = sub_1800456A4(DefaultLocaleId);
    if ( v11 >= 0 )
    {
      _mm_lfence();
      v12 = *(unsigned __int16 *)(*(_QWORD *)(qword_18015C278 + 24) + 8LL * v11 + 4)
          * *(unsigned __int16 *)(qword_18015C278 + 56);
      v13 = *(_QWORD *)(qword_18015C278 + 16);
      v34 = *(unsigned __int16 *)(v12 + v13 + 110);
      v32 = *(unsigned __int16 *)(v12 + v13 + 112);
      v14 = sub_1800462C0(String2);
      if ( v14 >= 0 )
      {
        _mm_lfence();
        v15 = 149;
        v16 = *(_QWORD *)(qword_18015C278 + 16);
        v17 = *(unsigned __int16 *)(*(_QWORD *)(qword_18015C278 + 32) + 8LL * v14 + 2)
            * *(unsigned __int16 *)(qword_18015C278 + 56);
        v18 = *(unsigned __int16 *)(v17 + v16 + 112);
        v19 = *(unsigned __int16 *)(v17 + v16 + 110);
        if ( (unsigned int)(v18 - 1250) <= 7 && _bittest(&v15, v18 - 1250)
          || (unsigned int)(v19 - 1250) <= 7 && _bittest(&v15, v19 - 1250) )
        {
          *a3 = 0;
          v20 = String2;
LABEL_12:
          RtlInitUnicodeString(a4, v20);
          return 0LL;
        }
        v22 = *(_QWORD *)(qword_18015C278 + 40) + 2LL;
        v23 = (wchar_t *)(v22 + 2LL * *(unsigned int *)(v17 + v16 + 276));
        if ( a2 && !wcsicmp((const wchar_t *)(v22 + 2LL * *(unsigned int *)(v17 + v16 + 276)), String2) )
        {
          v24 = String2;
          *a3 = 0;
LABEL_45:
          v20 = v24;
          goto LABEL_12;
        }
        v24 = L"en-US";
        if ( !wcsicmp(v23, L"en") || !wcsicmp(v23, L"en-US") )
          goto LABEL_42;
        if ( wcsicmp(v23, String2) )
        {
          v25 = sub_1800462C0(v23);
          if ( v25 < 0 )
            goto LABEL_41;
          _mm_lfence();
          v26 = *(unsigned __int16 *)(*(_QWORD *)(qword_18015C278 + 32) + 8LL * v25 + 2)
              * *(unsigned __int16 *)(qword_18015C278 + 56);
          v27 = *(_QWORD *)(qword_18015C278 + 16);
          v19 = *(unsigned __int16 *)(v26 + v27 + 110);
          v18 = *(unsigned __int16 *)(v26 + v27 + 112);
        }
        v28 = sub_1800F5068(a5, v23, v33);
        v29 = v28;
        if ( !a6 || v28 || a6 == v19 || a6 == v18 )
        {
          if ( v19 == v34 || v19 == v32 || v18 == v34 || v18 == v32 )
            goto LABEL_42;
          if ( v28 )
          {
            if ( v28 != -1 )
            {
              v30 = 0;
              if ( v28 > 0 )
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
            if ( wcsicmp(v23, L"en") )
              v24 = v23;
            *a3 = wcsicmp(v24, String2) != 0;
            goto LABEL_45;
          }
        }
LABEL_41:
        v23 = L"en-US";
        goto LABEL_42;
      }
      return 3221225711LL;
    }
  }
  return 3221225473LL;
}
