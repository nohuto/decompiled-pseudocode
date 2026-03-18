/*
 * XREFs of UsbhDeleteOrphanPdo @ 0x1C0054EC4
 * Callers:
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     SET_PDO_HWPNPSTATE @ 0x1C0043344 (SET_PDO_HWPNPSTATE.c)
 *     UsbhRemoveAndDeletePdo @ 0x1C00565F4 (UsbhRemoveAndDeletePdo.c)
 */

_DWORD *__fastcall UsbhDeleteOrphanPdo(struct _DEVICE_OBJECT *BugCheckParameter4)
{
  _DWORD *v2; // rbx
  _DWORD *result; // rax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  v2 = PdoExt((__int64)BugCheckParameter4);
  result = PdoExt((__int64)BugCheckParameter4);
  if ( result[281] != 6 )
  {
    SET_PDO_HWPNPSTATE((__int64)BugCheckParameter4, 6, 6);
    KeWaitForSingleObject(v2 + 322, Executive, 0, 0, 0LL);
    v4 = (void *)*((_QWORD *)v2 + 142);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)v2 + 142) = 0LL;
    }
    v5 = (void *)*((_QWORD *)v2 + 279);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *((_QWORD *)v2 + 279) = 0LL;
    }
    v6 = (void *)*((_QWORD *)v2 + 354);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *((_QWORD *)v2 + 354) = 0LL;
    }
    v7 = (void *)*((_QWORD *)v2 + 298);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *((_QWORD *)v2 + 298) = 0LL;
    }
    v8 = (void *)*((_QWORD *)v2 + 299);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)v2 + 299) = 0LL;
    }
    v9 = (void *)*((_QWORD *)v2 + 315);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *((_QWORD *)v2 + 315) = 0LL;
    }
    v10 = (void *)*((_QWORD *)v2 + 106);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *((_QWORD *)v2 + 106) = 0LL;
    }
    if ( (v2[354] & 1) != 0 )
    {
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter4, (ULONG_PTR)BugCheckParameter4);
      KeWaitForSingleObject(v2 + 308, Executive, 0, 0, 0LL);
    }
    v2[354] = 16;
    return (_DWORD *)UsbhRemoveAndDeletePdo(BugCheckParameter4);
  }
  return result;
}
