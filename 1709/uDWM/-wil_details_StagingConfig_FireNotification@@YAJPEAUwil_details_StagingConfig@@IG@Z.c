/*
 * XREFs of ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IG@Z @ 0x1800689E0
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180031720 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x180034364 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800467B0 (_alloca_probe.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180068734 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 */

__int64 __fastcall wil_details_StagingConfig_FireNotification(
        struct wil_details_StagingConfig *a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3)
{
  __int64 v3; // rbx
  __int16 v4; // si
  int v5; // r14d
  const struct __WIL__WNF_TYPE_ID *v7; // r9
  unsigned int i; // edi
  unsigned int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rcx
  _WORD *v13; // rax
  void *v15; // [rsp+20h] [rbp-E0h]
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v18[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v20[2046]; // [rsp+54h] [rbp-ACh] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v4 = (__int16)a3;
  v5 = (int)a2;
  LODWORD(v7) = 0;
  for ( i = 0; i < *(unsigned __int16 *)(*((_QWORD *)a1 + 3) + 6LL); ++i )
  {
    if ( *(_DWORD *)(v3 + 16LL * i) == v5 && *(_WORD *)(v3 + 16LL * i + 12) == v4 )
    {
      v18[0] = *(_DWORD *)(v3 + 16LL * i + 4);
      v18[1] = *(_DWORD *)(v3 + 16LL * i + 8);
      do
      {
        v16 = 4096;
        v9 = wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)v18, a2, a3, &v17, &v19, &v16);
        v7 = (const struct __WIL__WNF_TYPE_ID *)v9;
        if ( !v9 )
        {
          v10 = v16;
          v11 = 0;
          if ( (v16 & 7) != 0 )
            v10 = 0;
          v16 = v10;
          v12 = v10 >> 3;
          if ( (_DWORD)v12 )
          {
            v13 = v20;
            while ( *((_DWORD *)v13 - 1) != v5 || *v13 != v4 )
            {
              ++v11;
              v13 += 4;
              if ( v11 >= (unsigned int)v12 )
                goto LABEL_13;
            }
          }
          else
          {
LABEL_13:
            if ( (unsigned __int64)v10 + 8 <= 0x1000 )
            {
              v10 += 8;
              *(_DWORD *)&v20[4 * v12 - 2] = v5;
              v16 = v10;
              v20[4 * v12] = v4;
            }
          }
          LODWORD(v7) = wil_details_NtUpdateWnfStateData(
                          (const struct __WIL__WNF_STATE_NAME *)v18,
                          &v19,
                          v10,
                          v7,
                          v15,
                          v17,
                          1u);
        }
      }
      while ( (_DWORD)v7 == -1073741823 );
    }
  }
  return (unsigned int)v7;
}
