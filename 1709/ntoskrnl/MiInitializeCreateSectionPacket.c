/*
 * XREFs of MiInitializeCreateSectionPacket @ 0x14049B630
 * Callers:
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 */

__int64 __fastcall MiInitializeCreateSectionPacket(
        int *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11,
        int a12)
{
  unsigned int v12; // r11d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r11d
  unsigned int v17; // ecx
  int ProtectionMask; // eax
  __int64 v19; // r10
  int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // r11d

  v12 = a6;
  v14 = (unsigned __int16)KeNumberNodes;
  a1[5] = a6;
  v15 = a6 & 0x7F;
  if ( v15 > v14 )
    return 3221225716LL;
  *((_QWORD *)a1 + 20) = a7;
  a1[42] = a12;
  *((_BYTE *)a1 + 72) = a11;
  a1[43] = v15;
  *((_BYTE *)a1 + 24) = a8;
  *((_QWORD *)a1 + 1) = a2;
  a1[7] = a5;
  *((_QWORD *)a1 + 19) = a4;
  if ( (a3 & 1) != 0 )
    *a1 |= 0x800u;
  if ( (a3 & 2) != 0 )
  {
    *a1 |= 1u;
    if ( (a3 & 8) != 0 || (a3 & 4) != 0 )
      *a1 |= 0x10000u;
  }
  a1[35] ^= ((unsigned __int16)a5 ^ (unsigned __int16)a1[35]) & 0xFFF;
  *((_QWORD *)a1 + 6) = a10;
  *((_QWORD *)a1 + 5) = a9;
  if ( (a6 & 0x1100000) == 0x1100000 )
  {
    *a1 |= 0x200u;
    v12 = a6 & 0xFFEFFFFF;
  }
  if ( (v12 & 0x100000) == 0 )
  {
    if ( (v12 & 0x2000000) == 0 )
      goto LABEL_9;
    *a1 |= 0x10u;
    if ( (v12 & 0x400000) != 0 )
    {
      v12 &= ~0x400000u;
      *((_BYTE *)a1 + 24) = 12;
    }
    else
    {
      *((_BYTE *)a1 + 24) = 4;
    }
    v23 = v12 & 0xFDFFFFFF;
    goto LABEL_37;
  }
  if ( (v12 & 0x200000) != 0 )
  {
    v12 &= ~0x200000u;
    *a1 |= 0x40u;
  }
  *a1 |= 0x20u;
  v23 = v12 & 0xFFEFFFFF;
  if ( (v23 & 0x400000) == 0 )
  {
    *((_BYTE *)a1 + 24) = 1;
LABEL_37:
    v12 = v23 | 0x1000000;
    goto LABEL_9;
  }
  *a1 |= 0x100u;
  v12 = v23 & 0xFEBFFFFF | 0x1000000;
  *((_BYTE *)a1 + 24) = 12;
LABEL_9:
  v16 = v12 & 0xFFFFFF80;
  if ( (v16 & 0x40000) != 0 )
  {
    if ( a9 || a10 )
    {
      ++dword_140388B00;
      return 3221227019LL;
    }
    v16 &= ~0x40000u;
    v22 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].AddressPolicy;
    if ( *(ULONG_PTR **)v22 != &MiSystemPartition )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24)) <= 1 )
        __fastfail(0xEu);
      *((_QWORD *)a1 + 22) = v22;
    }
  }
  if ( (v16 & 0x1000000) == 0 )
  {
    if ( (v16 & 0x10000000) != 0 )
    {
      a1[7] |= 0x200u;
    }
    else if ( (v16 & 0x40000000) != 0 )
    {
      a1[7] |= 0x400u;
    }
    goto LABEL_14;
  }
  if ( (a3 & 0x10) != 0 )
    *a1 |= 0x20000u;
  if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    *a1 |= 0x120000u;
  if ( (v16 & 0x11000000) != 0x11000000 )
  {
    *a1 |= 0x400u;
    v21 = *a1;
    if ( (*a1 & 0x20) != 0 && (MiFlags & 0x10000) != 0 )
    {
      *a1 = v21 | 0x20000;
    }
    else if ( (MiFlags & 0x100000) != 0 )
    {
      *a1 = v21 | 0x20000;
    }
LABEL_14:
    v17 = a1[7];
    a1[4] = v16;
    ProtectionMask = MiMakeProtectionMask(v17);
    *(_DWORD *)(v19 + 32) = ProtectionMask;
    if ( ProtectionMask != -1 )
      return 0LL;
    return 3221225541LL;
  }
  if ( a1[7] == 2 )
  {
    v16 &= ~0x10000000u;
    goto LABEL_14;
  }
  return 3221225541LL;
}
