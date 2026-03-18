/*
 * XREFs of ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C00DBAC4
 * Callers:
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C00DB7F4 (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ValidateCalibrationData @ 0x1C01AA840 (ValidateCalibrationData.c)
 */

__int64 __fastcall ReadLinearityDataImp(
        void *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        ULONG *ResultLength,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbp

  v5 = 0;
  if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, 0LL, 0, ResultLength) != -1073741772
    && *ResultLength >= 0x28
    && *ResultLength - 12 <= 0xCA0 )
  {
    if ( *a5 )
    {
      Win32FreePool(*a5, v10, v11);
      *a5 = 0LL;
    }
    v13 = (_DWORD *)Win32AllocPool(*ResultLength, 2020635477LL);
    v14 = v13;
    if ( v13 )
    {
      if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, v13, *ResultLength, ResultLength) >= 0
        && v14[1] == 3
        && (v14[3] == v14[2] || v14[4] == 2) )
      {
        v17 = (void *)Win32AllocPool((unsigned int)v14[2], 2020635477LL);
        *a5 = v17;
        if ( v17 )
        {
          memmove(v17, v14 + 3, (unsigned int)v14[2]);
          v18 = (unsigned int)v14[2];
          *ResultLength = v18;
          v19 = *a5;
          if ( (unsigned int)ValidateCalibrationData(v18, *a5, a3) )
          {
            v5 = 1;
          }
          else
          {
            Win32FreePool(v19, v15, v16);
            *a5 = 0LL;
          }
        }
      }
      Win32FreePool(v14, v15, v16);
    }
  }
  return v5;
}
