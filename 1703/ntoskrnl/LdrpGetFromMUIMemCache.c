/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x140013514
 * Callers:
 *     LdrpGetRcConfig @ 0x1400131C8 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x140013300 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x14057D7AC (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x1400136C0 (LdrpInitMuiCrits.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140149348 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  PIMAGE_NT_HEADERS v9; // r13
  int i; // r8d
  ULONG v11; // edx
  char v13; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v13 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v9 = RtlImageNtHeader((PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL));
  if ( !v9 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == DllHandle )
    {
      if ( *((_DWORD *)AlternateResourceModules + 18 * i + 6) != v9->OptionalHeader.CheckSum )
      {
        v13 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *((_QWORD *)AlternateResourceModules + 9 * i + 2) )
        {
          _mm_lfence();
          v8 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 9 * i + 2);
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v13 = 1;
            v8 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *((_WORD *)AlternateResourceModules + 36 * i) == a2 )
      {
        v8 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 9 * i + 4);
        if ( a3 )
          *a3 = *((_QWORD *)AlternateResourceModules + 9 * i + 6);
        break;
      }
    }
  }
  KeReleaseMutant(&MuiMutex, 1, 0, 0);
  if ( v13 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, v11);
  return v8;
}
