/*
 * XREFs of ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x180111BE4
 * Callers:
 *     ?s_RunNested@ComTaskPool@Internal@Windows@@CA_NW4TaskApartment@23@W4TaskOptions@23@@Z @ 0x180111DEC (-s_RunNested@ComTaskPool@Internal@Windows@@CA_NW4TaskApartment@23@W4TaskOptions@23@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800835D8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot(unsigned int *a1)
{
  int Error; // ebx
  DWORD CurrentProcessId; // eax
  HANDLE v4; // rdi
  LONG v5; // eax
  DWORD v6; // edi
  HANDLE SemaphoreW; // rsi
  int PreviousCount[4]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-228h] BYREF

  Error = 0;
  if ( `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool == -1 )
  {
    CurrentProcessId = GetCurrentProcessId();
    Error = StringCchPrintfW(Name, 260LL, L"ComTaskPool:%d", CurrentProcessId);
    while ( Error >= 0 )
    {
      if ( `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool != -1 )
        break;
      v4 = OpenSemaphoreW(0x1F0003u, 0, Name);
      if ( v4 )
      {
        PreviousCount[0] = 0;
        while ( !ReleaseSemaphore(v4, 1, PreviousCount) )
        {
          if ( GetLastError() != 298 )
            goto LABEL_10;
        }
        WaitForSingleObject(v4, 0);
        `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool = PreviousCount[0];
LABEL_10:
        CloseHandle(v4);
        continue;
      }
      if ( GetLastError() == 2 && (v5 = TlsAlloc(), v6 = v5, v5 != -1) )
      {
        SemaphoreW = CreateSemaphoreW(0LL, v5, v5 + 1, Name);
        if ( !SemaphoreW )
        {
          Error = ResultFromKnownLastError();
          goto LABEL_19;
        }
        if ( GetLastError() == 183 )
        {
          CloseHandle(SemaphoreW);
LABEL_19:
          TlsFree(v6);
          continue;
        }
        `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool = v6;
      }
      else
      {
        Error = ResultFromKnownLastError();
      }
    }
  }
  *a1 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
  return (unsigned int)Error;
}
