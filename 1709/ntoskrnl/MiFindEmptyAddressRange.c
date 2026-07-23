/*
 * XREFs of MiFindEmptyAddressRange @ 0x1404D06B0
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140448658 (MiMapLockedPagesInUserSpace.c)
 *     MiSelectUserAddress @ 0x1404D0540 (MiSelectUserAddress.c)
 * Callees:
 *     RtlFindClearBits @ 0x1400A1B90 (RtlFindClearBits.c)
 *     MiExpandVadBitMap @ 0x14045E94C (MiExpandVadBitMap.c)
 *     MiFindEmptyAddressRangeInTree @ 0x14056C780 (MiFindEmptyAddressRangeInTree.c)
 *     MiFindClearVadBitsAligned @ 0x140585048 (MiFindClearVadBitsAligned.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5,
        unsigned int a6,
        _QWORD *a7,
        _DWORD *a8)
{
  _DWORD *v9; // rcx
  int v10; // ebp
  _KPROCESS *Process; // r11
  _QWORD *v14; // r10
  _RTL_BITMAP *v15; // rdi
  unsigned int Buffer_high; // r8d
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  __int64 SizeOfBitMap; // r9
  int v22; // esi
  ULONG ClearBits; // eax
  __int64 result; // rax
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  int v30; // edi
  __int64 v31; // rax
  _KPROCESS *v32; // [rsp+40h] [rbp-48h]
  unsigned int v33; // [rsp+A0h] [rbp+18h]
  __int64 v34; // [rsp+A8h] [rbp+20h]
  unsigned int v35; // [rsp+B8h] [rbp+30h]

  v34 = a4;
  v9 = a8;
  v10 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  *a8 = 1;
  v14 = (_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 40LL);
  v32 = Process;
  v15 = (_RTL_BITMAP *)&v14[4 * ((unsigned __int64)a6 >> 31) + 1 + ((unsigned __int64)a6 >> 31)];
  if ( (a5 & 2) != 0 )
  {
    v25 = Process[1].ActiveProcessors.Bitmap[18];
    Buffer_high = (unsigned __int8)HIDWORD(v15[1].Buffer);
    v17 = *v14 >> 16;
    v33 = v17;
    v35 = Buffer_high;
    if ( v25 > 0x100000000LL )
    {
      LODWORD(v17) = (v25 >> 16) - (unsigned __int8)v17 - 1;
      v33 = v17;
    }
    v9 = a8;
    if ( !(unsigned __int8)HIDWORD(v15[1].Buffer) )
    {
      Buffer_high = 1;
      v35 = 1;
    }
  }
  else
  {
    Buffer_high = 0;
    v10 = 0;
    LODWORD(v17) = 0;
    v35 = 0;
    v33 = 0;
  }
  if ( a3 || a2 == 4096 )
  {
    v18 = 0x10000LL;
  }
  else
  {
    v18 = 0x10000LL;
    if ( a2 == 0x10000 )
    {
      v19 = a1 + 0xFFFF;
    }
    else
    {
      if ( a2 != 0x200000 && a2 != 0x40000000 )
        goto LABEL_30;
      v19 = a1;
    }
    v20 = v19 >> 16;
    if ( a4 >= ((unsigned __int64)*(unsigned int *)(*(_QWORD *)&Process[1].IdealGlobalNode + 132LL) << 16) + 0xFFFF )
    {
      while ( 1 )
      {
        SizeOfBitMap = v15[1].SizeOfBitMap;
        if ( (_DWORD)v20 != 1 && (unsigned int)v20 >= *(&v15[1].SizeOfBitMap + 1) )
          SizeOfBitMap = LODWORD(v15[1].Buffer);
        v22 = LODWORD(v15->Buffer) - qword_140388950;
        if ( v10 == 1 )
        {
          v26 = SizeOfBitMap + 8 * v22;
          if ( v26 < Buffer_high || v26 >= (unsigned int)v17 )
          {
            SizeOfBitMap = Buffer_high;
            *v9 = 0;
          }
        }
        if ( a2 == 0x10000 )
          ClearBits = RtlFindClearBits(v15, v20, SizeOfBitMap);
        else
          ClearBits = MiFindClearVadBitsAligned(v15, a2, (unsigned int)v20, SizeOfBitMap);
        if ( ClearBits != -1 )
        {
          if ( v10 != 1 || (v27 = ClearBits + 8 * v22, v27 >= v35) && v27 < v33 )
          {
            *a7 = (ClearBits + 8 * ((__int64)v15->Buffer - qword_140388950)) << 16;
            return 0LL;
          }
        }
        if ( (unsigned int)MiExpandVadBitMap(&v15->SizeOfBitMap, v20) != 1 )
          break;
        LODWORD(v17) = v33;
        Buffer_high = v35;
        v9 = a8;
      }
      if ( v10 == 1 )
        return 3221225495LL;
      a4 = v34;
      LODWORD(v17) = v33;
      Buffer_high = v35;
      Process = v32;
      v9 = a8;
    }
  }
LABEL_30:
  *v9 = 0;
  if ( v10 == 1 && a4 > (unsigned __int64)(unsigned int)v17 << 16 )
  {
    a4 = (unsigned __int64)(unsigned int)v17 << 16;
    v34 = a4;
  }
  v28 = *(_QWORD *)&v15[2].SizeOfBitMap;
  v29 = v28;
  if ( v28 > a4 )
  {
    if ( (Process[2].UserDirectoryTableBase & 0x20) == 0 || (v31 = 0x3FFFFFFFLL, a4 <= 0x3FFFFFFF) )
      v31 = 0xFFFFFFLL;
    v29 = v31 & v28;
    if ( (v31 & v28) == 0 || v29 > a4 )
      v29 = 0x10000LL;
    if ( v10 == 1 && v29 < v28 )
      v29 = (unsigned __int64)Buffer_high << 16;
  }
  v30 = (_DWORD)Process + 1576;
  result = MiFindEmptyAddressRangeInTree((int)Process + 1576, a1, a2, a3, v29, a4, (__int64)a7);
  if ( (int)result < 0 )
  {
    if ( v10 == 1 )
      v18 = (unsigned __int64)v35 << 16;
    if ( v18 < v29 )
      return MiFindEmptyAddressRangeInTree(v30, a1, a2, a3, v18, v34, (__int64)a7);
  }
  return result;
}
