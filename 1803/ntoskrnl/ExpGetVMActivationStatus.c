/*
 * XREFs of ExpGetVMActivationStatus @ 0x1405F36F0
 * Callers:
 *     ExpGenuinePolicyPostProcess @ 0x140549E30 (ExpGenuinePolicyPostProcess.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x1401A9E20 (ZwQueryLicenseValue.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     sub_1405F3CBC @ 0x1405F3CBC (sub_1405F3CBC.c)
 *     ExActivateVMWithSubscription @ 0x1407BDA5C (ExActivateVMWithSubscription.c)
 *     ExGetVMType @ 0x1407BDE9C (ExGetVMType.c)
 */

__int64 __fastcall ExpGetVMActivationStatus(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  _BYTE *v5; // rdi
  __int64 result; // rax
  unsigned int v11; // r11d
  _DWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v14[2]; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v15[2]; // [rsp+48h] [rbp-8h] BYREF

  v5 = a5;
  v12[0] = 0;
  *a5 = 0;
  v12[1] = 4;
  if ( (int)ZwQueryLicenseValue((__int64)L">@", 0LL, (__int64)v12) < 0 || !v12[0] )
    return 0LL;
  result = ExGetVMType(&a5);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)a5 )
    {
      result = ExActivateVMWithSubscription(a1, a2, a3, a4, (__int64)v5);
      if ( (int)result < 0 || !*v5 )
      {
        result = 3221226098LL;
        if ( (_DWORD)a5 == 1 )
        {
          if ( !qword_140861440 )
            goto LABEL_14;
          result = ((__int64 (__fastcall *)(int *))qword_140861440)(&v13);
          if ( (int)result >= 0 )
          {
            result = sub_1405F3CBC(a1, a2, a3, a4, v13);
            *v5 = 1;
          }
          if ( (_DWORD)result == -1073741198 )
          {
LABEL_14:
            if ( qword_140861430 )
            {
              v14[0] = 0x20000;
              v14[1] = 1;
              result = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, __int64))qword_140861430)(
                         v14,
                         8LL,
                         v15,
                         8LL);
              if ( (int)result >= 0 && v15[0] == 0x20000 )
              {
                result = sub_1405F3CBC(a1, a2, a3, a4, v15[1]);
                *v5 = 1;
                if ( qword_140861438 )
                  return ((__int64 (__fastcall *)(_QWORD))qword_140861438)(v11);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
