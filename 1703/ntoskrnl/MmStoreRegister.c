/*
 * XREFs of MmStoreRegister @ 0x1405D92AC
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14012E500 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 *     MiInsertPageFileInList @ 0x1405B9FB8 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1405BA1B8 (MiCreatePagefile.c)
 *     MmStoreCheckPagefiles @ 0x1405D94EC (MmStoreCheckPagefiles.c)
 *     MiDeletePagefile @ 0x1406B78F4 (MiDeletePagefile.c)
 */

__int64 __fastcall MmStoreRegister(__int64 a1, __int64 a2, __int64 a3)
{
  char *PoolWithTag; // rax
  __int64 v5; // rdi
  int SystemThread; // ebx
  _RTL_BITMAP *v7; // rax
  _RTL_BITMAP *v8; // rsi
  unsigned __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  _QWORD *Pagefile; // rax
  HANDLE v15; // r14
  _WORD *v16; // rbp
  int v17; // eax
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+20h] BYREF

  dword_1403806AC = 1;
  if ( !(unsigned int)MmStoreCheckPagefiles() )
    return 3221225799LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x70546D4Du);
  v5 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = &MiSystemPartition;
  KeInitializeEvent((PRKEVENT)(PoolWithTag + 8), NotificationEvent, 0);
  *(_DWORD *)(v5 + 32) = 0;
  SystemThread = PsCreateSystemThreadEx(
                   (__int64)&Handle,
                   0x1FFFFF,
                   0LL,
                   0LL,
                   0LL,
                   (__int64)MiStoreEvictThread,
                   v5,
                   0LL,
                   0LL);
  if ( SystemThread < 0 )
  {
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else
  {
    v7 = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                          NonPagedPoolNx,
                          8 * (((unsigned int)dword_1403E3124 >> 6) + ((dword_1403E3124 & 0x3F) != 0)) + 16,
                          0x20206D4Du);
    v8 = v7;
    if ( v7 )
    {
      v7->SizeOfBitMap = dword_1403E3124;
      v7->Buffer = &v7[1].SizeOfBitMap;
      RtlClearAllBits(v7);
      v9 = 0LL;
      if ( Count )
      {
        v10 = (__int64 *)&unk_1403817E0;
        v11 = Count;
        do
        {
          v12 = *v10++;
          if ( v9 < *(_QWORD *)(v12 + 8) )
            v9 = *(_QWORD *)(v12 + 8);
          --v11;
        }
        while ( v11 );
      }
      v13 = qword_1403817D0 + v9;
      if ( v13 > 0xFFFFFFF )
        v13 = 0xFFFFFFFLL;
      Pagefile = MiCreatePagefile((__int64)&MiSystemPartition, 0LL, 0LL, v13, v13, 0LL, 0, 0);
      v15 = Handle;
      v16 = Pagefile;
      if ( Pagefile )
      {
        SystemThread = MiInsertPageFileInList((__int64)Pagefile);
        if ( SystemThread < 0 )
        {
          *(_DWORD *)(v5 + 32) = 1;
        }
        else
        {
          qword_140380708 = (__int64)v8;
          dword_1403806AC = 254;
          v17 = v16[102] & 0xF;
          qword_140380710 = a3;
          dword_1403806A4 = v17;
          ObReferenceObjectByHandle(v15, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          v8 = 0LL;
          v16 = 0LL;
          qword_1403806C0 = (__int64)Object;
          dword_1403806A8 = 1;
          SystemThread = 0;
        }
      }
      else
      {
        *(_DWORD *)(v5 + 32) = 1;
        SystemThread = -1073741670;
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      if ( v16 )
        MiDeletePagefile(v16);
    }
    else
    {
      v15 = Handle;
      SystemThread = -1073741670;
      *(_DWORD *)(v5 + 32) = 1;
    }
    KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
    ObCloseHandle(v15, 0);
  }
  return (unsigned int)SystemThread;
}
