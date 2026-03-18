/*
 * XREFs of ?ConsumerAcquirePresent@CFlipManager@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C004FF60
 * Callers:
 *     ?ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C004DD14 (-ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManager::ConsumerAcquirePresent(
        CFlipManager *this,
        int a2,
        int a3,
        void **a4,
        struct CFlipPropertySet **a5)
{
  int v5; // r11d
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // r10
  struct CFlipPropertySet *v10; // rdx

  v5 = 0;
  v7 = *((_QWORD *)this + 24);
  result = v7 == 0 ? 0xC0000001 : 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 56);
    if ( v9 )
      v5 = *(_DWORD *)(v9 + 32);
    if ( *(_DWORD *)(v7 + 40) != a2 || v5 != a3 )
      result = 3221225485LL;
  }
  if ( (int)result >= 0 )
  {
    *a4 = *(void **)(v7 + 48);
    v10 = *(struct CFlipPropertySet **)(*((_QWORD *)this + 24) + 56LL);
    *a5 = v10;
    if ( v10 )
      ++*((_DWORD *)v10 + 2);
  }
  return result;
}
