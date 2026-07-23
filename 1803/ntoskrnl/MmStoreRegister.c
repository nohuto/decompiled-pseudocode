/*
 * XREFs of MmStoreRegister @ 0x14063BBC8
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     MiInsertPageFileInList @ 0x14063C7A8 (MiInsertPageFileInList.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 *     MmStoreCheckPagefiles @ 0x14063CE00 (MmStoreCheckPagefiles.c)
 *     MiDeletePagefile @ 0x14074E938 (MiDeletePagefile.c)
 */

__int64 __fastcall MmStoreRegister(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char *PoolWithTag; // rax
  __int64 v7; // rdi
  int SystemThread; // ebx
  _RTL_BITMAP *v9; // rax
  _RTL_BITMAP *v10; // rsi
  unsigned __int64 v11; // r9
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 Pagefile; // rax
  HANDLE v18; // r14
  _WORD *v19; // rbp
  int v20; // eax
  HANDLE Handle; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF

  dword_1403CE3BC = 1;
  if ( !(unsigned int)MmStoreCheckPagefiles() )
    return 3221225799LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x70546D4Du);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = &MiSystemPartition;
  KeInitializeEvent((PRKEVENT)(PoolWithTag + 8), NotificationEvent, 0);
  *(_DWORD *)(v7 + 32) = 0;
  SystemThread = PsCreateSystemThreadEx(
                   (__int64)&Handle,
                   0x1FFFFF,
                   0LL,
                   0LL,
                   0LL,
                   (__int64)MiStoreEvictThread,
                   v7,
                   0LL,
                   0LL);
  if ( SystemThread < 0 )
  {
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  else
  {
    v9 = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                          NonPagedPoolNx,
                          8 * (((unsigned int)dword_14044B180 >> 6) + ((dword_14044B180 & 0x3F) != 0) + 2),
                          0x20206D4Du);
    v10 = v9;
    if ( v9 )
    {
      v9->SizeOfBitMap = dword_14044B180;
      v9->Buffer = &v9[1].SizeOfBitMap;
      RtlClearAllBits(v9);
      v11 = 0LL;
      if ( Count )
      {
        v12 = qword_1403CFA20;
        v13 = Count;
        do
        {
          v14 = *v12;
          v15 = v11;
          ++v12;
          v11 = *(_QWORD *)(v14 + 8);
          if ( v15 >= v11 )
            v11 = v15;
          --v13;
        }
        while ( v13 );
      }
      v16 = qword_1403CFA10 + v11;
      if ( v16 > 0xFFFFFFF )
        v16 = 0xFFFFFFFLL;
      Pagefile = MiCreatePagefile((unsigned int)&MiSystemPartition, 0, 0, v16, v16, 0LL, 0, 0);
      v18 = Handle;
      v19 = (_WORD *)Pagefile;
      if ( Pagefile )
      {
        SystemThread = MiInsertPageFileInList(Pagefile);
        if ( SystemThread < 0 )
        {
          *(_DWORD *)(v7 + 32) = 1;
        }
        else
        {
          qword_1403CE428 = (__int64)v10;
          dword_1403CE3BC = 254;
          v20 = v19[102] & 0xF;
          qword_1403CE430 = a3;
          dword_1403CE3B4 = v20;
          ObReferenceObjectByHandle(v18, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
          v10 = 0LL;
          v19 = 0LL;
          qword_1403CE3D8 = (__int64)Object;
          dword_1403CE438 = a4;
          SystemThread = 0;
          dword_1403CE3B8 = 1;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 32) = 1;
        SystemThread = -1073741670;
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      if ( v19 )
        MiDeletePagefile(v19);
    }
    else
    {
      v18 = Handle;
      SystemThread = -1073741670;
      *(_DWORD *)(v7 + 32) = 1;
    }
    KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
    ObCloseHandle(v18, 0);
  }
  return (unsigned int)SystemThread;
}
