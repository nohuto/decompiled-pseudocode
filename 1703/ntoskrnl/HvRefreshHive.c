/*
 * XREFs of HvRefreshHive @ 0x14066C778
 * Callers:
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 */

__int64 __fastcall HvRefreshHive(__int64 a1)
{
  __int64 v2; // rax
  int v4; // r14d
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // r9d
  int v8; // esi
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  unsigned int v16; // r8d
  __int64 *v17; // rax
  __int64 **v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // r9
  __int64 **v21; // r9
  __int64 v22; // rcx
  __int64 **v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // r8
  __int64 **v26; // r8
  _DWORD v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int128 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  _BYTE v32[352]; // [rsp+90h] [rbp-70h] BYREF

  v27[0] = -1;
  v27[1] = 0;
  memset(v32, 0, sizeof(v32));
  if ( !*(_DWORD *)(a1 + 4088) && !*(_DWORD *)(a1 + 2960) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
           a1,
           *(unsigned int *)(*(_QWORD *)(a1 + 64) + 36LL),
           v27);
    if ( !v2 )
      return 3221225626LL;
    v4 = *(_DWORD *)(v2 + 16);
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v27);
    v5 = *(_QWORD *)(a1 + 2664);
    v31 = 0LL;
    v29 = v5;
    v6 = *(_DWORD *)(a1 + 148);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        *((_QWORD *)&v30 + 1) = 0LL;
        v7 = 1;
        *(_QWORD *)&v30 = *(_QWORD *)(a1 + 2672);
      }
      else
      {
        v7 = 2;
        v30 = *(_OWORD *)(a1 + 2696);
      }
    }
    else
    {
      v7 = 0;
      v30 = 0LL;
    }
    v8 = CmpInitializeHive(
           &BugCheckParameter2,
           2u,
           *(_DWORD *)(a1 + 144) & 0xFFFEFFFF,
           v7,
           0LL,
           (__int64)&v29,
           0LL,
           16777218,
           0LL,
           0LL,
           0LL,
           (__int64)v32);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v9 = BugCheckParameter2;
    v10 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
    if ( (_DWORD)v10 == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL) )
    {
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v10,
              v27);
      if ( v11 )
      {
        if ( HvpMarkCellDirty(v9, *(unsigned int *)(*(_QWORD *)(v9 + 64) + 36LL), 0) )
        {
          *(_WORD *)(v11 + 2) |= 0xCu;
          *(_DWORD *)(v11 + 16) = v4;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v27);
          if ( (unsigned __int8)HvSyncHive(v9) )
          {
            CmpDestroySecurityCache(a1);
            HvFreeHive(a1, 1);
            v12 = 20LL;
            v13 = (_OWORD *)a1;
            v14 = (_OWORD *)v9;
            do
            {
              *v13 = *v14;
              v13[1] = v14[1];
              v13[2] = v14[2];
              v13[3] = v14[3];
              v13[4] = v14[4];
              v13[5] = v14[5];
              v13[6] = v14[6];
              v13 += 8;
              v15 = v14[7];
              v14 += 8;
              *(v13 - 1) = v15;
              --v12;
            }
            while ( v12 );
            *v13 = *v14;
            v13[1] = v14[1];
            v13[2] = v14[2];
            v13[3] = v14[3];
            v13[4] = v14[4];
            v13[5] = v14[5];
            *((_QWORD *)v13 + 12) = *((_QWORD *)v14 + 12);
            if ( *(_QWORD *)(v9 + 1408) == v9 + 1416 )
              *(_QWORD *)(a1 + 1408) = a1 + 1416;
            *(_DWORD *)(a1 + 3040) = *(_DWORD *)(v9 + 3040);
            v16 = 0;
            *(_DWORD *)(a1 + 3044) = *(_DWORD *)(v9 + 3044);
            *(_DWORD *)(a1 + 3048) = *(_DWORD *)(v9 + 3048);
            *(_QWORD *)(a1 + 3056) = *(_QWORD *)(v9 + 3056);
            v17 = (__int64 *)(a1 + 3064);
            do
            {
              v18 = (__int64 **)((char *)v17 + v9 - a1);
              *v17 = (__int64)v17;
              for ( v17[1] = (__int64)v17; ; v17[1] = (__int64)v19 )
              {
                v19 = *v18;
                if ( *v18 == (__int64 *)v18 )
                  break;
                v20 = *v19;
                if ( (__int64 **)v19[1] != v18 || *(__int64 **)(v20 + 8) != v19 )
                  __fastfail(3u);
                *v18 = (__int64 *)v20;
                *(_QWORD *)(v20 + 8) = v18;
                v21 = (__int64 **)v17[1];
                if ( *v21 != v17 )
                  __fastfail(3u);
                *v19 = (__int64)v17;
                v19[1] = (__int64)v21;
                *v21 = v19;
              }
              ++v16;
              v17 += 2;
            }
            while ( v16 < 0x40 );
            v22 = a1 + 2008;
            *(_QWORD *)(a1 + 2016) = a1 + 2008;
            *(_QWORD *)(a1 + 2008) = a1 + 2008;
            v23 = (__int64 **)(v9 + 2008);
            *(_QWORD *)(a1 + 2648) = a1 + 2640;
            *(_QWORD *)(a1 + 2640) = a1 + 2640;
            while ( *v23 != (__int64 *)v23 )
            {
              v24 = *v23;
              v25 = **v23;
              if ( (__int64 **)(*v23)[1] != v23 || *(__int64 **)(v25 + 8) != v24 )
                __fastfail(3u);
              *v23 = (__int64 *)v25;
              *(_QWORD *)(v25 + 8) = v23;
              v26 = *(__int64 ***)(a1 + 2016);
              if ( *v26 != (__int64 *)v22 )
                __fastfail(3u);
              *v24 = v22;
              v24[1] = (__int64)v26;
              *v26 = v24;
              *(_QWORD *)(a1 + 2016) = v24;
            }
            v8 = 0;
            goto LABEL_43;
          }
        }
        else
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v9 + 16))(v9, v27);
        }
        v8 = -1073741443;
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
      v8 = -1073741811;
    }
    CmpDestroySecurityCache(v9);
    HvFreeHive(v9, 0);
LABEL_43:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 5496), 0xFFFFFFFF) == 1 )
      CmpDeleteHive(BugCheckParameter2);
    return (unsigned int)v8;
  }
  return 3221225473LL;
}
