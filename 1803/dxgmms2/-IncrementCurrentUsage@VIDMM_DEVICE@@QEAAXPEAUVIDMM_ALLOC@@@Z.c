/*
 * XREFs of ?IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007A890
 * Callers:
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007A8E8 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::IncrementCurrentUsage(VIDMM_DEVICE *this, __int64 **a2)
{
  __int64 v2; // r10
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx

  v2 = **a2;
  v3 = HIWORD(*(_DWORD *)(v2 + 76));
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 296LL * (*(_DWORD *)(v2 + 76) & 0x3F);
  if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (v3 & 0xF) == 2 )
    v5 = 0LL;
  else
    v5 = v3 & 0xF;
  *(_QWORD *)(v4 + 8 * v5 + 72) += *(_QWORD *)(v2 + 16);
  v6 = (unsigned __int8)HIBYTE(*(_WORD *)(v2 + 76)) >> 4;
  *(_QWORD *)(v4 + 8 * v6 + 136) += *(_QWORD *)(v2 + 16);
}
