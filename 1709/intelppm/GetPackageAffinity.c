/*
 * XREFs of GetPackageAffinity @ 0x1C002E430
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPackageAffinity(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _QWORD *PoolWithTag; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // rdi
  unsigned __int16 i; // r14
  __int64 v9; // rax
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  KeInitializeAffinityEx(a2);
  LODWORD(NumberOfBytes) = 0;
  v12 = 3;
  v4 = NtQuerySystemInformationEx(107LL, &v12, 4LL, 0LL, 0, &NumberOfBytes);
  if ( v4 == -1073741820 && (_DWORD)NumberOfBytes )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x72637250u);
    if ( PoolWithTag )
    {
      v12 = 3;
      v4 = NtQuerySystemInformationEx(107LL, &v12, 4LL, PoolWithTag, NumberOfBytes, &NumberOfBytes);
      if ( v4 >= 0 && (_DWORD)NumberOfBytes )
      {
        v6 = 0;
        v7 = PoolWithTag;
        v4 = -1073741275;
        while ( 1 )
        {
          for ( i = 0; i < *((_WORD *)v7 + 15); ++i )
            KeAddGroupAffinityEx(a2, LOWORD(v7[2 * i + 5]), v7[2 * i + 4]);
          if ( (unsigned int)KeCheckProcessorAffinityEx(a2, *(unsigned int *)(a1 + 56)) )
            break;
          v9 = *((unsigned int *)v7 + 1);
          v6 += v9;
          v7 = (_QWORD *)((char *)v7 + v9);
          KeInitializeAffinityEx(a2);
          if ( v6 >= (unsigned int)NumberOfBytes )
            goto LABEL_14;
        }
        v4 = 0;
      }
LABEL_14:
      ExFreePoolWithTag(PoolWithTag, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
