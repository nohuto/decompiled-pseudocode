/*
 * XREFs of sub_14048AC0C @ 0x14048AC0C
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x14048A1F4 (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     WbAlloc @ 0x14050F678 (WbAlloc.c)
 *     WbVerifyVirtualAddressSignature @ 0x140539FCC (WbVerifyVirtualAddressSignature.c)
 *     sub_14053A6D0 @ 0x14053A6D0 (sub_14053A6D0.c)
 */

__int64 __fastcall sub_14048AC0C(_DWORD *Source1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  signed int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edi
  void **v11; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _DWORD *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  const void *v17; // r14
  unsigned __int64 v18; // rax
  unsigned int v19; // edi
  unsigned __int64 v20; // rcx

  v6 = 12LL * (unsigned int)Source1[60];
  v7 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v7 = 12 * Source1[60];
  v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 <= 0xFFFFFFFF )
  {
    v9 = v7 + 244;
    v10 = -1;
    if ( v7 + 244 >= v7 )
      v10 = v7 + 244;
    v8 = v9 < v7 ? 0xC0000095 : 0;
    if ( v9 >= v7 )
    {
      v11 = (void **)(a3 + 48);
      v8 = WbAlloc(v10);
      if ( v8 >= 0 )
      {
        if ( v10 )
        {
          v12 = *(_QWORD *)(a2 + 8);
          v13 = v12 + v10;
          if ( v13 > 0x7FFFFFFF0000LL || v13 < v12 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        memmove(*v11, *(const void **)(a2 + 8), v10);
        v8 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 8));
        if ( v8 >= 0 )
        {
          v8 = sub_14053A6D0(*v11);
          if ( v8 >= 0 )
          {
            if ( RtlCompareMemory(Source1, *v11, 0xF4uLL) == 244 )
            {
              v14 = *v11;
              v15 = *(_QWORD *)(a2 + 8) - (v14[10] & 0xFFFFFFF);
              *(_QWORD *)(a3 + 32) = v15;
              v16 = (unsigned int)v14[12];
              if ( !(_DWORD)v16 )
                goto LABEL_29;
              v17 = (const void *)(v15 + (v14[11] & 0xFFFFFFF));
              v18 = 4 * v16;
              v19 = -1;
              if ( v18 <= 0xFFFFFFFF )
                v19 = v18;
              v8 = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
              if ( v18 <= 0xFFFFFFFF )
              {
                if ( v19 )
                {
                  v20 = (unsigned __int64)v17 + v19;
                  if ( v20 > 0x7FFFFFFF0000LL || v20 < (unsigned __int64)v17 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                v8 = WbAlloc(v19);
                if ( v8 >= 0 )
                {
                  memmove(*(void **)(a3 + 40), v17, v19);
LABEL_29:
                  *(_DWORD *)(a3 + 16) = 1;
                }
              }
            }
            else
            {
              v8 = -1073741811;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a3 + 20) = v8;
  return (unsigned int)v8;
}
