/*
 * XREFs of MiAllocateVirtualMemoryPrepare @ 0x1405B4210
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x1404E8560 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x1405B4760 (NtAllocateVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiValidateZeroBits @ 0x140593D78 (MiValidateZeroBits.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateAllocationType @ 0x1405B4680 (MiValidateAllocationType.c)
 *     MiGetUserReservationHighestAddress @ 0x1405BA540 (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryPrepare(
        ULONG_PTR a1,
        unsigned __int64 a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 *a7,
        char a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        _QWORD *a13)
{
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  _QWORD *p_Lock; // r13
  unsigned int v17; // esi
  int v18; // r15d
  unsigned __int64 *v19; // r14
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rdx
  __int64 v22; // r10
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned int v27; // r8d
  _QWORD *v28; // rax
  PVOID v29; // rcx
  __int64 result; // rax
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v33; // [rsp+98h] [rbp+10h]
  ULONGLONG v34; // [rsp+A0h] [rbp+18h] BYREF

  v34 = a3;
  v13 = a2;
  v14 = a12;
  v33 = a2;
  p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
  *(_QWORD *)(a12 + 88) = p_Lock;
  Object = 0LL;
  if ( a1 != -1LL )
  {
    v18 = ObpReferenceObjectByHandleWithTag(a1, 8, (__int64)PsProcessType, a8, 0x6D566D4Du, &Object, 0LL, 0LL);
    if ( v18 < 0 )
      goto LABEL_85;
    p_Lock = Object;
  }
  v17 = a5;
  v18 = MiValidateAllocationType(a5, a6);
  if ( v18 >= 0 )
  {
    *(_QWORD *)(v14 + 80) = p_Lock;
    *(_QWORD *)(v14 + 32) = a4;
    if ( (v17 & 0x1000) != 0 && !v13 )
      v17 |= 0x2000u;
    v19 = a7;
    if ( ((v17 & 0x2000) == 0 || v13) && (*a7 || a7[1] || a7[2]) )
      goto LABEL_58;
    if ( v34 )
    {
      v18 = MiValidateZeroBits(&v34);
      if ( v18 < 0 )
        goto LABEL_85;
      if ( (v17 & 0x2000) != 0 && !v13 )
        v19[1] = MiGetUserReservationHighestAddress(p_Lock, v34);
    }
    if ( (v17 & 0x40000) != 0 )
    {
      *(_DWORD *)(v14 + 52) |= 0x8000000u;
    }
    else
    {
      if ( (v17 & 0x4000) == 0 )
        goto LABEL_13;
      if ( *v19 || v19[1] || v19[2] )
        goto LABEL_58;
      *(_DWORD *)(v14 + 52) |= 0x4000000u;
    }
    if ( (v17 & 0x4000) != 0 )
    {
      v20 = 4096LL;
      goto LABEL_15;
    }
LABEL_13:
    if ( (v17 & 0x2000) != 0 )
    {
      if ( (v17 & 0x40000000) != 0 )
      {
        if ( (v17 & 0x20000000) != 0 )
          goto LABEL_58;
        v20 = 4096LL;
      }
      else
      {
        v20 = 0x10000LL;
        if ( (v17 & 0x20400000) != 0x20400000 && (v17 & 0x20000000) != 0 )
          v20 = 0x200000LL;
      }
    }
    else
    {
      v20 = 4096LL;
    }
LABEL_15:
    v21 = v19[2];
    if ( v21 )
    {
      if ( v21 < v20 || ((v21 - 1) & v21) != 0 || v21 >= 0x7FFFFFFF0000LL || (v17 & 0x40000000) != 0 && v21 != 4096 )
        goto LABEL_58;
    }
    else
    {
      v19[2] = v20;
    }
    if ( !a4 || (v17 & 0x20000000) != 0 && ((v20 - 1) & a4) != 0 )
      goto LABEL_58;
    v22 = 0x7FFFFFFEFFFFLL;
    if ( v13 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - v13 < a4 )
      goto LABEL_58;
    v23 = v13 + a4;
    if ( (v17 & 0x2000) != 0 )
    {
      if ( (v17 & 0x40004000) != 0 )
      {
        if ( (((unsigned __int16)v13 | (unsigned __int16)a4) & 0xFFF) != 0 )
          goto LABEL_58;
        goto LABEL_26;
      }
      v13 &= ~(v20 - 1);
      if ( (v17 & 0x20000000) == 0 )
        goto LABEL_25;
      v23 = v13 + a4;
    }
    else
    {
      if ( v17 != 0x80000 && v17 != 0x1000000 )
      {
        v13 &= 0x7FFFFFFFF000uLL;
LABEL_25:
        v23 = (v23 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_26;
      }
      v23 &= 0xFFFFFFFFFFFFF000uLL;
      v13 = (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v13 >= v23 )
      {
        v18 = -1073741800;
        goto LABEL_85;
      }
    }
LABEL_26:
    v24 = v23 - v13;
    if ( v33 )
      *v19 = v13;
    else
      v13 = *v19;
    v25 = v19[2];
    if ( ((v25 - 1) & v13) == 0 )
    {
      v26 = v19[1];
      if ( v26 )
      {
        if ( v26 <= 0x7FFFFFFEFFFFLL && (((_WORD)v26 + 1) & 0xFFF) == 0 )
          goto LABEL_33;
      }
      else
      {
        if ( (v17 & 0x2000) != 0 && !a2 && (v17 & 0x4000) == 0 )
        {
          if ( (unsigned __int64)(p_Lock[144] - 1LL) < 0x7FFFFFFEFFFFLL )
            v22 = p_Lock[144] - 1LL;
          v19[1] = v22;
          v26 = v22;
LABEL_33:
          if ( v13 < v26 && v26 - v13 + 1 >= v24 && (v17 & 0x7F) == 0 )
          {
            v27 = *((_DWORD *)v19 + 8);
            if ( v27 <= (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(v14 + 44) = a6;
              *(_BYTE *)(v14 + 96) = a8;
              *(_DWORD *)(v14 + 52) |= a9;
              *(_DWORD *)(v14 + 68) = a10;
              *(_QWORD *)(v14 + 72) = a11;
              v28 = a13;
              *(_QWORD *)(v14 + 8) = v26;
              v29 = Object;
              *(_QWORD *)v14 = v13;
              *v28 = v29;
              result = 0LL;
              *(_QWORD *)(v14 + 16) = v25;
              *(_QWORD *)(v14 + 24) = v24;
              *(_DWORD *)(v14 + 40) = v17 & 0xFFFBBFFF;
              *(_DWORD *)(v14 + 48) = v27;
              return result;
            }
          }
          goto LABEL_58;
        }
        if ( v13 + v24 >= v13 )
        {
          v26 = v13 + v24 - 1;
          v19[1] = v26;
          if ( v26 <= 0x7FFFFFFEFFFFLL )
            goto LABEL_33;
        }
      }
    }
LABEL_58:
    v18 = -1073741811;
  }
LABEL_85:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v18;
}
