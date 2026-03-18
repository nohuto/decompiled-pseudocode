/*
 * XREFs of WbInitializeEncryptionSegment @ 0x14045CE10
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x140549988 (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 *     sub_1405484E0 @ 0x1405484E0 (sub_1405484E0.c)
 *     sub_140548B04 @ 0x140548B04 (sub_140548B04.c)
 */

__int64 __fastcall WbInitializeEncryptionSegment(unsigned int *Source1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r10
  signed int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // edi
  void **v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _DWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  const void *v16; // r14
  unsigned int v17; // edi
  unsigned __int64 v18; // rcx

  v6 = 12LL * Source1[60];
  if ( v6 > 0xFFFFFFFF )
  {
    LODWORD(v6) = -1;
    v7 = -1073741675;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 >= 0 )
  {
    v8 = v6 + 244;
    v9 = -1;
    if ( (int)v6 + 244 >= (unsigned int)v6 )
      v9 = v6 + 244;
    v7 = v8 < (unsigned int)v6 ? 0xC0000095 : 0;
    if ( v8 >= (unsigned int)v6 )
    {
      v10 = (void **)(a3 + 48);
      v7 = WbAlloc(v9);
      if ( v7 >= 0 )
      {
        if ( v9 )
        {
          v11 = *(_QWORD *)(a2 + 8);
          v12 = v11 + v9;
          if ( v12 > 0x7FFFFFFF0000LL || v12 < v11 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        memmove(*v10, *(const void **)(a2 + 8), v9);
        v7 = sub_1405484E0(*(PVOID *)(a2 + 8));
        if ( v7 >= 0 )
        {
          v7 = sub_140548B04(*v10);
          if ( v7 >= 0 )
          {
            if ( RtlCompareMemory(Source1, *v10, 0xF4uLL) == 244 )
            {
              v13 = *v10;
              v14 = *(_QWORD *)(a2 + 8) - (v13[10] & 0xFFFFFFF);
              *(_QWORD *)(a3 + 32) = v14;
              v15 = (unsigned int)v13[12];
              if ( !(_DWORD)v15 )
                goto LABEL_30;
              v16 = (const void *)(v14 + (v13[11] & 0xFFFFFFF));
              v17 = 4 * v15;
              if ( (unsigned __int64)(4 * v15) > 0xFFFFFFFF )
              {
                v17 = -1;
                v7 = -1073741675;
              }
              else
              {
                v7 = 0;
              }
              if ( v7 >= 0 )
              {
                if ( v17 )
                {
                  v18 = (unsigned __int64)v16 + v17;
                  if ( v18 > 0x7FFFFFFF0000LL || v18 < (unsigned __int64)v16 )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
                v7 = WbAlloc(v17);
                if ( v7 >= 0 )
                {
                  memmove(*(void **)(a3 + 40), v16, v17);
LABEL_30:
                  *(_DWORD *)(a3 + 16) = 1;
                }
              }
            }
            else
            {
              v7 = -1073741811;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a3 + 20) = v7;
  return (unsigned int)v7;
}
