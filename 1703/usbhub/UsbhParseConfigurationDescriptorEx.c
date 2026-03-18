/*
 * XREFs of UsbhParseConfigurationDescriptorEx @ 0x1C001B090
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C001AE40 (UsbhConfigureUsbHub.c)
 *     UsbhGetDeviceInformation @ 0x1C001FAE0 (UsbhGetDeviceInformation.c)
 * Callees:
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

unsigned __int8 *__fastcall UsbhParseConfigurationDescriptorEx(
        int a1,
        __int64 a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v8; // rbx
  unsigned __int64 v9; // r10
  __int64 v13; // r9
  unsigned __int8 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // cl
  unsigned __int8 *v17; // r8
  __int64 v19; // rcx
  int v20; // [rsp+48h] [rbp-10h]

  v8 = 0LL;
  v9 = a2 + *(unsigned __int16 *)(a2 + 2);
LABEL_2:
  v13 = *(unsigned __int16 *)(a2 + 2);
  v14 = a3;
  v15 = a2 + v13;
  if ( (unsigned __int64)a3 < a2 + v13 )
  {
    while ( v15 - (unsigned __int64)v14 >= 2 )
    {
      if ( v14[1] == 4 )
      {
        if ( v14 )
        {
          v8 = v14;
          if ( a4 != -1
            && (v9 < (unsigned __int64)v14
             || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
             || v9 - (unsigned __int64)v14 < 3
             || v14[2] != a4) )
          {
            v8 = 0LL;
          }
          if ( a6 != -1
            && (v9 < (unsigned __int64)v14
             || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
             || v9 - (unsigned __int64)v14 < 6
             || v14[5] != a6) )
          {
            v8 = 0LL;
          }
          if ( a7 != -1
            && (v9 < (unsigned __int64)v14
             || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
             || v9 - (unsigned __int64)v14 < 7
             || v14[6] != a7) )
          {
            v8 = 0LL;
          }
          if ( a8 != -1
            && (v9 < (unsigned __int64)v14
             || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
             || v9 - (unsigned __int64)v14 < 8
             || v14[7] != a8) )
          {
            v8 = 0LL;
          }
          v19 = *v14;
          a3 = &v14[v19];
          if ( !v8 )
          {
            if ( (_BYTE)v19 )
              goto LABEL_2;
          }
        }
        return v8;
      }
      v16 = *v14;
      if ( !*v14 )
      {
        LOBYTE(v20) = 0;
        UsbhException(a1, 0, 83, a2, v13, -1, -1, usbfile_usbd_c, 105, v20);
        return v8;
      }
      v17 = &v14[v16];
      if ( v14 <= v17 )
      {
        v14 += v16;
        if ( (unsigned __int64)v17 < v15 )
          continue;
      }
      return v8;
    }
  }
  return v8;
}
