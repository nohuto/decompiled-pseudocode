/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x14013E750
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x14013B8F0 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v5; // eax
  int v7; // ecx
  PVOID v8; // r14
  size_t v9; // rbp
  void *Memory; // rax
  unsigned int v11; // eax
  unsigned int v12; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v14; // r12
  void *v15; // rcx
  unsigned int v16; // eax

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = Size + 8;
    }
    else if ( a1 == 3 )
    {
      *(_OWORD *)a2 = xmmword_14035A280;
      *(_OWORD *)(a2 + 16) = xmmword_14035A290;
      *(_OWORD *)(a2 + 32) = xmmword_14035A2A0;
      *(_OWORD *)(a2 + 48) = xmmword_14035A2B0;
      *(_OWORD *)(a2 + 64) = xmmword_14035A2C0;
      *(_OWORD *)(a2 + 80) = xmmword_14035A2D0;
      *(_OWORD *)(a2 + 96) = xmmword_14035A2E0;
      *(_OWORD *)(a2 + 112) = xmmword_14035A2F0;
    }
    else if ( Src || qword_14035A200 )
    {
      v8 = qword_14035A200;
      v9 = (unsigned int)Size;
      if ( !qword_14035A200 )
      {
        Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
        v3 = (__int64)Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v8 = Memory;
        memmove(Memory, Src, v9);
      }
      v11 = v9 + 8;
      v12 = -1;
      if ( (int)v9 + 8 >= (unsigned int)v9 )
        v12 = v9 + 8;
      v2 = v11 < (unsigned int)v9 ? 0xC0000095 : 0;
      if ( v11 >= (unsigned int)v9 )
      {
        BgpFwReleaseLock();
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v12, 0x4B494742u);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = PoolWithTag + 2;
          v16 = ((unsigned int)dword_14035A1B0 >> 23) & 1;
          v14[1] = 8;
          *v14 = v16;
          memmove(v15, v8, v9);
          BgpFwAcquireLock();
          *(_QWORD *)a2 = v14;
        }
        else
        {
          BgpFwAcquireLock();
          v2 = -1073741801;
        }
      }
      if ( v3 )
        BgpFwFreeMemory(v3);
    }
    else
    {
      *(_QWORD *)a2 = 0LL;
    }
  }
  else
  {
    *(_OWORD *)a2 = xmmword_14035A190;
    *(_OWORD *)(a2 + 16) = xmmword_14035A1A0;
    *(_DWORD *)(a2 + 20) = 0;
    v5 = *(_DWORD *)(a2 + 20);
    if ( (dword_14035A1B0 & 2) != 0 )
      v5 = 1;
    *(_DWORD *)(a2 + 20) = v5;
    if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 )
    {
      v7 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v7;
    }
    *(_DWORD *)(a2 + 28) = BYTE2(BgInternal);
  }
  return v2;
}
