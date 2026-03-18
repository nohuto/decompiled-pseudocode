/*
 * XREFs of GetMonitorPhysicalDimensions @ 0x1C00784F0
 * Callers:
 *     NtGdiGetGammaRampCapability @ 0x1C00764C0 (NtGdiGetGammaRampCapability.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C01060B0 (RIMGetMonitorPhysicalSize.c)
 * Callees:
 *     GetRegEDID @ 0x1C00797B0 (GetRegEDID.c)
 *     UpdateMonitorDevices @ 0x1C007A450 (UpdateMonitorDevices.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetMonitorPhysicalDimensions(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r15
  wchar_t *v9; // rdi
  int v10; // r14d
  unsigned int v11; // ebp
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-278h] BYREF
  PVOID Object; // [rsp+38h] [rbp-270h] BYREF
  __int64 v17; // [rsp+40h] [rbp-268h] BYREF
  _DWORD *v18; // [rsp+48h] [rbp-260h]
  _DWORD *v19; // [rsp+50h] [rbp-258h]
  _BYTE v20[512]; // [rsp+60h] [rbp-248h] BYREF

  v5 = 0;
  v15 = 0LL;
  v19 = a3;
  v18 = a2;
  UpdateMonitorDevices();
  if ( !a1 )
    return (unsigned int)-1073741823;
  v8 = *(_QWORD *)(a1 + 2592);
  if ( !*(_DWORD *)(v8 + 224) )
    return (unsigned int)-1073741810;
  v9 = gpGraphicsDeviceList;
  v10 = 0;
  if ( !gpGraphicsDeviceList )
    return (unsigned int)-1073741810;
  while ( v9 != (wchar_t *)v8 )
  {
LABEL_18:
    v9 = (wchar_t *)*((_QWORD *)v9 + 16);
    if ( !v9 )
      return (unsigned int)-1073741810;
  }
  v11 = 0;
  if ( !*((_DWORD *)v9 + 56) )
  {
LABEL_17:
    if ( v10 )
      return (unsigned int)-1073741823;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)v9 + 29);
    if ( (*(_BYTE *)(v12 + 20LL * v11) & 3) != 3
      || (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, __int64 *))qword_1C01907F8)(
                v12 + 4 * (5LL * v11 + 2),
                *(unsigned int *)(v12 + 20LL * v11 + 4),
                &Object,
                &v17) < 0 )
    {
      goto LABEL_16;
    }
    v10 = 1;
    if ( (unsigned int)GetRegEDID(v17, v20, &v15) )
      break;
    ObfDereferenceObject(Object);
LABEL_16:
    if ( ++v11 >= *((_DWORD *)v9 + 56) )
      goto LABEL_17;
  }
  v13 = v15;
  *v18 = *(unsigned __int8 *)(v15 + 21);
  *v19 = *(unsigned __int8 *)(v13 + 22);
  ObfDereferenceObject(Object);
  if ( a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)v9 + 29) + 20LL * v11 + 4);
  if ( a5 )
    *a5 = *(_QWORD *)(*((_QWORD *)v9 + 29) + 20LL * v11 + 8);
  return v5;
}
