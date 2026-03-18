/*
 * XREFs of EngAllocSectionMem @ 0x1C00FBA10
 * Callers:
 *     <none>
 * Callees:
 *     Win32CreateSection @ 0x1C0006A80 (Win32CreateSection.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

PVOID __fastcall EngAllocSectionMem(PVOID *a1, char a2, int a3)
{
  PVOID result; // rax
  PVOID v6; // rcx
  PVOID MappedBase; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]
  ULONG_PTR ViewSize[3]; // [rsp+60h] [rbp-18h] BYREF

  ViewSize[0] = 0LL;
  if ( !a3 )
    return 0LL;
  v9 = 0;
  v8 = a3;
  if ( (int)Win32CreateSection(a1, 983071LL) < 0 )
    return 0LL;
  v6 = *a1;
  MappedBase = 0LL;
  if ( MmMapViewInSessionSpace(v6, &MappedBase, ViewSize) >= 0 )
  {
    result = MappedBase;
  }
  else
  {
    ObfDereferenceObject(*a1);
    result = 0LL;
    *a1 = 0LL;
    MappedBase = 0LL;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( result )
    {
      memset(result, 0, LODWORD(ViewSize[0]));
      return MappedBase;
    }
  }
  return result;
}
