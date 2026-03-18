/*
 * XREFs of McGenControlCallbackV2 @ 0x1800C77D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     DispatchDwmDiagnosticsControlMessage @ 0x1801C8B80 (DispatchDwmDiagnosticsControlMessage.c)
 */

void __fastcall McGenControlCallbackV2(__int64 a1, int a2, char a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // r8d
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  bool v11; // r10
  int v12; // edx
  int *v13; // rcx
  int v14; // edx
  unsigned int v15; // edx

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *(_BYTE *)(a7 + 40) = a3;
        v8 = 0;
        *(_QWORD *)(a7 + 24) = a5;
        *(_QWORD *)(a7 + 16) = a4;
        for ( *(_DWORD *)(a7 + 36) = 1; v8 < *(unsigned __int16 *)(a7 + 42); ++v8 )
        {
          v9 = *(_BYTE *)(a7 + 40);
          v11 = 0;
          if ( *(_BYTE *)(v8 + *(_QWORD *)(a7 + 64)) <= v9 || !v9 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(a7 + 56) + 8LL * v8);
            if ( !v10 || (v10 & *(_QWORD *)(a7 + 16)) != 0 && (v10 & *(_QWORD *)(a7 + 24)) == *(_QWORD *)(a7 + 24) )
              v11 = 1;
          }
          v12 = 1 << (v8 & 0x1F);
          v13 = (int *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v8 >> 5));
          if ( v11 )
            v14 = *v13 | v12;
          else
            v14 = *v13 & ~v12;
          *v13 = v14;
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
    if ( a2 == 2 && (REGHANDLE *)a7 == &Microsoft_Windows_Dwm_Core_Provider_Context )
    {
      if ( a6 )
      {
        if ( *(_DWORD *)(a6 + 12) == 0x80000000 )
        {
          v15 = *(_DWORD *)(a6 + 8);
          if ( v15 >= 0x1C && *(_DWORD *)(*(_QWORD *)a6 + 16LL) <= v15 )
            DispatchDwmDiagnosticsControlMessage(*(struct DwmDiagnosticsControlMessage_0 **)a6);
        }
      }
    }
  }
}
