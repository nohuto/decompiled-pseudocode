/*
 * XREFs of ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1C008FCB8
 * Callers:
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C008FC7C (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall GdiHandleEntryDirectory::Destroy(struct GdiHandleEntryDirectory *a1)
{
  __int64 *v2; // rbx
  unsigned int i; // edi
  __int64 v4; // rsi
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx

  v2 = (__int64 *)((char *)a1 + 8);
  for ( i = 0; i < 0x100; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = *(_QWORD *)(v4 + 24);
      v6 = (unsigned int)(*(_DWORD *)(v5 + 8) + 255) >> 8;
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = *(_QWORD *)(v7 + *(_QWORD *)v5);
          if ( v9 )
            Win32FreePool(v9);
          v7 += 8LL;
          --v8;
        }
        while ( v8 );
      }
      Win32FreePool(v5);
      Win32FreePool(v4);
      *v2 = 0LL;
    }
    ++v2;
  }
  Win32FreePool((__int64)a1);
}
