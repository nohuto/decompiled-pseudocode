/*
 * XREFs of HvRefreshHive @ 0x140696DF0
 * Callers:
 *     CmpRefreshHive @ 0x14069E158 (CmpRefreshHive.c)
 * Callees:
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpDestroySecurityCache @ 0x140470024 (CmpDestroySecurityCache.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 */

__int64 __fastcall HvRefreshHive(__int64 a1)
{
  __int64 v2; // rax
  int v4; // r14d
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // r9d
  int v8; // esi
  char *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  char *v16; // rax
  __int128 v17; // xmm1
  unsigned int v18; // r8d
  __int64 v19; // rax
  _QWORD *v20; // rcx
  char *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // r9
  _QWORD *v24; // r9
  __int64 v25; // rcx
  char *v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 **v29; // r8
  _DWORD v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  _BYTE v35[352]; // [rsp+90h] [rbp-70h] BYREF

  v30[0] = -1;
  v30[1] = 0;
  memset(v35, 0, sizeof(v35));
  if ( !*(_DWORD *)(a1 + 4088) && !*(_DWORD *)(a1 + 2960) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
           a1,
           *(unsigned int *)(*(_QWORD *)(a1 + 64) + 36LL),
           v30);
    if ( !v2 )
      return 3221225626LL;
    v4 = *(_DWORD *)(v2 + 16);
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v30);
    v5 = *(_QWORD *)(a1 + 2664);
    v34 = 0LL;
    v32 = v5;
    v6 = *(_DWORD *)(a1 + 148);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        *((_QWORD *)&v33 + 1) = 0LL;
        v7 = 1;
        *(_QWORD *)&v33 = *(_QWORD *)(a1 + 2672);
      }
      else
      {
        v7 = 2;
        v33 = *(_OWORD *)(a1 + 2696);
      }
    }
    else
    {
      v7 = 0;
      v33 = 0LL;
    }
    v8 = CmpInitializeHive(
           (ULONG_PTR *)&P,
           2u,
           *(_DWORD *)(a1 + 144) & 0xFFFEFFFF,
           v7,
           0LL,
           (__int64)&v32,
           0LL,
           16777218,
           0LL,
           0LL,
           0LL,
           (__int64)v35);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v9 = (char *)P;
    v10 = *(unsigned int *)(*((_QWORD *)P + 8) + 36LL);
    if ( (_DWORD)v10 == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL) )
    {
      v11 = (*((__int64 (__fastcall **)(PVOID, __int64, _DWORD *))P + 1))(P, v10, v30);
      if ( v11 )
      {
        if ( HvpMarkCellDirty((ULONG_PTR)v9, *(unsigned int *)(*((_QWORD *)v9 + 8) + 36LL), 0) )
        {
          *(_WORD *)(v11 + 2) |= 0xCu;
          *(_DWORD *)(v11 + 16) = v4;
          (*((void (__fastcall **)(char *, _DWORD *))v9 + 2))(v9, v30);
          if ( (unsigned __int8)HvSyncHive((ULONG_PTR)v9) )
          {
            CmpDestroySecurityCache(a1);
            HvFreeHive(a1, 1, v13);
            v14 = 20LL;
            v15 = (_OWORD *)a1;
            v16 = v9;
            do
            {
              *v15 = *(_OWORD *)v16;
              v15[1] = *((_OWORD *)v16 + 1);
              v15[2] = *((_OWORD *)v16 + 2);
              v15[3] = *((_OWORD *)v16 + 3);
              v15[4] = *((_OWORD *)v16 + 4);
              v15[5] = *((_OWORD *)v16 + 5);
              v15[6] = *((_OWORD *)v16 + 6);
              v15 += 8;
              v17 = *((_OWORD *)v16 + 7);
              v16 += 128;
              *(v15 - 1) = v17;
              --v14;
            }
            while ( v14 );
            *v15 = *(_OWORD *)v16;
            v15[1] = *((_OWORD *)v16 + 1);
            v15[2] = *((_OWORD *)v16 + 2);
            v15[3] = *((_OWORD *)v16 + 3);
            v15[4] = *((_OWORD *)v16 + 4);
            v15[5] = *((_OWORD *)v16 + 5);
            *((_QWORD *)v15 + 12) = *((_QWORD *)v16 + 12);
            if ( *((char **)v9 + 176) == v9 + 1416 )
              *(_QWORD *)(a1 + 1408) = a1 + 1416;
            v18 = 0;
            *(_DWORD *)(a1 + 3040) = *((_DWORD *)v9 + 760);
            *(_DWORD *)(a1 + 3044) = *((_DWORD *)v9 + 761);
            *(_DWORD *)(a1 + 3048) = *((_DWORD *)v9 + 762);
            *(_QWORD *)(a1 + 3056) = *((_QWORD *)v9 + 382);
            do
            {
              v19 = 16LL * v18;
              v20 = (_QWORD *)(v19 + a1 + 3064);
              v21 = &v9[v19 + 3064];
              v20[1] = v20;
              *v20 = v20;
              while ( *(char **)v21 != v21 )
              {
                v22 = *(_QWORD **)v21;
                if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 || (v23 = *v22, *(_QWORD **)(*v22 + 8LL) != v22) )
                  __fastfail(3u);
                *(_QWORD *)v21 = v23;
                *(_QWORD *)(v23 + 8) = v21;
                v24 = (_QWORD *)v20[1];
                if ( (_QWORD *)*v24 != v20 )
                  __fastfail(3u);
                *v22 = v20;
                v22[1] = v24;
                *v24 = v22;
                v20[1] = v22;
              }
              ++v18;
            }
            while ( v18 < 0x40 );
            v25 = a1 + 2008;
            *(_QWORD *)(a1 + 2016) = a1 + 2008;
            *(_QWORD *)(a1 + 2008) = a1 + 2008;
            v26 = v9 + 2008;
            *(_QWORD *)(a1 + 2648) = a1 + 2640;
            *(_QWORD *)(a1 + 2640) = a1 + 2640;
            while ( *(char **)v26 != v26 )
            {
              v27 = *(__int64 **)v26;
              if ( *(char **)(*(_QWORD *)v26 + 8LL) != v26 || (v28 = *v27, *(__int64 **)(*v27 + 8) != v27) )
                __fastfail(3u);
              *(_QWORD *)v26 = v28;
              *(_QWORD *)(v28 + 8) = v26;
              v29 = *(__int64 ***)(a1 + 2016);
              if ( *v29 != (__int64 *)v25 )
                __fastfail(3u);
              *v27 = v25;
              v27[1] = (__int64)v29;
              *v29 = v27;
              *(_QWORD *)(a1 + 2016) = v27;
            }
            v8 = 0;
            goto LABEL_43;
          }
        }
        else
        {
          (*((void (__fastcall **)(char *, _DWORD *))v9 + 2))(v9, v30);
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
    CmpDestroySecurityCache((__int64)v9);
    HvFreeHive((__int64)v9, 0, v12);
LABEL_43:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 1374, 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PERESOURCE *)P);
    return (unsigned int)v8;
  }
  return 3221225473LL;
}
