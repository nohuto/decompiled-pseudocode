/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x1401432D8
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x140140650 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140142DA8 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v5; // eax
  unsigned __int8 v6; // cl
  int v8; // ecx
  PVOID v9; // r14
  size_t v10; // rbp
  void *Memory; // rax
  unsigned int v12; // eax
  unsigned int v13; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // r12
  void *v16; // rcx
  unsigned int v17; // eax

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
      *(_OWORD *)a2 = xmmword_140341B00;
      *(_OWORD *)(a2 + 16) = xmmword_140341B10;
      *(_OWORD *)(a2 + 32) = xmmword_140341B20;
      *(_OWORD *)(a2 + 48) = xmmword_140341B30;
      *(_OWORD *)(a2 + 64) = xmmword_140341B40;
      *(_OWORD *)(a2 + 80) = xmmword_140341B50;
      *(_OWORD *)(a2 + 96) = xmmword_140341B60;
      *(_OWORD *)(a2 + 112) = xmmword_140341B70;
    }
    else
    {
      v9 = qword_140341A80;
      if ( Src || qword_140341A80 )
      {
        v10 = (unsigned int)Size;
        if ( !qword_140341A80 )
        {
          Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
          v3 = (__int64)Memory;
          if ( !Memory )
            return (unsigned int)-1073741801;
          v9 = Memory;
          memmove(Memory, Src, v10);
        }
        v12 = v10 + 8;
        v13 = -1;
        if ( (int)v10 + 8 >= (unsigned int)v10 )
          v13 = v10 + 8;
        v2 = v12 < (unsigned int)v10 ? 0xC0000095 : 0;
        if ( v12 >= (unsigned int)v10 )
        {
          BgpFwReleaseLock();
          PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v13, 0x4B494742u);
          v15 = PoolWithTag;
          if ( PoolWithTag )
          {
            v16 = PoolWithTag + 2;
            v17 = ((unsigned int)dword_140341A30 >> 23) & 1;
            v15[1] = 8;
            *v15 = v17;
            memmove(v16, v9, v10);
            BgpFwAcquireLock();
            *(_QWORD *)a2 = v15;
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
  }
  else
  {
    *(_OWORD *)a2 = xmmword_140341A10;
    *(_OWORD *)(a2 + 16) = xmmword_140341A20;
    *(_DWORD *)(a2 + 20) = 0;
    v5 = *(_DWORD *)(a2 + 20);
    if ( (dword_140341A30 & 2) != 0 )
      v5 = 1;
    *(_DWORD *)(a2 + 20) = v5;
    v6 = BYTE2(BgInternal);
    if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 )
    {
      v8 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v8;
      v6 = BYTE2(BgInternal);
    }
    *(_DWORD *)(a2 + 28) = v6;
  }
  return v2;
}
