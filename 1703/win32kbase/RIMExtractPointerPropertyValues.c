/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x1C0105F90
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0121B00 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C000848C (rimHidP_GetUsageValue.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C000B1BC (rimHidP_GetSpecificValueCaps.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     GetPreparsedData @ 0x1C0105840 (GetPreparsedData.c)
 *     SignExtendLong @ 0x1C01067CC (SignExtendLong.c)
 */

__int64 __fastcall RIMExtractPointerPropertyValues(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // r12
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  int v11; // edi
  struct _USAGE_AND_PAGE *v12; // rsi
  unsigned int v14; // r13d
  int SpecificValueCaps; // ecx
  __int64 v16; // r10
  __int64 v17; // r11
  int v18; // eax
  __int64 v19; // rdx
  unsigned int *v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  int Usages; // eax
  unsigned int v24; // ecx
  unsigned __int16 v26; // [rsp+44h] [rbp-124h] BYREF
  unsigned __int16 v27; // [rsp+48h] [rbp-120h]
  int UsageValue; // [rsp+4Ch] [rbp-11Ch]
  int v29; // [rsp+50h] [rbp-118h]
  int v30; // [rsp+54h] [rbp-114h]
  unsigned int v31; // [rsp+58h] [rbp-110h]
  int v32; // [rsp+5Ch] [rbp-10Ch]
  unsigned int v33; // [rsp+60h] [rbp-108h] BYREF
  struct _HIDP_PREPARSED_DATA *v34; // [rsp+68h] [rbp-100h] BYREF
  unsigned int v35; // [rsp+70h] [rbp-F8h]
  int v36; // [rsp+74h] [rbp-F4h]
  unsigned int v37; // [rsp+80h] [rbp-E8h]
  char *v38; // [rsp+88h] [rbp-E0h]
  __int64 v39; // [rsp+90h] [rbp-D8h]
  __int64 v40; // [rsp+98h] [rbp-D0h]
  __int64 v41; // [rsp+A0h] [rbp-C8h]
  struct _USAGE_AND_PAGE *v42; // [rsp+B0h] [rbp-B8h]
  __int64 v43; // [rsp+B8h] [rbp-B0h]
  __int64 v44; // [rsp+C0h] [rbp-A8h]
  struct _HIDP_VALUE_CAPS v45; // [rsp+D0h] [rbp-98h] BYREF

  v38 = a4;
  v31 = a3;
  v7 = a2;
  v9 = a5;
  v37 = a5;
  v39 = a6;
  v40 = a7;
  v10 = 0;
  v34 = 0LL;
  v11 = 0;
  v29 = 0;
  v30 = 1;
  v32 = 0;
  memset(&v45, 0, sizeof(v45));
  v26 = 1;
  if ( a1 )
  {
    if ( a5 <= *(_DWORD *)(a1 + 312) )
    {
      v12 = (struct _USAGE_AND_PAGE *)Win32AllocPoolZInit(4LL * *(unsigned int *)(a1 + 1608), 2020635477LL);
      v42 = v12;
      if ( v12 )
      {
        if ( !(unsigned int)GetPreparsedData(a1, &v34) )
        {
          Win32FreePool((__int64)v12);
          return 0LL;
        }
        v33 = *(_DWORD *)(a1 + 1608);
        v43 = a1 + 328;
        v14 = 0;
        v36 = 0;
        while ( v14 < v9 )
        {
          v27 = v7;
          if ( *(_DWORD *)(a1 + 332) == (unsigned __int8)*v38 )
          {
            v26 = 1;
            v41 = 28LL * v14;
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                                  HidP_Input,
                                  *(_WORD *)(v41 + v39 + 24),
                                  a2,
                                  *(_WORD *)(v41 + v39 + 26),
                                  &v45,
                                  &v26,
                                  v34);
            v16 = v41;
            v17 = v39;
            if ( *(int *)(v41 + v39 + 4) > 1
              || (int)(SpecificValueCaps + 0x80000000) < 0
              || SpecificValueCaps == -1072627705 )
            {
              v18 = 1;
              v30 = 1;
            }
            else
            {
              v18 = 0;
              v30 = 0;
            }
            if ( v18 )
            {
              v19 = *(_QWORD *)(a1 + 688);
              v44 = v19;
              if ( v19 && *(_WORD *)(v19 + 8) && (unsigned __int16)(*(_WORD *)(v41 + v39 + 26) - 48) <= 1u )
              {
                v7 = *(_WORD *)(*(_QWORD *)(v19 + 24) + 8LL * a2 + 2);
                v27 = v7;
              }
              v20 = (unsigned int *)(v40 + 4LL * v14);
              UsageValue = rimHidP_GetUsageValue(
                             HidP_Input,
                             *(_WORD *)(v41 + v39 + 24),
                             v7,
                             *(_WORD *)(v41 + v39 + 26),
                             v20,
                             v34,
                             v38,
                             v31);
              if ( UsageValue < 0 )
              {
                v9 = a5;
                break;
              }
              if ( v45.LogicalMin < 0 )
                *v20 = SignExtendLong(*v20, v45.BitSize);
              v9 = a5;
            }
            else
            {
              v21 = v14;
              v22 = v40;
              *(_DWORD *)(v40 + 4LL * v14) = 0;
              if ( v32 )
              {
                UsageValue = 0;
              }
              else
              {
                if ( gpfnHidP_GetUsagesEx )
                {
                  Usages = gpfnHidP_GetUsagesEx(HidP_Input, a2, v12, &v33, v34, v38, v31);
                  v16 = v41;
                  v17 = v39;
                  v21 = v14;
                  v22 = v40;
                }
                else
                {
                  Usages = -1073741637;
                }
                UsageValue = Usages;
                v32 = 1;
                if ( Usages < 0 )
                  break;
              }
              v24 = 0;
              v35 = 0;
              while ( v24 < v33 )
              {
                if ( v12[v24].UsagePage == *(_WORD *)(v16 + v17 + 24) && v12[v24].Usage == *(_WORD *)(v16 + v17 + 26) )
                  *(_DWORD *)(v22 + 4 * v21) = 1;
                v35 = ++v24;
              }
            }
            v29 = ++v11;
          }
          v36 = ++v14;
          v7 = a2;
        }
        Win32FreePool((__int64)v12);
      }
    }
  }
  LOBYTE(v10) = v11 == v9;
  return v10;
}
