/*
 * XREFs of ndisCoIndicateStatusInternal @ 0x1C01091F4
 * Callers:
 *     NdisMCoIndicateStatus @ 0x1C0108F50 (NdisMCoIndicateStatus.c)
 *     NdisMCoIndicateStatusEx @ 0x1C0109020 (NdisMCoIndicateStatusEx.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000E7D0 (NdisReleaseRWLock.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0019200 (ndisWriteWmiStatusIndication.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AE78 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00211E4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCoIndicateStatusInternal(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int *Src; // r14
  int v7; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 i; // rdi
  __int64 v21; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a3 + 20);
  Src = *(int **)(a3 + 48);
  v7 = *(_DWORD *)(a3 + 56);
  if ( (unsigned __int8)byte_1C009261A >= 4u )
    WPP_SF_(0x37u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
  v9 = a2 + 296;
  if ( !a2 )
    v9 = *(_QWORD *)(a1 + 3880);
  if ( v9 )
    ndisWriteWmiStatusIndication(a1, v9, a3, v3, Src, v7);
  if ( v3 == 1073807371 )
  {
    v11 = *(_QWORD *)(a1 + 4064);
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
    *(_DWORD *)(v11 + 1220) = 1;
  }
  else
  {
    if ( v3 != 1073807372 )
      goto LABEL_12;
    v10 = *(_QWORD *)(a1 + 4064);
    *(_DWORD *)(a1 + 120) &= ~0x20000000u;
    *(_DWORD *)(v10 + 1220) = 2;
  }
  *(_DWORD *)(a1 + 120) |= 0x4000000u;
LABEL_12:
  if ( a2 )
  {
    v12 = *(_QWORD **)(a2 + 72);
    v13 = v12[4];
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 80);
      v15 = *(_QWORD *)(v14 + 24);
      if ( *(_BYTE *)(v15 + 56) >= 6u && *(_QWORD *)(v15 + 192) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v15 + 192))(*(_QWORD *)(v14 + 32), *(_QWORD *)(a2 + 24), a3);
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, int))(v15 + 192))(
          *(_QWORD *)(v14 + 32),
          *(_QWORD *)(a2 + 24),
          v3,
          Src,
          v7);
    }
    v16 = v12[5];
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 80);
      v18 = *(_QWORD *)(v17 + 24);
      if ( *(_BYTE *)(v18 + 56) >= 6u && *(_QWORD *)(v18 + 192) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v18 + 192))(*(_QWORD *)(v17 + 32), v12[3], a3);
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, int))(v18 + 192))(
          *(_QWORD *)(v17 + 32),
          v12[3],
          v3,
          Src,
          v7);
    }
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 400);
    if ( v19 )
    {
      NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v19 + 288), &LockState, 0);
      for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 392) )
      {
        if ( (*(_DWORD *)(i + 224) & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)(i + 24) + 192LL) )
        {
          ndisMReferenceOpen(i);
          v21 = *(_QWORD *)(i + 24);
          if ( *(_BYTE *)(v21 + 56) >= 6u && *(_QWORD *)(v21 + 192) )
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v21 + 192))(*(_QWORD *)(i + 32), 0LL, a3);
          else
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, int))(v21 + 192))(
              *(_QWORD *)(i + 32),
              0LL,
              v3,
              Src,
              v7);
          ndisMDereferenceOpenUnlocked(i, 17);
        }
      }
      NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(*(_QWORD *)(a1 + 400) + 288LL), &LockState);
    }
  }
  if ( (unsigned __int8)byte_1C009261A >= 4u )
    WPP_SF_(0x38u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
}
