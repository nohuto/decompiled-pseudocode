/*
 * XREFs of ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180010CFC
 * Callers:
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18001D8F4 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18001656C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 */

__int64 __fastcall CApplication::IsPlaying(CApplication *this)
{
  _QWORD *v2; // rbx
  unsigned int v3; // esi
  CProcess *v4; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  v3 = 0;
  while ( v2 )
  {
    v4 = (CProcess *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( !*((_DWORD *)v4 + 118)
      && (CProcess::GetActiveRenderStreamCount(v4, 2u)
       || CProcess::GetActiveRenderStreamCount(v4, 0xAu)
       || CProcess::GetActiveRenderStreamCount(v4, 1u)
       || CProcess::GetActiveRenderStreamCount(v4, 0xBu)) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
