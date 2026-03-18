/*
 * XREFs of _GetPointerDeviceProperties @ 0x1C001CA9C
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C00203A0 (NtUserGetPointerDeviceProperties.c)
 * Callees:
 *     ?_PopulatePropertyUsageValues@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAIIGGPEAU_HIDP_VALUE_CAPS@@IPEAUtagPOINTER_DEVICE_PROPERTY@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C001CCEC (-_PopulatePropertyUsageValues@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAIIGGPEAU_HIDP_VALUE_CAPS@@I.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall GetPointerDeviceProperties(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        __int64 a2,
        struct tagPOINTER_DEVICE_PROPERTY *a3,
        unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct _HIDP_BUTTON_CAPS *v8; // r14
  USHORT v9; // r13
  unsigned __int16 v10; // r12
  __int64 v11; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  int v13; // ecx
  struct _HIDP_VALUE_CAPS *v14; // r12
  __int64 v15; // rax
  unsigned __int16 v16; // r9
  unsigned int v17; // edi
  USHORT v18; // r8
  USAGE *v19; // rsi
  unsigned int v20; // r8d
  USAGE *v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v25; // rax
  unsigned __int16 v26; // [rsp+50h] [rbp-18h]
  unsigned int v27; // [rsp+54h] [rbp-14h] BYREF
  USHORT ButtonCapsLength[8]; // [rsp+58h] [rbp-10h] BYREF
  USHORT ValueCapsLength; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+50h]
  struct tagPOINTER_DEVICE_PROPERTY *v31; // [rsp+C0h] [rbp+58h]
  unsigned int v32; // [rsp+C8h] [rbp+60h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v4 = a2;
  *(_DWORD *)ButtonCapsLength = 0;
  v6 = *((_QWORD *)a1 + 89);
  LOBYTE(a2) = 19;
  v7 = 0;
  v27 = 0;
  v8 = 0LL;
  ValueCapsLength = 0;
  v9 = 0;
  v26 = 0;
  v10 = 0;
  v11 = HMValidateHandleNoSecure(v6, a2);
  if ( v11 )
    PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(v11 + 456) + 16LL);
  else
    PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a1 + 188);
  if ( !PreparsedData )
    return 0LL;
  v13 = *((_DWORD *)a1 + 65);
  if ( (v13 & 8) != 0 )
  {
    v25 = *((_QWORD *)a1 + 86);
    v10 = *(_WORD *)(v25 + 10);
    v9 = *(_WORD *)(v25 + 4);
    v26 = v10;
  }
  if ( (v13 & 0x80u) != 0 )
    v9 = *((_WORD *)a1 + 354);
  if ( HidP_GetSpecificValueCaps(HidP_Input, 0, v9, 0, 0LL, &ValueCapsLength, PreparsedData) != -1072627705 )
    return 0LL;
  v14 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72 * (ValueCapsLength + (unsigned __int64)v10), 1668707157LL);
  if ( v14 )
  {
    if ( (unsigned int)_PopulatePropertyUsageValues(a1, &v27, v32, v9, ValueCapsLength, v14, v4, v31, PreparsedData) )
    {
      v15 = *((_QWORD *)a1 + 86);
      if ( !v15
        || (v16 = *(_WORD *)(v15 + 8)) == 0
        || (unsigned int)_PopulatePropertyUsageValues(a1, &v27, v32, v16, v26, &v14[v27], v4, v31, PreparsedData) )
      {
        v17 = v4 - v27;
        *(_DWORD *)ButtonCapsLength = v17;
        if ( v17 )
        {
          v8 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72LL * v17, 1668707157LL);
          if ( v8 )
          {
            v18 = 0;
            if ( *((_DWORD *)a1 + 6) != 7 )
              v18 = v9;
            if ( HidP_GetSpecificButtonCaps(HidP_Input, 0, v18, 0, v8, ButtonCapsLength, PreparsedData) >= 0
              && v17 == *(_DWORD *)ButtonCapsLength )
            {
              v19 = (USAGE *)((char *)v31 + 28 * v27);
              memset(v19, 0, 28LL * v17);
              v20 = 0;
              v7 = 1;
              if ( v27 < v30 )
              {
                v21 = v19 + 13;
                v22 = v17;
                do
                {
                  v23 = v20++;
                  *(v21 - 1) = v8[v23].UsagePage;
                  *v21 = v8[v23].Range.UsageMin;
                  *(_DWORD *)(v21 - 11) = 1;
                  v21 += 14;
                  --v22;
                }
                while ( v22 );
              }
            }
          }
        }
      }
    }
    Win32FreePool(v14);
  }
  if ( v8 )
    Win32FreePool(v8);
  return v7;
}
