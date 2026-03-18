/*
 * XREFs of rimStoreRawDataBlock @ 0x1C010DF08
 * Callers:
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C010D7C8 (RIMStoreRawDataInPointerDeviceFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

void __fastcall rimStoreRawDataBlock(__int64 a1, __int64 a2, const void *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  size_t v7; // r14
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rax

  v7 = a4;
  *a6 = 0;
  if ( a3 )
  {
    v8 = *(_DWORD *)(a5 + 48);
    *a6 = v8 + 1;
    if ( v8 != -1 )
    {
      v9 = Win32AllocPoolZInit(0x18uLL, 1685222226LL);
      if ( v9 )
      {
        v10 = Win32AllocPool((unsigned int)v7, 0x64727352u);
        v9[1] = v10;
        if ( !v10 )
        {
          Win32FreePool((__int64)v9);
          v9 = 0LL;
        }
        if ( v9 )
        {
          v11 = (void *)v9[1];
          *(_DWORD *)v9 = *a6;
          *((_DWORD *)v9 + 1) = v7;
          memmove(v11, a3, v7);
          v9[2] = 0LL;
          v12 = *(_QWORD *)(a5 + 64);
          if ( v12 )
            *(_QWORD *)(v12 + 16) = v9;
          else
            *(_QWORD *)(a5 + 56) = v9;
          *(_QWORD *)(a5 + 64) = v9;
          *(_DWORD *)(a5 + 48) = *a6;
        }
      }
    }
  }
}
