/*
 * XREFs of VidSchInitializeAdapterPowerManagement @ 0x1C006D990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchInitializeAdapterPowerManagement(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  *(_OWORD *)(a1 + 2848) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 2864) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 2880) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 2896) = *(_OWORD *)(a2 + 48);
  v2 = *(_OWORD *)(a2 + 64);
  *(_BYTE *)(a1 + 2944) = 0;
  *(_OWORD *)(a1 + 2912) = v2;
  result = *(unsigned int *)(a2 + 72);
  *(_QWORD *)(a1 + 2936) = 10000 * result;
  return result;
}
