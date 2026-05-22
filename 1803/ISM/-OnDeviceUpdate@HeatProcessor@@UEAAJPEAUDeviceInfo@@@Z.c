/*
 * XREFs of ?OnDeviceUpdate@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800397E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceUpdate(HeatProcessor *this, struct DeviceInfo *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int16 v5; // [rsp+24h] [rbp-34h]
  __int16 v6; // [rsp+26h] [rbp-32h]
  __int16 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+2Ch] [rbp-2Ch]
  __int64 v9; // [rsp+3Ch] [rbp-1Ch]
  int v10; // [rsp+44h] [rbp-14h]

  result = 0LL;
  if ( *((_DWORD *)a2 + 1) == 2048 )
  {
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
    {
      if ( *((_BYTE *)a2 + 42) == 1 )
      {
        v4 = *(_DWORD *)a2;
        v5 = *((_WORD *)a2 + 18);
        v6 = *((_WORD *)a2 + 19);
        v7 = *((_WORD *)a2 + 20);
        v9 = *((_QWORD *)a2 + 3);
        v10 = *((_DWORD *)a2 + 8);
        v8 = 1;
        return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 40LL))(v3, &v4);
      }
    }
  }
  return result;
}
