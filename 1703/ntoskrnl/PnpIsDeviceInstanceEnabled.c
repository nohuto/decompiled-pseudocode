/*
 * XREFs of PnpIsDeviceInstanceEnabled @ 0x1405594C0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14069FAF0 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x14048AF14 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14048AF4C (PnpUnicodeStringToWstr.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140559660 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDevice @ 0x14059AF18 (PnpDisableDevice.c)
 */

__int64 __fastcall PnpIsDeviceInstanceEnabled(void *a1, unsigned __int16 *a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // r14d
  void *v6; // r15
  _QWORD *v7; // rax
  void *v8; // r13
  _DWORD *v9; // rdi
  int v10; // eax
  HANDLE v11; // r8
  char v12; // si
  __int64 v13; // rdx
  char v14; // al
  int v15; // esi
  int v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+44h] [rbp-1Ch] BYREF
  int v19; // [rsp+48h] [rbp-18h] BYREF
  void *v20; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF
  int v22; // [rsp+B0h] [rbp+50h]
  int v23; // [rsp+B8h] [rbp+58h] BYREF

  v22 = a3;
  Handle = a1;
  v3 = 0;
  v17 = 0;
  v20 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x55706E50u);
  v8 = v7;
  if ( v7 )
    v9 = *(_DWORD **)(v7[39] + 40LL);
  else
    v9 = 0LL;
  if ( !v9 || ((v9[99] & 0x2000) == 0 || v9[101] != 22) && ((v9[99] & 0x2000) == 0 || v9[101] != 29) )
  {
    v10 = PnpUnicodeStringToWstr(&v20, 0LL, a2);
    v6 = v20;
    if ( v10 >= 0 )
    {
      v11 = Handle;
      v12 = 1;
      if ( !Handle )
      {
        if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v20, 0x10u, 0, 131097, 0, (__int64)&Handle, 0LL) < 0 )
          goto LABEL_16;
        v11 = Handle;
        v17 = 1;
      }
      v23 = 0;
      v18 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v6,
                  (__int64)v11,
                  11,
                  (__int64)&v19,
                  (__int64)&v23,
                  (__int64)&v18,
                  0) < 0
        || v19 == 4 && v18 == 4 )
      {
        v14 = v23;
      }
      else
      {
        v14 = 0;
        v23 = 0;
      }
      if ( (v14 & 1) != 0 )
      {
        v23 = 1;
      }
      else
      {
        PnpGetDeviceInstanceCsConfigFlags(a2, v13, &v23);
        v12 = v23;
      }
      v15 = v12 & 7;
      LOBYTE(v5) = v15 == 0;
      v3 = v5;
      if ( v15 && v22 && v9 && v9[75] != 769 )
        PnpDisableDevice(v9, 22LL);
      v5 = v17;
    }
  }
LABEL_16:
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x55706E50u);
  if ( v5 )
    ZwClose(Handle);
  if ( v6 )
    PnpUnicodeStringToWstrFree(v6, (__int64)a2);
  return v3;
}
