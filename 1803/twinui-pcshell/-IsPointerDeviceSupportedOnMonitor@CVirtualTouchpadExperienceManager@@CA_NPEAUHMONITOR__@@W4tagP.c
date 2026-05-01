/*
 * XREFs of ?IsPointerDeviceSupportedOnMonitor@CVirtualTouchpadExperienceManager@@CA_NPEAUHMONITOR__@@W4tagPOINTER_DEVICE_TYPE@@@Z @ 0x180181A14
 * Callers:
 *     _lambda_d069a879f7516815ef2bdb1c6ddd3b24_::_lambda_invoker_cdecl_ @ 0x18017FC80 (_lambda_d069a879f7516815ef2bdb1c6ddd3b24_--_lambda_invoker_cdecl_.c)
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z @ 0x180181030 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJUtagPOINT@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800994F8 (--_U@YAPEAX_K@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

char __fastcall CVirtualTouchpadExperienceManager::IsPointerDeviceSupportedOnMonitor(__int64 a1)
{
  char v2; // bl
  signed int Error; // eax
  char *v4; // rax
  char *v5; // rdi
  const struct std::nothrow_t *v6; // rdx
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v9 = 0;
  if ( (unsigned int)GetPointerDevices(&v9, 0LL)
    || (Error = ResultFromKnownLastError(), (int)(Error + 0x80000000) < 0)
    || Error == -2147024774 )
  {
    if ( v9 )
    {
      v4 = (char *)operator new[](saturated_mul(v9, 0x438uLL));
      v5 = v4;
      if ( v4 )
      {
        if ( (unsigned int)GetPointerDevices(&v9, v4) || ResultFromKnownLastError() >= 0 )
        {
          v7 = 0;
          if ( v9 )
          {
            while ( 1 )
            {
              v6 = (const struct std::nothrow_t *)(1080LL * v7);
              if ( *(_QWORD *)&v5[(_QWORD)v6 + 24] == a1 && *(_DWORD *)&v5[(_QWORD)v6 + 16] == 3 )
                break;
              if ( ++v7 >= v9 )
                goto LABEL_14;
            }
            v2 = 1;
          }
        }
LABEL_14:
        operator delete(v5, v6);
      }
    }
  }
  return v2;
}
