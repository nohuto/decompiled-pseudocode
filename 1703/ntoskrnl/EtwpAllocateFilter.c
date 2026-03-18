/*
 * XREFs of EtwpAllocateFilter @ 0x1405C19A4
 * Callers:
 *     EtwpValidateFilterDescriptors @ 0x1405C1830 (EtwpValidateFilterDescriptors.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x140713054 (EtwpValidateTraceControlFilterDescriptors.c)
 * Callees:
 *     EtwpAllocateEventNameFilter @ 0x1405C1A20 (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x140712504 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x14071258C (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x140712AC0 (EtwpCreatePerfectHashFunction.c)
 */

__int64 __fastcall EtwpAllocateFilter(int a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rcx
  _WORD *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  _WORD *v16; // rax

  v4 = 0;
  switch ( a1 )
  {
    case -2147483640:
      v8 = a3;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v8);
    case -2147483632:
      v8 = a3 + 8;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v8);
    case -2147483616:
      v8 = a3 + 16;
      return (unsigned int)EtwpAllocateStringFilterData(a2, v8);
    case -2147479552:
      v9 = *a2;
      v10 = *((unsigned int *)a2 + 2);
      if ( (unsigned int)(v10 - 6) <= 0x3FA )
      {
        v11 = *(unsigned __int16 *)(v9 + 2);
        if ( v10 == 2 * v11 + 4 )
        {
          v12 = 1LL;
          if ( (unsigned __int16)(v11 - 1) <= 0x3Fu )
          {
            if ( *(_WORD *)(v9 + 2) )
            {
              v13 = (_WORD *)(v9 + 4);
              while ( *v13 != 0xFFFF )
              {
                ++v4;
                ++v13;
                if ( v4 >= (unsigned int)v11 )
                  goto LABEL_21;
              }
              return (unsigned int)-1073741811;
            }
LABEL_21:
            v14 = a3 + 32;
            goto LABEL_23;
          }
        }
      }
      return (unsigned int)-1073741811;
    case -2147483136:
      v9 = *a2;
      v15 = *((unsigned int *)a2 + 2);
      if ( (unsigned int)(v15 - 6) <= 0x3FA )
      {
        v11 = *(unsigned __int16 *)(v9 + 2);
        if ( v15 == 2 * v11 + 4 )
        {
          v12 = 1LL;
          if ( (unsigned __int16)(v11 - 1) <= 0x3Fu )
          {
            if ( *(_WORD *)(v9 + 2) )
            {
              v16 = (_WORD *)(v9 + 4);
              while ( *v16 != 0xFFFF )
              {
                ++v4;
                ++v16;
                if ( v4 >= (unsigned int)v11 )
                  goto LABEL_22;
              }
              return (unsigned int)-1073741811;
            }
LABEL_22:
            v14 = a3 + 24;
LABEL_23:
            LOBYTE(v12) = *(_BYTE *)v9;
            return (unsigned int)EtwpCreatePerfectHashFunction(v12, v9 + 4, (unsigned __int16)v11, v14);
          }
        }
      }
      return (unsigned int)-1073741811;
    case -2147482624:
      return (unsigned int)EtwpAllocateEventNameFilter(a2, a3 + 40);
  }
  if ( a1 != -2147483392 )
    return v4;
  if ( a4 )
    return (unsigned int)EtwpAllocatePayloadFilterData(a4, a2, a3 + 48);
  return 3221225485LL;
}
