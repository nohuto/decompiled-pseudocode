/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1C0012420
 * Callers:
 *     <none>
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C001266C (rimHidP_GetSpecificButtonCaps.c)
 *     _PopulatePropertyUsageValues @ 0x1C00126C0 (_PopulatePropertyUsageValues.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     GetPreparsedData @ 0x1C00128FC (GetPreparsedData.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned __int16 v7; // r13
  unsigned __int16 v8; // r12
  int v10; // ecx
  __int64 v11; // r14
  _WORD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // r8d
  _WORD *v21; // rdi
  __int64 v22; // rax
  __int64 v24; // rax
  unsigned __int16 v25[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v26; // [rsp+54h] [rbp-1Ch]
  unsigned int v27; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h] BYREF

  v28 = 0;
  v5 = 0;
  v27 = 0;
  v6 = 0LL;
  v25[0] = 0;
  v7 = 0;
  v26 = 0;
  v8 = 0;
  v29 = 0LL;
  if ( !(unsigned int)GetPreparsedData(a1, &v29) )
    return 0LL;
  v10 = *(_DWORD *)(a1 + 276);
  if ( (v10 & 8) != 0 )
  {
    v24 = *(_QWORD *)(a1 + 672);
    v8 = *(_WORD *)(v24 + 10);
    v7 = *(_WORD *)(v24 + 4);
    v26 = v8;
  }
  if ( (v10 & 0x80u) != 0 )
    v7 = *(_WORD *)(a1 + 688);
  v11 = v29;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 0, v7, 0, 0LL, (__int64)v25, v29) != -1072627705 )
    return 0LL;
  v14 = Win32AllocPoolZInit(72LL * (v25[0] + (unsigned int)v8));
  if ( v14 )
  {
    if ( (unsigned int)PopulatePropertyUsageValues(a1, (unsigned int)&v27, a4, v7, v25[0], v14, a2, a3, v11) )
    {
      v15 = *(_QWORD *)(a1 + 672);
      if ( !v15
        || (v16 = *(unsigned __int16 *)(v15 + 8), !(_WORD)v16)
        || (unsigned int)PopulatePropertyUsageValues(
                           a1,
                           (unsigned int)&v27,
                           a4,
                           v16,
                           v26,
                           v14 + 72LL * v27,
                           a2,
                           a3,
                           v11) )
      {
        v17 = a2 - v27;
        v28 = a2 - v27;
        if ( a2 != v27 )
        {
          v18 = (unsigned int)v17;
          v19 = Win32AllocPoolZInit(72 * v17);
          v6 = v19;
          if ( v19 )
          {
            v20 = 0;
            if ( *(_DWORD *)(a1 + 24) != 7 )
              LOWORD(v20) = v7;
            if ( (int)rimHidP_GetSpecificButtonCaps(0, 0, v20, 0, v19, (__int64)&v28, v29) >= 0 && (_DWORD)v17 == v28 )
            {
              v21 = (_WORD *)(a3 + 28LL * v27);
              memset(v21, 0, 28LL * (unsigned int)v17);
              v13 = 0LL;
              v5 = 1;
              if ( v27 < a2 )
              {
                v12 = v21 + 13;
                do
                {
                  v22 = (unsigned int)v13;
                  v13 = (unsigned int)(v13 + 1);
                  *(v12 - 1) = *(_WORD *)(v6 + 72 * v22);
                  *v12 = *(_WORD *)(v6 + 72 * v22 + 56);
                  *(_DWORD *)(v12 - 11) = 1;
                  v12 += 14;
                  --v18;
                }
                while ( v18 );
              }
            }
          }
        }
      }
    }
  }
  if ( v14 )
    Win32FreePool(v14, v12, v13);
  if ( v6 )
    Win32FreePool(v6, v12, v13);
  return v5;
}
