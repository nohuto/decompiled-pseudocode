/*
 * XREFs of ndisSetMiniportPacketFilter @ 0x1C0010784
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00BE170 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 */

char __fastcall ndisSetMiniportPacketFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // r13
  unsigned int v7; // ebp
  KIRQL v8; // r8
  unsigned int *v9; // r15
  unsigned int v10; // edx
  unsigned int v11; // eax
  bool v12; // r14
  bool v13; // zf
  bool v14; // bp
  unsigned int v16; // ebp

  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(97LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
  *a3 = 0;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v7 = **(_DWORD **)(a2 + 40);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2301625;
    if ( !*(_DWORD *)(a1 + 1836) )
      v6 = *(_QWORD *)(a1 + 400);
    v9 = (unsigned int *)(a1 + 160);
    *(_DWORD *)(a1 + 160) = v7;
    if ( v6 )
    {
      v10 = *(_DWORD *)(v6 + 312) & 0xFFFFFF7F;
      v11 = v7;
      if ( (v7 & 0xFFFFFF7F) != v10 )
        v11 = v7 & 0xFFFFFF7F;
      v12 = (v7 & 0xFFFFFF7F) == v10;
      v13 = (*(_DWORD *)(a1 + 120) & 0x20000) == 0;
      *v9 = v11;
      if ( v13 )
        goto LABEL_10;
      v16 = v7 & 0xFFFFFF5F;
      if ( v16 == (*(_DWORD *)(v6 + 312) & 0xFFFFFF5F) )
        goto LABEL_10;
      *v9 = v16;
    }
    v12 = 0;
LABEL_10:
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
    v14 = 0;
    if ( (*(_DWORD *)(a2 + 88) & 0x80000) == 0 )
      v14 = v12;
    if ( v14 )
    {
      if ( !*a3 )
        *(_DWORD *)(a2 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(a2 + 88) |= 0x800u;
      *(_QWORD *)(a1 + 528) = *(_QWORD *)(a2 + 40);
      *(_WORD *)(a1 + 536) = *(_WORD *)(a2 + 48);
      *(_QWORD *)(a2 + 40) = v9;
      *(_DWORD *)(a2 + 48) = 4;
    }
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qdD(99LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, v14, *a3);
    return v14;
  }
  *(_DWORD *)(a2 + 56) = 4;
  *a3 = -1073676268;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_d(98LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, 3221291028LL);
  return 1;
}
