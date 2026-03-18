/*
 * XREFs of MiInitializeApiSets @ 0x140803BB0
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MmCreateSection @ 0x140436B00 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1404B0180 (MmMapViewInSystemSpace.c)
 */

__int64 __fastcall MiInitializeApiSets(__int64 a1)
{
  __int64 result; // rax
  PVOID v3; // rdi
  NTSTATUS v4; // ebx
  PVOID v5; // rbx
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF
  PVOID Section; // [rsp+70h] [rbp+18h] BYREF
  PVOID MappedBase; // [rsp+78h] [rbp+20h] BYREF

  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2376LL);
  result = MmCreateSection((int)&Section, 983071LL, 0, (int)&v6, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v4 < 0 )
    {
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
      return (unsigned int)v4;
    }
    else
    {
      v5 = MappedBase;
      memmove(
        MappedBase,
        *(const void **)(*(_QWORD *)(a1 + 240) + 2368LL),
        *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2376LL));
      qword_14036BFB8 = (__int64)v3;
      qword_14036BFC0 = (__int64)v5;
      result = 0LL;
      qword_14036BFC8 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2376LL);
    }
  }
  return result;
}
