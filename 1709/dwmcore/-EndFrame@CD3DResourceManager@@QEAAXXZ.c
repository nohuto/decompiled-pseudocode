/*
 * XREFs of ?EndFrame@CD3DResourceManager@@QEAAXXZ @ 0x18011DB1C
 * Callers:
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18002BF40 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1801ABD14 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 */

void __fastcall CD3DResourceManager::EndFrame(CD3DResourceManager *this)
{
  char *v1; // rdi
  char *v2; // rbx
  CD3DResourceSourceReference *v3; // rcx
  CD3DResourceSourceReference **v4; // rdx
  CD3DResourceSourceReference **v5; // r8

  v1 = (char *)this + 56;
  v2 = (char *)*((_QWORD *)this + 7);
  while ( v2 != v1 )
  {
    v3 = (CD3DResourceSourceReference *)(v2 - 16);
    v2 = *(char **)v2;
    if ( (int)--*((_DWORD *)v3 + 2) <= 0 )
    {
      v4 = (CD3DResourceSourceReference **)*((_QWORD *)v3 + 2);
      if ( v4[1] != (CD3DResourceSourceReference *)((char *)v3 + 16)
        || (v5 = (CD3DResourceSourceReference **)*((_QWORD *)v3 + 3),
            *v5 != (CD3DResourceSourceReference *)((char *)v3 + 16)) )
      {
        __fastfail(3u);
      }
      *v5 = (CD3DResourceSourceReference *)v4;
      v4[1] = (CD3DResourceSourceReference *)v5;
      CD3DResourceSourceReference::`scalar deleting destructor'(v3, (unsigned int)v4);
    }
  }
}
