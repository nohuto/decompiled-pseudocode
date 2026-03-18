/*
 * XREFs of UsbhGetTopOfBusStack @ 0x1C0023664
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhReferenceListAdd @ 0x1C0023920 (UsbhReferenceListAdd.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0023F60 (UsbhSyncSendInternalIoctl.c)
 */

__int64 __fastcall UsbhGetTopOfBusStack(__int64 a1)
{
  _DWORD *v2; // rax
  volatile __int64 *v3; // rdi
  int v4; // esi
  __int64 v6; // r9
  PVOID v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v2 = FdoExt(a1);
  v3 = (volatile __int64 *)v2;
  if ( (v2[640] & 1) != 0 )
  {
    v7 = (PVOID)*((_QWORD *)v2 + 151);
    UsbhReferenceListAdd(a1, v7, 1918062420LL);
    ObfReferenceObject(v7);
    v6 = _InterlockedExchange64(v3 + 152, (__int64)v7);
    Log(a1, 8, 1920091215, v6, (__int64)v7);
    v4 = 0;
  }
  else
  {
    v4 = UsbhSyncSendInternalIoctl(a1, 2228239LL, &Object, &v7);
    if ( v4 >= 0 )
    {
      UsbhReferenceListAdd(a1, v7, 1918062420LL);
      _InterlockedExchange64(v3 + 152, (__int64)v7);
      ObfDereferenceObject(Object);
    }
  }
  Log(a1, 8, 1733313615, v4, (__int64)v7);
  return (unsigned int)v4;
}
