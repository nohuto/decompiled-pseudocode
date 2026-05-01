/*
 * XREFs of ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x1800CC44C
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z @ 0x1800CAAF0 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z.c)
 *     _lambda_d069a879f7516815ef2bdb1c6ddd3b24_::_lambda_invoker_cdecl_ @ 0x1800CAE60 (_lambda_d069a879f7516815ef2bdb1c6ddd3b24_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1801E31B0 (--_U@YAPEAX_K@Z.c)
 */

char __fastcall CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(__int64 a1)
{
  char v2; // si
  signed int LastError; // eax
  signed int v4; // ecx
  char *v5; // rdi
  signed int v6; // ebx
  signed int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v2 = 0;
  if ( (unsigned int)GetPointerDevices(&v11, 0LL) )
    goto LABEL_8;
  LastError = GetLastError();
  v4 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v4 = LastError;
  if ( v4 >= 0 )
    v4 = -2147467259;
  if ( ((v4 + 0x80000000) & 0x80000000) != 0 || v4 == -2147024774 )
  {
LABEL_8:
    if ( v11 )
    {
      v5 = (char *)operator new[](saturated_mul(v11, 0x438uLL));
      v6 = v5 == 0LL ? 0x8007000E : 0;
      if ( v5 && !(unsigned int)GetPointerDevices(&v11, v5) )
      {
        v7 = GetLastError();
        v6 = (unsigned __int16)v7 | 0x80070000;
        if ( v7 <= 0 )
          v6 = v7;
        if ( v6 >= 0 )
          v6 = -2147467259;
      }
      if ( v6 >= 0 )
      {
        v8 = 0;
        if ( v11 )
        {
          while ( 1 )
          {
            v9 = 1080LL * v8;
            if ( *(_QWORD *)&v5[v9 + 24] == a1 && *(_DWORD *)&v5[v9 + 16] == 3 )
              break;
            if ( ++v8 >= v11 )
              goto LABEL_22;
          }
          v2 = 1;
        }
      }
LABEL_22:
      if ( v5 )
        operator delete(v5);
    }
  }
  return v2;
}
