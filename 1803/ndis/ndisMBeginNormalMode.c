/*
 * XREFs of ndisMBeginNormalMode @ 0x1C0024E7C
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMBeginNormalMode(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // al
  __int64 (__usercall *v4)@<rax>(struct _NDIS_FILTER_BLOCK *@<rcx>, struct _NET_BUFFER_LIST *@<rdx>, KIRQL); // r8

  v1 = (KSPIN_LOCK *)(a1 + 3184);
  *(_BYTE *)(a1 + 1995) = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 3184));
  v4 = (__int64 (__usercall *)@<rax>(struct _NDIS_FILTER_BLOCK *@<rcx>, struct _NET_BUFFER_LIST *@<rdx>, KIRQL))ndisMIndicateReceiveNblsWithThrottling;
  if ( *(_DWORD *)(a1 + 3176) != 1 )
    v4 = ndisMDispatchReceiveNetBufferLists;
  *(_BYTE *)(a1 + 2673) = *(_DWORD *)(a1 + 3176) != 1;
  *(_QWORD *)(a1 + 2144) = v4;
  *(_QWORD *)(a1 + 3192) = 0LL;
  *(_DWORD *)(a1 + 3200) = 0;
  *(_QWORD *)(a1 + 2152) = ndisMDispatchReceiveNetBufferLists;
  KeReleaseSpinLock(v1, v3);
}
