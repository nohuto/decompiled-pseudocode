/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1C01063E0
 * Callers:
 *     <none>
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C000B1BC (rimHidP_GetSpecificValueCaps.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     GetPreparsedData @ 0x1C0105840 (GetPreparsedData.c)
 *     _PopulatePropertyUsageValues @ 0x1C0105898 (_PopulatePropertyUsageValues.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  struct _HIDP_BUTTON_CAPS *v6; // r14
  unsigned __int16 v7; // r12
  unsigned __int16 v8; // r15
  int v11; // ecx
  __int64 v12; // rax
  struct _HIDP_PREPARSED_DATA *v13; // rdi
  struct _HIDP_VALUE_CAPS *v14; // r15
  __int64 v15; // rax
  unsigned __int16 v16; // r9
  unsigned int v17; // edi
  __int64 v18; // r13
  unsigned int v19; // edi
  unsigned __int16 v20; // r8
  unsigned int v21; // r8d
  USAGE *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int16 v25[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v26; // [rsp+54h] [rbp-1Ch]
  unsigned int v27; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-14h] BYREF
  struct _HIDP_PREPARSED_DATA *v29; // [rsp+60h] [rbp-10h] BYREF

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
  v11 = *(_DWORD *)(a1 + 260);
  if ( (v11 & 8) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 688);
    v8 = *(_WORD *)(v12 + 10);
    v7 = *(_WORD *)(v12 + 4);
    v26 = v8;
  }
  if ( (v11 & 0x80u) != 0 )
    v7 = *(_WORD *)(a1 + 708);
  v13 = v29;
  if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0, v7, 0, 0LL, v25, v29) != -1072627705 )
    return 0LL;
  v14 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInit(72 * (v25[0] + (unsigned __int64)v8), 1668707157LL);
  if ( v14 )
  {
    if ( (unsigned int)PopulatePropertyUsageValues(a1, &v27, a4, v7, v25[0], v14, a2, a3, v13) )
    {
      v15 = *(_QWORD *)(a1 + 688);
      if ( !v15
        || (v16 = *(_WORD *)(v15 + 8)) == 0
        || (unsigned int)PopulatePropertyUsageValues(a1, &v27, a4, v16, v26, &v14[v27], a2, a3, v13) )
      {
        v17 = a2;
        v18 = v27;
        v19 = v17 - v27;
        v28 = v19;
        if ( v19 )
        {
          v6 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInit(72LL * v19, 1668707157LL);
          if ( v6 )
          {
            v20 = 0;
            if ( *(_DWORD *)(a1 + 24) != 7 )
              v20 = v7;
            if ( rimHidP_GetSpecificButtonCaps(HidP_Input, 0, v20, 0, v6, (unsigned __int16 *)&v28, v29) >= 0
              && v19 == v28 )
            {
              memset((void *)(a3 + 28 * v18), 0, 28LL * v19);
              v21 = 0;
              v5 = 1;
              if ( (unsigned int)v18 < a2 )
              {
                v22 = (USAGE *)(a3 + 28 * v18 + 26);
                v23 = v19;
                do
                {
                  v24 = v21++;
                  *(v22 - 1) = v6[v24].UsagePage;
                  *v22 = v6[v24].Range.UsageMin;
                  *(_DWORD *)(v22 - 11) = 1;
                  v22 += 14;
                  --v23;
                }
                while ( v23 );
              }
            }
          }
        }
      }
    }
    Win32FreePool((__int64)v14);
  }
  if ( v6 )
    Win32FreePool((__int64)v6);
  return v5;
}
