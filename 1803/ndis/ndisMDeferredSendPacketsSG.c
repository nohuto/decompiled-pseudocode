/*
 * XREFs of ndisMDeferredSendPacketsSG @ 0x1C0055930
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisMFreeSGList @ 0x1C004CA6C (ndisMFreeSGList.c)
 *     ndisFreePaddedMdl @ 0x1C0054F38 (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C00567A0 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C005694C (ndisMSendCompletePacketToNetBufferLists.c)
 */

char __fastcall ndisMDeferredSendPacketsSG(__int64 a1)
{
  unsigned int v1; // r12d
  int v3; // eax
  __int64 v4; // r10
  __int64 *v6; // rbp
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // eax
  char v13; // al
  __int64 v14; // rcx
  struct _NDIS_STACK_RESERVED *v15; // r15
  __int64 v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 *v20; // r12
  unsigned int v21; // ebp
  __int64 v22; // rdi
  unsigned int v23; // r14d
  struct _NDIS_STACK_RESERVED *v24; // r15
  __int64 v25; // r13
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // [rsp+20h] [rbp-D8h]
  struct _NDIS_STACK_RESERVED *v35; // [rsp+28h] [rbp-D0h] BYREF
  void (__fastcall *v36)(_QWORD, _QWORD *, _QWORD); // [rsp+30h] [rbp-C8h]
  _QWORD v37[16]; // [rsp+40h] [rbp-B8h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 538);
  v34 = v1;
  v36 = *(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(a1 + 1808);
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_q(0x26u, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1);
  v3 = *(_DWORD *)(a1 + 120);
  v4 = 0LL;
  if ( (v3 & 0x400000) == 0 && !*(_QWORD *)(a1 + 144) )
    *(_DWORD *)(a1 + 120) = v3 | 0x400000;
  if ( *(_QWORD *)(a1 + 128) == a1 + 128 )
  {
    *(_QWORD *)(a1 + 144) = 0LL;
    goto LABEL_8;
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
LABEL_12:
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) == 0 )
      goto LABEL_8;
    v6 = v37;
    v7 = v4;
    if ( !v1 )
      goto LABEL_8;
    do
    {
      v8 = *(_QWORD *)(a1 + 144);
      if ( !v8 )
        break;
      NDIS_STACK_RESERVED_FROM_PACKET(*(struct _NDIS_PACKET **)(a1 + 144), &v35);
      v9 = v8 + 64;
      *(_QWORD *)(a1 + 144) = v4;
      v10 = *(_QWORD *)(v8 + 64);
      if ( v10 != v11 )
        *(_QWORD *)(a1 + 144) = v10 - 64;
      if ( ((v12 = *(_DWORD *)(a1 + 120), (v12 & 0x4000) != 0) || (v12 & 0x8800000) != 0 && *(_BYTE *)(v8 + 36) >= 0)
        && (v13 = ndisMLoopbackPacketX(a1, v8), v4 = 0LL, v13) )
      {
        v14 = *(_QWORD *)v9;
        v15 = v35;
        v16 = *(_QWORD *)v35;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v17 = *(_QWORD **)(v8 + 72), *v17 != v9) )
          __fastfail(3u);
        *v17 = v14;
        *(_QWORD *)(v14 + 8) = v17;
        *(_QWORD *)(v8 + 72) = v8 + 64;
        *(_QWORD *)v9 = v9;
        *(_DWORD *)(a1 + 120) |= 0x400000u;
        *(_QWORD *)v15 = 1297040178LL;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_QWORD *)(*(unsigned __int16 *)(v8 + 42) + v8 + 80) )
          ndisMFreeSGList(a1, v8, v18);
        *((_DWORD *)v15 + 2) = 0;
        if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v8 + 42) + v8 + 128) )
          ndisFreePaddedMdl(v8);
        v19 = *(unsigned __int16 *)(v8 + 42);
        *(_BYTE *)(v8 + 41) &= 0xC0u;
        if ( *(_QWORD *)(v19 + v8 + 112) )
          ndisMSendCompletePacketToNetBufferLists(a1, v8, 0LL);
        else
          (*(void (__fastcall **)(__int64, __int64))(v16 + 112))(v16, v8);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v4 = 0LL;
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 1509733;
      }
      else
      {
        *v6 = v8;
        ++v7;
        *(_BYTE *)(v8 + 41) |= 0x18u;
        ++v6;
        *(_DWORD *)(*(unsigned __int16 *)(v8 + 42) + v8 + 32) = v4;
      }
    }
    while ( v7 < v1 );
    if ( !v7 )
      goto LABEL_8;
    *(_QWORD *)(a1 + 520) = v4;
    v20 = v37;
    *(_DWORD *)(a1 + 1856) = v4;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    v36(*(_QWORD *)(a1 + 24), v37, v7);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    v4 = 0LL;
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    v21 = 0;
    *(_DWORD *)(a1 + 1856) = 1509778;
    while ( 1 )
    {
      v22 = *v20;
      v23 = *(_DWORD *)(*(unsigned __int16 *)(*v20 + 42) + *v20 + 32);
      *(_BYTE *)(*v20 + 41) &= ~8u;
      if ( v23 != 259 )
      {
        if ( v23 == -1073741670 )
        {
          *(_DWORD *)(a1 + 120) &= ~0x400000u;
          *(_QWORD *)(a1 + 144) = v22;
          if ( v21 < v7 )
          {
            v31 = v7 - v21;
            v32 = &v37[v21];
            do
            {
              v33 = *v32++;
              *(_BYTE *)(v33 + 41) &= ~0x10u;
              --v31;
            }
            while ( v31 );
          }
LABEL_54:
          if ( *(_QWORD *)(a1 + 144) == v4 )
            break;
          v1 = v34;
          goto LABEL_12;
        }
        NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)v22, &v35);
        v24 = v35;
        v25 = *(_QWORD *)v35;
        if ( (*(_QWORD *)v35 & 0xFFFFFF00LL) != 0x4D4F4300 )
        {
          v26 = (_QWORD *)(v22 + 64);
          v27 = *(_QWORD *)(v22 + 64);
          if ( *(_QWORD *)(v27 + 8) != v22 + 64 || (v28 = *(_QWORD **)(v22 + 72), (_QWORD *)*v28 != v26) )
            __fastfail(3u);
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          *(_QWORD *)(v22 + 72) = v22 + 64;
          *v26 = v26;
          *(_DWORD *)(a1 + 120) |= 0x400000u;
          *(_QWORD *)v24 = 1297040179LL;
          *(_QWORD *)(a1 + 520) = v4;
          *(_DWORD *)(a1 + 1856) = v4;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
          if ( *(_QWORD *)(*(unsigned __int16 *)(v22 + 42) + v22 + 80) )
            ndisMFreeSGList(a1, v22, v29);
          *((_DWORD *)v24 + 2) = 0;
          if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v22 + 42) + v22 + 128) )
            ndisFreePaddedMdl(v22);
          v30 = *(unsigned __int16 *)(v22 + 42);
          *(_BYTE *)(v22 + 41) &= 0xC0u;
          if ( *(_QWORD *)(v30 + v22 + 112) )
            ndisMSendCompletePacketToNetBufferLists(a1, v22, v23);
          else
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(v25 + 112))(v25, v22, v23);
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
          v4 = 0LL;
          *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
          *(_DWORD *)(a1 + 1856) = 1509805;
        }
      }
      ++v21;
      ++v20;
      if ( v21 >= v7 )
        goto LABEL_54;
    }
  }
LABEL_8:
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_q(0x27u, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1);
  return 0;
}
