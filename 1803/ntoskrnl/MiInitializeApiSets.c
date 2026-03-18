/*
 * XREFs of MiInitializeApiSets @ 0x14089C8B4
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MmCreateSection @ 0x1404C1C80 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x14054B620 (MmMapViewInSystemSpace.c)
 */

__int64 __fastcall MiInitializeApiSets(__int64 a1)
{
  __int64 result; // rax
  NTSTATUS v3; // ebx
  PVOID v4; // rbx
  PVOID Section; // [rsp+60h] [rbp+8h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+18h] BYREF
  PVOID MappedBase; // [rsp+78h] [rbp+20h] BYREF

  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2376LL);
  result = MmCreateSection((int)&Section, 983071LL, 0, (int)&v6, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    v3 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v3 < 0 )
    {
      ObfDereferenceObjectWithTag(Section, 0x746C6644u);
      return (unsigned int)v3;
    }
    else
    {
      v4 = MappedBase;
      memmove(
        MappedBase,
        *(const void **)(*(_QWORD *)(a1 + 240) + 2368LL),
        *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2376LL));
      qword_1403CB478 = (__int64)Section;
      qword_1403CB480 = (__int64)v4;
      result = 0LL;
      qword_1403CB488 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2376LL);
    }
  }
  return result;
}
