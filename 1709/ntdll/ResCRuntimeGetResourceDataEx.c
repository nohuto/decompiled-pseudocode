/*
 * XREFs of ResCRuntimeGetResourceDataEx @ 0x18008DD70
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18001AA5C (LdrpGetMUIFromCMFSegment.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     ResCDirectoryGetEntryIndexEx @ 0x18008D9B0 (ResCDirectoryGetEntryIndexEx.c)
 *     ResCHitsEntryHit @ 0x18008DFC8 (ResCHitsEntryHit.c)
 *     ResCRuntimeGetSegmentDataEx @ 0x18008E028 (ResCRuntimeGetSegmentDataEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall ResCRuntimeGetResourceDataEx(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _QWORD *v7; // rsi
  __int64 v9; // r14
  _DWORD *v10; // r14
  int v11; // eax
  int v12; // r13d
  __int64 v13; // rdi
  int EntryIndex; // eax
  int v15; // eax
  _DWORD *v16; // rdi
  __int64 result; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  signed __int32 v27[8]; // [rsp+0h] [rbp-91h] BYREF
  unsigned int v28; // [rsp+30h] [rbp-61h]
  unsigned int v29; // [rsp+34h] [rbp-5Dh]
  unsigned int v30; // [rsp+38h] [rbp-59h]
  __int128 *v31; // [rsp+40h] [rbp-51h]
  __int128 v32; // [rsp+50h] [rbp-41h] BYREF
  _OWORD v33[3]; // [rsp+60h] [rbp-31h] BYREF

  v7 = ResRuntimeView;
  v30 = a3;
  v31 = a2;
  if ( !ResRuntimeView
    || (v9 = *((_QWORD *)ResRuntimeView + 2)) == 0
    || (v10 = *(_DWORD **)(v9 + 24)) == 0LL
    || (a4 & 0xFFFFFF) != 0
    || !(_DWORD)a3 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    goto LABEL_15;
  }
  v11 = v10[12];
  v28 = 0;
  if ( (v11 & 0x100000) == 0 )
  {
    v12 = 3;
    while ( 1 )
    {
      _InterlockedOr(v27, 0);
      v13 = v7[2];
      v29 = v10[4];
      if ( v13 && *(_QWORD *)(v13 + 48) )
      {
        v32 = *a2;
        EntryIndex = ResCDirectoryGetEntryIndexEx(v13, &v32);
        if ( EntryIndex < 0 )
          goto LABEL_11;
        v18 = (_OWORD *)(*(_QWORD *)(v13 + 48) + 48LL * EntryIndex);
      }
      else
      {
        if ( !NtCurrentTeb()->LastErrorValue )
          RtlSetLastWin32Error(87);
        v18 = 0LL;
      }
      if ( v18 )
      {
        v19 = v18[1];
        v33[0] = *v18;
        v20 = v18[2];
        v21 = (__int64)v18 - *(_QWORD *)(v13 + 48);
        v33[1] = v19;
        v33[2] = v20;
        v15 = 1;
        v28 = v21 / 48;
        goto LABEL_12;
      }
LABEL_11:
      v15 = 0;
LABEL_12:
      v16 = (_DWORD *)((unsigned __int64)v33 & -(__int64)(v15 != 0));
      _InterlockedOr(v27, 0);
      if ( v10[6] <= v29 )
      {
        if ( v16 )
          goto LABEL_22;
        if ( v10[5] <= v29 )
          goto LABEL_15;
      }
      a3 = v30;
      a2 = v31;
      if ( !--v12 )
      {
        if ( !v16 )
          goto LABEL_15;
LABEL_22:
        if ( a4 == (*(_DWORD *)(((unsigned __int64)v33 & -(__int64)(v15 != 0)) + 0x2C) & 0xFF000000) )
        {
          v22 = *(_QWORD *)(v7[2] + 64LL);
          if ( v22 )
            ResCHitsEntryHit(v22, v28, a3, 0LL);
          if ( (v10[12] & 0x80000) != 0 )
          {
            if ( a6 )
              *a6 = 0;
            return -3LL;
          }
          else
          {
            if ( a6 )
              *a6 = v16[7];
            if ( a7 )
              *a7 = v16[5];
            v23 = (unsigned int)v16[5];
            if ( *(_QWORD *)(v7[3] + 8 * v23) || (a5 & 0x10) == 0 )
            {
              result = ResCRuntimeGetSegmentDataEx(v7, v23, (unsigned int)v16[6], (unsigned int)v16[7], a5);
              if ( result )
              {
                v24 = *(_QWORD *)(v7[2] + 64LL);
                if ( v24 )
                {
                  v25 = *(_QWORD *)(v24 + 24);
                  if ( v25 )
                    ++*(_QWORD *)(v25 + 24);
                }
              }
            }
            else
            {
              return -2LL;
            }
          }
          return result;
        }
        if ( (*(_DWORD *)(((unsigned __int64)v33 & -(__int64)(v15 != 0)) + 0x2C) & 0x4000000) != 0 )
        {
          v26 = *(_QWORD *)(v7[2] + 64LL);
          if ( v26 )
            ResCHitsEntryHit(v26, v28, a3, 0LL);
        }
LABEL_15:
        if ( a6 )
          *a6 = 0;
        return 0LL;
      }
    }
  }
  if ( a6 )
    *a6 = 0;
  return -1LL;
}
