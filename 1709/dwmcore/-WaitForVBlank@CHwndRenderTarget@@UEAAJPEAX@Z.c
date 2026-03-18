/*
 * XREFs of ?WaitForVBlank@CHwndRenderTarget@@UEAAJPEAX@Z @ 0x180136AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::WaitForVBlank(CHwndRenderTarget *this, void *a2)
{
  char *v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  signed int v7; // eax

  v2 = (char *)this - 64;
  v5 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 200LL))((char *)this - 64) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v2 + 224LL))(v2) && (v6 = *((_QWORD *)this + 7)) != 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 296LL))(v6, a2);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180219958, 2u, v7, 0x64Du);
    }
    else
    {
      v5 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180219958, 2u, 0x80004001, 0x651u);
    }
  }
  return v5;
}
