/*
 * XREFs of ndisGetServiceNameFromRegPath @ 0x1C00C80FC
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002209C (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisRegisterMiniportDriver @ 0x1C010F5AC (ndisRegisterMiniportDriver.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall ndisGetServiceNameFromRegPath(__int64 a1, __int64 a2)
{
  char v3; // r11
  unsigned __int16 v4; // r9
  unsigned __int16 v5; // r10
  __int64 v6; // rbx
  unsigned __int16 result; // ax
  _WORD *v8; // rcx
  __int16 v9; // cx

  if ( a2 )
  {
    if ( a1 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        *(_QWORD *)(a2 + 8) = 0LL;
        v3 = 1;
        *(_DWORD *)a2 = 0;
        v4 = 0;
        v5 = 0;
        v6 = *(_QWORD *)(a1 + 8);
        result = *(_WORD *)a1 & 0xFFFE;
        if ( result )
        {
          do
          {
            v8 = (_WORD *)(v6 + 2LL * v5);
            if ( *v8 == 92 )
            {
              v3 = 1;
            }
            else if ( v3 )
            {
              *(_QWORD *)(a2 + 8) = v8;
              v4 = v5;
              v3 = 0;
            }
            ++v5;
            result = *(_WORD *)a1 >> 1;
          }
          while ( v5 < result );
          if ( *(_QWORD *)(a2 + 8) )
          {
            v9 = *(_WORD *)a1 - 2 * v4;
            *(_WORD *)(a2 + 2) = v9;
            *(_WORD *)a2 = v9;
          }
        }
      }
    }
  }
  return result;
}
