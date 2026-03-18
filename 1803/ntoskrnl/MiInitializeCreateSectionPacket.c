/*
 * XREFs of MiInitializeCreateSectionPacket @ 0x1404C34D0
 * Callers:
 *     MiCreateSection @ 0x1404C32E0 (MiCreateSection.c)
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     PsReferencePartitionByHandle @ 0x140512414 (PsReferencePartitionByHandle.c)
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
        unsigned __int8 a11,
        int a12)
{
  unsigned int v12; // edi
  unsigned int v14; // eax
  unsigned int v16; // ecx
  __int64 v17; // r8
  char v18; // al
  int v19; // ecx
  __int64 v20; // rdx
  __int16 v21; // ax
  __int64 v22; // rcx
  unsigned int v23; // edi
  unsigned int v24; // ecx
  int ProtectionMask; // eax
  __int64 result; // rax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  unsigned int v31; // edi
  char v32; // al
  ULONG_PTR **v33; // [rsp+40h] [rbp+8h] BYREF

  v12 = a6;
  v14 = (unsigned __int16)KeNumberNodes;
  a1[5] = a6;
  v16 = v12 & 0x7F;
  if ( v16 > v14 )
    return 3221225716LL;
  v17 = a11;
  *((_QWORD *)a1 + 20) = a7;
  a1[42] = a12;
  v18 = a8;
  a1[43] = v16;
  v19 = a5;
  *((_BYTE *)a1 + 24) = v18;
  *((_QWORD *)a1 + 1) = a2;
  *((_BYTE *)a1 + 72) = v17;
  a1[7] = v19;
  *((_QWORD *)a1 + 19) = a4;
  if ( (a3 & 1) != 0 )
    *a1 |= 0x800u;
  if ( (a3 & 2) != 0 )
  {
    v27 = *a1 | 1;
    *a1 = v27;
    if ( (a3 & 8) != 0 || (a3 & 4) != 0 )
      *a1 = v27 | 0x10000;
  }
  v20 = a10;
  v21 = v19 ^ a1[35];
  v22 = a9;
  a1[35] ^= v21 & 0xFFF;
  *((_QWORD *)a1 + 6) = v20;
  *((_QWORD *)a1 + 5) = v22;
  if ( (v12 & 0x1100000) == 0x1100000 )
  {
    *a1 |= 0x200u;
    v12 &= ~0x100000u;
  }
  if ( (v12 & 0x100000) == 0 )
  {
    if ( (v12 & 0x2000000) == 0 )
      goto LABEL_9;
    *a1 |= 0x10u;
    if ( (v12 & 0x400000) != 0 )
    {
      v12 &= ~0x400000u;
      v32 = 12;
    }
    else
    {
      v32 = 4;
    }
    v31 = v12 & 0xFDFFFFFF;
    goto LABEL_40;
  }
  v29 = *a1;
  if ( (v12 & 0x200000) != 0 )
  {
    v12 &= ~0x200000u;
    v29 |= 0x40u;
    *a1 = v29;
  }
  v30 = v29 | 0x20;
  v31 = v12 & 0xFFEFFFFF;
  *a1 = v30;
  if ( (v31 & 0x400000) == 0 )
  {
    v32 = 1;
LABEL_40:
    v12 = v31 | 0x1000000;
    *((_BYTE *)a1 + 24) = v32;
    goto LABEL_9;
  }
  *a1 = v30 | 0x100;
  v12 = v31 & 0xFEBFFFFF | 0x1000000;
  *((_BYTE *)a1 + 24) = 12;
LABEL_9:
  v23 = v12 & 0xFFFFFF80;
  v33 = 0LL;
  if ( (v23 & 0x40000) == 0 )
    goto LABEL_10;
  if ( !v22 || v20 )
    return 3221225485LL;
  result = PsReferencePartitionByHandle(v22, 2LL, v17, 1883458893LL, &v33);
  if ( (int)result >= 0 )
  {
    if ( *v33 == &MiSystemPartition )
      PsDereferencePartition((__int64)v33);
    else
      *((_QWORD *)a1 + 22) = v33;
    *((_QWORD *)a1 + 5) = 0LL;
    v23 &= ~0x40000u;
LABEL_10:
    if ( (v23 & 0x1000000) != 0 )
    {
      if ( (a3 & 0x10) != 0 )
        *a1 |= 0x20000u;
      if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
        *a1 |= 0x120000u;
      if ( (v23 & 0x11000000) == 0x11000000 )
      {
        if ( a1[7] != 2 )
          return 3221225541LL;
        v23 &= ~0x10000000u;
      }
      else
      {
        *a1 |= 0x400u;
        v28 = *a1;
        if ( (*a1 & 0x20) != 0 && (MiFlags & 0x10000) != 0 )
        {
          *a1 = v28 | 0x20000;
        }
        else if ( (MiFlags & 0x100000) != 0 )
        {
          *a1 = v28 | 0x20000;
        }
      }
    }
    else if ( (v23 & 0x10000000) != 0 )
    {
      a1[7] |= 0x200u;
    }
    else if ( (v23 & 0x40000000) != 0 )
    {
      a1[7] |= 0x400u;
    }
    v24 = a1[7];
    a1[4] = v23;
    ProtectionMask = MiMakeProtectionMask(v24);
    a1[8] = ProtectionMask;
    if ( ProtectionMask != -1 )
      return 0LL;
    return 3221225541LL;
  }
  return result;
}
