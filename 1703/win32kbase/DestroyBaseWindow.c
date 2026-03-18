/*
 * XREFs of DestroyBaseWindow @ 0x1C00E65F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     HandleBaseWindowDestruction @ 0x1C012EC50 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(_QWORD *BaseAddress)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rax

  EditionClearInputTransforms();
  v2 = BaseAddress[10];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 + 4);
    v4 = v2 + 8;
    if ( *(_DWORD *)(v2 + 4) )
    {
      do
      {
        if ( (*(_WORD *)(v4 + 10) & 0x8001) == 0x8001 )
          (***(void (__fastcall ****)(_QWORD))v4)(*(_QWORD *)v4);
        v4 += 16LL;
        --v3;
      }
      while ( v3 );
    }
    Win32FreePool(BaseAddress[10]);
    BaseAddress[10] = 0LL;
  }
  v5 = (__int64 **)(BaseAddress + 12);
  while ( *v5 != (__int64 *)v5 )
  {
    v6 = *v5;
    v7 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v5 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    Win32FreePool((__int64)v6);
  }
  HandleBaseWindowDestruction(BaseAddress);
  return HMDestroyObject(BaseAddress);
}
