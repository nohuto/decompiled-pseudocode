/*
 * XREFs of ObCreateSymbolicLink @ 0x14058005C
 * Callers:
 *     NtCreateSymbolicLinkObject @ 0x14057FD60 (NtCreateSymbolicLinkObject.c)
 *     MiCreateMemoryEvent @ 0x1405B1E50 (MiCreateMemoryEvent.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObCreateSymbolicLink(__int64 *a1, ACCESS_MASK a2, __int64 a3, __int64 a4, char a5)
{
  int inserted; // esi
  _DWORD *v9; // rbx
  PVOID PoolWithTag; // rax
  __int64 v12; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  Object = 0LL;
  inserted = ObCreateObjectEx(a5, ObpSymbolicLinkObjectType, a3, a5, v12, 40, 0, 0, &Object, 0LL);
  if ( inserted < 0 )
  {
    v9 = Object;
  }
  else
  {
    v9 = Object;
    *(_QWORD *)Object = MEMORY[0xFFFFF78000000014];
    v9[6] = 0;
    v9[7] = 0;
    if ( (*(_DWORD *)a4 & 1) != 0 )
    {
      v9[7] = 16;
      *((_QWORD *)v9 + 1) = *(_QWORD *)(a4 + 8);
      *((_QWORD *)v9 + 2) = *(_QWORD *)(a4 + 16);
    }
    else
    {
      *((_WORD *)v9 + 5) = *(_WORD *)(a4 + 10);
      *((_WORD *)v9 + 4) = *(_WORD *)(a4 + 8);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a4 + 10), 0x746D7953u);
      *((_QWORD *)v9 + 2) = PoolWithTag;
      if ( !PoolWithTag )
      {
        inserted = -1073741801;
        goto LABEL_9;
      }
      memmove(PoolWithTag, *(const void **)(a4 + 16), *(unsigned __int16 *)(a4 + 10));
    }
    if ( RtlIsSandboxedToken(0LL, a5) )
      v9[7] |= 2u;
    inserted = ObInsertObjectEx(v9, 0LL, a2, 0, 0, 0LL, (unsigned __int64 *)&v14);
    v9 = 0LL;
    Object = 0LL;
    if ( inserted >= 0 )
    {
      *a1 = v14;
      inserted = 0;
    }
  }
LABEL_9:
  if ( v9 )
    ObfDereferenceObject(v9);
  return (unsigned int)inserted;
}
