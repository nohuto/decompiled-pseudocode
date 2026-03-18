/*
 * XREFs of GetSrbScsiData @ 0x1C0006F54
 * Callers:
 *     MdlToPrp @ 0x1C00070DC (MdlToPrp.c)
 *     NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C0008880 (NVMeGetFeaturesCurrentCacheValueCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0008A90 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 *     NVMeMapError @ 0x1C0012230 (NVMeMapError.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbScsiData(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _BYTE *a5)
{
  char v5; // al
  __int64 v6; // rdi
  char v7; // bp
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx

  v5 = *(_BYTE *)(a1 + 2);
  v6 = 0LL;
  v7 = 0;
  if ( v5 == 40 && !*(_DWORD *)(a1 + 20) )
  {
    v10 = 0LL;
    if ( *(_DWORD *)(a1 + 56) )
    {
      while ( 1 )
      {
        v11 = *(unsigned int *)(a1 + 4 * v10 + 120);
        if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 <= *(_DWORD *)(a1 + 16) )
        {
          v12 = a1 + v11;
          v13 = *(_DWORD *)(a1 + v11) - 64;
          if ( !v13 || (v14 = v13 - 1) == 0 )
          {
            v7 = 1;
            if ( a2 )
              *a2 = *(unsigned __int8 *)(v12 + 10);
            v17 = v12 + 24;
            if ( !*(_BYTE *)(v12 + 10) )
              v17 = v6;
            v6 = v17;
            if ( a3 )
              *a3 = v12 + 8;
            if ( a4 )
            {
              v16 = *(_QWORD *)(v12 + 16);
LABEL_25:
              *a4 = v16;
            }
LABEL_26:
            if ( a5 )
              *a5 = *(_BYTE *)(v12 + 9);
            goto LABEL_28;
          }
          if ( v14 == 1 )
          {
            v7 = 1;
            if ( a2 )
              *a2 = *(_DWORD *)(v12 + 12);
            v15 = v12 + 32;
            if ( !*(_DWORD *)(v12 + 12) )
              v15 = v6;
            v6 = v15;
            if ( a3 )
              *a3 = v12 + 8;
            if ( a4 )
            {
              v16 = *(_QWORD *)(v12 + 24);
              goto LABEL_25;
            }
            goto LABEL_26;
          }
        }
LABEL_28:
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 56) )
        {
          v5 = *(_BYTE *)(a1 + 2);
          break;
        }
      }
    }
  }
  if ( v5 )
    goto LABEL_41;
  v7 = 1;
  if ( a2 )
    *a2 = *(unsigned __int8 *)(a1 + 10);
  v18 = a1 + 72;
  if ( !*(_BYTE *)(a1 + 10) )
    v18 = v6;
  v6 = v18;
  if ( a3 )
    *a3 = a1 + 4;
  if ( a4 )
    *a4 = *(_QWORD *)(a1 + 32);
  if ( a5 )
  {
    *a5 = *(_BYTE *)(a1 + 11);
LABEL_41:
    if ( !v7 )
    {
      if ( a2 )
        *a2 = 0;
      if ( a3 )
        *a3 = 0LL;
      if ( a4 )
        *a4 = 0LL;
      if ( a5 )
        *a5 = 0;
    }
  }
  return v6;
}
