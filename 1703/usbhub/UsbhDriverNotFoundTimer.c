/*
 * XREFs of UsbhDriverNotFoundTimer @ 0x1C004AEC0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C00022F4 (UsbhQueueWorkItemEx.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 */

__int64 __fastcall UsbhDriverNotFoundTimer(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rax

  v6 = UsbhLatchPdo(a2, a3, 0LL, 0x444E4654u);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 != a4
      || (v8 = PdoExt(a4),
          (int)UsbhQueueWorkItemEx(
                 *((_QWORD *)v8 + 147),
                 1u,
                 (int)UsbhDriverNotFoundWorker,
                 a4,
                 *((unsigned __int16 *)v8 + 710),
                 2001096260,
                 0LL) < 0) )
    {
      UsbhUnlatchPdo(a2, v7, 0LL, 0x444E4654u);
    }
  }
  return 0LL;
}
