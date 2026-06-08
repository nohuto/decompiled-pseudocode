/*
 * XREFs of ValidateCoordinatedDependencyOptionsProcessor @ 0x1C00290CC
 * Callers:
 *     ValidateCoordinatedDependencyOptions @ 0x1C0028EF8 (ValidateCoordinatedDependencyOptions.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C00098F8 (WPP_RECORDER_SF_ddd.c)
 */

__int64 __fastcall ValidateCoordinatedDependencyOptionsProcessor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  __int64 v5; // rbx
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  unsigned int *v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  int v16; // [rsp+20h] [rbp-28h]

  v5 = *(_QWORD *)(a3 + 16);
  KeAddProcessorAffinityEx(a4, *(unsigned int *)(v5 + 56));
  v8 = 0;
  v9 = *(_DWORD *)(a3 + 12);
  v10 = 0;
  v11 = *(unsigned int **)(v5 + 1120);
  *a5 = 0;
  if ( v9 )
  {
    v12 = *v11;
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)(a3 + 4LL * v10 + 24);
      if ( (unsigned int)v13 >= v12 )
        break;
      v7 = 3 * v13;
      if ( *(_BYTE *)(a3 + 4LL * v10 + 27) )
      {
        if ( (v11[3 * v13 + 1] & 0x80u) != 0 )
          *a5 = 1;
        if ( !*(_BYTE *)(a3 + 4LL * v10 + 25) )
        {
          v14 = 79;
          goto LABEL_12;
        }
      }
      if ( ++v10 >= v9 )
        return v8;
    }
    v14 = 78;
LABEL_12:
    WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, (__int64)v11, v14, v16);
    return (unsigned int)-1073741811;
  }
  return v8;
}
