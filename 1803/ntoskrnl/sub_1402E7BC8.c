/*
 * XREFs of sub_1402E7BC8 @ 0x1402E7BC8
 * Callers:
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1402D2010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     KiAccessPage @ 0x1402E94B0 (KiAccessPage.c)
 *     KeGuardCheckICall @ 0x1402E97E0 (KeGuardCheckICall.c)
 */

int __fastcall sub_1402E7BC8(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebp
  _QWORD *v4; // r13
  __int64 *v6; // r14
  unsigned __int64 v7; // r8
  const char *v8; // rax
  int v9; // r8d
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  _BYTE *v12; // rdi
  char v13; // al
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int8 CurrentIrql; // cl
  __int64 v19; // r12
  __int64 v20; // r12
  char v21; // al
  struct _KTHREAD *Process; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned __int8 v26; // cl
  __int64 v27; // rbx
  unsigned __int64 v28; // rcx
  char v29; // al
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // ebp
  _BYTE *v33; // rsi
  unsigned __int64 v34; // r12
  char v35; // al
  unsigned __int8 v36; // r13
  struct _KTHREAD *v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // r8
  _BYTE *v42; // rsi
  char v43; // cl
  struct _KTHREAD *v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // eax
  unsigned __int8 v48; // r12
  __int64 v49; // r8
  __int64 v50; // rax
  int i; // eax
  unsigned __int8 v53; // [rsp+28h] [rbp-A0h]
  unsigned __int8 v54; // [rsp+30h] [rbp-98h]
  __int64 v55; // [rsp+38h] [rbp-90h]
  unsigned __int64 v56; // [rsp+40h] [rbp-88h]
  __int64 v57; // [rsp+48h] [rbp-80h] BYREF
  __int64 v58; // [rsp+50h] [rbp-78h]
  __int64 v59; // [rsp+58h] [rbp-70h]
  __int64 v60; // [rsp+60h] [rbp-68h]
  __int64 v61; // [rsp+68h] [rbp-60h]
  __int64 v62; // [rsp+70h] [rbp-58h]
  char v63; // [rsp+D0h] [rbp+8h]
  char v65; // [rsp+E0h] [rbp+18h]
  unsigned int v66; // [rsp+E8h] [rbp+20h]

  v65 = a3;
  v3 = a3;
  v4 = a2;
  *(_DWORD *)(a1 + 1736) += a3;
  v6 = a2;
  v7 = (unsigned __int64)a2 + a3;
  if ( (unsigned __int64)a2 < v7 )
  {
    v8 = (const char *)a2;
    do
    {
      _mm_prefetch(v8, 0);
      v8 += 64;
    }
    while ( (unsigned __int64)v8 < v7 );
  }
  v9 = *(_DWORD *)(a1 + 1716);
  v10 = *(_QWORD *)(a1 + 1720);
  v56 = v10;
  v63 = v9;
  v11 = 2LL;
  v66 = v3 >> 7;
  if ( v3 >> 7 )
  {
    v12 = (char *)a2 - 6;
    do
    {
      v55 = 8LL;
      do
      {
        if ( *v12 == 76
          && v12[1] == 0x87
          && !v12[2]
          && v12[3] == 0x98
          && v12[4] == 0xC3
          && ((v13 = v12[5], v13 == -112) || v13 == -15) )
        {
          v53 = -1;
          CurrentThread = 0LL;
          v15 = __rdtsc();
          v16 = __ROR8__(v15, 3) ^ v15;
          v58 = (v16 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v17 = ((unsigned __int8)v58 ^ (unsigned __int8)v16) & 3;
          if ( v17 <= 1 )
          {
            CurrentIrql = KeGetCurrentIrql();
            v53 = CurrentIrql;
            __writecr8(2uLL);
            CurrentThread = KeGetCurrentThread();
            if ( v17 )
              CurrentThread = (struct _KTHREAD *)CurrentThread->ApcState.Process;
            if ( _interlockedbittestandset(&CurrentThread->Header.Lock, (*(_DWORD *)(a1 + 2088) >> 10) & 0x1F) )
            {
              CurrentThread = 0LL;
              __writecr8(CurrentIrql);
            }
          }
          v19 = KiAccessPage(v12, v6, *v6, v11);
          if ( CurrentThread )
          {
            _InterlockedAnd(&CurrentThread->Header.Lock, ~(1 << ((*(_DWORD *)(a1 + 2088) >> 10) & 0x1F)));
            __writecr8(v53);
          }
          LOBYTE(v9) = v63;
        }
        else
        {
          v19 = 0LL;
        }
        v20 = __ROL8__(v10 ^ v19, v9);
        if ( *v12 == 76
          && v12[1] == 0x87
          && !v12[2]
          && v12[3] == 0x98
          && v12[4] == 0xC3
          && ((v21 = v12[5], v21 == -112) || v21 == -15) )
        {
          v54 = -1;
          Process = 0LL;
          v23 = __rdtsc();
          v24 = __ROR8__(v23, 3) ^ v23;
          v59 = (v24 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v25 = ((unsigned __int8)v59 ^ (unsigned __int8)v24) & 3;
          if ( v25 <= 1 )
          {
            v26 = KeGetCurrentIrql();
            v54 = v26;
            __writecr8(2uLL);
            Process = KeGetCurrentThread();
            if ( v25 )
              Process = (struct _KTHREAD *)Process->ApcState.Process;
            if ( _interlockedbittestandset(&Process->Header.Lock, (*(_DWORD *)(a1 + 2088) >> 10) & 0x1F) )
            {
              Process = 0LL;
              __writecr8(v26);
            }
          }
          v27 = KiAccessPage(v12, v6 + 1, v6[1], v11);
          if ( Process )
          {
            _InterlockedAnd(&Process->Header.Lock, ~(1 << ((*(_DWORD *)(a1 + 2088) >> 10) & 0x1F)));
            __writecr8(v54);
          }
          LOBYTE(v9) = v63;
        }
        else
        {
          v27 = 0LL;
        }
        v10 = __ROL8__(v20 ^ v27, v9);
        v6 += 2;
        --v55;
      }
      while ( v55 );
      v4 = a2;
      v28 = __ROL8__(v56 ^ ((char *)v6 - (char *)a2), 17) ^ v56 ^ ((char *)v6 - (char *)a2);
      v60 = (v28 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v29 = v9 ^ v60 ^ v28;
      LOBYTE(v9) = 1;
      v30 = v29 & 0x3F;
      if ( v30 )
        LOBYTE(v9) = v30;
      v31 = v66-- == 1;
      v63 = v9;
    }
    while ( !v31 );
    LOBYTE(v3) = v65;
    v63 = v9;
  }
  v32 = v3 & 0x7F;
  if ( v32 >= 8 )
  {
    v33 = (char *)v4 - 6;
    v34 = (unsigned __int64)v32 >> 3;
    do
    {
      if ( *v33 == 76
        && v33[1] == 0x87
        && !v33[2]
        && v33[3] == 0x98
        && v33[4] == 0xC3
        && ((v35 = v33[5], v35 == -112) || v35 == -15) )
      {
        v36 = -1;
        v37 = 0LL;
        v38 = __rdtsc();
        v39 = __ROR8__(v38, 3);
        v61 = ((v39 ^ v38) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v40 = ((unsigned __int8)v61 ^ (unsigned __int8)(v39 ^ v38)) & 3;
        if ( v40 <= 1 )
        {
          v36 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v37 = KeGetCurrentThread();
          if ( v40 )
            v37 = (struct _KTHREAD *)v37->ApcState.Process;
          if ( _interlockedbittestandset(&v37->Header.Lock, (*(_DWORD *)(a1 + 2088) >> 10) & 0x1F) )
          {
            v37 = 0LL;
            __writecr8(v36);
          }
        }
        v41 = KiAccessPage(v33, v6, *v6, 2LL);
        if ( v37 )
        {
          _InterlockedAnd(&v37->Header.Lock, ~(1 << ((*(_DWORD *)(a1 + 2088) >> 10) & 0x1F)));
          __writecr8(v36);
        }
      }
      else
      {
        v41 = 0LL;
      }
      v10 = __ROL8__(v41 ^ v10, v63);
      ++v6;
      v32 -= 8;
      --v34;
    }
    while ( v34 );
    v4 = a2;
  }
  if ( ((unsigned __int16)v6 & 0xFFFu) <= 0xFF8 )
  {
    v42 = (char *)v4 - 6;
    if ( *((_BYTE *)v4 - 6) == 76
      && v42[1] == 0x87
      && !v42[2]
      && v42[3] == 0x98
      && v42[4] == 0xC3
      && ((v43 = v42[5], v43 == -112) || v43 == -15) )
    {
      v44 = 0LL;
      v45 = __rdtsc();
      v46 = __ROR8__(v45, 3);
      v62 = ((v46 ^ v45) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v47 = ((unsigned __int8)v62 ^ (unsigned __int8)(v46 ^ v45)) & 3;
      if ( v47 > 1 )
      {
        v48 = -1;
      }
      else
      {
        v48 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v44 = KeGetCurrentThread();
        if ( v47 )
          v44 = (struct _KTHREAD *)v44->ApcState.Process;
        if ( _interlockedbittestandset(&v44->Header.Lock, (*(_DWORD *)(a1 + 2088) >> 10) & 0x1F) )
        {
          v44 = 0LL;
          __writecr8(v48);
        }
      }
      v49 = KiAccessPage((char *)v4 - 6, v6, *v6, 2LL);
      if ( v44 )
      {
        _InterlockedAnd(&v44->Header.Lock, ~(1 << ((*(_DWORD *)(a1 + 2088) >> 10) & 0x1F)));
        __writecr8(v48);
      }
    }
    else
    {
      v49 = 0LL;
    }
    v57 = v49;
    v6 = &v57;
  }
  for ( ; v32; --v32 )
  {
    v50 = *(unsigned __int8 *)v6;
    v6 = (__int64 *)((char *)v6 + 1);
    v10 = __ROL8__(v50 ^ v10, v63);
  }
  for ( i = v10; ; i ^= v10 )
  {
    v10 >>= 31;
    if ( !v10 )
      break;
  }
  return i & 0x7FFFFFFF;
}
