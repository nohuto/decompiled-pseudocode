/*
 * XREFs of ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x18007996C
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024F10 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicSlate::SetSize(CHolographicSlate *this, int a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v7; // eax
  int v8; // eax
  CDesktopManager *v9; // rax

  v3 = 0;
  if ( a2 != *((_DWORD *)this + 14) - *((_DWORD *)this + 12) || a3 != *((_DWORD *)this + 15) - *((_DWORD *)this + 13) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
    v3 = v7;
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3), a3);
      v3 = v8;
      if ( v8 >= 0 )
      {
        v9 = CDesktopManager::s_pDesktopManagerInstance;
        *((_DWORD *)this + 14) = a2 + *((_DWORD *)this + 12);
        *((_DWORD *)this + 15) = a3 + *((_DWORD *)this + 13);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 21) + 24LL))(*((_QWORD *)v9 + 21));
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x8Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x8Eu);
    }
  }
  return v3;
}
