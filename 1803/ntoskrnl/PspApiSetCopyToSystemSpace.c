/*
 * XREFs of PspApiSetCopyToSystemSpace @ 0x140778C28
 * Callers:
 *     PspSiloLoadApiSets @ 0x140779D80 (PspSiloLoadApiSets.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MmCreateSection @ 0x1404C1C80 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x14054B620 (MmMapViewInSystemSpace.c)
 */

__int64 __fastcall PspApiSetCopyToSystemSpace(void *Src, size_t Size, PVOID *a3, _QWORD *a4)
{
  int v8; // edi
  size_t v9; // r8
  PVOID v10; // rbx
  PVOID v11; // rcx
  PVOID MappedBase; // [rsp+40h] [rbp-20h] BYREF
  size_t v14; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID Section; // [rsp+88h] [rbp+28h] BYREF

  MappedBase = 0LL;
  Section = 0LL;
  ViewSize[0] = 0LL;
  v14 = Size;
  v8 = MmCreateSection((int)&Section, 983071LL, 0, (int)&v14, 4, 0x8000000, 0LL, 0LL);
  if ( v8 < 0 || (v8 = MmMapViewInSystemSpace(Section, &MappedBase, ViewSize), v8 < 0) )
  {
    v11 = Section;
  }
  else
  {
    v9 = Size;
    v10 = MappedBase;
    memmove(MappedBase, Src, v9);
    v11 = Section;
    *a3 = Section;
    *a4 = v10;
  }
  if ( v11 && v8 < 0 )
    ObfDereferenceObject(v11);
  return (unsigned int)v8;
}
