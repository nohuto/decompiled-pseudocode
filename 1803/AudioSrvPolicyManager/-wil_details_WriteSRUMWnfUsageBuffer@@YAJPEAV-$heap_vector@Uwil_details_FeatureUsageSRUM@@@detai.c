/*
 * XREFs of ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180004468
 * Callers:
 *     _lambda_02deec49ef48fa12c9095208f5992a62_::_lambda_invoker_cdecl_ @ 0x180007FB0 (_lambda_02deec49ef48fa12c9095208f5992a62_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x1800038C0 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180003958 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180036250 (_alloca_probe.c)
 */

__int64 __fastcall wil_details_WriteSRUMWnfUsageBuffer(
        __int64 *a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3)
{
  unsigned int v4; // edi
  unsigned int updated; // ebx
  int v6; // esi
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // r10d
  __int64 v11; // rbx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  void *v15; // [rsp+20h] [rbp-E0h]
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17[3]; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v18[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0;
  updated = 0;
  if ( (unsigned __int64)(a1[1] - *a1) >= 0xC )
  {
    v6 = 0;
    do
    {
      v16 = 4096;
      v4 = wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&unk_18003CE70, a2, a3, v17, v18, &v16);
      if ( !v4 )
      {
        v7 = v16;
        v8 = *a1;
        if ( v16 != 12 * (v16 / 0xCuLL) )
          v7 = 0LL;
        v9 = a1[1];
        v16 = v7;
        v10 = (unsigned int)v7 / 0xC;
        v11 = v8 + 12 * ((v9 - v8) / 0xCuLL);
        while ( v8 != v11 )
        {
          v12 = &v18[3 * v10];
          if ( v18 == v12 )
          {
LABEL_12:
            if ( (unsigned __int64)(unsigned int)v7 + 12 <= 0x1000 )
            {
              v7 = (unsigned int)(v7 + 12);
              *(_QWORD *)v12 = *(_QWORD *)v8;
              ++v10;
              v12[2] = *(_DWORD *)(v8 + 8);
              v16 = v7;
            }
          }
          else
          {
            v13 = v18;
            while ( *v13 != *(_DWORD *)v8 || *((_WORD *)v13 + 2) != *(_WORD *)(v8 + 4) )
            {
              v13 += 3;
              if ( v13 == v12 )
                goto LABEL_12;
            }
            v13[2] += *(_DWORD *)(v8 + 8);
            v7 = v16;
          }
          v8 += 12LL;
        }
        updated = wil_details_NtUpdateWnfStateData(
                    (const struct __WIL__WNF_STATE_NAME *)&unk_18003CE70,
                    v18,
                    v7,
                    (const struct __WIL__WNF_TYPE_ID *)v7,
                    v15,
                    v17[0],
                    1u);
      }
      ++v6;
    }
    while ( updated == -1073741823 && v6 < 100 && !v4 );
  }
  if ( v4 )
    return v4;
  return updated;
}
