/*
 * XREFs of ?OnDeviceAttach@MouseDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A590
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall MouseDeviceCollection::OnDeviceAttach(
        MouseDeviceCollection *this,
        __int64 a2,
        struct DeviceInfo **a3)
{
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  __int64 v6; // rcx

  v4 = 0;
  v5 = operator new(0xA40uLL);
  memset(v5, 0, 0xA40uLL);
  if ( v5 )
  {
    v5[1] = 2;
    *a3 = (struct DeviceInfo *)v5;
  }
  else
  {
    v4 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 106, 14);
  }
  return v4;
}
