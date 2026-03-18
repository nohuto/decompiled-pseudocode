/*
 * XREFs of VidSchiExecuteMmIoFlipAtISR @ 0x1C00125F0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C0014C5C (VidSchiUpdateCurrentIsrFrameTime.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall VidSchiExecuteMmIoFlipAtISR(_QWORD *a1)
{
  unsigned int *v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx

  v2 = (unsigned int *)(a1 + 1);
  *((_DWORD *)a1 + 530) = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[23])(
                            *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 2304LL),
                            a1 + 1);
  if ( (a1[70] & 2) != 0 )
  {
    VidSchiUpdateCurrentIsrFrameTime(*a1, *(_QWORD *)(*a1 + 8LL * *v2 + 3008), 0LL);
    v4 = *v2;
    v5 = *a1;
    a1[266] = *(_QWORD *)(*(_QWORD *)(*a1 + 8 * v4 + 3008) + 23528LL);
    *((_DWORD *)a1 + 531) = *(_DWORD *)(*(_QWORD *)(v5 + 8 * v4 + 3008) + 23536LL);
  }
  return 1;
}
