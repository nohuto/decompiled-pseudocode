/*
 * XREFs of AudioVolumeDisconnect @ 0x18002EE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x180017FD0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeDisconnect(CVolumeStrip **a1)
{
  CVolumeStrip *v1; // rbx
  __int64 (__fastcall *v3)(CVolumeStrip *); // rax

  v1 = *a1;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids, v1);
  }
  v3 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v1 + 16LL);
  if ( v3 == CVolumeStrip::Release )
    CVolumeStrip::Release(v1);
  else
    v3(v1);
  *a1 = 0LL;
  return 0LL;
}
