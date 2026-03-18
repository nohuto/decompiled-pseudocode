/*
 * XREFs of DrvPVPGetFirstActiveMonitor @ 0x1C00FA10C
 * Callers:
 *     GetCertificateLengthAndMonitorPDO @ 0x1C00ED750 (GetCertificateLengthAndMonitorPDO.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0061520 (UpdateMonitorDevices.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00F6ED4 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 */

__int64 __fastcall DrvPVPGetFirstActiveMonitor(struct _UNICODE_STRING *a1, __int64 a2, PVOID *a3)
{
  __int64 result; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r10
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  UpdateMonitorDevices();
  result = DrvGetDeviceFromNameAndValidateDevice(a1, 1, (struct tagGRAPHICS_DEVICE **)&Object);
  if ( (int)result >= 0 )
  {
    v6 = Object;
    v7 = 0LL;
    if ( *((_DWORD *)Object + 56) )
    {
      while ( 1 )
      {
        v8 = v6[29];
        if ( (*(_DWORD *)(v8 + 20 * v7) & 1) != 0
          && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PVOID *))qword_1C018BB90)(
                    v8 + 8 + 20 * v7,
                    *(unsigned int *)(v8 + 20 * v7 + 4),
                    &Object,
                    a3) >= 0 )
        {
          break;
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)v6 + 56) )
          return 3223193061LL;
      }
      ObfReferenceObject(*a3);
      ObfDereferenceObject(Object);
      return 0LL;
    }
    else
    {
      return 3223193061LL;
    }
  }
  return result;
}
