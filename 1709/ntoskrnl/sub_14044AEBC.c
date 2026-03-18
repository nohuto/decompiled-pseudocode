/*
 * XREFs of sub_14044AEBC @ 0x14044AEBC
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x14044A4DC (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     WbAlloc @ 0x140501FF8 (WbAlloc.c)
 *     WbVerifyVirtualAddressSignature @ 0x140503C14 (WbVerifyVirtualAddressSignature.c)
 *     sub_1405731F0 @ 0x1405731F0 (sub_1405731F0.c)
 */

__int64 __fastcall sub_14044AEBC(_DWORD *Source1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  signed int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edi
  void **v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _DWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  const void *v17; // rsi
  unsigned int v18; // edi
  unsigned __int64 v19; // rcx

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
          v8 = sub_1405731F0(*v11);
          if ( v8 >= 0 )
          {
            if ( RtlCompareMemory(Source1, *v11, 0xF4uLL) == 244 )
            {
              v14 = *v11;
              v15 = *(_QWORD *)(a2 + 8) - (v14[10] & 0xFFFFFFF);
              *(_QWORD *)(a3 + 32) = v15;
              v16 = (unsigned int)v14[12];
              if ( !(_DWORD)v16 )
                goto LABEL_30;
              v17 = (const void *)(v15 + (v14[11] & 0xFFFFFFF));
              v18 = 4 * v16;
              if ( (unsigned __int64)(4 * v16) > 0xFFFFFFFF )
              {
                v18 = -1;
                v8 = -1073741675;
              }
              else
              {
                v8 = 0;
              }
              if ( v8 >= 0 )
              {
                if ( v18 )
                {
                  v19 = (unsigned __int64)v17 + v18;
                  if ( v19 > 0x7FFFFFFF0000LL || v19 < (unsigned __int64)v17 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                v8 = WbAlloc(v18);
                if ( v8 >= 0 )
                {
                  memmove(*(void **)(a3 + 40), v17, v18);
LABEL_30:
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
