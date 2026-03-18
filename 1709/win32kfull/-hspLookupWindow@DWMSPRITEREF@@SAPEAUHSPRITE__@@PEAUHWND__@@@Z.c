/*
 * XREFs of ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00920FC
 * Callers:
 *     GreZorderSprite @ 0x1C0091084 (GreZorderSprite.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009205C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00920C0 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSPRITEREF::hspLookupWindow(HWND a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rax
  HWND Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  Buffer[0] = a1;
  if ( g_pDwmState != (struct DwmState *)-72LL )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)g_pDwmState + 72, 0LL);
  }
  v2 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
  if ( v2 )
    v1 = v2[1];
  if ( g_pDwmState != (struct DwmState *)-72LL )
  {
    ExReleasePushLockExclusiveEx((char *)g_pDwmState + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  return v1;
}
