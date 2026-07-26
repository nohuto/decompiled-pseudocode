/*
 * XREFs of ndisMOidRequestToRequest @ 0x1C0045DD4
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqDL @ 0x1C0043EEC (WPP_SF_qqDL.c)
 *     ndisTraceDpcEnd @ 0x1C00503A4 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050488 (ndisTraceDpcStart.c)
 */

__int64 __fastcall ndisMOidRequestToRequest(__int64 a1, __int64 a2)
{
  int v2; // r15d
  unsigned int v5; // esi
  __int64 Clock; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rsi
  int v12; // eax
  char v13; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rax
  _DWORD *v22; // r14
  __int64 v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+28h] [rbp-40h]
  unsigned int v26; // [rsp+78h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 32);
  v5 = -1073741823;
  Clock = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(0x45u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, *(_DWORD *)(a2 + 32));
  if ( *(_DWORD *)(a2 + 4) == 12 )
  {
    v5 = -1073741637;
    goto LABEL_32;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    v8[8] = *(_DWORD *)(a2 + 4);
    v11 = (char *)(v8 + 16);
    v8[10] = *(_DWORD *)(a2 + 32);
    *((_QWORD *)v8 + 6) = *(_QWORD *)(a2 + 40);
    v8[14] = *(_DWORD *)(a2 + 48);
    v8[15] = *(_DWORD *)(a2 + 52);
    v8[16] = *(_DWORD *)(a2 + 56);
    v8[6] |= 0x400u;
    *((_QWORD *)v8 + 1) = a2;
    v12 = *(_DWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 576) = v8;
    if ( (v12 & 0x20000) != 0 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 3784) + 288LL))(
             *(_QWORD *)(a1 + 24),
             0LL,
             v8);
LABEL_29:
      if ( v5 != 259 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v22 = *(_DWORD **)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( v22 )
        {
          *(_DWORD *)(a2 + 52) = v22[15];
          *(_DWORD *)(a2 + 56) = v22[16];
          ExFreePoolWithTag(v22, 0);
        }
      }
      goto LABEL_32;
    }
    v13 = 1;
    if ( (v12 & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
      CurrentThread = KeGetCurrentThread();
      for ( *(_DWORD *)(a1 + 1856) = 2299029; ; *(_DWORD *)(a1 + 1856) = 2299030 )
      {
        *(_QWORD *)(a1 + 520) = CurrentThread;
        if ( !*(_BYTE *)(a1 + 89) )
          break;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v26 = 0;
        do
          ++v26;
        while ( v26 < 0x32 );
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        CurrentThread = KeGetCurrentThread();
      }
      *(_BYTE *)(a1 + 89) = 1;
      *(_DWORD *)(a1 + 1860) = 2299030;
      v15 = KeGetCurrentThread();
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1856) = 0;
      *(_QWORD *)(a1 + 1864) = v15;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      v11 = (char *)(v8 + 16);
    }
    if ( HIBYTE(dword_1C009AF18) )
    {
      ndisTraceDpcStart(a1, 8LL);
      Clock = WmiGetClock(0LL, 0LL, v16, v17);
    }
    else
    {
      v13 = 0;
    }
    v18 = v8[8];
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, char *))(*(_QWORD *)(a1 + 3784)
                                                                                          + 208LL))(
                *(_QWORD *)(a1 + 24),
                (unsigned int)v8[10],
                *((_QWORD *)v8 + 6),
                (unsigned int)v8[14],
                v8 + 15,
                v11);
LABEL_24:
        v5 = v20;
        goto LABEL_25;
      }
      if ( v19 != 1 )
      {
        v5 = -1073741637;
LABEL_25:
        if ( v13 )
        {
          v21 = WmiGetClock(0LL, 0LL, v9, v10);
          ndisTraceDpcEnd(a1, 8LL, v21 - Clock);
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
        goto LABEL_29;
      }
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, char *))(*(_QWORD *)(a1 + 3784) + 176LL))(
            *(_QWORD *)(a1 + 24),
            (unsigned int)v8[10],
            *((_QWORD *)v8 + 6),
            (unsigned int)v8[14],
            v8 + 15,
            v11);
    goto LABEL_24;
  }
LABEL_32:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v25) = v5;
    LODWORD(v24) = v2;
    WPP_SF_qqDL(0x46u, a2, a1, a2, v24, v25);
  }
  return v5;
}
