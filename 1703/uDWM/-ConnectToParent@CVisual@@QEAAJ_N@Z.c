/*
 * XREFs of ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800236E0
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConnectToParent(CVisual *this, char a2)
{
  int v2; // ebx
  __int64 v5; // rax
  char v6; // r8
  bool v7; // zf
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax

  v2 = 0;
  if ( ((*((_BYTE *)this + 84) & 4) != 0) != a2 )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = (4 * a2) | *((_BYTE *)this + 84) & 0xFB;
    *((_BYTE *)this + 84) = v6;
    v7 = (v6 & 4) == 0;
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL);
    v9 = *(__int64 **)(v8 + 16);
    v10 = *(unsigned int *)(*((_QWORD *)this + 2) + 24LL);
    v11 = *(unsigned int *)(v8 + 24);
    v12 = *v9;
    if ( v7 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v12 + 424))(v9, v11, v10);
      v2 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1A4u);
      if ( v2 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x59Du);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v12 + 432))(v9, v11, v10, 0LL);
      v2 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x187u);
      if ( v2 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x599u);
    }
  }
  return (unsigned int)v2;
}
