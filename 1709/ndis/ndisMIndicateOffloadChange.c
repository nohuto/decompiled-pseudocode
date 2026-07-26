/*
 * XREFs of ndisMIndicateOffloadChange @ 0x1C0023F24
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

char __fastcall ndisMIndicateOffloadChange(__int64 a1, int a2, _BYTE *a3, unsigned int a4)
{
  char v8; // di
  KIRQL v9; // r12
  _BYTE *v10; // rcx
  size_t v11; // rdi
  int v12; // ebp
  unsigned __int16 v13; // ax
  char v15; // r14
  unsigned __int16 v16; // ax
  __int64 v17; // rax

  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v10 = *(_BYTE **)(a1 + 4120);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2033165;
  if ( v10 && a4 >= 0x70 && *a3 == 0xA7 && *((_WORD *)a3 + 1) >= 0x70u && a3[1] )
  {
    v11 = 188LL;
    v12 = (*(_BYTE *)(a1 + 4984) & 2) != 0 ? -7 : -1;
    if ( a2 == 1073872902 )
    {
      memset(v10 + 8, 0, 0xBCuLL);
      v13 = *((_WORD *)a3 + 1);
      if ( v13 < 0xBCu )
        v11 = v13;
      memmove((void *)(*(_QWORD *)(a1 + 4120) + 8LL), a3, v11);
      *(_DWORD *)(*(_QWORD *)(a1 + 4120) + 116LL) &= v12;
    }
    else
    {
      v15 = v10[680] & 1;
      memset(v10 + 572, 0, 0xBCuLL);
      v16 = *((_WORD *)a3 + 1);
      if ( v16 < 0xBCu )
        v11 = v16;
      memmove((void *)(*(_QWORD *)(a1 + 4120) + 572LL), a3, v11);
      v17 = *(_QWORD *)(a1 + 4120);
      if ( v15 )
        *(_DWORD *)(v17 + 680) |= 1u;
      else
        *(_DWORD *)(v17 + 680) &= ~1u;
      *(_DWORD *)(*(_QWORD *)(a1 + 4120) + 680LL) &= v12;
    }
    v8 = 1;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v9);
  return v8;
}
