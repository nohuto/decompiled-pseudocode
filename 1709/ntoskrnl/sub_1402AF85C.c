/*
 * XREFs of sub_1402AF85C @ 0x1402AF85C
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     KiAccessPage @ 0x1402B1150 (KiAccessPage.c)
 *     KeGuardCheckICall @ 0x1402B1480 (KeGuardCheckICall.c)
 */

int __fastcall sub_1402AF85C(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v3; // ebp
  __int64 *v5; // r14
  const char *v6; // rax
  unsigned __int64 v7; // r8
  int v8; // r9d
  unsigned __int64 v9; // rbx
  char *v10; // rdi
  char v11; // al
  unsigned __int8 CurrentIrql; // r12
  _KPROCESS *v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r15
  char v18; // al
  unsigned __int8 v19; // r12
  _KPROCESS *v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ebp
  char *v28; // rdi
  unsigned __int64 v29; // r12
  char v30; // al
  unsigned __int8 v31; // r15
  _KPROCESS *v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // r8
  char v37; // cl
  _KPROCESS *Process; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // eax
  unsigned __int8 v42; // r15
  __int64 v43; // r8
  __int64 v44; // rax
  int i; // eax
  __int64 v47; // [rsp+28h] [rbp-90h]
  unsigned __int64 v48; // [rsp+30h] [rbp-88h]
  __int64 v49; // [rsp+38h] [rbp-80h] BYREF
  __int64 v50; // [rsp+40h] [rbp-78h]
  __int64 v51; // [rsp+48h] [rbp-70h]
  __int64 v52; // [rsp+50h] [rbp-68h]
  __int64 v53; // [rsp+58h] [rbp-60h]
  __int64 v54; // [rsp+60h] [rbp-58h]
  char v55; // [rsp+C0h] [rbp+8h]
  char *v56; // [rsp+C8h] [rbp+10h]
  char v57; // [rsp+D0h] [rbp+18h]
  unsigned int v58; // [rsp+D8h] [rbp+20h]

  v57 = a3;
  v56 = a2;
  v3 = a3;
  *(_DWORD *)(a1 + 1672) += a3;
  v5 = (__int64 *)a2;
  v6 = a2;
  v7 = (unsigned __int64)&a2[a3];
  if ( (unsigned __int64)a2 < v7 )
  {
    do
    {
      _mm_prefetch(v6, 0);
      v6 += 64;
    }
    while ( (unsigned __int64)v6 < v7 );
  }
  v8 = *(_DWORD *)(a1 + 1652);
  v9 = *(_QWORD *)(a1 + 1656);
  v48 = v9;
  v55 = v8;
  v58 = v3 >> 7;
  if ( v3 >> 7 )
  {
    v10 = a2 - 6;
    do
    {
      v47 = 8LL;
      do
      {
        if ( *v10 == 76
          && v10[1] == -121
          && !v10[2]
          && v10[3] == -104
          && v10[4] == -61
          && ((v11 = v10[5], v11 == -112) || v11 == -15) )
        {
          CurrentIrql = -1;
          v13 = 0LL;
          v14 = __rdtsc();
          v15 = __ROR8__(v14, 3) ^ v14;
          v50 = (v15 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          if ( (((unsigned __int8)v50 ^ (unsigned __int8)v15) & 3u) <= 1 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v13 = (((unsigned __int8)((v15 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)v15) & 3) != 0
                ? KeGetCurrentThread()->ApcState.Process
                : (_KPROCESS *)KeGetCurrentThread();
            if ( _interlockedbittestandset(&v13->Header.Lock, (*(_DWORD *)(a1 + 2008) >> 10) & 0x1F) )
            {
              v13 = 0LL;
              __writecr8(CurrentIrql);
            }
          }
          v16 = KiAccessPage(v10, v5, *v5);
          if ( v13 )
          {
            _InterlockedAnd(&v13->Header.Lock, ~(1 << ((*(_DWORD *)(a1 + 2008) >> 10) & 0x1F)));
            __writecr8(CurrentIrql);
          }
          LOBYTE(v8) = v55;
        }
        else
        {
          v16 = 0LL;
        }
        v17 = __ROL8__(v9 ^ v16, v8);
        if ( *v10 == 76
          && v10[1] == -121
          && !v10[2]
          && v10[3] == -104
          && v10[4] == -61
          && ((v18 = v10[5], v18 == -112) || v18 == -15) )
        {
          v19 = -1;
          v20 = 0LL;
          v21 = __rdtsc();
          v22 = __ROR8__(v21, 3) ^ v21;
          v51 = (v22 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          if ( (((unsigned __int8)v51 ^ (unsigned __int8)v22) & 3u) <= 1 )
          {
            v19 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v20 = (((unsigned __int8)((v22 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)v22) & 3) != 0
                ? KeGetCurrentThread()->ApcState.Process
                : (_KPROCESS *)KeGetCurrentThread();
            if ( _interlockedbittestandset(&v20->Header.Lock, (*(_DWORD *)(a1 + 2008) >> 10) & 0x1F) )
            {
              v20 = 0LL;
              __writecr8(v19);
            }
          }
          v23 = KiAccessPage(v10, v5 + 1, v5[1]);
          if ( v20 )
          {
            _InterlockedAnd(&v20->Header.Lock, ~(1 << ((*(_DWORD *)(a1 + 2008) >> 10) & 0x1F)));
            __writecr8(v19);
          }
          LOBYTE(v8) = v55;
        }
        else
        {
          v23 = 0LL;
        }
        v9 = __ROL8__(v17 ^ v23, v8);
        v5 += 2;
        --v47;
      }
      while ( v47 );
      v24 = __ROL8__(v48 ^ ((char *)v5 - v56), 17);
      v52 = ((v24 ^ v48 ^ ((char *)v5 - v56)) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v25 = v58 - 1;
      v26 = ((unsigned __int8)v8 ^ (unsigned __int8)(v52 ^ v24 ^ v48 ^ ((_BYTE)v5 - (_BYTE)v56))) & 0x3F;
      --v58;
      LOBYTE(v8) = 1;
      if ( v26 )
        LOBYTE(v8) = v26;
      v55 = v8;
    }
    while ( v25 );
    LOBYTE(v3) = v57;
    a2 = v56;
  }
  v27 = v3 & 0x7F;
  if ( v27 >= 8 )
  {
    v28 = a2 - 6;
    v29 = (unsigned __int64)v27 >> 3;
    do
    {
      if ( *v28 == 76
        && v28[1] == -121
        && !v28[2]
        && v28[3] == -104
        && v28[4] == -61
        && ((v30 = v28[5], v30 == -112) || v30 == -15) )
      {
        v31 = -1;
        v32 = 0LL;
        v33 = __rdtsc();
        v34 = __ROR8__(v33, 3);
        v53 = ((v34 ^ v33) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v35 = ((unsigned __int8)v53 ^ (unsigned __int8)(v34 ^ v33)) & 3;
        if ( v35 <= 1 )
        {
          v31 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v32 = v35 ? KeGetCurrentThread()->ApcState.Process : (_KPROCESS *)KeGetCurrentThread();
          if ( _interlockedbittestandset(&v32->Header.Lock, (*(_DWORD *)(a1 + 2008) >> 10) & 0x1F) )
          {
            v32 = 0LL;
            __writecr8(v31);
          }
        }
        v36 = KiAccessPage(v28, v5, *v5);
        if ( v32 )
        {
          _InterlockedAnd(&v32->Header.Lock, ~(1 << ((*(_DWORD *)(a1 + 2008) >> 10) & 0x1F)));
          __writecr8(v31);
        }
        LOBYTE(v8) = v55;
      }
      else
      {
        v36 = 0LL;
      }
      ++v5;
      v9 = __ROL8__(v36 ^ v9, v8);
      v27 -= 8;
      --v29;
    }
    while ( v29 );
  }
  if ( ((unsigned __int16)v5 & 0xFFFu) <= 0xFF8 )
  {
    if ( *(v56 - 6) == 76
      && *(v56 - 5) == -121
      && !*(v56 - 4)
      && *(v56 - 3) == -104
      && *(v56 - 2) == -61
      && ((v37 = *(v56 - 1), v37 == -112) || v37 == -15) )
    {
      Process = 0LL;
      v39 = __rdtsc();
      v40 = __ROR8__(v39, 3);
      v54 = ((v40 ^ v39) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v41 = ((unsigned __int8)v54 ^ (unsigned __int8)(v40 ^ v39)) & 3;
      if ( v41 > 1 )
      {
        v42 = -1;
      }
      else
      {
        v42 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( v41 )
          Process = KeGetCurrentThread()->ApcState.Process;
        else
          Process = (_KPROCESS *)KeGetCurrentThread();
        if ( _interlockedbittestandset(&Process->Header.Lock, (*(_DWORD *)(a1 + 2008) >> 10) & 0x1F) )
        {
          Process = 0LL;
          __writecr8(v42);
        }
      }
      v43 = KiAccessPage(v56 - 6, v5, *v5);
      if ( Process )
      {
        _InterlockedAnd(&Process->Header.Lock, ~(1 << ((*(_DWORD *)(a1 + 2008) >> 10) & 0x1F)));
        __writecr8(v42);
      }
    }
    else
    {
      v43 = 0LL;
    }
    v49 = v43;
    v5 = &v49;
  }
  for ( ; v27; --v27 )
  {
    v44 = *(unsigned __int8 *)v5;
    v5 = (__int64 *)((char *)v5 + 1);
    v9 = __ROL8__(v44 ^ v9, v55);
  }
  for ( i = v9; ; i ^= v9 )
  {
    v9 >>= 31;
    if ( !v9 )
      break;
  }
  return i & 0x7FFFFFFF;
}
