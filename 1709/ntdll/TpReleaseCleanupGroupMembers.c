/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x180071A00
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

void __fastcall TpReleaseCleanupGroupMembers(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, _PEB_LDR_DATA *Ldr)
{
  int v4; // r15d
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  _QWORD *i; // rax
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int32 *v13; // rcx
  __int64 v14; // rdx
  signed __int32 **v15; // rax
  signed __int32 **v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rax
  signed __int32 v20; // r8d
  bool v21; // zf
  signed __int32 v22; // eax
  _QWORD *v23; // rcx
  _QWORD **v24; // r14
  _QWORD *v25; // rsi
  _QWORD *j; // rax
  volatile signed __int32 *v27; // rbx
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rbx
  signed __int32 *v31; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v32; // [rsp+20h] [rbp-38h]
  _QWORD *v33; // [rsp+28h] [rbp-30h]
  _QWORD *v34; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  if ( !a1 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    if ( !a1 )
      TppRaiseInvalidParameter(0LL, a2, a3, Ldr);
  }
  else
  {
    RtlAcquireSRWLockExclusive(a1 + 56, a2, a3, (__int64)Ldr);
    RtlAcquireSRWLockExclusive(a1 + 8, v6, v7, v8);
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = v33 )
    {
      v10 = (volatile signed __int32 *)(i - 5);
      v31 = (signed __int32 *)(i - 5);
      v33 = (_QWORD *)*i;
      _m_prefetchw(i + 16);
      v11 = *((_DWORD *)i + 32);
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(v10 + 42, v11 | 0x20000, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x30000) != 0 )
      {
        v17 = v31 + 10;
        v18 = *((_QWORD *)v31 + 5);
        v19 = (_QWORD *)*((_QWORD *)v31 + 6);
        if ( *(signed __int32 **)(v18 + 8) != v31 + 10 || (_QWORD *)*v19 != v17 )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        _m_prefetchw(v31);
        v20 = *v31;
        do
        {
          if ( !v20 )
          {
            *((_QWORD *)v31 + 6) = v31 + 10;
            *v17 = v17;
            goto LABEL_12;
          }
          v22 = _InterlockedCompareExchange(v31, v20 + 1, v20);
          v21 = v20 == v22;
          v20 = v22;
        }
        while ( !v21 );
        v23 = *(_QWORD **)(a1 + 72);
        if ( *v23 != a1 + 64 )
          __fastfail(3u);
        *v17 = a1 + 64;
        *((_QWORD *)v31 + 6) = v23;
        *v23 = v17;
        *(_QWORD *)(a1 + 72) = v17;
      }
      else
      {
        *((_QWORD *)v31 + 23) = retaddr;
        v13 = v31 + 10;
        v14 = *((_QWORD *)v31 + 5);
        v15 = (signed __int32 **)*((_QWORD *)v31 + 6);
        if ( *(signed __int32 **)(*(_QWORD *)v13 + 8LL) != v13 || *v15 != v13 )
          __fastfail(3u);
        *v15 = (signed __int32 *)v14;
        *(_QWORD *)(v14 + 8) = v15;
        v16 = *(signed __int32 ***)(a1 + 72);
        if ( *v16 != (signed __int32 *)(a1 + 64) )
          __fastfail(3u);
        *(_QWORD *)v13 = a1 + 64;
        *((_QWORD *)v31 + 6) = v16;
        *v16 = v13;
        *(_QWORD *)(a1 + 72) = v13;
      }
LABEL_12:
      ;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    v24 = (_QWORD **)(a1 + 64);
    v25 = *(_QWORD **)(a1 + 64);
    while ( v25 != v24 )
    {
      v30 = v25 - 5;
      v25 = (_QWORD *)*v25;
      if ( *(_QWORD *)(v30[1] + 16LL) )
        _guard_dispatch_icall_fptr();
      if ( v4 && *(_QWORD *)(v30[1] + 24LL) )
        _guard_dispatch_icall_fptr();
    }
    for ( j = *v24; j != v24; j = v34 )
    {
      v27 = (volatile signed __int32 *)(j - 5);
      v32 = (volatile signed __int32 *)(j - 5);
      v34 = (_QWORD *)*j;
      v28 = (_QWORD *)*j;
      v29 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v29 != j )
        __fastfail(3u);
      *v29 = v28;
      v28[1] = v29;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v27 + 14, 0LL, 1LL);
      if ( *((_QWORD *)v27 + 3) )
      {
        if ( (v27[42] & 0x10000) != 0 )
        {
          v27 = v32;
        }
        else
        {
          v27 = v32;
          _guard_dispatch_icall_fptr();
        }
      }
      if ( _InterlockedExchangeAdd(v27, 0xFFFFFFFF) == 1 )
        _guard_dispatch_icall_fptr();
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    TppBarrierAdjust(a1 + 32, 0LL, 1LL);
  }
}
