/*
 * XREFs of ?HampSystemPopulateLegacyHangReportParameters@@YAJPEAX0W4_HAM_TERMINATE_REASON@@@Z @ 0x1800418D8
 * Callers:
 *     ?HampSystemGenerateLegacyHangReport@@YAJPEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041624 (-HampSystemGenerateLegacyHangReport@@YAJPEAKKW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18000846C (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032300 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CempHeapFree @ 0x180033D80 (CempHeapFree.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180069B40 (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

__int64 __fastcall HampSystemPopulateLegacyHangReportParameters(void *a1, void *a2, int a3)
{
  DWORD ProcessImageFileNameW; // eax
  WCHAR *i; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  signed int KeyFromProcess; // ebx
  LONG v11; // eax
  BYTE *Heap; // rax
  unsigned __int16 *v13; // r15
  LONG v14; // eax
  unsigned int v15; // esi
  bool v16; // zf
  const WCHAR *v17; // rsi
  const WCHAR *v18; // r12
  HRESULT v19; // ebx
  UINT32 bufferLength; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+54h] [rbp-ACh] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int16 *v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v26[232]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR v27[32]; // [rsp+240h] [rbp+140h] BYREF
  WCHAR packageFullName[128]; // [rsp+280h] [rbp+180h] BYREF
  WCHAR v29[136]; // [rsp+380h] [rbp+280h] BYREF
  WCHAR ImageFileName[264]; // [rsp+490h] [rbp+390h] BYREF

  ProcessImageFileNameW = K32GetProcessImageFileNameW(a2, ImageFileName, 0x104u);
  if ( ProcessImageFileNameW )
  {
    for ( i = &v29[ProcessImageFileNameW + 135]; i > ImageFileName; --i )
    {
      v8 = *i;
      LOWORD(v8) = v8 - 47;
      if ( (unsigned __int16)v8 <= 0x2Du )
      {
        v9 = 0x200000000801LL;
        if ( _bittest64(&v9, v8) )
        {
          ++i;
          break;
        }
      }
    }
  }
  else
  {
    memset_0(ImageFileName, 0, 0x208uLL);
    i = ImageFileName;
  }
  v22 = 464;
  KeyFromProcess = PsmGetKeyFromProcess(a2, v26, &v22, 0LL);
  if ( KeyFromProcess >= 0 )
  {
    memset_0(packageFullName, 0, sizeof(packageFullName));
    v23 = 256;
    PsmGetPackageFullNameFromKey(v26, packageFullName, &v23);
    bufferLength = 0;
    v11 = PackageIdFromFullName(packageFullName, 0, &bufferLength, 0LL);
    KeyFromProcess = v11;
    if ( v11 == 122 )
    {
      Heap = (BYTE *)HampAllocateHeap(bufferLength);
      v13 = (unsigned __int16 *)Heap;
      if ( Heap )
      {
        v14 = PackageIdFromFullName(packageFullName, 0, &bufferLength, Heap);
        KeyFromProcess = v14;
        if ( v14 )
        {
          if ( v14 > 0 )
            KeyFromProcess = (unsigned __int16)v14 | 0xC0070000;
        }
        else
        {
          RtlStringCchPrintfExW(v27, 0x1FuLL, &v25, 0LL, 0, L"99999, %u.%u.%u.%u", v13[7], v13[6], v13[5], v13[4]);
          memset_0(v29, 0, 0x104uLL);
          v24 = 130;
          HampUtilGetAumidFromPsmKey(v26, &v24, v29);
          v15 = a3 & 0xFFFFFF00;
          if ( v15 == 3584 )
          {
            v17 = L"EM_WATCHDOG_TIMEOUT";
            v18 = L"Quiesce Hang";
          }
          else
          {
            v16 = v15 == 5120;
            v17 = L"SICK_APPLICATION";
            if ( v16 )
              v18 = L"View Manager Abort";
            else
              v18 = L"Application Hang";
          }
          v19 = WerReportSetParameter(a1, 0, L"App", i);
          if ( v19 < 0
            || (v19 = WerReportSetParameter(a1, 1u, L"AppVer", v27), v19 < 0)
            || (v19 = WerReportSetParameter(a1, 2u, L"AppID", L"{00000000-0000-0000-0000-000000000000}"), v19 < 0)
            || (v19 = WerReportSetParameter(a1, 3u, L"AppName", v29), v19 < 0)
            || (v19 = WerReportSetParameter(a1, 4u, L"Reason", v17), v19 < 0)
            || (v19 = WerReportSetParameter(a1, 5u, L"Description", v18), v19 < 0) )
          {
            KeyFromProcess = v19 | 0xC0000000;
          }
          else
          {
            KeyFromProcess = 0;
          }
        }
        CempHeapFree(v13);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else if ( v11 > 0 )
    {
      return (unsigned __int16)v11 | 0xC0070000;
    }
  }
  return (unsigned int)KeyFromProcess;
}
