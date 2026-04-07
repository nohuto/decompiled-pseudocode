/*
 * XREFs of ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001C690
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x1800205F4 (--1CButton@@MEAA@XZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18003D584 (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x180042E74 (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180043780 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x18001E610 (--_ECBitmapSource@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapSourceArray::ReleaseContents(CBitmapSourceArray *this, char a2)
{
  unsigned int v2; // eax
  __int64 v5; // rbx
  __int64 v6; // rsi
  volatile signed __int32 *v7; // rcx
  void *(__fastcall *v8)(CBitmapSource *__hidden, unsigned int); // rax

  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    v5 = 0LL;
    v6 = v2;
    do
    {
      v7 = *(volatile signed __int32 **)(v5 + *(_QWORD *)this);
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
        {
          v8 = **(void *(__fastcall ***)(CBitmapSource *__hidden, unsigned int))v7;
          if ( v8 == CBitmapSource::`vector deleting destructor' )
            CBitmapSource::`vector deleting destructor'((CBitmapSource *)v7, 1u);
          else
            v8((CBitmapSource *)v7, 1u);
        }
        *(_QWORD *)(v5 + *(_QWORD *)this) = 0LL;
      }
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 6) = 0;
  if ( a2 )
    DynArrayImpl<0>::ShrinkToSize(this, 8LL);
}
