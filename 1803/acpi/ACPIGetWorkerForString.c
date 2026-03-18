/*
 * XREFs of ACPIGetWorkerForString @ 0x1C0001F70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C00020B0 (ACPIGetConvertToHardwareIDWide.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     ACPIGetConvertToCompatibleID @ 0x1C00254E8 (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0025548 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToDeviceID @ 0x1C0025960 (ACPIGetConvertToDeviceID.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C00259C0 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToHardwareID @ 0x1C0025D98 (ACPIGetConvertToHardwareID.c)
 *     ACPIGetConvertToInstanceID @ 0x1C0025DF8 (ACPIGetConvertToInstanceID.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0025E58 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToPnpID @ 0x1C002604C (ACPIGetConvertToPnpID.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C00260AC (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C00262A0 (ACPIGetConvertToSerialIDWide.c)
 *     ACPIGetConvertToString @ 0x1C0026364 (ACPIGetConvertToString.c)
 *     ACPIGetConvertToStringWide @ 0x1C00263C8 (ACPIGetConvertToStringWide.c)
 */

void __fastcall ACPIGetWorkerForString(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  bool v6; // bp
  int v9; // r9d
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edi
  void (__fastcall *v13)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v14; // al
  _QWORD **v15; // r9
  void **v16; // r8

  v4 = a4[7];
  v6 = a2 >= 0;
  if ( v4 )
  {
    if ( *(_WORD *)(a3 + 2) != 2 || *(_QWORD *)(a3 + 32) && *(_DWORD *)(a3 + 24) )
    {
      v9 = *(_DWORD *)a4;
      v10 = a4[8];
      if ( (v9 & 0x10) != 0 )
      {
        if ( (v9 & 0x20) != 0 )
        {
          v11 = ACPIGetConvertToDeviceIDWide(a4[3], a2, a3, v9, v4, v10);
        }
        else if ( (v9 & 0x40) != 0 )
        {
          v11 = ACPIGetConvertToHardwareIDWide(a4[3], a2, a3, v9, v4, v10);
        }
        else if ( (v9 & 0x80u) == 0 )
        {
          if ( (v9 & 0x200) != 0 )
          {
            v11 = ACPIGetConvertToPnpIDWide(a4[3], a2, a3, v9, v4, v10);
          }
          else if ( (v9 & 0x100) != 0 )
          {
            v11 = ACPIGetConvertToCompatibleIDWide(a4[3], a2, a3, v9, v4, v10);
          }
          else if ( (v9 & 0x2000) != 0 )
          {
            v11 = ACPIGetConvertToSerialIDWide(v10, a2, a3, v9, v4, v10);
          }
          else
          {
            v11 = ACPIGetConvertToStringWide(v10, a2, a3, v9, v4, v10);
          }
        }
        else
        {
          v11 = ACPIGetConvertToInstanceIDWide(a4[3], a2, a3, v9, v4, v10);
        }
      }
      else if ( (v9 & 0x20) != 0 )
      {
        v11 = ACPIGetConvertToDeviceID(a4[3], a2, a3, v9, v4, v10);
      }
      else if ( (v9 & 0x40) != 0 )
      {
        v11 = ACPIGetConvertToHardwareID(a4[3], a2, a3, v9, v4, v10);
      }
      else if ( (v9 & 0x80u) == 0 )
      {
        if ( (v9 & 0x200) != 0 )
        {
          v11 = ACPIGetConvertToPnpID(a4[3], a2, a3, v9, v4, v10);
        }
        else if ( (v9 & 0x100) != 0 )
        {
          v11 = ACPIGetConvertToCompatibleID(a4[3], a2, a3, v9, v4, v10);
        }
        else
        {
          v11 = ACPIGetConvertToString(v10, a2, a3, v9, v4, v10);
        }
      }
      else
      {
        v11 = ACPIGetConvertToInstanceID(a4[3], a2, a3, v9, v4, v10);
      }
      v12 = v11;
    }
    else
    {
      v12 = -1072431089;
    }
  }
  else
  {
    v12 = -1073741670;
  }
  *((_DWORD *)a4 + 18) = v12;
  if ( v6 )
  {
    dword_1C00677B8 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1LL);
  }
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v13 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))a4[5];
    if ( v13 )
      v13(a1, v12, 0LL, a4[6]);
    v14 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v15 = (_QWORD **)a4[1];
    if ( v15[1] != a4 + 1 || (v16 = (void **)a4[2], *v16 != a4 + 1) )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = v16;
    KeReleaseSpinLock(&AcpiGetLock, v14);
    ExFreePoolWithTag(a4, 0);
  }
}
