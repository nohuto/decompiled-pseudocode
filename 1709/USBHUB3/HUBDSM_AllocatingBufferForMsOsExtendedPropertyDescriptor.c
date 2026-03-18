/*
 * XREFs of HUBDSM_AllocatingBufferForMsOsExtendedPropertyDescriptor @ 0x1C001DBD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBDSM_AllocatingBufferForMsOsExtendedPropertyDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  PVOID PoolWithTag; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)(v1 + 1732), 0x64334855u);
  *(_QWORD *)(v1 + 2112) = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x3Cu,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
    v2 = -1073741823;
  }
  return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
}
