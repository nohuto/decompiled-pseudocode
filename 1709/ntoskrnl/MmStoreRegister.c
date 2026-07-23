/*
 * XREFs of MmStoreRegister @ 0x1406EABBC
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 *     MiInsertPageFileInList @ 0x1405D4984 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x1405D4B4C (MiCreatePagefile.c)
 *     MiDeletePagefile @ 0x1406E4538 (MiDeletePagefile.c)
 *     MmStoreCheckPagefiles @ 0x1406EAAD0 (MmStoreCheckPagefiles.c)
 */

__int64 __fastcall MmStoreRegister(__int64 a1, __int64 a2, __int64 a3)
{
  char *PoolWithTag; // rax
  __int64 v6; // rdi
  int SystemThread; // ebx
  _RTL_BITMAP *v8; // rax
  _RTL_BITMAP *v9; // rsi
  unsigned __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  _QWORD *Pagefile; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  HANDLE v18; // r14
  _QWORD *v19; // rbp
  int v20; // eax
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+20h] BYREF

  dword_14038A53C = 1;
  if ( !(unsigned int)MmStoreCheckPagefiles() )
    return 3221225799LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x70546D4Du);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = &MiSystemPartition;
  KeInitializeEvent((PRKEVENT)(PoolWithTag + 8), NotificationEvent, 0);
  *(_DWORD *)(v6 + 32) = 0;
  SystemThread = PsCreateSystemThreadEx(
                   (__int64)&Handle,
                   0x1FFFFF,
                   0LL,
                   0LL,
                   0LL,
                   (__int64)MiStoreEvictThread,
                   v6,
                   0LL,
                   0LL);
  if ( SystemThread >= 0 )
  {
    v8 = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                          NonPagedPoolNx,
                          8 * (((unsigned int)dword_140400120 >> 6) + ((dword_140400120 & 0x3F) != 0) + 2),
                          0x20206D4Du);
    v9 = v8;
    if ( v8 )
    {
      v8->SizeOfBitMap = dword_140400120;
      v8->Buffer = &v8[1].SizeOfBitMap;
      RtlClearAllBits(v8);
      v10 = 0LL;
      if ( Count )
      {
        v11 = (__int64 *)&unk_14038B760;
        v12 = Count;
        do
        {
          v13 = *v11++;
          if ( v10 < *(_QWORD *)(v13 + 8) )
            v10 = *(_QWORD *)(v13 + 8);
          --v12;
        }
        while ( v12 );
      }
      v14 = qword_14038B750 + v10;
      if ( v14 > 0xFFFFFFF )
        v14 = 0xFFFFFFFLL;
      Pagefile = MiCreatePagefile((__int64)&MiSystemPartition, 0LL, 0LL, v14, v14, 0LL, 0, 0);
      v18 = Handle;
      v19 = Pagefile;
      if ( Pagefile )
      {
        SystemThread = MiInsertPageFileInList((__int64)Pagefile);
        if ( SystemThread >= 0 )
        {
          qword_14038A5A8 = (__int64)v9;
          dword_14038A53C = 254;
          v20 = *((_WORD *)v19 + 102) & 0xF;
          qword_14038A5B0 = a3;
          dword_14038A534 = v20;
          ObReferenceObjectByHandle(v18, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          v9 = 0LL;
          v19 = 0LL;
          qword_14038A558 = (__int64)Object;
          dword_14038A538 = 1;
          SystemThread = 0;
        }
        else
        {
          *(_DWORD *)(v6 + 32) = 1;
        }
      }
      else
      {
        *(_DWORD *)(v6 + 32) = 1;
        SystemThread = -1073741670;
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      if ( v19 )
        MiDeletePagefile((char *)v19, 1, v16, v17);
    }
    else
    {
      v18 = Handle;
      SystemThread = -1073741670;
      *(_DWORD *)(v6 + 32) = 1;
    }
    KeSetEvent((PRKEVENT)(v6 + 8), 0, 0);
    ObCloseHandle(v18, 0);
  }
  else
  {
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return (unsigned int)SystemThread;
}
