/*
 * XREFs of ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C01A9DAC
 * Callers:
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01A9C54 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall RegQueryValueCal(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // rsi
  NTSTATUS v10; // ebx
  unsigned int v11; // ebp
  _DWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  ResultLength = a3;
  v6 = a6;
  if ( a4 || !a6 )
  {
    v11 = a5;
    if ( a5 - 12 > 0xCA0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      ResultLength = a5 + 12;
      v12 = (_DWORD *)Win32AllocPool(a5 + 12, 2020635477LL);
      if ( v12 )
      {
        v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v12, ResultLength, &ResultLength);
        if ( v10 >= 0 )
        {
          if ( v12[1] == 3 )
          {
            if ( a4 )
            {
              v15 = v12[2];
              if ( v15 > v11 )
                v10 = -1073741789;
              else
                memmove(a4, v12 + 3, v15);
            }
          }
          else
          {
            v10 = -1073741788;
          }
        }
        if ( v6 && (!v10 || v10 == -1073741789) )
          *v6 = v12[2];
        Win32FreePool(v12, v13, v14);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v10 != -1073741772 && ResultLength )
    {
      *v6 = ResultLength;
      return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v10;
}
