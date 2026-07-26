/*
 * XREFs of ndisMOidRequestToRequest @ 0x1C0044C04
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000D160 (ndisMDoOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqDL @ 0x1C0042E00 (WPP_SF_qqDL.c)
 *     ndisTraceDpcEnd @ 0x1C004FA5C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004FB40 (ndisTraceDpcStart.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 Clock; // rbp
  unsigned int v6; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  char v13; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v15; // rax
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // rbp
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  unsigned int i; // [rsp+88h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 32);
  Clock = 0LL;
  v6 = -1073741823;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(69LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v2);
  if ( *(_DWORD *)(a2 + 4) == 12 )
  {
    v6 = -1073741637;
    goto LABEL_33;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    v8[8] = *(_DWORD *)(a2 + 4);
    v8[10] = *(_DWORD *)(a2 + 32);
    *((_QWORD *)v8 + 6) = *(_QWORD *)(a2 + 40);
    v8[14] = *(_DWORD *)(a2 + 48);
    v8[15] = *(_DWORD *)(a2 + 52);
    v11 = *(_DWORD *)(a2 + 56);
    v8[6] |= 0x400u;
    v8[16] = v11;
    *((_QWORD *)v8 + 1) = a2;
    v12 = *(_DWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 576) = v8;
    if ( (v12 & 0x20000) != 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 3784) + 288LL))(
             *(_QWORD *)(a1 + 24),
             0LL,
             v8);
LABEL_30:
      if ( v6 != 259 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v20 = *(_DWORD **)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( v20 )
        {
          *(_DWORD *)(a2 + 52) = v20[15];
          *(_DWORD *)(a2 + 56) = v20[16];
          ExFreePoolWithTag(v20, 0);
        }
      }
      goto LABEL_33;
    }
    v13 = 1;
    if ( (v12 & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
      CurrentThread = KeGetCurrentThread();
      for ( *(_DWORD *)(a1 + 1856) = 2299034; ; *(_DWORD *)(a1 + 1856) = 2299035 )
      {
        *(_QWORD *)(a1 + 520) = CurrentThread;
        if ( !*(_BYTE *)(a1 + 89) )
          break;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        for ( i = 0; i < 0x32; ++i )
          ;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        CurrentThread = KeGetCurrentThread();
      }
      *(_BYTE *)(a1 + 89) = 1;
      *(_DWORD *)(a1 + 1860) = 2299035;
      v15 = KeGetCurrentThread();
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      *(_QWORD *)(a1 + 1864) = v15;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      Clock = 0LL;
    }
    if ( HIBYTE(dword_1C0099FD8) )
    {
      ndisTraceDpcStart(a1, 8LL, v9, v10);
      Clock = WmiGetClock(0LL, 0LL);
    }
    else
    {
      v13 = 0;
    }
    v16 = v8[8];
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD *))(*(_QWORD *)(a1 + 3784)
                                                                                            + 208LL))(
                *(_QWORD *)(a1 + 24),
                (unsigned int)v8[10],
                *((_QWORD *)v8 + 6),
                (unsigned int)v8[14],
                v8 + 15,
                v8 + 16);
LABEL_25:
        v6 = v18;
        goto LABEL_26;
      }
      if ( v17 != 1 )
      {
        v6 = -1073741637;
LABEL_26:
        if ( v13 )
        {
          v19 = WmiGetClock(0LL, 0LL);
          ndisTraceDpcEnd(a1, 8LL, v19 - Clock);
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x40000) == 0 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
          *(_BYTE *)(a1 + 89) = 0;
          *(_QWORD *)(a1 + 1856) = 0LL;
          *(_QWORD *)(a1 + 1864) = 0LL;
          *(_QWORD *)(a1 + 520) = 0LL;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        }
        goto LABEL_30;
      }
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD *))(*(_QWORD *)(a1 + 3784) + 176LL))(
            *(_QWORD *)(a1 + 24),
            (unsigned int)v8[10],
            *((_QWORD *)v8 + 6),
            (unsigned int)v8[14],
            v8 + 15,
            v8 + 16);
    goto LABEL_25;
  }
LABEL_33:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v23) = v6;
    LODWORD(v22) = v2;
    WPP_SF_qqDL(0x46u, a2, a1, a2, v22, v23);
  }
  return v6;
}
