/*
 * XREFs of ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x18009B370
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180088920 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall HeatDeviceCollection::SendHeatDeviceCommand(__int64 this, int a2, _QWORD *a3, unsigned int *a4)
{
  __int64 v5; // rsi
  int DeviceId; // eax
  unsigned int v7; // edi
  int v8; // r9d
  _DWORD *v9; // rcx
  _QWORD v11[6]; // [rsp+50h] [rbp-30h] BYREF
  int v12; // [rsp+B0h] [rbp+30h] BYREF
  struct RIMDevice *v13; // [rsp+B8h] [rbp+38h] BYREF

  v13 = 0LL;
  v12 = 0;
  v5 = this;
  if ( a3 )
  {
    DeviceId = RIMDeviceCollection::FindDeviceId((RIMDeviceCollection *)this, a2, &v13, a4);
    v7 = DeviceId;
    if ( DeviceId < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v7;
      v8 = 212;
      goto LABEL_4;
    }
    if ( *(_DWORD *)a3 == 1 )
    {
      RIMDeviceIoControl(
        *(_QWORD *)(v5 + 80),
        *((_QWORD *)v13 + 2),
        *((unsigned int *)a3 + 2),
        a3[2],
        *((_DWORD *)a3 + 6),
        a3[4],
        *((_DWORD *)a3 + 10),
        &v12,
        0);
      v9 = (_DWORD *)a3[6];
      if ( v9 )
        *v9 = v12;
    }
    else
    {
      this = (unsigned int)(*(_DWORD *)a3 - 2);
      if ( *(_DWORD *)a3 == 2 )
      {
        *(_QWORD *)a3[1] = *((_QWORD *)v13 + 2);
        return v7;
      }
      if ( *(_DWORD *)a3 != 3 )
      {
        LOBYTE(DeviceId) = 87;
        v7 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v7;
        v8 = 268;
        goto LABEL_4;
      }
      memset(v11, 0, 0x28uLL);
      if ( (int)RIMGetDeviceProperties(*(_QWORD *)(v5 + 80), *((_QWORD *)v13 + 2), v11) >= 0 )
      {
        *(_QWORD *)a3[1] = v11[1];
        *(_DWORD *)(a3[1] + 8LL) = v11[2];
      }
    }
  }
  else
  {
    LOBYTE(DeviceId) = 87;
    v7 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 206;
LABEL_4:
      McTemplateU0qqq(this, &MinInput_Warning_CheckResult, 0, v8, DeviceId);
    }
  }
  return v7;
}
