/*
 * XREFs of ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C00D2C98
 * Callers:
 *     ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00D2C48 (-Initialize@UmfdAllocation@@SA_NXZ.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1C02B8A58 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTa.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0119E74 (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

struct NSInstrumentation::CPointerHashTable *__fastcall NSInstrumentation::CPointerHashTable::Create(char a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  PVOID v4; // rax
  char v5; // al
  struct NSInstrumentation::CPointerHashTable *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x38497355u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 0LL;
    *((_DWORD *)PoolWithTag + 10) = 0;
    *((_DWORD *)PoolWithTag + 11) = 0;
    *((_DWORD *)PoolWithTag + 12) = 0;
    *((_BYTE *)PoolWithTag + 52) &= ~1u;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_DWORD *)PoolWithTag + 7) = 0;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 4) = 0;
    v4 = ExAllocatePoolWithTag(PagedPoolSession, 0x1000uLL, 0x38497355u);
    v3[4] = v4;
    if ( v4 )
    {
      memset(v4, 0, 0x1000uLL);
      v5 = *((_BYTE *)v3 + 52);
      *((_DWORD *)v3 + 12) = 0;
      *((_DWORD *)v3 + 10) = 256;
      *((_BYTE *)v3 + 52) = a1 | v5 & 0xFE;
      result = (struct NSInstrumentation::CPointerHashTable *)v3;
      *((_DWORD *)v3 + 11) = 8;
      return result;
    }
    NSInstrumentation::CPointerHashTable::Destroy((struct NSInstrumentation::CPointerHashTable *)v3);
  }
  return 0LL;
}
