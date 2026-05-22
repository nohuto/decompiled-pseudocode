/*
 * XREFs of ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18006C910
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x180076180 (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::SendCommandToInputDevice(
        RIMDeviceCollection **this,
        unsigned int a2,
        const struct DeviceCommandMessage *a3)
{
  unsigned int DeviceId; // ebx
  unsigned int *v6; // r9
  __int64 v7; // r11
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // edx
  unsigned int *v11; // r9
  __int64 v12; // r11
  RIMDeviceCollection *v13; // rcx
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r11
  unsigned int v18; // edx
  unsigned int *v19; // r9
  __int64 v20; // r11
  __int64 v21; // rdi
  __int64 v22; // r14
  _DWORD *v23; // rax
  _BYTE v25[16]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]
  int v27; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct RIMDevice *v29; // [rsp+B0h] [rbp+30h] BYREF
  struct RIMDevice *v30; // [rsp+B8h] [rbp+38h] BYREF

  DeviceId = 0;
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (int)RIMDeviceCollection::FindDeviceId(this[10], a2, &v29, (unsigned int *)(unsigned int)(*(_DWORD *)a3 - 2)) < 0 )
      return DeviceId;
    v21 = *((_QWORD *)a3 + 1);
    v30 = 0LL;
    LODWORD(v29) = 0;
    v22 = *(_QWORD *)(v20 + 80);
    if ( v21 )
    {
      DeviceId = RIMDeviceCollection::FindDeviceId(*(RIMDeviceCollection **)(v20 + 80), v18, &v30, v19);
      if ( (DeviceId & 0x80000000) != 0 )
        return DeviceId;
      switch ( *(_DWORD *)v21 )
      {
        case 1:
          RIMDeviceIoControl(
            *(_QWORD *)(v22 + 80),
            *((_QWORD *)v30 + 2),
            *(unsigned int *)(v21 + 8),
            *(_QWORD *)(v21 + 16),
            *(_DWORD *)(v21 + 24),
            *(_QWORD *)(v21 + 32),
            *(_DWORD *)(v21 + 40),
            &v29,
            0);
          v23 = *(_DWORD **)(v21 + 48);
          if ( v23 )
            *v23 = (_DWORD)v29;
          return DeviceId;
        case 2:
          **(_QWORD **)(v21 + 8) = *((_QWORD *)v30 + 2);
          return DeviceId;
        case 3:
          memset_0(v25, 0, 0x28uLL);
          if ( (int)RIMGetDeviceProperties(*(_QWORD *)(v22 + 80), *((_QWORD *)v30 + 2), v25) >= 0 )
          {
            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 12LL) = v26;
            *(_DWORD *)(*(_QWORD *)(v21 + 8) + 20LL) = v27;
          }
          return DeviceId;
      }
    }
    return (unsigned int)-2147024809;
  }
  if ( *(_DWORD *)a3 == 3 )
  {
    if ( (int)RIMDeviceCollection::FindDeviceId(this[7], a2, &v29, (unsigned int *)(unsigned int)(*(_DWORD *)a3 - 3)) >= 0 )
    {
      LOBYTE(v16) = *((_BYTE *)a3 + 9);
      LOBYTE(v15) = *((_BYTE *)a3 + 8);
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _WORD, __int64))(**(_QWORD **)(*(_QWORD *)(v17 + 56) + 2776LL)
                                                                                       + 64LL))(
             *(_QWORD *)(*(_QWORD *)(v17 + 56) + 2776LL),
             a2,
             v15,
             v16,
             *((_WORD *)a3 + 5),
             (*(_QWORD *)(v17 + 56) + 2760LL) & -(__int64)(*(_QWORD *)(v17 + 56) != 0LL));
      if ( v8 < 0 )
      {
        v9 = 394LL;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v6 = (unsigned int *)(unsigned int)(*(_DWORD *)a3 - 4);
    if ( *(_DWORD *)a3 == 4 )
    {
      if ( (int)RIMDeviceCollection::FindDeviceId(this[11], a2, &v29, v6) >= 0 )
      {
        v13 = *(RIMDeviceCollection **)(v12 + 88);
        v14 = *((_DWORD *)a3 + 2);
        v29 = 0LL;
        DeviceId = RIMDeviceCollection::FindDeviceId(v13, v10, &v29, v11);
        if ( (DeviceId & 0x80000000) == 0 )
          return (unsigned int)GazeHidDevice::TrySetTrackingEnabled(v29, v14 != 0);
      }
    }
    else
    {
      if ( *(_DWORD *)a3 != 5 )
        return (unsigned int)-2147467263;
      if ( (int)RIMDeviceCollection::FindDeviceId(this[7], a2, &v29, v6) >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v7 + 56) + 2776LL) + 72LL))(
               *(_QWORD *)(*(_QWORD *)(v7 + 56) + 2776LL),
               a2,
               (*(_QWORD *)(v7 + 56) + 2760LL) & -(__int64)(*(_QWORD *)(v7 + 56) != 0LL));
        if ( v8 < 0 )
        {
          v9 = 401LL;
LABEL_15:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v9,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
            (const char *)(unsigned int)v8);
        }
      }
    }
  }
  return DeviceId;
}
