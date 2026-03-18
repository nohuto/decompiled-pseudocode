/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0033C70
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C520 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000C7F0 (VidSchiLogInterrupt.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = 0LL;
  v7 = 4016;
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, (__int64)&EventProfilerEnter, a3, 4016);
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[72])(&v7, 4016LL);
  VidSchiLogInterrupt(*(_QWORD *)(*a1 + 528), a1[1], 0);
  VidSchDdiNotifyInterruptWorker(*a1, a1[1], 0LL);
  ((void (__fastcall *)(int *))DxgCoreInterface[73])(&v7);
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, (__int64)&EventProfilerExit, v5, v7);
  return 1;
}
