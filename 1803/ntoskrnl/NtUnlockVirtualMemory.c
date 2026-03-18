/*
 * XREFs of NtUnlockVirtualMemory @ 0x14004E260
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiUnlockVa @ 0x14004EACC (MiUnlockVa.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1404BFFA8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1404C0468 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtUnlockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToUnlock,
        ULONG MapType)
{
  NTSTATUS result; // eax
  unsigned __int64 Address; // r15
  unsigned __int64 v7; // r12
  int v8; // ebx
  __int64 v9; // r14
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  bool v12; // zf
  PVOID v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // r11
  __int64 v17; // r10
  unsigned __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rdx
  unsigned __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 valid; // rax
  int v26; // ecx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r13
  unsigned __int64 k; // r12
  unsigned __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v32; // r15
  void *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  _QWORD **v37; // rax
  _QWORD *i; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  _QWORD **v48; // rax
  _QWORD *j; // rcx
  unsigned __int8 v50; // [rsp+40h] [rbp-1B8h]
  __int64 v51; // [rsp+48h] [rbp-1B0h]
  __int64 v52; // [rsp+50h] [rbp-1A8h]
  __int64 v53; // [rsp+50h] [rbp-1A8h]
  NTSTATUS v54; // [rsp+58h] [rbp-1A0h]
  char v55; // [rsp+5Ch] [rbp-19Ch]
  _QWORD *v56; // [rsp+60h] [rbp-198h]
  PVOID Object; // [rsp+68h] [rbp-190h] BYREF
  __int64 v58; // [rsp+70h] [rbp-188h] BYREF
  __int64 v59; // [rsp+78h] [rbp-180h] BYREF
  unsigned __int64 v60; // [rsp+80h] [rbp-178h]
  __int64 v61; // [rsp+88h] [rbp-170h]
  unsigned __int64 v62; // [rsp+90h] [rbp-168h]
  __int64 v63; // [rsp+98h] [rbp-160h] BYREF
  char v64[8]; // [rsp+A0h] [rbp-158h] BYREF
  PSIZE_T v65; // [rsp+A8h] [rbp-150h]
  PVOID *v66; // [rsp+B0h] [rbp-148h]
  int v67; // [rsp+C0h] [rbp-138h] BYREF
  __int16 v68; // [rsp+C4h] [rbp-134h]
  __int64 v69; // [rsp+C8h] [rbp-130h]
  __int64 v70; // [rsp+D0h] [rbp-128h]
  __int64 v71; // [rsp+D8h] [rbp-120h]
  _BYTE v72[48]; // [rsp+180h] [rbp-78h] BYREF

  v65 = NumberOfBytesToUnlock;
  v66 = BaseAddress;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, (__int64)&v58, (__int64)&v63, (__int64)&Object);
  v54 = result;
  if ( result < 0 )
    return result;
  Address = 0LL;
  v7 = 0LL;
  v8 = 0;
  v55 = 0;
  v9 = v58;
  v10 = (v58 + v63 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v60 = v10;
  v62 = v58 & 0xFFFFFFFFFFFFF000uLL;
  v11 = v58 & 0xFFFFFFFFFFFFF000uLL;
  v12 = (char *)ProcessHandle + 1 == 0LL;
  v13 = Object;
  if ( !v12 )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v72);
    v8 = 2;
    v55 = 2;
  }
  v69 = 20LL;
  v67 = 1;
  v68 = 4;
  v70 = 0LL;
  v71 = 0LL;
  v56 = 0LL;
  v14 = MiLockVadRange(v13, v11, v10, 0LL);
  v61 = v14;
  if ( !v14 )
    goto LABEL_24;
  v52 = 0LL;
  v51 = (__int64)v13 + 1280;
  v50 = MiLockWorkingSetShared((__int64)v13 + 1280);
  if ( v11 > v10 )
    goto LABEL_18;
  v16 = 0xFFFFF68000000000uLL;
  do
  {
    if ( (((unsigned __int8)(v11 >> 12) + 1) & 0xF) == 0 )
    {
      if ( !(unsigned int)MiWorkingSetIsContended(v51) )
      {
        if ( (!v52 || !(unsigned int)MiPageTableLockIsContended(v24, v52)) && !KeShouldYieldProcessor() )
        {
          v17 = v52;
LABEL_43:
          v16 = 0xFFFFF68000000000uLL;
          goto LABEL_9;
        }
        v24 = v51;
      }
      if ( HIDWORD(v69) )
        MiFreeWsleList(v24, (__int64)&v67, 0);
      if ( v52 )
        MiUnlockPageTableInternal(v51, v52);
      MiUnlockWorkingSetShared(v51, v50, v15);
      MiLockWorkingSetShared(v51);
      v17 = 0LL;
      v52 = 0LL;
      goto LABEL_43;
    }
    v17 = v52;
LABEL_9:
    if ( v11 > v7 || !Address )
    {
      if ( Address )
      {
        v36 = Address;
        v37 = *(_QWORD ***)(Address + 8);
        if ( v37 )
        {
          Address = *(_QWORD *)(Address + 8);
          v56 = v37;
          for ( i = *v37; i; i = (_QWORD *)*i )
          {
            Address = (unsigned __int64)i;
            v56 = i;
          }
        }
        else
        {
          Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v56 = (_QWORD *)Address;
          if ( Address )
          {
            do
            {
              if ( *(_QWORD *)Address == v36 )
                break;
              v36 = Address;
              Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            }
            while ( Address );
            v56 = (_QWORD *)Address;
          }
        }
      }
      else
      {
        Address = MiLocateAddress(v11);
        v56 = (_QWORD *)Address;
      }
      v8 &= ~4u;
      v55 = v8;
      v26 = *(_DWORD *)(Address + 48) & 7;
      if ( v26 == 6 )
      {
        v8 |= 4u;
        v55 = v8;
      }
      else if ( ((1 << v26) & 0x15) == 0 )
      {
        break;
      }
      v7 = (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12;
    }
    v18 = v16 + ((v11 >> 9) & 0x7FFFFFFFF8LL);
    v19 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( v17 == v19 )
      goto LABEL_12;
    if ( v17 )
    {
      if ( HIDWORD(v69) )
      {
        MiFreeWsleList(v51, (__int64)&v67, 0);
        v17 = v52;
      }
      MiUnlockPageTableInternal(v51, v17);
    }
    valid = MiLockLowestValidPageTable(v51, v18, v64);
    v52 = valid;
    if ( valid == v19 )
    {
LABEL_12:
      v15 = *(_QWORD *)v18;
      if ( v18 >= 0xFFFFF6FB7DBED000uLL
        && v18 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 8 * ((v18 >> 3) & 0x1FF));
          v41 = v15 | 0x20;
          if ( (v40 & 0x20) == 0 )
            v41 = *(_QWORD *)v18;
          v15 = v41;
          if ( (v40 & 0x42) != 0 )
            v15 = v41 | 0x42;
        }
      }
      v59 = v15;
      if ( (v15 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v59)
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
        {
          v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v42 )
          {
            v43 = *(_QWORD *)(v42 + 8 * (((unsigned __int64)&v59 >> 3) & 0x1FF));
            v44 = v21 | 0x20;
            if ( (v43 & 0x20) == 0 )
              v44 = v21;
            v21 = v44;
            if ( (v43 & 0x42) != 0 )
              v21 = v44 | 0x42;
          }
        }
        v22 = *(_QWORD *)(48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
        if ( (v8 & 4) == 0 || (unsigned int)MiRotatedToFrameBuffer(v18) != 1 )
        {
          if ( v22 >= 0 )
            MiDemoteCombinedPte(v51, v18, v22 | 0x8000000000000000uLL);
          if ( MiPteInShadowRange(v18)
            && (MiFlags & 0x1800000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v23 & 1) != 0
            && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
          {
            v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 8 * ((v18 >> 3) & 0x1FF));
              v15 = v23 | 0x20;
              if ( (v46 & 0x20) == 0 )
                v15 = v23;
              HIBYTE(v23) = HIBYTE(v15);
              if ( (v46 & 0x42) != 0 )
                HIBYTE(v23) = HIBYTE(v15);
            }
          }
          if ( (HIBYTE(v23) & 0xF) != 8 )
          {
            MiInsertTbFlushEntry((__int64)&v67, v11, 1LL, 0);
            if ( HIDWORD(v69) == (_DWORD)v69 )
              MiFreeWsleList(v51, (__int64)&v67, 0);
            v54 = -1073741782;
          }
        }
        Address = (unsigned __int64)v56;
      }
      else
      {
        v54 = -1073741782;
      }
      v16 = 0xFFFFF68000000000uLL;
      v11 += 4096LL;
    }
    else
    {
      MiUnlockPageTableInternal(v51, valid);
      v52 = 0LL;
      v16 = 0xFFFFF68000000000uLL;
      v11 = ((v19 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v54 = -1073741782;
    }
  }
  while ( v11 <= v10 );
  v9 = v58;
  v13 = Object;
LABEL_18:
  if ( HIDWORD(v69) )
    MiFreeWsleList(v51, (__int64)&v67, 0);
  v20 = v52;
  if ( v52 )
  {
    MiUnlockPageTableInternal(v51, v52);
    v20 = 0LL;
    v52 = 0LL;
  }
  if ( v54 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v51, v50, v15);
    v14 = v61;
LABEL_24:
    MiUnlockVadRange(v13, v9, v14, 0LL);
    if ( (v8 & 2) != 0 )
      KiUnstackDetachProcess((__int64)v72, 0LL);
    ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
    return -1073741782;
  }
  v27 = v62;
  v28 = 0LL;
  k = 0LL;
  v30 = v60;
  if ( v62 > v60 )
    goto LABEL_72;
  v31 = v52;
  while ( 2 )
  {
    if ( v27 <= v28 && k )
    {
LABEL_67:
      if ( v31 == ((v27 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        v32 = v51;
      }
      else
      {
        if ( v31 )
          MiUnlockPageTableInternal(v51, v31);
        v32 = v51;
        v31 = MiLockLowestValidPageTable(v51, ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v64);
      }
      MiUnlockVa(v32, v27);
      v27 += 4096LL;
      if ( (v27 & 0xF000) == 0
        && ((unsigned int)MiWorkingSetIsContended(v32)
         || (unsigned int)MiPageTableLockIsContended(v34, v31)
         || KeShouldYieldProcessor()) )
      {
        MiUnlockPageTableInternal(v32, v31);
        v31 = 0LL;
        MiUnlockWorkingSetShared(v32, v50, v35);
        MiLockWorkingSetShared(v32);
      }
      v30 = v60;
      if ( v27 > v60 )
        goto LABEL_71;
      continue;
    }
    break;
  }
  if ( k )
  {
    v47 = k;
    v48 = *(_QWORD ***)(k + 8);
    if ( v48 )
    {
      k = *(_QWORD *)(k + 8);
      for ( j = *v48; j; j = (_QWORD *)*j )
        k = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v47 )
          break;
        v47 = k;
      }
    }
  }
  else
  {
    k = MiLocateAddress(v27);
  }
  if ( ((1 << (*(_BYTE *)(k + 48) & 7)) & 0x15) != 0 )
  {
    v28 = (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12;
    goto LABEL_67;
  }
LABEL_71:
  v53 = v31;
  LOBYTE(v8) = v55;
  v13 = Object;
  v9 = v58;
  v20 = v53;
LABEL_72:
  if ( v20 )
    MiUnlockPageTableInternal(v51, v20);
  MiUnlockWorkingSetShared(v51, v50, v15);
  MiUnlockVadRange(v13, v9, v61, 0LL);
  if ( (v8 & 2) != 0 )
    KiUnstackDetachProcess((__int64)v72, 0LL);
  ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
  v33 = (void *)v62;
  *v65 = v30 - v62 + 4096;
  *v66 = v33;
  return 0;
}
