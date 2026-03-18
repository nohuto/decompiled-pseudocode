/*
 * XREFs of PnpGetServiceStartType @ 0x140519C14
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpGetServiceStartType(int a1, void *a2, _DWORD *a3)
{
  int Value; // ebx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  int v16; // [rsp+78h] [rbp+38h]

  Handle[0] = 0LL;
  *a3 = 4;
  if ( (ExpManufacturingInformation & 1) != 0 )
  {
    v8 = qword_1403A36D0;
    if ( qword_1403A36D0 )
    {
      if ( qword_1403A36D0 == -1 )
        goto LABEL_2;
      v10 = 0;
    }
    else
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v9 = **(_QWORD **)&PiPnpRtlCtx;
      else
        LODWORD(v9) = 0;
      v10 = SysCtxRegOpenKey(
              v9,
              -2147483646,
              (unsigned int)L"System\\CurrentControlSet\\Control\\ManufacturingMode\\Current\\Services\\",
              0,
              131097,
              (__int64)&qword_1403A36D0);
      if ( v10 == -1073741772 )
      {
        v8 = -1;
        qword_1403A36D0 = -1LL;
      }
      else
      {
        v8 = qword_1403A36D0;
      }
    }
    if ( v10 >= 0 )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v11 = **(_QWORD **)&PiPnpRtlCtx;
      else
        LODWORD(v11) = 0;
      if ( (int)SysCtxRegOpenKey(v11, v8, a1, 0, 131097, (__int64)Handle) >= 0 )
      {
        LODWORD(v15) = 4;
        Value = RegRtlQueryValue(Handle[0], (__int64)&v15);
        if ( Value >= 0 && v16 == 4 )
          goto LABEL_5;
      }
      v12 = (__int64)qword_1403A36C8;
      if ( qword_1403A36C8 )
      {
        if ( qword_1403A36C8 == (HANDLE)-1LL )
          goto LABEL_2;
        v13 = 0;
      }
      else
      {
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v12 = **(_QWORD **)&PiPnpRtlCtx;
        v13 = SysCtxRegOpenKey(v12, qword_1403A36D0, (unsigned int)L"*Driver", 0, 131097, (__int64)&qword_1403A36C8);
        if ( v13 == -1073741772 )
        {
          v12 = -1LL;
          qword_1403A36C8 = (HANDLE)-1LL;
        }
        else
        {
          v12 = (__int64)qword_1403A36C8;
        }
      }
      if ( v13 >= 0 )
      {
        LODWORD(v15) = 4;
        Value = RegRtlQueryValue((HANDLE)v12, (__int64)&v15);
        if ( Value >= 0 && v16 == 4 )
          goto LABEL_5;
      }
    }
  }
LABEL_2:
  LODWORD(v15) = 4;
  Value = RegRtlQueryValue(a2, (__int64)&v15);
  if ( Value >= 0 && v16 != 4 )
  {
    Value = -1073741772;
    *a3 = 4;
  }
LABEL_5:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)Value;
}
