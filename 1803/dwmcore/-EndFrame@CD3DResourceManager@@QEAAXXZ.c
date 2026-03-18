/*
 * XREFs of ?EndFrame@CD3DResourceManager@@QEAAXXZ @ 0x18014074C
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z.c)
 * Callees:
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1801E5CA4 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 */

void __fastcall CD3DResourceManager::EndFrame(CD3DResourceManager *this)
{
  char *v1; // rdi
  char *v2; // rbx
  CD3DResourceSourceReference *v3; // rcx
  char *v4; // rax
  __int64 v5; // r8
  char **v6; // rdx

  v1 = (char *)this + 56;
  v2 = (char *)*((_QWORD *)this + 7);
  while ( v2 != v1 )
  {
    v3 = (CD3DResourceSourceReference *)(v2 - 16);
    v4 = v2;
    v2 = *(char **)v2;
    if ( (int)--*((_DWORD *)v3 + 2) <= 0 )
    {
      v5 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = (char **)*((_QWORD *)v4 + 1), *v6 != v4) )
        __fastfail(3u);
      *v6 = (char *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      CD3DResourceSourceReference::`scalar deleting destructor'(v3, (unsigned int)v6);
    }
  }
}
