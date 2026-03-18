/*
 * XREFs of ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A3AE4
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A2D5C (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x1800BB108 (-Insert@-$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1801958BC (--_G-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CManipulationContext::RevalidationCleanup(int a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rsi
  int v5; // r15d
  __int64 v6; // r14
  int v7; // ebp
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+88h] [rbp+20h] BYREF

  if ( a1 > 0 )
  {
    v3 = 0;
    v4 = a2;
    v5 = a1;
    v6 = 0LL;
    v7 = 1;
    do
    {
      v20 = *(__int64 (__fastcall ****)(_QWORD))(v6 + *(_QWORD *)(v4 + 24));
      v8 = v20;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v20);
      if ( (*((_BYTE *)v8 + 28) & 4) != 0 )
      {
        v10 = 0;
        if ( *((int *)v8 + 20) > 0 )
        {
          v11 = 0LL;
          v17 = 0LL;
          do
          {
            v12 = *(__int64 *)((char *)v8[9] + v11);
            if ( v12 )
            {
              do
              {
                v13 = (__int64 *)(v12 + 224);
                if ( !*(_QWORD *)(v12 + 224) )
                  break;
                v12 = *v13;
                *v13 = 0LL;
                CQueue<CResource *>::Insert(a3, v9, (v12 + 8) & -(__int64)(v12 != 0));
              }
              while ( v12 );
              v11 = v17;
            }
            v11 += 8LL;
            ++v10;
            v17 = v11;
          }
          while ( v10 < *((_DWORD *)v8 + 20) );
          v4 = a2;
        }
        v14 = *(_QWORD *)(v4 + 24);
        if ( *(_QWORD *)(*(_QWORD *)(v14 + v6) + 56LL) )
        {
          *((_BYTE *)v8 + 28) &= ~4u;
        }
        else
        {
          if ( v3 >= 0 && v7 <= *(_DWORD *)(v4 + 32) )
          {
            Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'((__int64 *)(v14 + 8LL * v3));
            v15 = *(_DWORD *)(v4 + 32);
            if ( v7 != v15 )
            {
              v16 = *(_QWORD *)(v4 + 24) + 8LL * v3;
              memmove((void *)v16, (const void *)(v16 + 8), 8LL * (v15 - v3 - 1));
            }
            --*(_DWORD *)(v4 + 32);
          }
          --v5;
          --v3;
          --v7;
          v6 -= 8LL;
        }
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v20);
      ++v3;
      ++v7;
      v6 += 8LL;
    }
    while ( v3 < v5 );
  }
}
