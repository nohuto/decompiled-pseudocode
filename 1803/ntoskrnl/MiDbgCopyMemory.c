/*
 * XREFs of MiDbgCopyMemory @ 0x1402607B8
 * Callers:
 *     MmDbgCopyMemory @ 0x140261418 (MmDbgCopyMemory.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     MiCopyFromUntrustedMemory @ 0x140260558 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x140260680 (MiCopyToUntrustedMemory.c)
 *     MiDbgReleaseAddress @ 0x140260DAC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140260E34 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140261178 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x140261220 (MiDbgWriteCheck.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiDbgCopyMemory(char *BaseAddress, _BYTE *a2, ULONG a3, unsigned int a4, unsigned int a5)
{
  unsigned int v9; // r14d
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v18[16]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-40h] BYREF
  ULONG v20; // [rsp+48h] [rbp-30h]
  unsigned int v21; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v22; // [rsp+50h] [rbp-28h]
  unsigned int v23; // [rsp+54h] [rbp-24h]

  v9 = a5;
  if ( !a3 )
    return 3221225713LL;
  v11 = a5 & 2;
  if ( (a5 & 0x40) != 0 )
  {
    if ( (a5 & 2) != 0 )
      return 3221225714LL;
    if ( (a5 & 1) == 0 )
      return 3221225714LL;
    v12 = a5 & 4;
    v11 = 0;
    if ( (a5 & 4) == 0 )
      return 3221225714LL;
  }
  else
  {
    v12 = a5 & 4;
  }
  v13 = 0;
  if ( v11 )
  {
    if ( v12 || KeGetCurrentIrql() <= 1u )
    {
      BaseAddress = (char *)MiDbgTranslatePhysicalAddress(BaseAddress, a5, v18);
      if ( !BaseAddress )
        return 3221225473LL;
LABEL_40:
      if ( (v9 & 1) != 0 )
      {
        BaseAddress = (char *)MiDbgWriteCheck(BaseAddress, v17);
        if ( !BaseAddress )
        {
          v15 = -1073741585;
          goto LABEL_28;
        }
        v13 = 1;
        goto LABEL_44;
      }
      goto LABEL_26;
    }
    return 3221225714LL;
  }
  if ( v12 )
  {
    if ( MiIsAddressValid((__int64)BaseAddress) )
    {
      if ( (a5 & 0x40) == 0 )
        goto LABEL_40;
      PhysicalAddress = MmGetPhysicalAddress(BaseAddress);
      BaseAddress = (char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                              a5,
                              v18);
      if ( BaseAddress )
      {
        v9 = a5 | 2;
        goto LABEL_40;
      }
      return (unsigned int)-1073741823;
    }
    else
    {
      return (unsigned int)-1073741585;
    }
  }
  if ( KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  if ( (unsigned __int64)BaseAddress < 0xFFFF800000000000uLL )
  {
    if ( (a5 & 1) != 0 )
    {
      ProbeForWrite(BaseAddress, a3, a3);
    }
    else
    {
      if ( ((a3 - 1) & (unsigned int)BaseAddress) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&BaseAddress[a3] > 0x7FFFFFFF0000LL || &BaseAddress[a3] < BaseAddress )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( (a5 & 1) != 0 )
    {
LABEL_44:
      v14 = MiCopyToUntrustedMemory(BaseAddress, a2, a3, a4);
      goto LABEL_27;
    }
LABEL_26:
    v14 = MiCopyFromUntrustedMemory(a2, BaseAddress, a3, a4);
LABEL_27:
    v15 = v14;
LABEL_28:
    if ( v13 )
      MiDbgReleaseAddress(BaseAddress, v17, v9);
    if ( (v9 & 2) != 0 )
      MiDbgUnTranslatePhysicalAddress(v18);
    return v15;
  }
  v19[0] = BaseAddress;
  v20 = a3;
  v19[1] = a2;
  v21 = a4;
  v22 = a5;
  KeGenericCallDpc((__int64)MiDbgCopyMemoryTarget, (__int64)v19);
  return v23;
}
