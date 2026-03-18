/*
 * XREFs of VidSchiEnsureVSyncEnabled @ 0x1C0076C30
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006BD0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     VidSchIsVSyncEnabled @ 0x1C0056B50 (VidSchIsVSyncEnabled.c)
 */

char __fastcall VidSchiEnsureVSyncEnabled(__int64 a1, __int64 a2)
{
  bool v4; // si
  __int64 v5; // r14
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r10
  unsigned int v12; // r9d
  bool v13; // zf
  int v14; // ecx
  void (__fastcall *v15)(_QWORD); // rax
  void (__fastcall *v16)(_QWORD); // rax

  v4 = *(_QWORD *)(a1 + 96) != 0LL;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(unsigned int *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 96) )
  {
    if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(*(_QWORD *)(v5 + 8 * v6 + 3032) + 28128LL) != -1 )
    {
      v15 = *(void (__fastcall **)(_QWORD))(v5 + 2888);
      if ( v15 )
        v15(*(_QWORD *)(v5 + 2952));
    }
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x1000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v5 + 8LL * *(unsigned int *)(a1 + 388) + 3032) + 28128LL) != -1 )
  {
    v16 = *(void (__fastcall **)(_QWORD))(v5 + 2888);
    if ( v16 )
      v16(*(_QWORD *)(v5 + 2952));
  }
  if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(a1 + 160) != -1 )
  {
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
      v10 = *(_QWORD *)(v9 + 104);
    else
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 8LL);
    v11 = *(_QWORD *)(v10 + 32);
    if ( (*(_DWORD *)(a1 + 72) & 0x800000) != 0 )
      v12 = ((unsigned __int16)*(_DWORD *)(a1 + 768) | (unsigned __int16)(*(_DWORD *)(a1 + 768) >> 10)) & 0x3FF;
    else
      v12 = (1 << *(_DWORD *)(v11 + 132)) - 1;
    v13 = !_BitScanForward((unsigned int *)&v14, v12);
    if ( v13 )
      LOBYTE(v14) = -1;
    while ( v12 )
    {
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v11 + 8LL * *(unsigned int *)(a1 + 160) + 3032) + 216LL * (char)v14 + 144),
        1u);
      v12 &= ~(1 << v14);
      v13 = !_BitScanForward((unsigned int *)&v14, v12);
      if ( v13 )
        LOBYTE(v14) = -1;
    }
  }
  v7 = *(_DWORD *)(a1 + 72);
  if ( (v7 & 0x1000) != 0 && ((v7 & 0x400) == 0 || (v7 & 0x800) != 0) && (_DWORD)v6 != -1 )
  {
    if ( (v7 & 0x40000) != 0 )
    {
      if ( (v7 & 0x1000000) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 976));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 1212));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1148));
        v7 = *(_DWORD *)(a2 + 48);
        if ( (v7 & 2) != 0 || *(int *)(a1 + 392) >= 4 || *(_BYTE *)(v5 + 136) )
LABEL_30:
          LOBYTE(v7) = VidSchIsVSyncEnabled(v5, (unsigned int)v6);
      }
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1084));
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL)
                                 + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                     + 8 * v6
                     + 520);
      if ( (*(_DWORD *)(a1 + 72) & 0x80u) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v6 + 6248) + 8LL));
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v7 = *(_DWORD *)(a1 + 72);
      if ( (v7 & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 976));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 1212));
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1148));
        if ( v4 )
        {
          v7 = *(_DWORD *)(a2 + 48);
          if ( (v7 & 2) != 0 || *(int *)(a1 + 392) >= 4 || *(_BYTE *)(v5 + 136) )
            goto LABEL_30;
        }
      }
    }
  }
  return v7;
}
