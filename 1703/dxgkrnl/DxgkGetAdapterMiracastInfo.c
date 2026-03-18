/*
 * XREFs of DxgkGetAdapterMiracastInfo @ 0x1C003FF14
 * Callers:
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00D00CC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

void __fastcall DxgkGetAdapterMiracastInfo(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ecx
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  memset(a2, 0, 0x20uLL);
  *((_DWORD *)a2 + 6) |= 0x80u;
  v4 = a2[3] & 0xFFFFFFFE | (*(_DWORD *)(v2 + 3064) != -1);
  *((_DWORD *)a2 + 6) = v4;
  if ( (v4 & 1) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C006FD58, &LockHandle);
    *((_DWORD *)a2 + 6) ^= (*((_DWORD *)a2 + 6) ^ (2 * *(_DWORD *)(v2 + 3060))) & 2;
    v5 = a2[3] & 0xFFFFFFFB | (*(_QWORD *)(v2 + 3072) != 0LL ? 4 : 0);
    *((_DWORD *)a2 + 6) = v5;
    if ( (v5 & 4) != 0 )
    {
      v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3072) + 600LL))) & 8;
      *((_DWORD *)a2 + 6) = v6;
      v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3072) + 600LL))) & 0x10;
      *((_DWORD *)a2 + 6) = v7;
      *((_DWORD *)a2 + 6) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3072) + 600LL))) & 0x20;
      *a2 = *(_QWORD *)(*(_QWORD *)(v2 + 3072) + 608LL);
      a2[1] = *(_QWORD *)(*(_QWORD *)(v2 + 3072) + 616LL);
      a2[2] = *(_QWORD *)(*(_QWORD *)(v2 + 3072) + 624LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    *((_DWORD *)a2 + 6) = v4 & 0xFFFFFFFD;
  }
}
