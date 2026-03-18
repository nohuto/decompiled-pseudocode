/*
 * XREFs of NtFlipObjectCreate @ 0x1C004ED30
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C000DDD0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall NtFlipObjectCreate(unsigned __int64 a1, ACCESS_MASK a2, HANDLE *a3)
{
  __int64 v6; // r9
  int v7; // edi
  ULONG64 v8; // rcx
  __int128 *v9; // rdx
  _OWORD v11[3]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v12; // [rsp+80h] [rbp-58h]
  __int128 v13; // [rsp+90h] [rbp-48h]
  __int128 v14; // [rsp+A0h] [rbp-38h]
  HANDLE Handle; // [rsp+F8h] [rbp+20h] BYREF

  Handle = 0LL;
  memset(v11, 0, sizeof(v11));
  KeEnterCriticalRegion();
  if ( a3 )
  {
    v8 = (ULONG64)(a3 + 1);
    if ( a3 + 1 < a3 || v8 > MmUserProbeAddress )
    {
      v8 = MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    *a3 = Handle;
    if ( a1 )
    {
      v9 = (__int128 *)a1;
      v8 = a1 + 48;
      if ( a1 + 48 < a1 || v8 > MmUserProbeAddress )
        v9 = (__int128 *)MmUserProbeAddress;
      v12 = *v9;
      v13 = v9[1];
      v14 = v9[2];
      v11[0] = v12;
      v11[1] = v13;
      v11[2] = v14;
    }
    LOBYTE(v8) = 1;
    v7 = DxgkCompositionObject::Create(
           v8,
           (unsigned __int64)v11 & -(__int64)(a1 != 0),
           a2,
           v6,
           4,
           240,
           (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerObject::ObjectInit,
           0LL,
           &Handle);
    if ( v7 >= 0 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = Handle;
      Handle = 0LL;
    }
    if ( Handle )
      ObCloseHandle(Handle, 1);
  }
  else
  {
    v7 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
