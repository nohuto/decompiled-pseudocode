/*
 * XREFs of ObCreateSymbolicLink @ 0x14044515C
 * Callers:
 *     NtCreateSymbolicLinkObject @ 0x140444E60 (NtCreateSymbolicLinkObject.c)
 *     MiCreateMemoryEvent @ 0x1405A2730 (MiCreateMemoryEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

__int64 __fastcall ObCreateSymbolicLink(__int64 *a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // r14
  __int64 *v6; // r12
  int Object; // esi
  PVOID PoolWithTag; // rax
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF

  v5 = a4;
  v6 = a1;
  LOBYTE(a4) = a5;
  LOBYTE(a1) = a5;
  Object = ObCreateObjectEx((_DWORD)a1, (_DWORD)ObpSymbolicLinkObjectType, a3, a4);
  if ( Object >= 0 )
  {
    MEMORY[0] = MEMORY[0xFFFFF78000000014];
    MEMORY[0x18] = 0;
    MEMORY[0x1C] = 0;
    if ( (*(_DWORD *)v5 & 1) != 0 )
    {
      MEMORY[0x1C] = 16;
      MEMORY[8] = *(_QWORD *)(v5 + 8);
      MEMORY[0x10] = *(_QWORD *)(v5 + 16);
    }
    else
    {
      MEMORY[0xA] = *(_WORD *)(v5 + 10);
      MEMORY[8] = *(_WORD *)(v5 + 8);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(v5 + 10), 0x746D7953u);
      MEMORY[0x10] = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, *(const void **)(v5 + 16), *(unsigned __int16 *)(v5 + 10));
    }
    if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
      MEMORY[0x1C] |= 2u;
    Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v10);
    if ( Object >= 0 )
    {
      *v6 = v10;
      return 0;
    }
  }
  return (unsigned int)Object;
}
