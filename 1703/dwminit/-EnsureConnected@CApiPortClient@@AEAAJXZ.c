/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000491C
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004658 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004790 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800011D0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003D74 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180003EBC (--2@YAPEAX_K@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800045D0 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004610 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800048F4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x180004BB4 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x180004CF8 (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     __security_check_cookie @ 0x180006270 (__security_check_cookie.c)
 *     memset_0 @ 0x1800072D8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800072F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  int v2; // edi
  CPortClient *v3; // rax
  volatile signed __int32 *v4; // rbx
  int v5; // eax
  int v6; // eax
  const unsigned __int16 *v7; // r8
  unsigned int v8; // eax
  int v9; // eax
  wchar_t Buffer[48]; // [rsp+40h] [rbp-D8h] BYREF
  wchar_t v12[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( CApiPortClient::IsConnected(this) )
  {
    return 0;
  }
  else
  {
    CApiPortClient::Disconnect(v1);
    v3 = (CPortClient *)operator new(0x60uLL);
    v4 = (volatile signed __int32 *)v3;
    if ( v3 )
    {
      CPortClient::CPortClient(v3, g_PortClient, hObject);
      *((_DWORD *)v4 + 22) = 1;
      *(_QWORD *)v4 = &CPortClientRefCounted::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      memset_0(Buffer, 0, 0x52uLL);
      memset_0(v12, 0, 0x52uLL);
      LeaveCriticalSection(&CriticalSection);
      if ( NtCurrentPeb()->SessionId
        && (v5 = StringCchPrintfW(Buffer, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v2 = v5, v5 < 0) )
      {
        MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x10Fu);
      }
      else
      {
        v6 = StringCchPrintfW(v12, 41LL, L"%s\\Windows\\DwmApiPort", Buffer);
        v2 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x116u);
        }
        else
        {
          v8 = CPortClient::ConnectWithName((CPortClient *)v4, v12, v7);
          v9 = CApiPortClient::Translate(v8);
          v2 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0x119u);
        }
      }
      EnterCriticalSection(&CriticalSection);
      if ( v2 >= 0 && !*(&hObject + 1) )
      {
        *(&hObject + 1) = (HANDLE)v4;
        v4 = 0LL;
      }
      if ( v4 && _InterlockedExchangeAdd(v4 + 22, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v4)(v4, 1LL);
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, -2147024882, 0xFAu);
    }
  }
  return (unsigned int)v2;
}
