/*
 * XREFs of McGenControlCallbackV2 @ 0x18018F0F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     DispatchDwmDiagnosticsControlMessage @ 0x180191E38 (DispatchDwmDiagnosticsControlMessage.c)
 */

void __fastcall McGenControlCallbackV2(__int64 a1, int a2, char a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // r11d
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  unsigned int v11; // edx

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v8 = 0;
        *(_QWORD *)(a7 + 24) = a5;
        *(_BYTE *)(a7 + 40) = a3;
        *(_QWORD *)(a7 + 16) = a4;
        for ( *(_DWORD *)(a7 + 36) = 1; v8 < *(unsigned __int16 *)(a7 + 42); v8 += a2 )
        {
          v9 = *(_BYTE *)(a7 + 40);
          if ( (*(_BYTE *)(v8 + *(_QWORD *)(a7 + 64)) <= v9 || !v9)
            && ((v10 = *(_QWORD *)(*(_QWORD *)(a7 + 56) + 8LL * v8)) == 0
             || (v10 & *(_QWORD *)(a7 + 16)) != 0 && (v10 & *(_QWORD *)(a7 + 24)) == *(_QWORD *)(a7 + 24)) )
          {
            *(_DWORD *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v8 >> 5)) |= a2 << (v8 & 0x1F);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v8 >> 5)) &= ~(a2 << (v8 & 0x1F));
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(a7 + 36) = 0;
      *(_BYTE *)(a7 + 40) = 0;
      *(_QWORD *)(a7 + 16) = 0LL;
      *(_QWORD *)(a7 + 24) = 0LL;
      if ( *(_WORD *)(a7 + 42) )
        memset_0(*(void **)(a7 + 48), 0, 4LL * ((*(unsigned __int16 *)(a7 + 42) - 1) / 32 + 1));
    }
    if ( (REGHANDLE *)a7 == &Microsoft_Windows_Dwm_Core_Provider_Context && a2 == 2 )
    {
      if ( a6 )
      {
        if ( *(_DWORD *)(a6 + 12) == 0x80000000 )
        {
          v11 = *(_DWORD *)(a6 + 8);
          if ( v11 >= 0x1C && *(_DWORD *)(*(_QWORD *)a6 + 16LL) <= v11 )
            DispatchDwmDiagnosticsControlMessage(*(struct DwmDiagnosticsControlMessage_0 **)a6);
        }
      }
    }
  }
}
